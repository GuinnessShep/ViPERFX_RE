#pragma once

#include <cstdint>
#include "../utils/MinPhaseIIRCoeffs.h"

class IIRFilter {
public:
    IIRFilter(uint32_t bands);

    void Process(float *samples, uint32_t size);
    void Reset();
    void SetBandLevel(uint32_t band, float level);
    void SetEnable(bool enable);
    void SetSamplingRate(uint32_t samplingRate);

private:
    uint32_t bands;
    uint32_t samplingRate;
    bool enable;
    MinPhaseIIRCoeffs minPhaseIirCoeffs;
    float buf[496];
    uint32_t unknown2;
    uint32_t unknown3;
    uint32_t unknown4;
    float bandLevelsWithQ[31];
};


