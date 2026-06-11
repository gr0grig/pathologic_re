event OnTrigger 26;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_birdmask") {
			object L0;
			@GetMainOutdoorScene(L0);
			f_ad_a4_o(L0, "pt_d12q01_birdmask", "pers_birdmask", "d12q01_birdmask.xml");
		} else {
			if (a0 == "init_sobor") {
				object L1;
				@GetSceneByName(L1, "sobor");
				f_cf_a1_b("NPC_Aglaja");
				@Trigger(L1, "noaglaja");
				f_9b_a4_o(L1, "pt_d12q01_Klara", "NPC_Klara", "d12q01_Klara.xml");
				f_9b_a4_o(L1, "pt_d12q01_Block", "NPC_Block", "d12q01_Block.xml");
				f_9b_a4_o(L1, "pt_d12q01_Burah", "NPC_Burah", "d12q01_Burah.xml");
				f_9b_a4_o(L1, "pt_d12q01_Aglaja", "NPC_Aglaja", "d12q01_Aglaja.xml");
				f_bf_a2_v("isobor@door1", true);
			} else {
				if (a0 == "init_theater") {
					object L2;
					@GetSceneByName(L2, "theater");
					f_9b_a4_o(L2, "pt_d12q01_birdmask", "pers_birdmask", "d12q01_tbirdmask.xml");
					f_9b_a4_o(L2, "pt_d12q01_whitemask", "pers_whitemask", "d12q01_twhitemask.xml");
					f_bf_a2_v("itheater@door1", true);
				} else {
					if (a0 == "init_mnogogrannik") {
						object L3;
						f_bf_a2_v("hidden_room@door1", false);
						@GetSceneByName(L3, "hidden_room");
						f_9b_a4_o(L3, "pt_girl", "pers_littlegirl2", "d12q01_littlegirl.xml");
						f_9b_a4_o(L3, "pt_boy", "pers_littleboy2", "d12q01_littleboy.xml");
					} else {
						if (a0 == "fail") {
							f_89_a0_v();
						} else {
							if (a0 == "completed") {
								f_91_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_89_a0_v(void)
	{
		@SetVariable("d12q01", -1);
		f_99_a0_v();
	}

	void f_91_a0_v(void)
	{
		@SetVariable("d12q01", 1000);
		f_99_a0_v();
	}

	void f_99_a0_v(void)
	{
		disable OnTrigger;
	}
}

object f_9b_a4_o(object a0, string a1, string a2, string a3)
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

object f_ad_a4_o(object a0, string a1, string a2, string a3)
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

void f_bf_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

bool f_cf_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

