include std.sci
include player_base.sci

// CONSTANTS
const float c_fSleepToTirednessSpeed = 1.0 / 8;
const float c_fTirednessSpeed = 1.0 / 16;
const float c_fHungerSpeed = 1.0 / 24;
const float c_fImmunityZeroLevel = 0.5;
const float c_fImmunityIncrSpeed = 1.0 / 8;
const float c_fImmunityDecrSpeed = 1.0 / 16;

const float c_fDiseaseStage1 = 1.0 / 3;
const float c_fDiseaseSpeedSmall = 1.0 / (6 * 24);
const float c_fDiseaseSpeed = 1.0 / 24;

const float c_fDiseaseToHealthFactor = 1.0 / 6;
const float c_fTirednessToHealthFactor = 1.0 / 6;
const float c_fHungerToHealthFactor = 1.0 / 3;
// CONSTANTS

maintask TEffect
{
	void init(void) {
		for (;;) {
			const float c_fDelay = 1;

			@Sleep(c_fDelay);
			
			bool bSleeping = IsSleeping();
			
			float fDeltaTime;
			if (bSleeping) {
				fDeltaTime = c_fDelay * c_fSleepTimeScale;
			}
			else {
				fDeltaTime = c_fDelay;
			}
			float fGameSpeed;
			@GetGameTimeScale(fGameSpeed);
			fDeltaTime *= fGameSpeed;

			int iDiseaseSpeed;
			@GetProperty("DiseaseSpeed", iDiseaseSpeed);
			
			ModPropertyF("hunger", fDeltaTime * c_fHungerSpeed, 0, 1);
			float fHunger;
			@GetProperty("hunger", fHunger);
			
			float fImmunity;
			@GetProperty("immunity", fImmunity);
			if (fImmunity < c_fImmunityZeroLevel) {
				fImmunity += c_fImmunityIncrSpeed * fDeltaTime;
				if (fImmunity > c_fImmunityZeroLevel)
					fImmunity = c_fImmunityZeroLevel;
				@SetProperty("immunity", fImmunity);
			}
			else if (fImmunity > c_fImmunityZeroLevel) {
				fImmunity -= c_fImmunityDecrSpeed * fDeltaTime;
				if (fImmunity < 0)
					fImmunity = 0;
				@SetProperty("immunity", fImmunity);
			}
			
			float fDisease;
			@GetProperty("disease", fDisease);
			if (fDisease < c_fDiseaseThreshold) {
				fDisease = 0;
			}
			else {
				if (fDisease < c_fDiseaseStage1)
					fDisease += c_fDiseaseSpeedSmall * fDeltaTime / iDiseaseSpeed;
				else
					fDisease += c_fDiseaseSpeed * fDeltaTime / iDiseaseSpeed;
				if (fDisease > 1)
					fDisease = 1;
			}
			@SetProperty("disease", fDisease);
			
			ModPropertyF("tiredness", fDeltaTime * ((bSleeping)? -c_fSleepToTirednessSpeed : c_fTirednessSpeed), 0, 1);
			float fTiredness;
			@GetProperty("tiredness", fTiredness);
			
			// at last...
			float fHealthMod = 0;
			if (fDisease >= c_fDiseaseThreshold) {
				fHealthMod += fDisease * c_fDiseaseToHealthFactor;
			}
			if (fHunger == 1) {
				fHealthMod += c_fHungerToHealthFactor;
			}
			if (fTiredness == 1) {
				fHealthMod += c_fTirednessToHealthFactor;
			}
			ModPropertyF("health", -fDeltaTime * fHealthMod, 0, 1);
		}
	}
}
