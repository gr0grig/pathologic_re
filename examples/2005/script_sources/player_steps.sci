include std.sci

const int c_iStepsTimer = 10;
const int c_iAStepsTimer = 11;
const int c_iSneakStepsTimer = 12;
const float c_fStepFreq = 0.35;
const float c_fSneakStepFreq = 0.6;
const float c_fAStepFreq = 0.15;
const int c_iWalkNoise = 2;
const int c_iSneakNoise = 1;
const int c_iAStepNoise = 3;

var string g_strLastPlayedStepSound;

bool HandleStepsTimer(int id)
{
	if (id == c_iStepsTimer) {
		HandleStepsTimer();
		return true;
	}
	else if (id == c_iAStepsTimer) {
		HandleAStepsTimer();
		return true;
	}
	else if (id == c_iSneakStepsTimer) {
		HandleSneakStepsTimer();
		return true;
	}
	return false;
}

void PlayStepSound(void)
{
	bool bGround;
	int iMaterialID;
	@GetGroundMaterial(bGround, iMaterialID);
	if (!bGround)
		iMaterialID = -1;
	string strMaterialName = GetMaterialName(iMaterialID);

	int iSoundCount;
	for (iSoundCount = 0; ; ++iSoundCount) {
		bool bExist;
		@IsExistingSound(bExist, "step_" + strMaterialName + (iSoundCount + 1));
		if (!bExist)
			break;
	}
	if (!iSoundCount) {
		g_strLastPlayedStepSound = "";
		return;
	}
	int iSound;
	if (iSoundCount == 1) {
		iSound = 0;
	}
	else {
		for (;;) {
			@irand(iSound, iSoundCount);
			string strSoundName = "step_" + strMaterialName + (iSound + 1);
			if (strSoundName != g_strLastPlayedStepSound)
				break;
		}
	}
	string strSoundName = "step_" + strMaterialName + (iSound + 1);
	@PlaySound(strSoundName);
		
	g_strLastPlayedStepSound = strSoundName;
}

void HandleDeath(void)
{
	object scene;
	@GetMainOutdoorScene(scene);
	object actor;
	@AddBlankActor(actor, scene, "player_death", "play_death_" + c_strPlayerName + ".bin");

	@SetDeathState();
}

void DisableATimer(void)
{
	bool bKilled;
	@KillTimer(c_iAStepsTimer, bKilled);
	if (bKilled) {
		@ModNoise(-c_iAStepNoise);
	}
}

void EnableATimer(void)
{
	DisableATimer();
	@SetTimer(c_iAStepsTimer, c_fAStepFreq);
	@ModNoise(c_iAStepNoise);
}

void DisableStepsTimer(void)
{
	bool bKilled;
	@KillTimer(c_iStepsTimer, bKilled);
	if (bKilled) {
		@ModNoise(-c_iWalkNoise);
	}
}

void DisableSneakStepsTimer(void)
{
	bool bKilled;
	@KillTimer(c_iSneakStepsTimer, bKilled);
	if (bKilled) {
		@ModNoise(-c_iSneakNoise);
	}
}

void EnableStepsTimer(void)
{
	DisableStepsTimer();
	@SetTimer(c_iStepsTimer, c_fStepFreq);
	@ModNoise(c_iWalkNoise);
}

void EnableSneakStepsTimer(void)
{
	DisableSneakStepsTimer();
	@SetTimer(c_iSneakStepsTimer, c_fSneakStepFreq);
	@ModNoise(c_iSneakNoise);
}

void HandleStepsTimer(void)
{
	PlayStepSound();
}

void HandleSneakStepsTimer(void)
{
	PlayStepSound();
}

void HandleAStepsTimer(void)
{
	PlayStepSound();
	DisableATimer();
}

void OnPlayerStartSneaking(void)
{
	EnableSneakStepsTimer();
	DisableATimer();
}

void OnPlayerStartWalking(void)
{
	EnableStepsTimer();
	DisableATimer();
}
	
void OnPlayerStopWalking(void)
{
	DisableStepsTimer();
	EnableATimer();
}

void OnPlayerStopSneaking(void)
{
	DisableSneakStepsTimer();
}
