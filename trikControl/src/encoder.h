/* Copyright 2013 - 2015 Matvey Bryksin, Yurii Litvinov
 * and CyberTech Labs Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. */

#pragma once

#include "encoderInterface.h"

namespace trikControl {

class I2cCommunicator;

/// Implementation of encoder for real robot.
class Encoder : public EncoderInterface
{
	Q_OBJECT

public:
	/// Constructor.
	/// @param communicator - I2C communicator.
	/// @param i2cCommandNumber - number of I2C command to query this encoder.
	/// @param rawToDegrees - coefficient for converting raw encoder readings to degrees.
	Encoder(I2cCommunicator &communicator, int i2cCommandNumber, double rawToDegrees);

public slots:
	int read() override;

	int readRawData() override;

	void reset() override;

private:
	I2cCommunicator &mCommunicator;
	int mI2cCommandNumber;
	double mRawToDegrees;
};

}