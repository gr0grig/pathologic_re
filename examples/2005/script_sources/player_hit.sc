include std.sci

// CONSTANTS
const float c_fDarkenSpeed = 2;
// CONSTANTS

const int c_iScreamTimerID = 0;
const float c_fScreamDelay = 3;

var bool g_bCanScream;

void OnTimer(int id)
{
	if (id == c_iScreamTimerID) {
		g_bCanScream = true;
		@KillTimer(c_iScreamTimerID);
	}
}

void DisableScream(void)
{
	if (g_bCanScream) {
		g_bCanScream = false;
		@SetTimer(c_iScreamTimerID, c_fScreamDelay);
	}
}

float CalculateDarkenLevel(float fDamage)
{
	return clampf(sqrt(fDamage), 0, 1);
}

int GetSoundCount(string strPrefix) 
{
	int iSoundCount;
	for (iSoundCount = 0; ; ++iSoundCount) {
		bool bExist;
		@IsExistingSound(bExist, strPrefix + (iSoundCount + 1));
		if (!bExist)
			break;
	}
	return iSoundCount;
}

void PlayHitSound(string prefix)
{
	int iSoundCount = GetSoundCount(prefix + "_");
	if (!iSoundCount) {
		@Trace("No sounds for \"" + prefix + "\"");
	}
	else {
		int iSound;
		@irand(iSound, iSoundCount);
		@PlaySound(prefix + "_" + (iSound + 1));
	}
}

void PlayScreamSound(string prefix)
{
	if (g_bCanScream) {
		DisableScream();
		PlayHitSound(prefix);
	}
}

void PlaySound(int iHitType) {
	if (iHitType == c_iHitTypePhysical) {
		PlayHitSound("hit_physical1");
		PlayScreamSound("scream_physical1");
	}
	else if (iHitType == c_iHitTypePhysical2) {
		PlayHitSound("hit_physical2");
		PlayScreamSound("scream_physical2");
	}
	else if (iHitType == c_iHitTypeBullet) {
		PlayHitSound("hit_bullet");
		PlayScreamSound("scream_bullet");
	}
	else if (iHitType == c_iHitTypeOscoloc) { 
		PlayHitSound("hit_oscoloc");
		PlayScreamSound("scream_oscoloc");
	}
	else if (iHitType == c_iHitTypeMental) {
		PlayHitSound("hit_mental");
		PlayScreamSound("scream_mental");
	}
	else if (iHitType == c_iHitTypeRat) {
		PlayHitSound("hit_rat");
		PlayScreamSound("scream_rat");
	}
	else if (iHitType == c_iHitTypeFire) { 
		// special case
	}
}

void React(object actor, int iHitType, float fDamage)
{
	PlaySound(iHitType);

	if (iHitType != c_iHitTypeDisease && iHitType != c_iHitTypeMental) {
		if (actor != self() && actor->FuncExist("GetPosition", 1)) {
			Vector vSpeed;
			@GetSpeed(vSpeed);
			vSpeed -= Normalize(GetActorDelta(actor)) * 400;
			if ((vSpeed | vSpeed) < 400 * 400) {
				@SetSpeed(vSpeed);
			}
		}
	}
}

maintask TPlayerHit
{
	void init(void) {
		g_bCanScream = true;

		for (;;) {
			@Hold();
		}
	}
	
	void OnHit(object actor, int iHitType, float fDamage, float fHit) {
		if (iHitType != c_iHitTypeDisease) {
			React(actor, iHitType, fDamage);
			THit{fDamage};
		}
	}
	void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir) {
		OnHit(actor, iHitType, fDamage, fHit);
	}
}

void Mod(float fAmount, float fInitFOV, bool bFOV)
{
	@ModDarkenLevel(fAmount);
	@ModBlurLevel(fAmount);
	if (bFOV)
		@SetCameraFOV(fInitFOV * (1 + fAmount * 0.1));
}

bool IsBlocking(void)
{
	bool bHas;
	@HasProperty("blocking", bHas);
	if (!bHas)
		return false;
	@GetProperty("blocking", bHas);
	return bHas;
}

task THit
{
	var float m_fCurDarken;
	var float m_fDestDarken;
	
	void init(float _fDamage) {
		m_fCurDarken = 0.0;
		float fDamage = _fDamage;
		if (fDamage < 0.2)
			fDamage = 0.2;
		if (!IsBlocking())
			m_fDestDarken = CalculateDarkenLevel(2.0 * fDamage);
	
		bool bCameraFOV;
		@LockCameraFOV(bCameraFOV);

		float fInitFOV;
		@GetCameraCurrentFOV(fInitFOV);

		for (;;) {
			float fDeltaTime;
			@sync(fDeltaTime);
			if (m_fDestDarken < m_fCurDarken) {
				m_fCurDarken -= fDeltaTime * c_fDarkenSpeed / 2;
				if (m_fCurDarken <= 0) {
					Mod(0, fInitFOV, bCameraFOV);
					break;
				}
			}
			else {
				m_fCurDarken += fDeltaTime * c_fDarkenSpeed;
				if (m_fCurDarken >= m_fDestDarken) {
					if (!m_fCurDarken) {
						Mod(0, fInitFOV, bCameraFOV);
						break;
					}
					m_fCurDarken = m_fDestDarken;
					m_fDestDarken = 0;
				}
			}
			Mod(m_fCurDarken, fInitFOV, bCameraFOV);
		}
		
		if (bCameraFOV) @UnlockCameraFOV(bCameraFOV);
	}

	void OnHit(object actor, int iHitType, float fDamage, float fHit) {
		React(actor, iHitType, fDamage);
		float fDarken = CalculateDarkenLevel(fDamage);
		if (m_fDestDarken < m_fCurDarken) {
			if (fDarken > m_fCurDarken)
				m_fDestDarken = fDarken;
		}
		else {
			if (fDarken > m_fDestDarken)
				m_fDestDarken = fDarken;
		}
	}
	void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir) {
		OnHit(actor, iHitType, fDamage, fHit);
	}
}
