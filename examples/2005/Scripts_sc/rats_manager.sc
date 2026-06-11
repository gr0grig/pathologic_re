event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;

task t0
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_653_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_783_a0_i());
		L0->SetNPCDescription(f_781_a0_i());
		L0->SetPhoto(f_785_a0_s());
		L0->SetPhoto2(f_787_a0_s());
		L0->SetPlayerName(f_770_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_697_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t1
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			f_84_a1_v("Neutral");
			tv0->SetMessage(520060);
			tv0->ClearReplies();
			tv0->AddReply(520061, -1, 21241);
			tv0->AddReply(520062, -1, 21242);
			break;
			return;
		}
		if (f_789_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6a8_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_84_a1_v(string a0)
	{
		if (!f_789_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6af_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6b5_a0_v();
			if (a1 == 21241) {
				f_73f_a2_v(tv1, tv0);
				f_749_a2_v(tv1, tv0);
			}
			if (a1 == 21242) {
				f_73f_a2_v(tv1, tv0);
				f_749_a2_v(tv1, tv0);
			}
			if (a0 == 21240) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(520060);
				tv0->ClearReplies();
				tv0->AddReply(520061, -1, 21241);
				tv0->AddReply(520062, -1, 21242);
				return;
			}
			tv3 = true;
			if (f_789_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t2
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_653_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_783_a0_i());
		L0->SetNPCDescription(f_781_a0_i());
		L0->SetPhoto(f_785_a0_s());
		L0->SetPhoto2(f_787_a0_s());
		L0->SetPlayerName(f_770_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_697_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t3
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			f_167_a1_v("Neutral");
			tv0->SetMessage(520064);
			tv0->ClearReplies();
			tv0->AddReply(520065, -1, 21245);
			tv0->AddReply(520066, -1, 21246);
			tv0->AddReply(520067, -1, 21247);
			break;
			return;
		}
		if (f_789_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6a8_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_167_a1_v(string a0)
	{
		if (!f_789_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6af_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6b5_a0_v();
			if (a0 == 21244) {
				f_167_a1_v("Neutral");
				tv0->SetMessage(520064);
				tv0->ClearReplies();
				tv0->AddReply(520065, -1, 21245);
				tv0->AddReply(520066, -1, 21246);
				tv0->AddReply(520067, -1, 21247);
				return;
			}
			tv3 = true;
			if (f_789_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t4
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_653_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_783_a0_i());
		L0->SetNPCDescription(f_781_a0_i());
		L0->SetPhoto(f_785_a0_s());
		L0->SetPhoto2(f_787_a0_s());
		L0->SetPlayerName(f_770_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_697_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t5
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			f_230_a1_v("Neutral");
			tv0->SetMessage(520069);
			tv0->ClearReplies();
			tv0->AddReply(520070, -1, 21250);
			tv0->AddReply(520071, -1, 21251);
			break;
			return;
		}
		if (f_789_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6a8_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_230_a1_v(string a0)
	{
		if (!f_789_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6af_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6b5_a0_v();
			if (a0 == 21249) {
				f_230_a1_v("Neutral");
				tv0->SetMessage(520069);
				tv0->ClearReplies();
				tv0->AddReply(520070, -1, 21250);
				tv0->AddReply(520071, -1, 21251);
				return;
			}
			tv3 = true;
			if (f_789_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t6
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_653_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_783_a0_i());
		L0->SetNPCDescription(f_781_a0_i());
		L0->SetPhoto(f_785_a0_s());
		L0->SetPhoto2(f_787_a0_s());
		L0->SetPlayerName(f_770_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_697_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t7
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			if (f_764_a1_b(tv1)) {
				f_739_a2_v(tv1, tv0);
				f_321_a1_v("Neutral");
				tv0->SetMessage(520073);
				tv0->ClearReplies();
				tv0->AddReply(520074, 21255, 21254);
				tv0->AddReply(520085, 21266, 21265);
				break;
			}
			f_321_a1_v("Neutral");
			tv0->SetMessage(520088);
			tv0->ClearReplies();
			if (f_74f_a1_b(tv1)) {
				tv0->AddReply(520089, -1, 21270);
			}
			tv0->AddReply(520090, 21272, 21271);
			tv0->AddReply(520092, 21274, 21273);
			tv0->AddReply(520095, -1, 21277);
			break;
			return;
		}
		if (f_789_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6a8_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_321_a1_v(string a0)
	{
		if (!f_789_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6af_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6b5_a0_v();
			if (a1 == 21270) {
				f_734_a2_v(tv1, tv0);
			}
			if (a0 == 21253) {
				if (f_764_a1_b(tv1)) {
					f_739_a2_v(tv1, tv0);
					f_321_a1_v("Neutral");
					tv0->SetMessage(520073);
					tv0->ClearReplies();
					tv0->AddReply(520074, 21255, 21254);
					tv0->AddReply(520085, 21266, 21265);
					return;
				}
				f_321_a1_v("Neutral");
				tv0->SetMessage(520088);
				tv0->ClearReplies();
				if (f_74f_a1_b(tv1)) {
					tv0->AddReply(520089, -1, 21270);
				}
				tv0->AddReply(520090, 21272, 21271);
				tv0->AddReply(520092, 21274, 21273);
				tv0->AddReply(520095, -1, 21277);
				return;
			}
			if (a0 == 21274) {
				f_321_a1_v("Neutral");
				tv0->SetMessage(520093);
				tv0->ClearReplies();
				tv0->AddReply(520094, 21272, 21275);
				return;
			}
			if (a0 == 21272) {
				f_321_a1_v("Neutral");
				tv0->SetMessage(520091);
				tv0->ClearReplies();
				tv0->AddReply(520096, -1, 21278);
				return;
			}
			if (a0 == 21266) {
				f_321_a1_v("Neutral");
				tv0->SetMessage(520086);
				tv0->ClearReplies();
				tv0->AddReply(520087, 21255, 21267);
				return;
			}
			if (a0 == 21255) {
				f_321_a1_v("Neutral");
				tv0->SetMessage(520075);
				tv0->ClearReplies();
				tv0->AddReply(520076, 21257, 21256);
				return;
			}
			if (a0 == 21257) {
				f_321_a1_v("Neutral");
				tv0->SetMessage(520077);
				tv0->ClearReplies();
				tv0->AddReply(520078, 21259, 21258);
				tv0->AddReply(520082, 21263, 21262);
				tv0->AddReply(520097, 21280, 21279);
				return;
			}
			if (a0 == 21280) {
				f_321_a1_v("Neutral");
				tv0->SetMessage(520098);
				tv0->ClearReplies();
				tv0->AddReply(520099, -1, 21281);
				return;
			}
			if (a0 == 21263) {
				f_321_a1_v("Neutral");
				tv0->SetMessage(520083);
				tv0->ClearReplies();
				tv0->AddReply(520084, -1, 21264);
				return;
			}
			if (a0 == 21259) {
				f_321_a1_v("Neutral");
				tv0->SetMessage(520079);
				tv0->ClearReplies();
				tv0->AddReply(520080, -1, 21260);
				tv0->AddReply(520081, -1, 21261);
				return;
			}
			tv3 = true;
			if (f_789_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t8
{
	var int tv0;

	void init(void)
	{
		tv0 = -1;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		if (tv0 == 0) {
			t2{a0};
			tv0 = -1;
		} else {
			if (tv0 == 1) {
				t0{a0};
				tv0 = -1;
			} else {
				if (t6{a0} == 1) {
					object L0;
					object L1;
					int L2;
					int L3;
					int L4;
					int L5;
					L0 = f_6f1_a0_o();
					@CreateIntVector(L1);
					a0->GetItemCount(L2, 4);
					@GetInvItemByName(L3, "rat");
					@GetInvItemByName(L4, "rat_big");
					for (L5 = 0; L5 < L2; L5++) {
						object L6;
						int L7;
						a0->GetItem(L6, L5, 4);
						L6->GetItemID(L7);
						if (L7 == L3 || L7 == L4) {
							L0->add(L6);
							L1->add(L5);
						}
					}
					L0->size(L2);
					if (L2) {
						int L8;
						if (L2 == 1) {
							L8 = 0;
						} else {
							object L9;
							@CreateIntVector(L9);
							@ChooseItem(L0, L9);
							L9->size(L2);
							if (L2) {
								L9->get(L8, 0);
							} else {
								return;
							}
						}
						object L10;
						L0->get(L10, L8);
						int L11;
						L1->get(L11, L8);
						a0->RemoveItem(L11, 1, 4);
						float L12;
						L10->GetProperty(L12, "quality");
						int L13;
						L10->GetItemID(L13);
						f_4b2_a2_v(L13 == L4 ? "pers_rat_big" : "pers_rat", L12);
					}
				}
			}
		}
	}

	void f_4b2_a2_v(string a0, float a1)
	{
		tv0 = t9{a0, a1};
		if (!f_64e_a0_b()) {
			tv0 = -1;
		} else {
			if (tv0 == 1) {
				@Trace("You've won a rat race");
			} else {
				if (tv0 == 0) {
					@Trace("Looser!");
				}
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "race_begin") {
			f_4b2_a2_v("pers_rat_big", 1.0);
		}
	}

	void OnUnload(void)
	{
		tv0 = -1;
	}
}

task t9
{
	var bool tv0;
	var int tv1;
	var int tv2;

	int init(string a0, float a1)
	{
		int L0;
		tv1 = 0;
		f_4f5_a2_v(a0, a1);
		do {
			@Hold();
		} while (!tv0);
		for (L0 = 0; L0 < 6; L0++) {
			f_631_a2_v(L0, false);
		}
		return tv2;
	}

	void f_4f5_a2_v(string a0, float a1)
	{
		object L0;
		@CreateIntVector(L0);
		object L1;
		@CreateIntVector(L1);
		object L2;
		@CreateIntVector(L2);
		int L3;
		int L4;
		int L5;
		for (; ; ) {
			L3 = f_5df_a1_i(L0);
			if (L3 > 72) {
				continue;
			}
			L4 = f_5df_a1_i(L1);
			if (L4 > 72) {
				continue;
			}
			L5 = f_5df_a1_i(L2);
			if (L5 > 72) {
				continue;
			}
			if (L3 != L4 && L3 != L5 && L4 != L5) {
				break;
			}
		}
		int L6;
		if (f_6ec_a1_b(0.10000000149011612 + a1 * 0.4000000059604645)) {
			L6 = f_6bc_a3_i(L3, L4, L5);
			@Trace("winner");
		} else {
			L6 = f_6cb_a3_i(L3, L4, L5);
			@Trace("looser");
		}
		if (L6 == 1) {
			object L7;
			L7 = L0;
			L0 = L1;
			L1 = L7;
		} else {
			if (L6 == 2) {
				object L8;
				L8 = L0;
				L0 = L2;
				L2 = L8;
			}
		}
		object L9;
		@GetScene(L9);
		object L10;
		L10 = f_6fc_a4_o(L9, "pt_rat1", a0, "rat_race.xml");
		L10->SetScriptProperty("Index", 1);
		L10->SetScriptProperty("Race", L0);
		L10 = f_6fc_a4_o(L9, "pt_rat2", "pers_rat", "rat_race.xml");
		L10->SetScriptProperty("Index", 2);
		L10->SetScriptProperty("Race", L1);
		L10 = f_6fc_a4_o(L9, "pt_rat3", "pers_rat", "rat_race.xml");
		L10->SetScriptProperty("Index", 3);
		L10->SetScriptProperty("Race", L2);
		int L11;
		for (L11 = 0; L11 < 6; L11++) {
			f_631_a2_v(L11, true);
		}
	}

	void OnUse(object a0)
	{
		t4{a0};
	}

	void OnTrigger(string a0)
	{
		if (a0 == "race_over1") {
			f_631_a2_v(3, false);
			tv1 = tv1 + 1;
			if (tv1 == 1) {
				tv2 = 1;
			} else {
				if (tv1 == 3) {
					tv0 = true;
					@StopGroup0();
				}
			}
		} else {
			if (a0 == "race_over2") {
				f_631_a2_v(4, false);
				tv1 = tv1 + 1;
				if (tv1 == 1) {
					tv2 = 0;
				} else {
					if (tv1 == 3) {
						tv0 = true;
						@StopGroup0();
					}
				}
			} else {
				if (a0 == "race_over3") {
					f_631_a2_v(5, false);
					tv1 = tv1 + 1;
					if (tv1 == 1) {
						tv2 = 0;
					} else {
						if (tv1 == 3) {
							tv0 = true;
							@StopGroup0();
						}
					}
				}
			}
		}
	}

	int f_5df_a1_i(object a0)
	{
		int L0;
		int L1;
		bool L2;
		bool L3;
		L0 = 0;
		L1 = 0;
		L2 = true;
		L3 = false;
		for (; ; ) {
			int L4;
			if (L2 || !L0) {
				@irand(L4, 3);
				L4 = L4 + 1;
			} else {
				if (f_6ec_a1_b(0.6666666865348816)) {
					@irand(L4, 3);
					L4 = L4 + 1;
				} else {
					if (!L3 && f_6ec_a1_b(0.5)) {
						L4 = 0;
					} else {
						@irand(L4, 2);
						L4 = -(L4 + 1);
						if (L0 + L4 < 0) {
							continue;
						}
					}
				}
			}
			L0 = L0 + L4;
			if (L0 >= 12) {
				L1 = L1 + (L4 - (L0 - 12));
				break;
			} else {
				L1 = L1 + (L4 ? f_6e4_a1_i(L4) : 1);
				a0->add(L0);
				L3 = L4 == 0;
				L2 = L4 < 0;
			}
		}
		return L1;
	}

	void f_631_a2_v(int a0, bool a1)
	{
		object L0;
		@FindActor(L0, "rats_track_door" + (a0 + 1));
		if (a1) {
			L0->Open(false);
		} else {
			L0->Close();
		}
	}

	void OnUnload(void)
	{
		tv2 = -1;
		tv0 = true;
		@StopGroup0();
	}
}

void f_647_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_64e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_653_a2_b(object a0, float a1)
{
	float L0;
	Vector L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	Vector L6;
	bool L7;
	a0->GetPosition(L1);
	a0->GetEyesHeight(L0);
	L1.y += L0;
	@GetPosition(L2);
	@GetEyesHeight(L0);
	L2.y += L0;
	L3 = L1 - L2;
	L3.y = 0;
	L3 = L3 / sqrt(L3 | L3);
	L4 = -L3;
	L5 = L3 * a1 + f_6da_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_789_a0_b()) {
	} else {
		bool L8;
		@HasAnimationTrack(L8, "head");
		if (L8) {
			@LookAsyncCamera("head");
		}
	}
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_697_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_789_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_6a8_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_6af_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_6b5_a0_v(void)
{
	if (f_789_a0_b()) {
		@lshStopSpeech();
	}
}

int f_6bc_a3_i(int a0, int a1, int a2)
{
	if (a0 < a1) {
		return a0 < a2 ? 0 : 2;
	}
	return a1 < a2 ? 1 : 2;
}

int f_6cb_a3_i(int a0, int a1, int a2)
{
	if (a0 > a1) {
		return a0 > a2 ? 0 : 2;
	}
	return a1 > a2 ? 1 : 2;
}

Vector f_6da_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_6e4_a1_i(int a0)
{
	return a0 < 0 ? -a0 : a0;
}

bool f_6ec_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

object f_6f1_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

int f_6f7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_6fc_a4_o(object a0, string a1, string a2, string a3)
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

void f_70e_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_71a_a2_v(object a0, int a1)
{
	f_647_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_70e_a2_v(L0, a1);
	}
}

bool f_72d_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

void f_734_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1);
}

void f_739_a2_v(object a0, object a1)
{
	@SetVariable("ooRatsManager1", 1);
}

void f_73f_a2_v(object a0, object a1)
{
	@Trace("money500 is given");
	f_71a_a2_v(a0, 500);
}

void f_749_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

bool f_74f_a1_b(object a0)
{
	if (f_72d_a2_b(a0, "rat") || f_72d_a2_b(a0, "rat_big")) {
		return true;
	}
	return false;
}

bool f_764_a1_b(object a0)
{
	if (f_6f7_a1_i("ooRatsManager1") == 0) {
		return true;
	}
	return false;
}

int f_770_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	if (L0 == 0) {
		return 1;
	} else {
		if (L0 == 1) {
			return 2;
		}
	}
	return 3;
}

int f_781_a0_i(void)
{
	return 518097;
}

int f_783_a0_i(void)
{
	return 518096;
}

string f_785_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_787_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_789_a0_b(void)
{
	return false;
}

