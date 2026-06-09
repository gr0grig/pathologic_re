event OnTrigger 26;

var object g0;

maintask t0
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void init(void)
	{
		object L0;
		object L1;
		tv2 = true;
		f_112_a2_v("boiny@door1", false);
		@GetActiveScene(L0);
		@GetSceneByName(L1, "storojka");
		if (L0 == L1) {
			tv0 = true;
		} else {
			tv1 = f_100_a4_o(L1, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
		}
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "storojka_unload") {
			if (tv0) {
				object L0;
				tv0 = false;
				@GetSceneByName(L0, "storojka");
				tv1 = f_100_a4_o(L0, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
			}
		} else {
			if (a0 == "remove_klara") {
				@Trigger(tv1, "cleanup");
			} else {
				if (a0 == "open_shaft") {
					f_123_a2_b("boiny_shaft_trigger", "activate");
					f_147_a1_b("iboiny_stones");
				} else {
					if (a0 == "shaft_drop") {
						int L1;
						@PlayNSSound("drop");
						@AddScene("boiny_well.isc");
						@sync();
						f_12f_a3_v(f_f3_a0_o(), "boiny_well", "pt_player");
						@sync();
						@GetVariable("b11q01KlaraWillHelp", L1);
						if (!L1 || !tv2) {
							f_f3_a0_o()->ApplyEffect("quest_b11_01_death_effect.bin");
						}
						tv2 = false;
					} else {
						if (a0 == "starshina_fight") {
							int L2;
							if (tv1) {
								@Trigger(tv1, "cleanup");
							}
							@GetVariable("b11q01", L2);
							if (L2) {
								f_17a_a0_v();
							}
							@AddScene("boiny_arena.isc");
							@sync();
							f_12f_a3_v(f_f3_a0_o(), "boiny_arena", "pt_player");
						} else {
							if (a0 == "open_well_exit") {
								f_123_a2_b("well_trigger", "activate");
							} else {
								if (a0 == "fight_win") {
									int L3;
									@GetVariable("b11q01", L3);
									if (L3) {
										f_160_a0_v();
									} else {
										f_153_a0_v();
										f_16d_a0_v();
									}
									f_d6_a0_v();
								} else {
									if (a0 == "cleanup") {
										int L4;
										@GetVariable("b11q01", L4);
										if (L4 != 1000) {
											f_ce_a0_v();
										} else {
											f_de_a0_v();
										}
									} else {
										if (a0 == "fail") {
											f_ce_a0_v();
										} else {
											if (a0 == "completed") {
												f_d6_a0_v();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_ce_a0_v(void)
	{
		@SetVariable("b11q01", -1);
		f_de_a0_v();
	}

	void f_d6_a0_v(void)
	{
		@SetVariable("b11q01", 1000);
		f_de_a0_v();
	}

	void f_de_a0_v(void)
	{
		f_123_a2_b("boiny_shaft_trigger", "deactivate");
		f_123_a2_b("well_trigger", "deactivate");
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_fa_a0_o());
	}
}

object f_f3_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

object f_fa_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_100_a4_o(object a0, string a1, string a2, string a3)
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

void f_112_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_123_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_12f_a3_v(object a0, string a1, string a2)
{
	object L0;
	bool L1;
	Vector L2;
	Vector L3;
	if (!a0) {
		return;
	}
	@GetSceneByName(L0, a1);
	L0->GetLocator(a2, L1, L2, L3);
	if (!L1) {
		@Trace("Teleport location '" + a2 + "' not found in scene '" + a1 + "'");
	} else {
		@Teleport(a0, L0, L2, L3);
	}
}

bool f_147_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

void f_153_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 313, 1, 522055);
	f_194_a2_b(L0, -1);
}

void f_160_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 317, 1, 522059);
	f_194_a2_b(L0, 313);
}

void f_16d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 780, 1, 541765);
	f_194_a2_b(L0, 313);
}

void f_17a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 316, 1, 522058);
	f_194_a2_b(L0, 313);
}

object f_187_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_194_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_187_a0_o();
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

