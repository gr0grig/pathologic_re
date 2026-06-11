event OnLoad 5;
event OnUnload 6;

property float reference_distance;
property float sound_distance;
property float min_repeat_delay;
property float max_repeat_delay;
property int num_sounds;
property int night;
property int day;
property int evening;
property int morning;
property int play_in_dregion;
property int play_in_region;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	var int tv0;

	void init(void)
	{
		if (num_sounds <= 0) {
			return;
		}
		if (!f_f1_a0_b()) {
			t0{};
		}
		tv0 = 0;
		for (; ; ) {
			float L0;
			float L1;
			int L2;
			float L3;
			L0 = t2{};
			if (reference_distance == 0) {
				L1 = 1.0;
			} else {
				L1 = 1.0 / (1 + L0 * L0 / reference_distance / reference_distance);
			}
			L2 = 0;
			if (num_sounds > 1) {
				@irand(L2, num_sounds - 1);
				L2 = (tv0 + L2 + 1) % num_sounds;
				tv0 = L2;
			}
			@WaitForSoundToLoad(f_124_a1_s(L2));
			@PlaySound(f_124_a1_s(L2), false, L1);
			@rand(L3, min_repeat_delay, max_repeat_delay);
			@Sleep(L3);
		}
	}

	void OnUnload(void)
	{
		t0{};
		t2{};
	}
}

task t2
{
	float init(void)
	{
		for (; ; ) {
			object L0;
			L0 = f_ea_a0_o();
			if (L0 == null) {
				@Sleep(10);
			} else {
				int L1;
				float L2;
				L1 = f_df_a0_i();
				if (f_104_a1_b(L1)) {
					if (play_in_region == 0) {
						@Sleep(10);
						continue;
					}
				}
				if (f_114_a1_b(L1)) {
					if (play_in_dregion == 0) {
						@Sleep(10);
						continue;
					}
				}
				L2 = f_d7_a1_f(L0);
				if (L2 < sound_distance * sound_distance) {
					if (f_16d_a0_b() && night || f_147_a0_b() && day || f_15a_a0_b() && evening || f_134_a0_b() && morning) {
						return sqrt(L2);
					}
				}
				@Sleep(1);
			}
		}
		return 0;
	}

	void OnUnload(void)
	{
		t0{};
	}
}

Vector f_d2_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

float f_d7_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

int f_df_a0_i(void)
{
	object L0;
	int L1;
	@GetScene(L0);
	L0->GetRegionByPt(L1, f_d2_a0_V());
	return L1;
}

object f_ea_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_f1_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

int f_f6_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

string f_fe_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

bool f_104_a1_b(int a0)
{
	int L0;
	@GetVariable(f_fe_a1_s(a0), L0);
	if ((L0 & 3) == 0) {
		return true;
	}
	return false;
}

bool f_114_a1_b(int a0)
{
	int L0;
	@GetVariable(f_fe_a1_s(a0), L0);
	if ((L0 & 3) == 1) {
		return true;
	}
	return false;
}

string f_124_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "sound0" + (a0 + 1);
	}
	return "sound" + (a0 + 1);
}

bool f_134_a0_b(void)
{
	int L0;
	L0 = f_f6_a0_i();
	if (L0 >= 7 && L0 < 10) {
		return true;
	}
	return false;
}

bool f_147_a0_b(void)
{
	int L0;
	L0 = f_f6_a0_i();
	if (L0 > 9 && L0 < 20) {
		return true;
	}
	return false;
}

bool f_15a_a0_b(void)
{
	int L0;
	L0 = f_f6_a0_i();
	if (L0 >= 20 && L0 <= 23) {
		return true;
	}
	return false;
}

bool f_16d_a0_b(void)
{
	int L0;
	L0 = f_f6_a0_i();
	if (L0 >= 0 || L0 < 7) {
		return true;
	}
	return false;
}

