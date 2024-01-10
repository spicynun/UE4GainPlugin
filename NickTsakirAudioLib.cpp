#include "NickTsakirAudioLib.h"


namespace NickTsakirAudioLibrary
{
	void VolumeScale::SetVolume(float InputVolume)
	{
		Volume = InputVolume;
	}

	void VolumeScale::ProcessAudio(const float* InputBuffer, float* OutputBuffer, int NumSamples)
	{
		for (int SampleIndex = 0; SampleIndex < NumSamples; ++SampleIndex)
		{
			//Smoothing formula to prevent clicks
			//smoothedGain = smoothedGain - 0.005f * (smoothedGain - Volume);
			OutputBuffer[SampleIndex] = Volume * InputBuffer[SampleIndex];
		}
	}

	void VolumeScale::ProcessAudio(float* InOutBuffer, int NumSamples)
	{
		for (int SampleIndex = 0; SampleIndex < NumSamples; ++SampleIndex)
		{
			//Smoothing formula to prevent clicks
			//smoothedGain = smoothedGain - 0.005f * (smoothedGain - Volume);

			InOutBuffer[SampleIndex] *= Volume;
		}
	}




}