event OnDialogReply 11;
event OnUse 0;
event OnUnload 6;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnTrigger 26;
event OnSee 1;
event OnHear 3;
event OnTimer 7;
event OnCollision 10;
event OnActorStuck 28;
event OnStopSee 2;
event OnHit2 43;

var bool g0;

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
		if (!f_ae7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e62_a0_i());
		L0->SetNPCDescription(f_e60_a0_i());
		L0->SetPhoto(f_e64_a0_s());
		L0->SetPhoto2(f_e66_a0_s());
		L0->SetPlayerName(f_c42_a0_i());
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
		f_b2c_a1_v(a0);
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
			if (f_c36_a1_b(tv1)) {
				f_c30_a2_v(tv1, tv0);
				f_a2_a1_v("Neutral");
				tv0->SetMessage(532742);
				tv0->ClearReplies();
				tv0->AddReply(532995, 34793, 34495);
				tv0->AddReply(533000, 34496, 34500);
				break;
			}
			f_a2_a1_v("Neutral");
			tv0->SetMessage(532746);
			tv0->ClearReplies();
			tv0->AddReply(532747, -1, 34221);
			tv0->AddReply(532997, -1, 34497);
			break;
			return;
		}
		if (f_e68_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b3e_a1_v(tv2);
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

	void f_a2_a1_v(string a0)
	{
		if (!f_e68_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b4e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_b68_a0_v();
			if (a0 == 34216) {
				if (f_c36_a1_b(tv1)) {
					f_c30_a2_v(tv1, tv0);
					f_a2_a1_v("Neutral");
					tv0->SetMessage(532742);
					tv0->ClearReplies();
					tv0->AddReply(532995, 34793, 34495);
					tv0->AddReply(533000, 34496, 34500);
					return;
				}
				f_a2_a1_v("Neutral");
				tv0->SetMessage(532746);
				tv0->ClearReplies();
				tv0->AddReply(532747, -1, 34221);
				tv0->AddReply(532997, -1, 34497);
				return;
			}
			if (a0 == 34793) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533285);
				tv0->ClearReplies();
				tv0->AddReply(533286, 34496, 34794);
				tv0->AddReply(533287, 34796, 34795);
				return;
			}
			if (a0 == 34796) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533288);
				tv0->ClearReplies();
				tv0->AddReply(533293, 34798, 34802);
				tv0->AddReply(533294, 34496, 34803);
				return;
			}
			if (a0 == 34496) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(532996);
				tv0->ClearReplies();
				tv0->AddReply(533001, 34503, 34502);
				tv0->AddReply(533003, 34503, 34504);
				return;
			}
			if (a0 == 34503) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533002);
				tv0->ClearReplies();
				tv0->AddReply(532998, 34499, 34498);
				tv0->AddReply(533005, 34508, 34507);
				return;
			}
			if (a0 == 34508) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533006);
				tv0->ClearReplies();
				tv0->AddReply(533007, 34499, 34509);
				return;
			}
			if (a0 == 34499) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(532999);
				tv0->ClearReplies();
				tv0->AddReply(533295, 34807, 34806);
				tv0->AddReply(533369, 34869, 34868);
				return;
			}
			if (a0 == 34869) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533370);
				tv0->ClearReplies();
				tv0->AddReply(533371, 34807, 34870);
				tv0->AddReply(533372, -1, 34871);
				return;
			}
			if (a0 == 34807) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533296);
				tv0->ClearReplies();
				tv0->AddReply(532743, 34218, 34217);
				return;
			}
			if (a0 == 34218) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(532744);
				tv0->ClearReplies();
				tv0->AddReply(533289, 34798, 34797);
				tv0->AddReply(533291, 34798, 34799);
				return;
			}
			if (a0 == 34798) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533290);
				tv0->ClearReplies();
				tv0->AddReply(532745, -1, 34219);
				tv0->AddReply(533292, -1, 34801);
				return;
			}
			tv3 = true;
			if (f_e68_a0_b()) {
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
	void init(object a0)
	{
		disable OnUse;
		f_1fd_a1_v(a0);
		f_e89_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_e28_a1_i(a0);
		if (L0 > 0) {
			f_e2b_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_e31_a0_v();
	}

	void f_1fd_a1_v(object a0)
	{
		if (a0 == null) {
			f_258_a1_v("fdie");
		} else {
			Vector L0;
			a0->GetPosition(L0);
			Vector L1;
			@GetPosition(L1);
			Vector L2;
			@GetDirection(L2);
			Vector L3;
			L3 = L1 - L0;
			string L4;
			if (L3.x * L2.x + L3.z * L2.z >= 0) {
				L4 = "fdie";
			} else {
				L4 = "bdie";
			}
			@RemoveRTEnvelope();
			@SetDeathState();
			@Stop();
			@StopAsync();
			object L5;
			L5 = a0;
			if (a0->FuncExist("GetScriptProperty", 2)) {
				bool L6;
				a0->HasScriptProperty(L6, "Owner");
				if (L6) {
					a0->GetScriptProperty(L5, "Owner");
					if (L5 == null) {
						L5 = a0;
					}
				}
			}
			bool L7;
			if (L5->FuncExist("@GetEyesHeight", 1)) {
				float L8;
				Vector L9;
				L5->GetEyesHeight(L8);
				L9 = [0.0, 0.0, 0.0];
				L9.y = L8;
				@LookAsync(a0, "head", L9);
				L7 = true;
			} else {
				L7 = false;
			}
			f_b89_a1_v(L4);
			@PlayAnimation("all", L4);
			@WaitForAnimEnd();
			if (L7) {
				@StopAsync();
				@UnlookAsync("head");
			}
			@LockAnimationEnd("all", L4);
			@RemoveEnvelope();
		}
	}

	void f_258_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_b89_a1_v(a0);
		@PlayAnimation("all", a0);
		@WaitForAnimEnd();
		@LockAnimationEnd("all", a0);
		@RemoveEnvelope();
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
	}

	void OnPropertyChange(object a0, string a1)
	{
	}

	void OnDeath(object a0)
	{
	}
}

