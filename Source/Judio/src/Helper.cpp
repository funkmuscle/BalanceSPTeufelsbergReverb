//--------//--------//--------//--------//--------//--------//--------//--------
/*
  ==============================================================================

   This file follows the same open source licensing as the JUCE library.
   Copyright (c) 2016 John Flynn

   Permission is granted to use this software under the terms of either:
   a) the GPL v2 (or any later version)
   b) the Affero GPL v3

   Details of these licenses can be found at: www.gnu.org/licenses

   Judio is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  ==============================================================================
*/
//--------//--------//--------//--------//--------//--------//--------//--------

#include "Judio/Helper.h"
#include "Aidio/Utility.h"

namespace jdo
{

//--------//--------//--------//--------//--------//--------//--------//--------

void bufferFillAllOnes (AudioBuffer<float>& b)
{
    for (int chan = 0; chan < b.getNumChannels(); ++chan)
        for (int samp = 0; samp < b.getNumSamples(); ++samp)
            b.setSample(chan, samp, 1.0f);
}

//--------//--------//--------//--------//--------//--------//--------//--------

float bufferSumElements (const AudioBuffer<float>& b)
{
    float sum {0};

    for (int chan = 0; chan < b.getNumChannels(); ++chan)
        for (int samp = 0; samp < b.getNumSamples(); ++samp)
            sum += b.getSample(chan, samp);

    return sum;
}

//--------//--------//--------//--------//--------//--------//--------//--------

int nextPowerOf2 (int x)
{
    int nextPO2 {1};
    while (nextPO2 < x)
        nextPO2 *= 2;

    return nextPO2;
}

} // namespace
