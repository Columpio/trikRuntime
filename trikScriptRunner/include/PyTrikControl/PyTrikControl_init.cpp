#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "PyTrikControl0.h"



void PythonQt_init_PyTrikControl(PyObject* module) {
PythonQt::priv()->registerCPPClass("trikControl", "", "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::Battery::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__Battery>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::Battery", "trikControl::BatteryInterface",PythonQtUpcastingOffset<trikControl::Battery,trikControl::BatteryInterface>());
PythonQt::self()->addParentClass("trikControl::Battery", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::Battery,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::BatteryInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__BatteryInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::BatteryInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::BatteryInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::Brick::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__Brick>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_trikControl__Brick>, module, 0);
PythonQt::self()->addParentClass("trikControl::Brick", "trikControl::BrickInterface",PythonQtUpcastingOffset<trikControl::Brick,trikControl::BrickInterface>());
PythonQt::priv()->registerCPPClass("trikControl::BrickFactory", "", "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__BrickFactory>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::BrickInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__BrickInterface>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::ColorSensorInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__ColorSensorInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::ColorSensorInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::ColorSensorInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerCPPClass("trikControl::DeviceInterface", "", "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__DeviceInterface>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::Display::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__Display>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::Display", "trikControl::DisplayInterface",PythonQtUpcastingOffset<trikControl::Display,trikControl::DisplayInterface>());
PythonQt::priv()->registerClass(&trikControl::DisplayInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__DisplayInterface>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::DisplayWidgetInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__DisplayWidgetInterface>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::EncoderInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__EncoderInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::EncoderInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::EncoderInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::EventCodeInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__EventCodeInterface>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::EventDeviceInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__EventDeviceInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::EventDeviceInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::EventDeviceInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::EventInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__EventInterface>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::FifoInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__FifoInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::FifoInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::FifoInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::GamepadInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__GamepadInterface>, NULL, module, 0);
PythonQt::priv()->registerClass(&trikControl::KeysInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__KeysInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::KeysInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::KeysInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::LedInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__LedInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::LedInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::LedInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::LineSensorInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__LineSensorInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::LineSensorInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::LineSensorInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::MotorInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__MotorInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::MotorInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::MotorInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::ObjectSensorInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__ObjectSensorInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::ObjectSensorInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::ObjectSensorInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::PwmCaptureInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__PwmCaptureInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::PwmCaptureInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::PwmCaptureInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::SensorInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__SensorInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::SensorInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::SensorInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::SoundSensorInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__SoundSensorInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::SoundSensorInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::SoundSensorInterface,trikControl::DeviceInterface>());
PythonQt::priv()->registerClass(&trikControl::VectorSensorInterface::staticMetaObject, "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__VectorSensorInterface>, NULL, module, 0);
PythonQt::self()->addParentClass("trikControl::VectorSensorInterface", "trikControl::DeviceInterface",PythonQtUpcastingOffset<trikControl::VectorSensorInterface,trikControl::DeviceInterface>());


}