maintask t3
{
	var bool tv0;
	var bool tv1;
	var bool tv2;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_e6a_a0_v();
		f_287_a0_v();
		for (; ; ) {
			tv2 = false;
			f_38c_a0_v();
		}
	}

	void f_287_a0_v(void)
	{
		if (!f_ae2_a0_b()) {
			f_e31_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_e28_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_34b_a0_v();
			}
			f_e2b_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_db6_a1_v(a0);
		L0 = f_e09_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_34b_a0_v();
			}
			f_e13_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_e86_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_e1b_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_34b_a0_v();
				}
				f_e22_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_e56_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_34b_a0_v();
			}
			f_e59_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_d60_a2_b(a0, a1)) {
			f_34b_a0_v();
			f_d80_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_e32_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_34b_a0_v();
				}
				f_e35_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_dc3_a1_b(a0)) {
			f_34b_a0_v();
			f_dd3_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_d99_a1_b(a0)) {
			f_34b_a0_v();
			f_db0_a1_v(a0);
		} else {
			f_364_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_364_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 != 110) {
			return;
		}
		tv2 = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(void)
	{
		f_34b_a0_v();
		f_e31_a0_v();
	}

	void f_34b_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_3d3_a0_v();
	}

	void f_353_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_3da_a0_v();
	}

	void OnDeath(object a0)
	{
		f_34b_a0_v();
		global.OnDeath(a0);
	}

	void f_364_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_a41_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_df8_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_353_a0_v();
			}
			f_e01_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_38c_a0_v(void)
	{
		float L0;
		tv0 = false;
		tv1 = false;
		@rand(L0, 0.5);
		@Sleep(L0);
		while (!tv0) {
			Vector L1;
			if (!tv1) {
				for (; ; ) {
					Vector L2;
					bool L3;
					@GetPosition(L2);
					@GetRandomPFPointInCircle(L1, L2, f_3c7_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_3e3_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_3e1_a0_b(), L5);
					L4 = null;
					if (L5) {
						t4{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_3c7_a0_f(void)
	{
		float L0;
		@GetCameraFarDistance(L0);
		return L0;
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_3d3_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_3da_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_3e1_a0_b(void)
	{
		return false;
	}

	object f_3e3_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t4
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_e28_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4de_a0_v();
			}
			f_e2b_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_db6_a1_v(a0);
		L0 = f_e09_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4de_a0_v();
			}
			f_e13_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_e86_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_e1b_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_4de_a0_v();
				}
				f_e22_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_e56_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4de_a0_v();
			}
			f_e59_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_d60_a2_b(a0, a1)) {
			f_4de_a0_v();
			f_d80_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_e32_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_4de_a0_v();
				}
				f_e35_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_dc3_a1_b(a0)) {
			f_4de_a0_v();
			f_dd3_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_4de_a0_v();
		f_e31_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_d99_a1_b(a0)) {
			f_4de_a0_v();
			f_db0_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_ae2_a0_b()) {
			return;
		}
		L0 = f_de7_a0_i();
		for (L1 = 0; L1 < 5 && f_ae2_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_de0_a1_s(L3));
					@WaitForAnimEnd(L4);
					if (!L4) {
						break;
					}
				}
			} else {
				if (L2 == 1) {
					float L5;
					bool L6;
					@rand(L5, 4);
					@Sleep(L5 + 1, L6);
					if (!L6) {
						break;
					}
				} else {
					if (L1) {
						break;
					}
				}
			}
			if (!f_4dc_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_4dc_a0_b(void)
	{
		return true;
	}

	void f_4de_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t5
{
	var object tv0;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		bool L2;
		tv0 = a0;
		f_516_a0_v();
		@GetDirection(L0);
		L1 = f_9af_a1_V(tv0);
		if (f_bec_a2_f(L0, L1) < 0) {
			f_ad7_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_ad7_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_516_a0_v(void)
	{
		f_b5d_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_e28_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_5aa_a0_v();
			}
			f_e2b_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_db6_a1_v(a0);
		L0 = f_e09_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_5aa_a0_v();
			}
			f_e13_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_e86_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_e1b_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_5aa_a0_v();
				}
				f_e22_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_e56_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_5aa_a0_v();
			}
			f_e59_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_d60_a2_b(a0, a1)) {
			f_5aa_a0_v();
			f_d80_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_e32_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_5aa_a0_v();
				}
				f_e35_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_dc3_a1_b(a0)) {
			f_5aa_a0_v();
			f_dd3_a1_v(a0);
		}
	}

	void f_5aa_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_5aa_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_a41_a1_b(tv0)) {
			f_5aa_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_9af_a1_V(tv0);
		if (f_bec_a2_f(L0, L1) < 0.4999999701976776) {
			f_ad7_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_5aa_a0_v();
		f_e31_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_d99_a1_b(a0)) {
			f_5aa_a0_v();
			f_db0_a1_v(a0);
		}
	}
}

