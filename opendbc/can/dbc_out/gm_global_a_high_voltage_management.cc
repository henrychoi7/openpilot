#include "common_dbc.h"

namespace {

const Signal sigs_512[] = {
    {
      .name = "Voltage_1_0_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_1_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_2_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_3_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_4_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_5_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_6_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_7_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_0_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_1_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_2_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_3_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_4_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_5_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_6_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_7_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_0_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_1_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_2_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_3_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_4_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_5_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_6_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_1_7_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Cell_Bank_Number_1",
      .b1 = 48,
      .b2 = 3,
      .bo = 13,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_514[] = {
    {
      .name = "Voltage_2_0_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_1_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_2_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_3_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_4_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_5_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_6_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_7_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_0_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_1_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_2_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_3_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_4_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_5_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_6_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_7_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_0_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_1_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_2_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_3_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_4_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_5_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_6_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_2_7_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Cell_Bank_Number_2",
      .b1 = 48,
      .b2 = 3,
      .bo = 13,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_516[] = {
    {
      .name = "Voltage_3_0_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_1_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_2_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_3_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_4_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_5_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_6_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_7_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_0_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_1_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_2_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_3_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_4_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_5_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_6_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_7_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_0_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_1_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_2_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_3_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_4_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_5_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_6_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_3_7_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Cell_Bank_Number_3",
      .b1 = 48,
      .b2 = 3,
      .bo = 13,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_518[] = {
    {
      .name = "Voltage_4_0_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_1_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_2_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_3_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_4_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_5_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_6_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_7_A",
      .b1 = 3,
      .b2 = 12,
      .bo = 49,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_0_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_1_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_2_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_3_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_4_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_5_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_6_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_7_B",
      .b1 = 19,
      .b2 = 12,
      .bo = 33,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_0_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_1_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_2_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_3_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_4_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_5_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_6_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage_4_7_C",
      .b1 = 32,
      .b2 = 12,
      .bo = 20,
      .is_signed = false,
      .factor = 0.00125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Cell_Bank_Number_4",
      .b1 = 48,
      .b2 = 3,
      .bo = 13,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_528[] = {
    {
      .name = "Pack_Voltage",
      .b1 = 0,
      .b2 = 12,
      .bo = 52,
      .is_signed = false,
      .factor = 0.125,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Pack_Current",
      .b1 = 16,
      .b2 = 8,
      .bo = 40,
      .is_signed = true,
      .factor = 0.15,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_530[] = {
    {
      .name = "Charger_HV_Current",
      .b1 = 0,
      .b2 = 10,
      .bo = 54,
      .is_signed = false,
      .factor = 0.05,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "HV_Voltage",
      .b1 = 10,
      .b2 = 10,
      .bo = 44,
      .is_signed = false,
      .factor = 0.5,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LV_Current",
      .b1 = 23,
      .b2 = 8,
      .bo = 33,
      .is_signed = false,
      .factor = 0.2,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LV_Voltage",
      .b1 = 31,
      .b2 = 10,
      .bo = 23,
      .is_signed = false,
      .factor = 0.025,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_770[] = {
    {
      .name = "Switch",
      .b1 = 2,
      .b2 = 1,
      .bo = 61,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_A",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_G",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_B",
      .b1 = 16,
      .b2 = 8,
      .bo = 40,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_H",
      .b1 = 16,
      .b2 = 8,
      .bo = 40,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_C",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_I",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_D",
      .b1 = 32,
      .b2 = 8,
      .bo = 24,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_E",
      .b1 = 40,
      .b2 = 8,
      .bo = 16,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Temp_F",
      .b1 = 48,
      .b2 = 8,
      .bo = 8,
      .is_signed = false,
      .factor = 0.5,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_772[] = {
    {
      .name = "Unknown",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Current",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 0.05,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Voltage",
      .b1 = 16,
      .b2 = 16,
      .bo = 32,
      .is_signed = false,
      .factor = 0.5,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_776[] = {
    {
      .name = "Bit_20",
      .b1 = 20,
      .b2 = 1,
      .bo = 43,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Bit_21",
      .b1 = 21,
      .b2 = 1,
      .bo = 42,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Bit_22",
      .b1 = 22,
      .b2 = 1,
      .bo = 41,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_778[] = {
    {
      .name = "Mains_Voltage",
      .b1 = 0,
      .b2 = 12,
      .bo = 52,
      .is_signed = false,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Total_Charge",
      .b1 = 20,
      .b2 = 8,
      .bo = 36,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_782[] = {
    {
      .name = "Command",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1120[] = {
    {
      .name = "Coolant_Temp",
      .b1 = 0,
      .b2 = 16,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "Battery_Module_1",
    .address = 0x200,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_512),
    .sigs = sigs_512,
  },
  {
    .name = "Battery_Module_2",
    .address = 0x202,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_514),
    .sigs = sigs_514,
  },
  {
    .name = "Battery_Module_3",
    .address = 0x204,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_516),
    .sigs = sigs_516,
  },
  {
    .name = "Battery_Module_4",
    .address = 0x206,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_518),
    .sigs = sigs_518,
  },
  {
    .name = "Pack_Stats",
    .address = 0x210,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_528),
    .sigs = sigs_528,
  },
  {
    .name = "Charger_stats",
    .address = 0x212,
    .size = 6,
    .num_sigs = ARRAYSIZE(sigs_530),
    .sigs = sigs_530,
  },
  {
    .name = "Battery_temp",
    .address = 0x302,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_770),
    .sigs = sigs_770,
  },
  {
    .name = "Charger_parameters",
    .address = 0x304,
    .size = 4,
    .num_sigs = ARRAYSIZE(sigs_772),
    .sigs = sigs_772,
  },
  {
    .name = "Charger_unknown",
    .address = 0x308,
    .size = 5,
    .num_sigs = ARRAYSIZE(sigs_776),
    .sigs = sigs_776,
  },
  {
    .name = "AC_Stats",
    .address = 0x30A,
    .size = 7,
    .num_sigs = ARRAYSIZE(sigs_778),
    .sigs = sigs_778,
  },
  {
    .name = "Charger_Command",
    .address = 0x30E,
    .size = 1,
    .num_sigs = ARRAYSIZE(sigs_782),
    .sigs = sigs_782,
  },
  {
    .name = "Coolant_Temp",
    .address = 0x460,
    .size = 4,
    .num_sigs = ARRAYSIZE(sigs_1120),
    .sigs = sigs_1120,
  },
};

const Val vals[] = {
    {
      .name = "Command",
      .address = 0x30E,
      .def_val = "1 12V_ONLY 2 HV_ONLY 3 12V_AND_HV",
      .sigs = sigs_782,
    },
};

}

const DBC gm_global_a_high_voltage_management = {
  .name = "gm_global_a_high_voltage_management",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(gm_global_a_high_voltage_management)