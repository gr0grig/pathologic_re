include std.sci

// CONSTANTS
const float c_fFireExtinguishRate = 0.01;
const float c_fFireBeginThreshold = 0;
const float c_fInitialDisease = 0.2;
// CONSTANTS

const int c_iFireTimer = 80;
const int c_iCorpseTimer = 81;

var object g_fire, g_smoke;
var object g_FireSound;
var bool g_bOnFire;
var bool g_bFried;

void HandleTimer(int id)
{
	if (id == c_iFireTimer) {
		float fCurFire;
		@GetProperty("fire", fCurFire);
		if (fCurFire <= c_fFireExtinguishRate) {
			fCurFire = 0;
		}
		else {
			fCurFire -= c_fFireExtinguishRate;
			if (fCurFire < 0)
				fCurFire = 0;
		}
		@SetProperty("fire", fCurFire);
	}
	else if (id == c_iCorpseTimer) {
		@KillTimer(c_iCorpseTimer);
		
		@EnableGeometry("corpse", false);
		@EnableGeometry("corpse1", true);
	}
}

maintask TCorpse
{
	void OnPropertyChange(object actor, string strProp) {
		if (strProp == "fire") {
			float fFire;
			@GetProperty("fire", fFire);
			if (fFire > c_fFireBeginThreshold) {
				if (!g_bOnFire) {
					g_bOnFire = true;

					g_fire->Fade(false);
					g_smoke->Fade(false);
					
					if (!g_bFried) {
						g_bFried = true;
						@SetTimer(c_iCorpseTimer, 3);
					}
					
					@PlayGlobalSound("fire_begin", [0, 10, 0]);
					if (g_FireSound != null) {
						g_FireSound->FadeIn(1.5);
					}
					else {
						object sound;
						@PlayLoopedGlobalSound(sound, "fire_loop", [0, 10, 0]);
						g_FireSound = sound;
					}
				}
			}
			else {
				if (g_bOnFire) {
					g_bOnFire = false;

					g_fire->Fade(true);
					g_smoke->Fade(true);
					
					if (g_FireSound != null) {
						g_FireSound->FadeOut(1.5);
					}
				}
			}
		}
	}
	
	void init(void) {
		@Trace("loading");
		g_bOnFire = false;
		g_bFried = false;

		@SetDeathState();
		@SetProperty("disease", c_fInitialDisease);
		@PlaceOnGround();
		
		object fire, smoke, corpse;
		Vector vPos, vDir, vTrans;
		@GetPosition(vPos); vDir = [0, 1, 0]; vTrans = [0, 0, 0];
		@EnableGeometry("corpse", true);
		@FindGeometry("corpse", corpse);
		float fRot;
		@rand(fRot, PI * 2); 
		corpse->SetRotationY(fRot);
		@FindGeometry("corpse1", corpse);
		corpse->SetRotationY(fRot);
		
		@CreateFire(fire, "fire", 50);
		fire->AddSource([0, 0, 0], vDir);
		fire->AddSource([0, 0, 50], vDir);
		fire->AddSource([0, 0, -50], vDir);
		fire->AddSource([50, 0, 0], vDir);
		fire->AddSource([-50, 0, 0], vDir);
		fire->Enable();
		fire->Fade();
				
		@CreateSmoke(smoke, "smoke", 20);
		smoke->AddSource([0, 0, 0], vDir);
		smoke->SetOpacity(0.7);
		smoke->Enable();
		smoke->Fade();
		
		g_fire = fire; g_smoke = smoke;
		@SetTimer(c_iFireTimer, 1);

		for (;;) {
			@Hold();
		}
	}
	
	void OnTimer(int id) {
		HandleTimer(id);
	}
}