task t6
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(object a0)
	{
		f_604_a3_v(a0, true, 180.0);
	}

	float f_5fe_a2_f(object a0, int a1)
	{
		return 0.029999999329447746;
	}

	int f_601_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_604_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_6e9_a0_v();
		tv5 = 0;
		if (a0->FuncExist("@GetAttackDistance", 1)) {
			a0->GetAttackDistance(L0);
			L0 = L0 + 50;
		} else {
			L0 = a2;
		}
		if (L0 >= 150) {
			L0 = 150;
		}
		tv3 = false;
		tv0 = a0;
		@IsPlayerActor(tv0, L3);
		if (L3) {
			@PlayGlobalMusic("attack");
			@SendPlayerEnemy(a0, f_bb2_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_a41_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_886_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t7{tv0, L0, 3000.0, true, false}) {
					break;
				}
				L4 = false;
			} else {
				if (L7 >= a2 * a2) {
					Vector L8;
					bool L9;
					float L10;
					tv0->GetPFPosition(L8);
					@CanReachByPF(L9, L8);
					if (!L9) {
						if (!t7{tv0, L0, 3000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_ad7_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_886_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_a41_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_85b_a0_b()) {
						@Face(tv0);
						f_88d_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_7d7_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_886_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_85b_a0_b()) {
							if (!f_a41_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_733_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_733_a1_b(a2)) {
						break;
					}
					L4 = true;
				}
			}
		}
		@WaitForAnimEnd();
		if (tv3) {
			return;
		}
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if (L3) {
			@Sleep(2.0);
		}
	}

	void f_6e9_a0_v(void)
	{
		for (tv1 = 0; ; tv1++) {
			bool L0;
			@HasAnimation(L0, "all", "attack_begin" + (tv1 + 1));
			if (!L0) {
				break;
			}
		}
		for (tv2 = 0; ; tv2++) {
			bool L1;
			@IsExisting3DSound(L1, "attack" + (tv2 + 1));
			if (!L1) {
				break;
			}
		}
		Vector L2;
		@GetAnimationOffset(L2, "all", "bjump");
		tv4 = -L2.z;
	}

	void f_70c_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_5fe_a2_f(L0, a1);
			L2 = f_9cf_a3_f(L0, L1, f_601_a2_i(L0, a1));
			@ReportHit(tv0, f_88b_a0_i(), L2, L1);
			f_892_a2_v(L0, L2);
		}
	}

	bool f_733_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_886_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_c25_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_866_a0_v();
		if (!f_a41_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_70c_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_c25_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_886_a0_v();
			if (!f_a41_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_70c_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_c25_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_886_a0_v();
				if (!f_a41_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_70c_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_894_a0_b()) {
			f_7bc_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_7bc_a1_b(float a0)
	{
		float L0;
		@rand(L0);
		if (L0 < a0) {
			for (; ; ) {
				bool L1;
				@IsAnimationPlaying(L1);
				if (!L1) {
					break;
				}
				if (f_81e_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_886_a0_v();
		}
		return false;
	}

	bool f_7d7_a1_b(float a0)
	{
		for (; ; ) {
			bool L0;
			Vector L1;
			Vector L2;
			Vector L3;
			float L4;
			@IsAnimationPlaying(L0);
			if (!L0) {
				break;
			}
			if (f_81e_a0_b()) {
				return true;
			}
			if (!f_a41_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_733_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_886_a0_v();
		return false;
	}

	bool f_802_a0_b(void)
	{
		if (!f_a41_a1_b(tv0)) {
			return false;
		}
		if (f_85b_a0_b()) {
			Vector L0;
			Vector L1;
			Vector L2;
			float L3;
			float L4;
			tv0->GetPFPosition(L0);
			@GetPFPosition(L1);
			L2 = L0 - L1;
			L3 = L2 | L2;
			tv0->GetAttackDistance(L4);
			L4 = L4 + 50;
			return L3 <= L4 * L4;
		}
		return false;
	}

	bool f_81e_a0_b(void)
	{
		if (f_802_a0_b() && f_82e_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_82e_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_9af_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_886_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_802_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_85b_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_866_a0_v(void)
	{
		float L0;
		if (!tv2) {
			return;
		}
		if (tv5) {
			tv5 = tv5 + -1;
			if (tv5 > 0) {
				return;
			}
		}
		@rand(L0);
		if (L0 < f_898_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_896_a0_i();
		}
	}

	void f_886_a0_v(void)
	{
		f_c1c_a1_v(tv0);
	}

	int f_88b_a0_i(void)
	{
		return 0;
	}

	void f_88d_a0_v(void)
	{
		f_b89_a1_v("attack_stay");
	}

	void f_892_a2_v(object a0, float a1)
	{
	}

	bool f_894_a0_b(void)
	{
		return true;
	}

	int f_896_a0_i(void)
	{
		return 1;
	}

	float f_898_a0_f(void)
	{
		return 0.5;
	}
}

task t7
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_8e0_a0_v();
		f_e31_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_c1c_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_b5d_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_9be_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_bb2_a0_o());
		}
		L1 = f_90a_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_c1c_a1_v(tv1);
		} else {
			f_970_a1_v(a0);
		}
	}

	void f_8e0_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_986_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_b5d_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_90a_a5_b(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		tv0 = false;
		tv1 = a0;
		L1 = a4;
		for (; ; ) {
			object L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			if (!f_996_a1_b(a0)) {
				return false;
			}
			a0->GetPosition(L3);
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (a2 > 0 && L6 > a2 * a2) {
				@Stop();
				return false;
			}
			if (L6 > a1 * a1) {
				object L7;
				a0->GetPFPosition(L3);
				@FindPathTo(L7, L3);
				if (L7 != null) {
					L2 = L7;
					L7 = null;
				}
				if (L2 != null) {
					if (L1) {
						L1 = false;
						@RotatePath(L2, L0);
						if (!L0) {
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
					@FollowPath(L2, a3, L0, f_99d_a0_s(), f_99f_a0_s());
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						} else {
							continue;
						}
					} else {
						L2 = null;
					}
				} else {
					@KillTimer(0);
					@Sleep(0.5, L0);
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
				}
			} else {
				@KillTimer(0);
				break;
			}
		}
		return !tv0;
	}

	void f_970_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_996_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_986_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_8e0_a0_v();
		global.OnDeath(a0);
	}
}

bool f_996_a1_b(object a0)
{
	return f_a41_a1_b(a0);
}

string f_99d_a0_s(void)
{
	return "walk";
}

string f_99f_a0_s(void)
{
	return "run";
}

string f_9a1_a1_s(int a0)
{
	if (a0 == 2) {
		return "fire";
	} else {
		if (a0 == 1) {
			return "bullet";
		}
	}
	return "phys";
}

Vector f_9af_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_9b6_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_9be_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_9c3_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_9cf_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_9c3_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_9c3_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_9a1_a1_s(a2);
	if (!f_9c3_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_bc2_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_bc9_a3_f(L4 - L5, 0, 1));
	if (f_9be_a1_b(a0)) {
		f_c02_a1_v(-L5);
	}
	return L5;
}

bool f_a18_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_a1d_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_a18_a1_b(a0)) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	return true;
}

