event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var bool tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var object tv10;
	var object tv11;

	void init(void)
	{
		tv0 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void f_5_a0_v(void)
	{
		object L0;
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "noeva");
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "lock_danko") {
			object L0;
			f_251_a2_v("icot_eva_door", true);
			@GetSceneByName(L0, "cot_eva");
			@Trigger(L0, "danko");
		} else {
			if (a0 == "teleport") {
				object L1;
				object L2;
				object L3;
				f_5_a0_v();
				@GetScene(L1);
				@GetSceneByName(L2, "cot_eva");
				f_251_a2_v("icot_eva_door", false);
				f_240_a2_v("icot_eva@door1", true);
				@PlaySound("door_close");
				if (tv1) {
					@Trigger(tv1, "cleanup");
				}
				if (L1 != L2) {
					f_285_a3_v(f_202_a0_o(), "cot_eva", "pt_k6q01_klara");
					@sync();
				}
				@FindActor(L3, "player");
				if (L3 && tv0) {
					f_29d_a3_v(L3, tv4, tv5);
					f_29d_a3_v(L3, tv8, tv9);
					f_29d_a3_v(L3, tv10, tv11);
				}
			} else {
				if (a0 == "cot_eva_load") {
					int L4;
					int L5;
					@GetVariable("k6q01", L4);
					@GetVariable("k6q01DoorWasLocked", L5);
					if (L4 == 2 && !L5) {
						f_240_a2_v("icot_eva@door1", true);
						@SetVariable("k6q01DoorWasLocked", 1);
						@PlaySound("door_close");
					}
				} else {
					if (a0 == "unlock_eva") {
						object L6;
						f_240_a2_v("icot_eva@door1", false);
						@PlaySound("door_open");
						@SetVariable("k6q01ItemsRemoved", 1);
						@CreateIntVector(tv3);
						@CreateIntVector(tv5);
						@CreateIntVector(tv7);
						@CreateIntVector(tv9);
						@CreateIntVector(tv11);
						@FindActor(L6, "player");
						if (L6) {
							tv4 = f_209_a3_o(L6, 1, tv5);
							tv8 = f_209_a3_o(L6, 3, tv9);
							tv10 = f_209_a3_o(L6, 4, tv11);
							L6->ClearSubContainer(1);
							L6->ClearSubContainer(3);
							L6->ClearSubContainer(4);
							L6->SelectWeapon();
							tv0 = true;
						}
					} else {
						if (a0 == "place_danko") {
							float L7;
							object L8;
							@GetGameTime(L7);
							if (L7 < 134) {
								@GetSceneByName(L8, "cot_anna");
								tv1 = f_22e_a4_o(L8, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
								@SetTimeEvent(1, 134);
								@SetTimeEvent(2, 136);
								@SetTimeEvent(3, 138);
								@SetVariable("k6q01DankoPos", 1);
							} else {
								if (L7 < 136) {
									@GetSceneByName(L8, "cot_lara");
									tv1 = f_22e_a4_o(L8, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
									@SetTimeEvent(2, 136);
									@SetTimeEvent(3, 138);
									@SetVariable("k6q01DankoPos", 2);
								} else {
									if (L7 < 138) {
										@GetSceneByName(L8, "dt_house_1_04");
										tv1 = f_22e_a4_o(L8, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
										@SetTimeEvent(3, 138);
										@SetVariable("k6q01DankoPos", 3);
									} else {
										f_251_a2_v("icot_eva_door", false);
										f_5_a0_v();
										@SetVariable("k6q01DankoPos", 4);
									}
								}
							}
						} else {
							if (a0 == "fail") {
								f_1d2_a0_v();
							} else {
								if (a0 == "completed") {
									f_1da_a0_v();
								} else {
									if (a0 == "cleanup") {
										int L9;
										@GetVariable("k6q01", L9);
										if (L9 != 1000) {
											f_1d2_a0_v();
										} else {
											f_1df_a0_v();
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

	void OnGameTime(int a0, float a1)
	{
		int L0;
		@GetVariable("k6q01DankoPos", L0);
		if (a0 == 1) {
			object L1;
			object L2;
			if (L0 != 1) {
				return;
			}
			@GetScene(L1);
			@GetSceneByName(L2, "cot_lara");
			if (tv1) {
				@Trigger(tv1, "cleanup");
			}
			if (L1 != L2) {
				L1 = L2;
				@Trace("0: placing danko to lara");
				@SetVariable("k6q01DankoPos", 2);
			} else {
				@GetSceneByName(L1, "dt_house_1_04");
				@Trace("0: placing danko to ospina");
				@SetVariable("k6q01DankoPos", 3);
			}
			tv1 = f_22e_a4_o(L1, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
		} else {
			if (a0 == 2) {
				object L3;
				object L4;
				if (L0 != 2) {
					return;
				}
				@GetScene(L3);
				@GetSceneByName(L4, "dt_house_1_04");
				if (tv1) {
					@Trigger(tv1, "cleanup");
				}
				if (L3 != L4) {
					tv1 = f_22e_a4_o(L4, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
					@Trace("1: placing danko to ospina");
					@SetVariable("k6q01DankoPos", 3);
				} else {
					object L5;
					f_251_a2_v("icot_eva_door", false);
					f_5_a0_v();
					@SetVariable("k6q01DankoPos", 4);
					@Trace("1: placing danko to eva");
				}
			} else {
				if (a0 == 3) {
					@Trace("placing danko from ospina to eva");
					if (tv1) {
						@Trigger(tv1, "cleanup");
					}
					f_5_a0_v();
					f_251_a2_v("icot_eva_door", false);
					@SetVariable("k6q01DankoPos", 4);
				}
			}
		}
	}

	void f_1d2_a0_v(void)
	{
		@SetVariable("k6q01", -1);
		f_1df_a0_v();
	}

	void f_1da_a0_v(void)
	{
		@SetVariable("k6q01", 1000);
	}

	void f_1df_a0_v(void)
	{
		int L0;
		disable OnTrigger;
		f_251_a2_v("icot_eva_door", false);
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@GetVariable("k6q01", L0);
		f_240_a2_v("icot_eva@door1", false);
		if (L0 == 1000) {
			@PlaySound("door_open");
		}
		f_5_a0_v();
		@RemoveActor(f_222_a0_o());
	}
}

object f_202_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

object f_209_a3_o(object a0, int a1, object a2)
{
	object L0;
	int L1;
	int L2;
	L0 = f_228_a0_o();
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		object L3;
		int L4;
		a0->GetItem(L3, L2, a1);
		L0->add(L3);
		a0->GetItemAmount(L4, L2, a1);
		a2->add(L4);
	}
	return L0;
}

object f_222_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_228_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_22e_a4_o(object a0, string a1, string a2, string a3)
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

void f_240_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_251_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		if (a1) {
			L0->Close();
		}
		L0->SetProperty("locked", a1);
	}
}

void f_266_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_272_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	} else {
		f_266_a2_v(L0, a2);
	}
}

void f_285_a3_v(object a0, string a1, string a2)
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

void f_29d_a3_v(object a0, object a1, object a2)
{
	int L0;
	int L1;
	a1->size(L0);
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		int L3;
		a1->get(L2, L1);
		a2->get(L3, L1);
		f_272_a3_v(a0, L2, L3);
	}
}

