include std.sci
include player_base.sci

const int c_iDiseaseEffect = 0;
const int c_iNoEffect = 1;
const int c_iHealEffect = 2;

bool IsCured(void) {
	float fDisease;
	@GetProperty("disease", fDisease);
	return fDisease <= c_fDiseaseThreshold;
}

maintask TDisease
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnPropertyChange(object actor, string strProp) {
		if (strProp == "disease") {
			if (!IsCured()) {
				TEffect{};
			}
		}
	}

}

task TEffect
{
	void init(void) {
		if (IsSleeping())
			return;

		@Trace("Disease effect started");

		float fDisease;
		@GetProperty("disease", fDisease);
		fDisease = clampf(fDisease * 2, 0, 1);
		
		if (PlayDiseaseEffect(fDisease)) {
			while (!IsCured()) {
				@GetProperty("disease", fDisease);
				fDisease = clampf(fDisease, 0, 1);
				
				float fRand;
				@rand(fRand, 600 - fDisease * 500, 1200 - fDisease * 1000);
				int iRet = TDelay{fRand};

				@GetProperty("disease", fDisease);
				fDisease = clampf(fDisease, 0, 1);

				if (c_iNoEffect == iRet) {
					PlayHealEffect(0.1);
					break;
				}
				else
				if (c_iHealEffect == iRet) {
					if (!PlayHealEffect(fDisease))
						break;
				}
				else {
					if (!PlayDiseaseEffect(fDisease))
						break;
				}
			}
		}
		
		@Trace("Disease effect stopped");
	}
	
	bool PlayHealEffect(float fDisease) {
		if (IsSleeping())
			return false;

		@PlaySound("sick");
	
		bool bCameraRoll;
		@LockCameraRoll(bCameraRoll);
		bool bCameraFOV;
		@LockCameraFOV(bCameraFOV);
		
		float fRollAngle;
		@irand(fRollAngle, 2);
		fRollAngle = PI / 5 * (fRollAngle - 0.5);

		float fInitFOV;
		@GetCameraCurrentFOV(fInitFOV);

		float fDarkenSpeed = 0.5 + 0.5 * fDisease;
		float fDarkenStop = 0.25 + 0.75 * fDisease;
		float fAmount = 0;
		do {
			float fDeltaTime;
			@sync(fDeltaTime);
			fAmount += fDeltaTime * fDarkenSpeed;
			if (bCameraRoll) SetCameraRoll(fAmount, fRollAngle);
			if (bCameraFOV) SetCameraFOV(fAmount, fInitFOV);
		} while(fAmount < fDarkenStop);
		fAmount = fDarkenStop;
		do {
			float fDeltaTime;
			@sync(fDeltaTime);
			fAmount -= fDeltaTime * fDarkenSpeed / 5;
			if (bCameraRoll) SetCameraRoll(fAmount, fRollAngle);
			if (bCameraFOV) SetCameraFOV(fAmount, fInitFOV);
		} while(fAmount > 0);
		
		@UnlockCameraFOV(bCameraFOV);
		@UnlockCameraRoll(bCameraRoll);
		return true;
	}	
	
	bool PlayDiseaseEffect(float fDisease) {
		if (IsSleeping())
			return false;

		@PlaySound("sick");
	
		bool bCameraRoll;
		@LockCameraRoll(bCameraRoll);
		bool bCameraFOV;
		@LockCameraFOV(bCameraFOV);
		
		float fRollAngle;
		@irand(fRollAngle, 2);
		fRollAngle = PI / 5 * (fRollAngle - 0.5);
		fRollAngle *= (fDisease < 0.25)? 0.25 : fDisease;

		float fInitFOV;
		@GetCameraCurrentFOV(fInitFOV);

		float fDarkenSpeed = 0.5 + 0.5 * fDisease;
		float fDarkenStop = 0.25 + 0.75 * fDisease;
		float fAmount = 0;
		do {
			float fDeltaTime;
			@sync(fDeltaTime);
			fAmount += fDeltaTime * fDarkenSpeed;
			if (bCameraRoll) SetCameraRoll(fAmount, fRollAngle);
			if (bCameraFOV) SetCameraFOV(fAmount, fInitFOV);
			@ModDarkenLevel(fAmount);
		} while(fAmount < fDarkenStop);
		fAmount = fDarkenStop;
		do {
			float fDeltaTime;
			@sync(fDeltaTime);
			fAmount -= fDeltaTime * fDarkenSpeed / 5;
			if (bCameraRoll) SetCameraRoll(fAmount, fRollAngle);
			if (bCameraFOV) SetCameraFOV(fAmount, fInitFOV);
			@ModDarkenLevel(fAmount);
		} while(fAmount > 0);
		
		@UnlockCameraFOV(bCameraFOV);
		@UnlockCameraRoll(bCameraRoll);

		@ModBlurLevel(fDisease / 2);
		@Sleep(10);
		@ModBlurLevel(0);
		
		return true;
	}
	
	void SetCameraRoll(float fDarkenAmount, float fRollAngle) {
		float fAngle = fDarkenAmount * fRollAngle;
		@SetCameraRoll(fAngle);
		Vector vForce;
		@GetForce(vForce);
		Vector vDir;
		@GetDirection(vDir);
		vForce += Normalize(vDir ^ [0, 1, 0]) * fAngle * 1500;
		@SetForce(vForce);
	}
	
	void SetCameraFOV(float fDarkenAmount, float fInitFOV) {
		@SetCameraFOV(fInitFOV * (1 - fDarkenAmount * 0.75));
	}
	
}

task TDelay
{
	var float fDisease;
	var int iRet;
	int init(float fTime) {
		iRet = c_iDiseaseEffect;
		@GetProperty("disease", fDisease);
		fDisease = clampf(fDisease, 0, 1);
		bool bSuccess;
		@Sleep(fTime, bSuccess);
		return iRet;
	}

	void OnPropertyChange(object actor, string strProp) {
		if (strProp == "disease") {
			if (IsCured()) { 
				iRet = c_iNoEffect;
				@StopGroup0();
			}
			
			float fDiseaseNew;
			@GetProperty("disease", fDiseaseNew);
			fDiseaseNew = clampf(fDiseaseNew, 0, 1);
			if (fDiseaseNew > fDisease + c_fDiseaseThreshold) {
				@StopGroup0();
			}
			else
			if (fDiseaseNew + c_fDiseaseThreshold < fDisease) {
				iRet = c_iHealEffect;
				@StopGroup0();
			}
			else
				fDisease = fDiseaseNew;
		}
	}
}