bool f_a41_a1_b(object a0)
{
	int L0;
	if (!f_a1d_a1_b(a0)) {
		return false;
	}
	if (!f_9c3_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_a59_a1_v(object a0)
{
	bool L0;
	int L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	string L6;
	if (a0 == null) {
		return;
	}
	@IsDead(L0);
	if (L0) {
		return;
	}
	@GetSecondaryAnimationType(L1);
	if (L1 < 0) {
		return;
	}
	a0->GetPosition(L2);
	@GetPosition(L3);
	@GetDirection(L4);
	L5 = L3 - L2;
	if (L5.x * L4.x + L5.z * L4.z >= 0) {
		L6 = "fhit";
	} else {
		L6 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L6 + "1", L6 + "2", -10);
}

void f_a85_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_bb8_a1_V(f_9af_a1_V(a0));
		object L1;
		@CreateVectorVector(L1);
		int L2;
		for (L2 = 1; ; L2++) {
			bool L3;
			Vector L4;
			Vector L5;
			@GetGeometryLocator("hit" + L2, L3, L4, L5);
			if (!L3) {
				break;
			}
			if ((L5 | L0) >= 0.7071067690849304) {
				L1->add(L4);
			}
		}
		int L6;
		L1->size(L6);
		if (L6) {
			int L7;
			Vector L8;
			@irand(L7, L6);
			L1->get(L8, L7);
			f_ac9_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_a59_a1_v(a0);
}

void f_ac9_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_a59_a1_v(a0);
}

void f_ad7_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_ae2_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_ae7_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_bb8_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_e68_a0_b()) {
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

void f_b2c_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_e68_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_b3e_a1_v(string a0)
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

void f_b4e_a2_v(string a0, bool a1)
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

void f_b5d_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_b68_a0_v(void)
{
	if (f_e68_a0_b()) {
		@lshStopSpeech();
	}
}

void f_b6f_a3_v(string a0, int a1, int a2)
{
	if (f_bd4_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_b7a_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_bd4_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

void f_b89_a1_v(string a0)
{
	bool L0;
	@IsExisting3DSound(L0, a0);
	if (!L0) {
		int L1;
		for (L1 = 0; ; L1++) {
			bool L2;
			@IsExisting3DSound(L2, a0 + (L1 + 1));
			if (!L2) {
				break;
			}
		}
		if (!L1) {
			return;
		}
		int L3;
		@irand(L3, L1);
		a0 = a0 + (L3 + 1);
	}
	bool L4;
	@Is3DSoundLoaded(L4, a0);
	if (L4) {
		float L5;
		Vector L6;
		Vector L7;
		@GetEyesHeight(L5);
		@GetDirection(L6);
		L7 = L6 * 50;
		L7.y += L5;
		@PlayGlobalSound(a0, L7);
	}
}

object f_bb2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_bb8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_bc2_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_bc9_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_bd4_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_bd9_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_be2_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_bec_a2_f(Vector a0, Vector a1)
{
	return f_bd9_a2_f(a0, a1) / (f_be2_a1_f(a0) * f_be2_a1_f(a1));
}

int f_bfd_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_c02_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

int f_c13_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_c1c_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_c25_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_bb2_a0_o(), L0);
}

void f_c30_a2_v(object a0, object a1)
{
	@SetVariable("ood1Doberman1_1", 1);
}

bool f_c36_a1_b(object a0)
{
	if (f_bfd_a1_i("ood1Doberman1_1") == 0) {
		return true;
	}
	return false;
}

int f_c42_a0_i(void)
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

int f_c53_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_c59_a1_v(object a0)
{
	if (f_c53_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_c66_a2_v(int a0, int a1)
{
	int L0;
	bool L1;
	if (a0 > a1) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	L0 = 0;
	if (a0 != a1) {
		@irand(L0, a1 - a0);
	} else {
		if (a0 == 0) {
			return;
		}
	}
	L0 = L0 + a0;
	if (L0 == 0) {
		return;
	}
	@AddItem(L1, f_d2e_a1_i("Money"), 0, L0);
}

void f_c85_a1_v(string a0)
{
	object L0;
	int L1;
	bool L2;
	@CreateInvItem(L0);
	L0->SetItemName(a0);
	L0->SetProperty("Organ", 1);
	L0->GetItemID(L1);
	@AddItem(L2, L0, 0, 1);
}

void f_c96_a0_v(void)
{
	if (f_c53_a0_i() != 1) {
		return;
	}
	f_c85_a1_v("liver");
	f_c85_a1_v("kidney");
	f_c85_a1_v("heart");
	f_c85_a1_v("blood");
}

void f_cae_a1_v(bool a0)
{
	bool L0;
	@ClearSubContainer(0);
	f_c66_a2_v(0, 10 + f_c13_a0_i() * 10);
	f_b6f_a3_v("hook", 1, 4);
	f_b6f_a3_v("watch", 1, 10);
}

void f_cca_a1_v(bool a0)
{
	int L0;
	bool L1;
	int L2;
	@ClearSubContainer(0);
	L2 = f_c13_a0_i();
	if (a0) {
		f_b7a_a4_v("alpha_pills", 1, 2, 4);
		f_b7a_a4_v("meradorm", 2, 3, 3);
		if (L2 >= 3) {
			f_b6f_a3_v("beta_pills", 1, 4);
		}
		if (L2 >= 8) {
			f_b7a_a4_v("monomicin", 1, 2, 2);
		} else {
			if (L2 >= 4) {
				f_b6f_a3_v("monomicin", 1, 2);
			}
		}
	} else {
		f_b6f_a3_v("lockpick", 1, 4);
		f_b6f_a3_v("rifle_ammo", 1, 2);
		f_b6f_a3_v("revolver_ammo", 1, 2);
		f_b7a_a4_v("samopal_ammo", 1, 2, 2);
		if (L2 >= 8) {
			f_b7a_a4_v("monomicin", 1, 2, 2);
		} else {
			if (L2 >= 4) {
				f_b6f_a3_v("monomicin", 1, 2);
			}
		}
	}
}

int f_d2e_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_d33_a1_v(object a0)
{
	t2{a0};
}

void OnPropertyChange(object a0, string a1)
{
	if (a1 == "health") {
		float L0;
		@GetProperty("health", L0);
		if (L0 <= 0) {
			@SignalDeath(a0);
		}
	}
}

void OnDeath(object a0)
{
	f_d33_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_a85_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_ac9_a5_v(a0, a1, a2, a4, a5);
}

bool f_d60_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_e37_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_e3c_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_e51_a1_b(a0);
			}
		}
	}
	return false;
}

