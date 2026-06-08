event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var int tv1;

	void init(void)
	{
		int L0;
		tv1 = -1;
		for (L0 = 0; L0 < 6; L0 = L0 + 1) {
			@SetTimeEvent(6 + L0, (L0 + 6) * 24);
		}
		@CreateObjectVector(tv0);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_svita") {
			f_98_a1_v(f_14f_a0_i());
		} else {
			if (a0 == "wonder") {
				@TriggerWorld("lightning");
				f_ec_a0_v();
				f_f2_a0_v();
				if (tv1 != -1) {
					f_19b_a2_v(tv1, true);
					f_158_a0_v();
				}
			} else {
				if (a0 == "bad_wonder") {
					int L0;
					object L1;
					L0 = f_14f_a0_i();
					@GetMainOutdoorScene(L1);
					f_fe_a4_o(L1, "pt_k2system" + L0 + "_albinos", "pers_rat", "k2system_rat.xml");
					if (f_f9_a1_b(0.5)) {
						f_fe_a4_o(L1, "pt_k2system" + L0 + "_patrol", "pers_rat_big", "k2system_rat_big.xml");
					}
					if (f_f9_a1_b(0.5)) {
						f_fe_a4_o(L1, "pt_k2system" + L0 + "_nude", "pers_rat", "k2system_rat.xml");
					}
					if (f_f9_a1_b(0.5)) {
						f_fe_a4_o(L1, "pt_k2system" + L0 + "_dohodyaga1", "pers_rat_big", "k2system_rat_big.xml");
					}
					if (f_f9_a1_b(0.5)) {
						f_fe_a4_o(L1, "pt_k2system" + L0 + "_dohodyaga2", "pers_rat", "k2system_rat.xml");
					}
					f_165_a0_v();
				}
			}
		}
	}

	void OnGameTime(int a0, float a1)
	{
		if (a0 == tv1) {
			f_f2_a0_v();
		}
	}

	void f_98_a1_v(int a0)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		f_f2_a0_v();
		tv1 = a0;
		tv0->add(f_110_a4_o(L0, "pt_k2system" + a0 + "_albinos", "pers_albinos", "k2system" + a0 + "_albinos.xml"));
		tv0->add(f_110_a4_o(L0, "pt_k2system" + a0 + "_patrol", "pers_patrool", "k2system" + a0 + "_patrol.xml"));
		tv0->add(f_110_a4_o(L0, "pt_k2system" + a0 + "_nude", "pers_nudegirl", "k2system" + a0 + "_nude.xml"));
		tv0->add(f_110_a4_o(L0, "pt_k2system" + a0 + "_dohodyaga1", "pers_dohodyaga", "k2system" + a0 + "_dohodyaga1.xml"));
		tv0->add(f_110_a4_o(L0, "pt_k2system" + a0 + "_dohodyaga2", "pers_dohodyaga", "k2system" + a0 + "_dohodyaga2.xml"));
	}

	void f_ec_a0_v(void)
	{
		f_137_a2_v(tv0, "wonder");
	}

	void f_f2_a0_v(void)
	{
		f_122_a1_v(tv0);
		tv0->clear();
	}
}

bool f_f9_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

object f_fe_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

object f_110_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

void f_122_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

void f_137_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				object L3;
				L2->GetActor(L3);
				if (L3) {
					@Trigger(L3, a1);
				}
			}
		}
	}
}

int f_14f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_158_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 727, 1, 539106);
	f_17f_a2_b(L0, 723);
}

void f_165_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 728, 1, 539107);
	f_17f_a2_b(L0, 723);
}

object f_172_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_17f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_172_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

void f_19b_a2_v(int a0, bool a1)
{
	@SetVariable("K2SystemSvitaRemoved" + a0, a1 ? 1 : 0);
}

