event OnGameMessage 201;
event OnUpdate 1;
event OnDraw 0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var int tv10;
	var float tv11;

	void init(void)
	{
		tv10 = -1;
		if (f_251_a0_b()) {
			@CreateWindow("visir.xml", false, tv0);
			@SendMessage(f_243_a0_i(), "charge");
			f_1d7_a0_v();
		}
		@CreateIntVector(tv5);
		@CreateStringVector(tv2);
		@CreateIntVector(tv3);
		@CreateFloatVector(tv4);
		@CreateIntVector(tv6);
		@CreateIntVector(tv7);
		@CreateFloatVector(tv8);
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void f_29_a1_v(int a0)
	{
		int L0;
		int L1;
		tv5->add(a0);
		tv5->size(L0);
		for (L1 = 0; L1 < L0 - 1; L1++) {
			int L2;
			tv5->get(L2, L1);
			if (L2 == a0) {
				tv5->remove(L1);
				return;
			}
		}
	}

	void f_3e_a0_v(void)
	{
		tv5->remove(0);
	}

	void f_42_a1_v(int a0)
	{
		int L0;
		int L1;
		tv3->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			int L2;
			tv3->get(L2, L1);
			if (a0 == L2) {
				tv4->set(L1, 4.0);
				return;
			}
		}
		tv3->add(a0);
		tv4->add(4.0);
	}

	void f_59_a0_v(void)
	{
		tv3->remove(0);
		tv4->remove(0);
	}

	void f_60_a1_v(float a0)
	{
		int L0;
		float L1;
		tv3->size(L0);
		if (!L0) {
			return;
		}
		tv4->get(L1, 0);
		L1 = L1 - a0;
		if (L1 > 0) {
			tv4->set(0, L1);
		} else {
			f_59_a0_v();
		}
	}

	void f_75_a0_v(void)
	{
		int L0;
		int L1;
		float L2;
		float L3;
		tv3->size(L0);
		if (!L0) {
			return;
		}
		tv3->get(L1, 0);
		tv4->get(L2, 0);
		L3 = 6.2829999923706055 * L2 / 4.0;
		if (L1 == 2) {
			@Blit("mail", 20, 500, 0.5 - 0.5 * cos(L3));
		} else {
			if (L1 == 3) {
				@Blit("diary", 20, 470, 0.5 - 0.5 * cos(L3));
			} else {
				if (L1 == 4) {
					@Blit("rep_up", 20, 500, 0.5 - 0.5 * cos(L3));
				} else {
					if (L1 == 5) {
						@Blit("rep_down", 20, 500, 0.5 - 0.5 * cos(L3));
					}
				}
			}
		}
	}

	void f_bd_a2_v(int a0, int a1)
	{
		string L0;
		tv6->add(a0);
		tv7->add(a1);
		tv8->add(4.0);
		@GetInvItemSprite(L0, a0);
		@LoadImage(L0);
		tv2->add(L0);
	}

	void f_cc_a1_v(int a0)
	{
		tv6->remove(a0);
		tv8->remove(a0);
		tv7->remove(a0);
	}

	void f_d4_a1_v(float a0)
	{
		int L0;
		int L1;
		tv6->size(L0);
		if (!L0) {
			return;
		}
		L1 = 0;
		for (; L1 < L0; L1++) {
			float L2;
			tv8->get(L2, L1);
			L2 = L2 - a0;
			if (L2 > 0) {
				tv8->set(L1, L2);
			} else {
				f_cc_a1_v(L1);
				L0 = L0 + -1;
				L1 = L1 + -1;
			}
		}
		if (L0 == 0) {
			int L3;
			int L4;
			tv2->size(L3);
			for (L4 = 0; L4 < L3; L4++) {
				string L5;
				tv2->get(L5, L4);
				@ReleaseImage(L5);
			}
			tv2->clear();
		}
	}

	void f_103_a1_v(float a0)
	{
		int L0;
		int L1;
		tv5->size(L0);
		if (!L0) {
			return;
		}
		if (tv1) {
			return;
		}
		tv5->get(L1, 0);
		if (L1 == 100) {
			@CreateWindow("daychange.xml", false, tv1);
		} else {
			@CreateWindow("daychangereal.xml", false, tv1);
		}
		f_3e_a0_v();
	}

	void f_11f_a0_v(void)
	{
		int L0;
		int L1;
		tv6->size(L0);
		if (!L0) {
			return;
		}
		for (L1 = 0; L1 < L0; L1++) {
			int L2;
			int L3;
			float L4;
			float L5;
			tv6->get(L2, L1);
			tv7->get(L3, L1);
			tv8->get(L4, L1);
			L5 = sqrt(L4 / 4.0);
			f_1ef_a4_v(L2, L3, L1, L5);
		}
	}

	void OnGameMessage(int a0, object a1)
	{
		if (a0 == 200) {
			if (a1) {
				int L0;
				a1->size(L0);
				if (L0 == 1) {
					a1->get(tv10, 0);
					tv11 = 1.0;
				}
			}
		} else {
			if (a0 == 1) {
				if (!tv0) {
					@CreateWindow("visir.xml", false, tv0);
				}
				@SendMessage(f_243_a0_i(), "charge");
				f_1d7_a0_v();
			} else {
				if (a0 == 2) {
					if (tv0) {
						tv0->DestroyWindow();
					}
				} else {
					if (a0 == 3) {
						int L1;
						int L2;
						a1->get(L1, 0);
						a1->get(L2, 1);
						f_bd_a2_v(L1, L2);
					} else {
						if (a0 == 4) {
							int L3;
							int L4;
							a1->get(L3, 0);
							a1->get(L4, 1);
						} else {
							if (a0 == 100) {
								f_29_a1_v(100);
							} else {
								if (a0 == 101) {
									f_29_a1_v(101);
								} else {
									if (a0 == 6) {
										f_42_a1_v(2);
										@PlaySound("mail");
										@Trace("HasMail");
									} else {
										if (a0 == 7) {
											f_42_a1_v(3);
											@PlaySound("diary");
											@Trace("HasDiary");
										} else {
											if (a0 == 8) {
												f_42_a1_v(4);
												@Trace("ReputationUP");
											} else {
												if (a0 == 9) {
													f_42_a1_v(5);
													@Trace("ReputationDown");
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
	}

	void OnUpdate(float a0)
	{
		f_60_a1_v(a0);
		f_d4_a1_v(a0);
		f_103_a1_v(a0);
		f_1d7_a0_v();
		f_225_a1_v(a0);
	}

	void f_1d7_a0_v(void)
	{
		int L0;
		int L1;
		L0 = f_25e_a0_i();
		for (L1 = 0; L1 < 4; L1++) {
			@SendMessage(L1 < L0 ? 1 : 0, "vlevel" + (L1 + 1));
		}
	}

	void f_1ef_a4_v(int a0, int a1, int a2, float a3)
	{
		string L0;
		int L1;
		int L2;
		@GetInvItemSprite(L0, a0);
		L1 = 40 + a2 * 60;
		L2 = 40;
		@Blit("slot", L1, L2, a3);
		@Blit(L0, L1 + 1, L2 + 1, a3);
		if (a1 > 1) {
			@Print("default", L1 + 2, L2 + 35, a1, 1.0, 1.0, 1.0, a3);
		}
	}

	void f_20e_a0_v(void)
	{
		string L0;
		float L1;
		if (tv10 == -1) {
			return;
		}
		@GetStringByID(L0, tv10);
		L1 = sin(3.140000104904175 * tv11 / 1.0 / 2.0);
		@Print("help", 40, 80, L0, 1.0, 1.0, 1.0, L1);
	}

	void f_225_a1_v(float a0)
	{
		if (tv10 == -1) {
			return;
		}
		tv11 = tv11 - a0;
		if (tv11 <= 0) {
			tv10 = -1;
		}
	}

	void OnDraw(void)
	{
		if (f_26c_a0_b()) {
			@Blit("cross", 399, 299);
		}
		f_75_a0_v();
		f_11f_a0_v();
		f_20e_a0_v();
	}
}

int f_243_a0_i(void)
{
	object L0;
	int L1;
	@FindActor(L0, "player");
	if (!L0) {
		return 0;
	}
	L0->GetProperty("vcharge", L1);
	return L1;
}

bool f_251_a0_b(void)
{
	object L0;
	bool L1;
	@FindActor(L0, "player");
	if (!L0) {
		return false;
	}
	L0->IsVisirOn(L1);
	return L1;
}

int f_25e_a0_i(void)
{
	object L0;
	int L1;
	@FindActor(L0, "player");
	if (!L0) {
		return 0;
	}
	L0->GetProperty("visir", L1);
	return L1;
}

bool f_26c_a0_b(void)
{
	object L0;
	bool L1;
	@FindActor(L0, "player");
	if (!L0) {
		return false;
	}
	L0->IsWeaponHolstered(L1);
	return !L1;
}