void f_d80_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_e3a_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_e4b_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_e54_a1_v(a0);
			}
		}
	}
}

bool f_d99_a1_b(object a0)
{
	if (f_e37_a1_b(a0) && f_9be_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_db0_a1_v(object a0)
{
	f_e3a_a1_v(a0);
}

void f_db6_a1_v(object a0)
{
	if (f_9be_a1_b(a0)) {
		@ReportReputationChange(a0, f_bb2_a0_o(), -0.05000000074505806);
	}
}

bool f_dc3_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_e5b_a1_b(L0);
	}
	return false;
}

void f_dd3_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_e5e_a1_v(L0);
	}
}

string f_de0_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_de7_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_de0_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_df8_a1_i(object a0)
{
	return f_e84_a0_b() ? 2 : 0;
}

void f_e01_a1_v(object a0)
{
	t5{a0};
}

int f_e09_a1_i(object a0)
{
	return f_a41_a1_b(a0) ? 2 : 0;
}

void f_e13_a1_v(object a0)
{
	t6{a0};
}

int f_e1b_a2_i(object a0, bool a1)
{
	return f_e09_a1_i(a0);
}

void f_e22_a1_v(object a0)
{
	f_e13_a1_v(a0);
}

int f_e28_a1_i(object a0)
{
	return 2;
}

