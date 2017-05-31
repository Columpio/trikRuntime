# Copyright 2013-2015 Yurii Litvinov, CyberTech Labs Ltd.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

TEMPLATE = subdirs

SUBDIRS = \
	qslog \
	PythonQt \
	trikKernel \
	trikWiFi \
	trikNetwork \
	trikHal \
	trikControl \
	trikTelemetry \
	trikCommunicator \
	trikScriptRunner \
	trikGui \
	trikRun \
	trikServer \
	translations \
#	trikPythonRunner \

qslog.file = qslog/QsLogSharedLibrary.pro
PythonQt.file = PythonQt/PythonQt.pro

trikCommunicator.depends = trikScriptRunner trikNetwork qslog PythonQt
trikControl.depends = trikKernel trikHal qslog
trikGui.depends = trikCommunicator trikScriptRunner trikWiFi trikKernel trikTelemetry qslog PythonQt
trikKernel.depends = qslog
trikNetwork.depends = trikKernel qslog
trikRun.depends = trikScriptRunner trikKernel qslog PythonQt
trikScriptRunner.depends = trikControl trikKernel trikNetwork qslog PythonQt
trikServer.depends = trikCommunicator qslog
trikTelemetry.depends = trikControl trikNetwork trikKernel qslog
trikWiFi.depends = qslog trikKernel
trikHal.depends = qslog trikKernel
#trikPythonRunner.depends = trikKernel trikControl

OTHER_FILES += \
	$$PWD/changelog.txt \
	$$PWD/asan.supp \
	$$PWD/.travis.yml \
	$$PWD/docker/Dockerfile \

include($$PWD/global.pri)

copyToDestdir($$PWD/changelog.txt, now)
copyToDestdir($$PWD/asan.supp, now)
