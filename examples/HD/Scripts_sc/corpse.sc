event OnPropertyChange 16;
event OnTimer 7;

var object g0;
var object g1;
var object g2;
var bool g3;
var bool g4;

maintask t0
{
	void OnPropertyChange(object a0, string a1)
	{
		if (a1 == "fire") {
			float L0;
			@GetProperty("fire", L0);
			if (L0 > 0.0) {
				if (!g3) {
					g3 = true;
					g0->Fade(false);
					g1->Fade(false);
					if (!g4) {
						g4 = true;
						@SetTimer(81, 3);
					}
					@PlayGlobalSound("fire_begin", [0.0, 10.0, 0.0]);
					if (g2 != null) {
						g2->FadeIn(1.5);
					} else {
						object L1;
						@PlayLoopedGlobalSound(L1, "fire_loop", [0.0, 10.0, 0.0]);
						g2 = L1;
					}
				}
			} else {
				if (g3) {
					g3 = false;
					g0->Fade(true);
					g1->Fade(true);
					if (g2 != null) {
						g2->FadeOut(1.5);
					}
				}
			}
		}
	}

	void init(void)
	{
		object L0;
		object L1;
		object L2;
		Vector L3;
		Vector L4;
		Vector L5;
		float L6;
		@Trace("loading");
		g3 = false;
		g4 = false;
		@SetDeathState();
		@SetProperty("disease", 0.20000000298023224);
		@PlaceOnGround();
		@GetPosition(L3);
		L4 = [0.0, 1.0, 0.0];
		L5 = [0.0, 0.0, 0.0];
		@EnableGeometry("corpse", true);
		@FindGeometry("corpse", L2);
		@rand(L6, 6.2831854820251465);
		L2->SetRotationY(L6);
		@FindGeometry("corpse1", L2);
		L2->SetRotationY(L6);
		@CreateFire(L0, "fire", 50);
		L0->AddSource([0.0, 0.0, 0.0], L4);
		L0->AddSource([0.0, 0.0, 50.0], L4);
		L0->AddSource([0.0, 0.0, -50.0], L4);
		L0->AddSource([50.0, 0.0, 0.0], L4);
		L0->AddSource([-50.0, 0.0, 0.0], L4);
		L0->Enable();
		L0->Fade();
		@CreateSmoke(L1, "smoke", 20);
		L1->AddSource([0.0, 0.0, 0.0], L4);
		L1->SetOpacity(0.699999988079071);
		L1->Enable();
		L1->Fade();
		g0 = L0;
		g1 = L1;
		@SetTimer(80, 1);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTimer(int a0)
	{
		f_af_a1_v(a0);
	}
}

void f_af_a1_v(int a0)
{
	if (a0 == 80) {
		float L0;
		@GetProperty("fire", L0);
		if (L0 <= 0.009999999776482582) {
			L0 = 0;
		} else {
			L0 = L0 - 0.009999999776482582;
			if (L0 < 0) {
				L0 = 0;
			}
		}
		@SetProperty("fire", L0);
	} else {
		if (a0 == 81) {
			@KillTimer(81);
			@EnableGeometry("corpse", false);
			@EnableGeometry("corpse1", true);
		}
	}
}

