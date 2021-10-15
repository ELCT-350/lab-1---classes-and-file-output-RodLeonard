#include "Blocks/RCseries.h"
#include <iostream>
#include <fstream>

using namespace ELCT350::Signal;
using namespace ELCT350::Signal::Blocks;
using namespace std;

enum ErrorCodes
{
  Ok = 0
};

int main(int argc, char *argv[])
{
  RCseries rcBlock;

  //rcBlock.setParameterValue(RCseries::Resistance, 1000);
  //rcBlock.setParameterValue(RCseries::Capacitance, 0.005);

  ////for ()
  //{
  //  rcBlock.setInputPortValue(RCseries::VoltageSource, 10.0);
  //  rcBlock.signalStep(0.001, time);
  //  rcBlock.getOutputPortValue(RCseries::CapacitorVoltage);
  //}
  return Ok;
}