void f_e2b_a1_v(object a0)
{
	f_e72_a1_v(a0);
}

void f_e31_a0_v(void)
{
}

int f_e32_a2_i(string a0, object a1)
{
	return 0;
}

void f_e35_a2_v(string a0, object a1)
{
}

bool f_e37_a1_b(object a0)
{
	return false;
}

void f_e3a_a1_v(object a0)
{
}

bool f_e3c_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_9b6_a1_f(a0) <= 2250000;
}

void f_e4b_a1_v(object a0)
{
	f_e01_a1_v(a0);
}

bool f_e51_a1_b(object a0)
{
	return false;
}

void f_e54_a1_v(object a0)
{
}

int f_e56_a1_i(object a0)
{
	return 0;
}

void f_e59_a1_v(object a0)
{
}

bool f_e5b_a1_b(object a0)
{
	return false;
}

void f_e5e_a1_v(object a0)
{
}

int f_e60_a0_i(void)
{
	return 518097;
}

int f_e62_a0_i(void)
{
	return 518096;
}

string f_e64_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_e66_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_e68_a0_b(void)
{
	return false;
}

void f_e6a_a0_v(void)
{
	g0 = false;
	f_cca_a1_v(true);
}

void f_e72_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_c59_a1_v(a0);
		}
		return;
	} else {
		f_ea5_a1_v(a0);
	}
}

bool f_e84_a0_b(void)
{
	return false;
}

bool f_e86_a3_b(object a0, object a1, bool a2)
{
	return true;
}

void f_e89_a1_v(object a0)
{
	if (f_9be_a1_b(a0)) {
		@ReportReputationChange(a0, f_bb2_a0_o(), -0.10000000149011612, true);
		f_cae_a1_v(true);
	}
	f_c96_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

void f_ea5_a1_v(object a0)
{
	t0{a0};
}

