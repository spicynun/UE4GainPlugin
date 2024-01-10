#pragma once

namespace NickTsakirAudioLibrary
{
	class VolumeScale
	{
	public:
		VolumeScale() {}
		VolumeScale(float InputVolume) : Volume(InputVolume) {}

		virtual ~VolumeScale() {}

		//Sets the volume scale value
		void SetVolume(float InputVolume);

		//Processes the input audio buffer and writes to the output buffer
		void ProcessAudio(const float* InputBuffer, float* OutputBuffer, int NumSamples);

		//Processes the input buffer
		void ProcessAudio(float* InOutBuffer, int NumSamples);

	protected:
		float Volume = 1.0f;
		float smoothedGain = 0;


	};

}
