event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

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
		if (!f_7c3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_954_a0_i());
		L0->SetNPCDescription(f_952_a0_i());
		L0->SetPhoto(f_956_a0_s());
		L0->SetPhoto2(f_958_a0_s());
		L0->SetPlayerName(f_a4c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_81a_a1_b(f_8d9_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_808_a1_v(a0);
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
			f_8b_a1_v("Neutral");
			tv0->SetMessage(525522);
			tv0->ClearReplies();
			tv0->AddReply(525523, 30733, 26879);
			tv0->AddReply(529279, 30734, 30732);
			break;
			return;
		}
		if (f_95a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a4_a1_v(tv2);
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

	void f_8b_a1_v(string a0)
	{
		if (!f_95a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8d2_a0_v();
			if (a0 == 26878) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(525522);
				tv0->ClearReplies();
				tv0->AddReply(525523, 30733, 26879);
				tv0->AddReply(529279, 30734, 30732);
				return;
			}
			if (a0 == 30734) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(529281);
				tv0->ClearReplies();
				tv0->AddReply(529283, -1, 30736);
				return;
			}
			if (a0 == 30733) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(529280);
				tv0->ClearReplies();
				tv0->AddReply(529282, -1, 30735);
				return;
			}
			tv3 = true;
			if (f_95a_a0_b()) {
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
		if (!f_7c3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_954_a0_i());
		L0->SetNPCDescription(f_952_a0_i());
		L0->SetPhoto(f_956_a0_s());
		L0->SetPhoto2(f_958_a0_s());
		L0->SetPlayerName(f_a4c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_81a_a1_b(f_8d9_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_808_a1_v(a0);
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
			f_18e_a1_v("Neutral");
			tv0->SetMessage(525900);
			tv0->ClearReplies();
			if (f_9b3_a1_b(tv1)) {
				tv0->AddReply(525901, 42962, 27193);
			}
			if (f_9bf_a1_b(tv1)) {
				tv0->AddReply(525924, 30559, 27216);
			}
			tv0->AddReply(525904, -1, 27196);
			tv0->AddReply(529107, -1, 30552);
			break;
			return;
		}
		if (f_95a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a4_a1_v(tv2);
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

	void f_18e_a1_v(string a0)
	{
		if (!f_95a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8d2_a0_v();
			if (a1 == 27195) {
				f_95c_a2_v(tv1, tv0);
				f_9a3_a2_v(tv1, tv0);
				f_998_a2_v(tv1, tv0);
			}
			if (a1 == 42977) {
				f_95c_a2_v(tv1, tv0);
				f_998_a2_v(tv1, tv0);
			}
			if (a1 == 27221) {
				f_978_a2_v(tv1, tv0);
			}
			if (a1 == 42988) {
				f_978_a2_v(tv1, tv0);
			}
			if (a1 == 42994) {
				f_978_a2_v(tv1, tv0);
			}
			if (a1 == 27223) {
				f_978_a2_v(tv1, tv0);
				f_992_a2_v(tv1, tv0);
				f_981_a2_v(tv1, tv0);
			}
			if (a0 == 27192) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(525900);
				tv0->ClearReplies();
				if (f_9b3_a1_b(tv1)) {
					tv0->AddReply(525901, 42962, 27193);
				}
				if (f_9bf_a1_b(tv1)) {
					tv0->AddReply(525924, 30559, 27216);
				}
				tv0->AddReply(525904, -1, 27196);
				tv0->AddReply(529107, -1, 30552);
				return;
			}
			if (a0 == 30559) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(529114);
				tv0->ClearReplies();
				tv0->AddReply(529115, 27217, 30560);
				return;
			}
			if (a0 == 27217) {
				f_18e_a1_v("Autizm");
				tv0->SetMessage(525925);
				tv0->ClearReplies();
				tv0->AddReply(525926, 27220, 27218);
				tv0->AddReply(525927, 27222, 27219);
				return;
			}
			if (a0 == 27222) {
				f_18e_a1_v("Drunk");
				tv0->SetMessage(525930);
				tv0->ClearReplies();
				tv0->AddReply(540904, 42980, 42979);
				tv0->AddReply(525931, -1, 27223);
				return;
			}
			if (a0 == 42980) {
				f_18e_a1_v("Drunk");
				tv0->SetMessage(540905);
				tv0->ClearReplies();
				tv0->AddReply(540906, 42982, 42981);
				tv0->AddReply(540914, 42982, 42990);
				return;
			}
			if (a0 == 42982) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(540907);
				tv0->ClearReplies();
				tv0->AddReply(540908, 42984, 42983);
				tv0->AddReply(540915, 42987, 42992);
				return;
			}
			if (a0 == 42984) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(540909);
				tv0->ClearReplies();
				tv0->AddReply(540910, 42987, 42985);
				tv0->AddReply(540911, 42987, 42986);
				return;
			}
			if (a0 == 42987) {
				f_18e_a1_v("Autizm");
				tv0->SetMessage(540912);
				tv0->ClearReplies();
				tv0->AddReply(540913, -1, 42988);
				tv0->AddReply(540916, -1, 42994);
				return;
			}
			if (a0 == 27220) {
				f_18e_a1_v("Autizm");
				tv0->SetMessage(525928);
				tv0->ClearReplies();
				tv0->AddReply(529116, 30562, 30561);
				return;
			}
			if (a0 == 30562) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(529117);
				tv0->ClearReplies();
				tv0->AddReply(525929, -1, 27221);
				return;
			}
			if (a0 == 42962) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(540891);
				tv0->ClearReplies();
				tv0->AddReply(540892, 30553, 42963);
				return;
			}
			if (a0 == 30553) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(529108);
				tv0->ClearReplies();
				tv0->AddReply(529109, 30555, 30554);
				tv0->AddReply(540893, 42965, 42964);
				return;
			}
			if (a0 == 42965) {
				f_18e_a1_v("Untrust");
				tv0->SetMessage(540894);
				tv0->ClearReplies();
				tv0->AddReply(540895, 27194, 42966);
				tv0->AddReply(540900, 27194, 42973);
				return;
			}
			if (a0 == 30555) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(529110);
				tv0->ClearReplies();
				tv0->AddReply(529111, 30557, 30556);
				tv0->AddReply(540899, 42965, 42971);
				return;
			}
			if (a0 == 30557) {
				f_18e_a1_v("Untrust");
				tv0->SetMessage(529112);
				tv0->ClearReplies();
				tv0->AddReply(529113, 27194, 30558);
				tv0->AddReply(540898, 42969, 42970);
				return;
			}
			if (a0 == 27194) {
				f_18e_a1_v("Drunk");
				tv0->SetMessage(525902);
				tv0->ClearReplies();
				tv0->AddReply(540896, 42969, 42968);
				tv0->AddReply(541554, 42969, 43721);
				return;
			}
			if (a0 == 42969) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(540897);
				tv0->ClearReplies();
				tv0->AddReply(525903, -1, 27195);
				tv0->AddReply(540901, 42976, 42975);
				return;
			}
			if (a0 == 42976) {
				f_18e_a1_v("Untrust");
				tv0->SetMessage(540902);
				tv0->ClearReplies();
				tv0->AddReply(540903, -1, 42977);
				return;
			}
			tv3 = true;
			if (f_95a_a0_b()) {
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
		if (!f_7c3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_954_a0_i());
		L0->SetNPCDescription(f_952_a0_i());
		L0->SetPhoto(f_956_a0_s());
		L0->SetPhoto2(f_958_a0_s());
		L0->SetPlayerName(f_a4c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_81a_a1_b(f_8d9_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_808_a1_v(a0);
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
			f_42e_a1_v("Neutral");
			tv0->SetMessage(528042);
			tv0->ClearReplies();
			if (f_9cb_a1_b(tv1)) {
				tv0->AddReply(528043, 29406, 29405);
			}
			tv0->AddReply(528046, -1, 29408);
			tv0->AddReply(541057, -1, 43161);
			break;
			return;
		}
		if (f_95a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a4_a1_v(tv2);
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

	void f_42e_a1_v(string a0)
	{
		if (!f_95a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8d2_a0_v();
			if (a1 == 29405) {
				f_98c_a2_v(tv1, tv0);
			}
			if (a0 == 29404) {
				f_42e_a1_v("Neutral");
				tv0->SetMessage(528042);
				tv0->ClearReplies();
				if (f_9cb_a1_b(tv1)) {
					tv0->AddReply(528043, 29406, 29405);
				}
				tv0->AddReply(528046, -1, 29408);
				tv0->AddReply(541057, -1, 43161);
				return;
			}
			if (a0 == 29406) {
				f_42e_a1_v("Untrust");
				tv0->SetMessage(528044);
				tv0->ClearReplies();
				tv0->AddReply(528045, 43162, 29407);
				tv0->AddReply(541060, 43165, 43164);
				return;
			}
			if (a0 == 43165) {
				f_42e_a1_v("Drunk");
				tv0->SetMessage(541061);
				tv0->ClearReplies();
				tv0->AddReply(541062, 43167, 43166);
				return;
			}
			if (a0 == 43167) {
				f_42e_a1_v("Drunk");
				tv0->SetMessage(541063);
				tv0->ClearReplies();
				tv0->AddReply(541064, -1, 43168);
				tv0->AddReply(541065, -1, 43169);
				return;
			}
			if (a0 == 43162) {
				f_42e_a1_v("Neutral");
				tv0->SetMessage(541058);
				tv0->ClearReplies();
				tv0->AddReply(541059, 43165, 43163);
				return;
			}
			tv3 = true;
			if (f_95a_a0_b()) {
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
		if (!f_7c3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_954_a0_i());
		L0->SetNPCDescription(f_952_a0_i());
		L0->SetPhoto(f_956_a0_s());
		L0->SetPhoto2(f_958_a0_s());
		L0->SetPlayerName(f_a4c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_81a_a1_b(f_8d9_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_808_a1_v(a0);
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
			f_562_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_95a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a4_a1_v(tv2);
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

	void f_562_a1_v(string a0)
	{
		if (!f_95a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8d2_a0_v();
			if (a0 == 36906) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_95a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t8
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_7c3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_954_a0_i());
		L0->SetNPCDescription(f_952_a0_i());
		L0->SetPhoto(f_956_a0_s());
		L0->SetPhoto2(f_958_a0_s());
		L0->SetPlayerName(f_a4c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_81a_a1_b(f_8d9_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_808_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t9
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
			f_660_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_95a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a4_a1_v(tv2);
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

	void f_660_a1_v(string a0)
	{
		if (!f_95a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8d2_a0_v();
			if (a0 == 42554) {
				f_660_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_95a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t10
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_6a7_a0_v();
	}

	void f_6a7_a0_v(void)
	{
		if (!f_7be_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_757_a0_v();
		}
	}

	bool f_6b5_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_7b5_a1_b(L0);
	}

	void f_6c4_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_6c9_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_7a3_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_6df_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_6e8_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_6e8_a0_v();
			if (f_7be_a0_b() && f_6c9_a0_b()) {
				if (f_6b5_a0_b()) {
					f_854_a1_b(f_8d9_a0_o());
				}
			} else {
				f_6c4_a0_v();
				f_6df_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_79e_a0_v();
		f_6e8_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_6e8_a0_v();
		f_8a4_a1_v("Neutral");
		f_6df_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_6df_a0_v();
		} else {
			f_8a4_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_79e_a0_v();
			f_7b5_a1_b(a0);
			enable OnUse;
			f_a5d_a1_v(a0);
			f_8a4_a1_v("Neutral");
			f_6e8_a0_v();
			f_6df_a0_v();
		}
	}
}

void f_757_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_7be_a0_b()) {
		return;
	}
	L0 = f_941_a0_i();
	for (L1 = 0; L1 < 5 && f_7be_a0_b(); L1++) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_93a_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_79c_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_79c_a0_b(void)
{
	return true;
}

void f_79e_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_7a3_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_7ab_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_7b5_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_7ab_a1_b(L0);
}

bool f_7be_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_7c3_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_8df_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_95a_a0_b()) {
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

void f_808_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_95a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_81a_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_854_a1_b(a0)) {
			if (!f_879_a1_b(a0)) {
				return false;
			}
		}
		@irand(L1, 2);
		if (L1) {
			@SetVariable("voice_common", (L0 + 1) % 3);
		} else {
			@SetVariable("voice_common", 0);
		}
	} else {
		if (!f_879_a1_b(a0)) {
			if (!f_854_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_854_a1_b(object a0)
{
	string L0;
	L0 = "c";
	int L1;
	L1 = 0;
	while (1) {
		bool L2;
		a0->HasProperty(L0 + (L1 + 1), L2);
		if (!L2) {
			break;
		}
		L1 = L1 + 1;
	}
	if (!L1) {
		return false;
	}
	int L3;
	L3 = 0;
	if (L1 > 1) {
		@irand(L3, L1);
	}
	string L4;
	a0->GetProperty(L0 + (L3 + 1), L4);
	return f_8c3_a1_b(L4);
}

bool f_879_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_92b_a0_i() + "m";
	int L1;
	L1 = 0;
	while (1) {
		bool L2;
		a0->HasProperty(L0 + (L1 + 1), L2);
		if (!L2) {
			break;
		}
		L1 = L1 + 1;
	}
	if (!L1) {
		return false;
	}
	int L3;
	L3 = 0;
	if (L1 > 1) {
		@irand(L3, L1);
	}
	string L4;
	a0->GetProperty(L0 + (L3 + 1), L4);
	return f_8c3_a1_b(L4);
}

void f_8a4_a1_v(string a0)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, false);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_8b4_a2_v(string a0, bool a1)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, a1);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

bool f_8c3_a1_b(string a0)
{
	if (f_95a_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_8d2_a0_v(void)
{
	if (f_95a_a0_b()) {
		@lshStopSpeech();
	}
}

object f_8d9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_8df_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_8e9_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_8ee_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_8fa_a3_v(object a0, object a1, int a2)
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
		f_8ee_a2_v(L0, a2);
	}
}

void f_90d_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_8fa_a3_v(a0, L0, a2);
}

bool f_91a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_926_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_92b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_934_a1_b(int a0)
{
	return f_92b_a0_i() == a0;
}

string f_93a_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_941_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_93a_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_952_a0_i(void)
{
	return 515550;
}

int f_954_a0_i(void)
{
	return 502875;
}

string f_956_a0_s(void)
{
	return "ui/NPC_Petr.png";
}

string f_958_a0_s(void)
{
	return "ui/NPC_Petr_b.png";
}

bool f_95a_a0_b(void)
{
	return true;
}

void f_95c_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k5q02", 2);
	L0 = f_a1a_a0_o();
	L0->AddMark("k5q02PetrGotoAndrei", "pt_map_andrei", 0, 515295, f_926_a0_f());
	f_9d7_a0_v();
	f_91a_a2_b("quest_k5_02", "init_kabak");
}

void f_978_a2_v(object a0, object a1)
{
	@SetVariable("k5q02", 6);
	f_9e4_a0_v();
}

void f_981_a2_v(object a0, object a1)
{
	@Trace("tvirin 5 is given");
	f_90d_a3_v(a0, "tvirin", 5);
}

void f_98c_a2_v(object a0, object a1)
{
	@SetVariable("ook11Petr1", 1);
}

void f_992_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_998_a2_v(object a0, object a1)
{
	@Trace("tvirin is given");
	f_90d_a3_v(a0, "tvirin", 1);
}

void f_9a3_a2_v(object a0, object a1)
{
	f_a2b_a3_v(f_a1a_a0_o(), "pt_map_andrei", 2);
	a1->ShowMap(f_a1a_a0_o());
}

bool f_9b3_a1_b(object a0)
{
	if (f_8e9_a1_i("k5q02") == 1) {
		return true;
	}
	return false;
}

bool f_9bf_a1_b(object a0)
{
	if (f_8e9_a1_i("k5q02") == 5) {
		return true;
	}
	return false;
}

bool f_9cb_a1_b(object a0)
{
	if (f_8e9_a1_i("ook11Petr1") == 0) {
		return true;
	}
	return false;
}

void f_9d7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 399, 2, 525937);
	f_9fe_a2_b(L0, 397);
}

void f_9e4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 403, 2, 525941);
	f_9fe_a2_b(L0, 397);
}

object f_9f1_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_9fe_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_9f1_a0_o();
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

object f_a1a_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

void f_a2b_a3_v(object a0, string a1, float a2)
{
	Vector L0;
	Vector L1;
	object L2;
	bool L3;
	@GetMainOutdoorScene(L2);
	if (L2 == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	L2->GetLocator(a1, L3, L0, L1);
	if (!L3) {
		@Trace("Warning: outdoor scene locator " + a1 + " doesnt exist");
	}
	L2->GetMap(a0);
	if (a0 == null) {
		@Trace("Can't find map");
		return;
	}
	a0->SetMapParams(L0.x, L0.z, a2);
}

int f_a4c_a0_i(void)
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

void f_a5d_a1_v(object a0)
{
	if (!g1) {
		t0{a0};
		g1 = true;
	}
	if (f_934_a1_b(5)) {
		t2{a0};
		return;
	}
	if (f_934_a1_b(11)) {
		t4{a0};
		return;
	}
	if (f_934_a1_b(12)) {
		t6{a0};
		return;
	}
	t8{a0};
}

