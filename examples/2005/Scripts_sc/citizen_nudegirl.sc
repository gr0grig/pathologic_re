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
		if (!f_e88_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d7_a0_i());
		L0->SetNPCDescription(f_12d5_a0_i());
		L0->SetPhoto(f_12d9_a0_s());
		L0->SetPhoto2(f_12db_a0_s());
		L0->SetPlayerName(f_1021_a0_i());
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
		f_ecc_a1_v(a0);
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
			f_157_a1_v("Neutral");
			tv0->SetMessage(537786);
			tv0->ClearReplies();
			if (f_f7b_a1_b(tv1)) {
				tv0->AddReply(537787, -1, 39638);
			}
			if (f_f7b_a1_b(tv1)) {
				tv0->AddReply(537788, -1, 39639);
			}
			if (f_f7b_a1_b(tv1)) {
				tv0->AddReply(537789, 39641, 39640);
			}
			if (f_f7b_a1_b(tv1)) {
				tv0->AddReply(537792, 39644, 39643);
			}
			if (f_f6f_a1_b(tv1) && f_f85_a1_b(tv1)) {
				tv0->AddReply(537805, 39658, 39657);
			}
			if (f_f6f_a1_b(tv1) && f_f8f_a1_b(tv1)) {
				tv0->AddReply(537826, 39679, 39678);
			}
			if (f_f6f_a1_b(tv1) && f_f99_a1_b(tv1)) {
				tv0->AddReply(537846, 39703, 39702);
			}
			if (f_f6f_a1_b(tv1) && f_fa3_a1_b(tv1)) {
				tv0->AddReply(537855, 39713, 39712);
			}
			if (f_f6f_a1_b(tv1) && f_fad_a1_b(tv1)) {
				tv0->AddReply(537867, 39726, 39725);
			}
			if (f_f6f_a1_b(tv1) && f_fb7_a1_b(tv1)) {
				tv0->AddReply(537881, 39741, 39740);
			}
			if (f_f6f_a1_b(tv1) && f_fc1_a1_b(tv1)) {
				tv0->AddReply(537895, 39756, 39755);
			}
			if (f_f6f_a1_b(tv1) && f_fcb_a1_b(tv1)) {
				tv0->AddReply(537905, 39766, 39765);
			}
			if (f_f6f_a1_b(tv1) && f_fd5_a1_b(tv1)) {
				tv0->AddReply(537918, 39780, 39779);
			}
			tv0->AddReply(537927, -1, 39788);
			tv0->AddReply(537928, -1, 39789);
			break;
			return;
		}
		if (f_12dd_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_edd_a1_v(tv2);
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

	void f_157_a1_v(string a0)
	{
		if (!f_12dd_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_ee4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_ef5_a0_v();
			if (a0 == 39637) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537786);
				tv0->ClearReplies();
				if (f_f7b_a1_b(tv1)) {
					tv0->AddReply(537787, -1, 39638);
				}
				if (f_f7b_a1_b(tv1)) {
					tv0->AddReply(537788, -1, 39639);
				}
				if (f_f7b_a1_b(tv1)) {
					tv0->AddReply(537789, 39641, 39640);
				}
				if (f_f7b_a1_b(tv1)) {
					tv0->AddReply(537792, 39644, 39643);
				}
				if (f_f6f_a1_b(tv1) && f_f85_a1_b(tv1)) {
					tv0->AddReply(537805, 39658, 39657);
				}
				if (f_f6f_a1_b(tv1) && f_f8f_a1_b(tv1)) {
					tv0->AddReply(537826, 39679, 39678);
				}
				if (f_f6f_a1_b(tv1) && f_f99_a1_b(tv1)) {
					tv0->AddReply(537846, 39703, 39702);
				}
				if (f_f6f_a1_b(tv1) && f_fa3_a1_b(tv1)) {
					tv0->AddReply(537855, 39713, 39712);
				}
				if (f_f6f_a1_b(tv1) && f_fad_a1_b(tv1)) {
					tv0->AddReply(537867, 39726, 39725);
				}
				if (f_f6f_a1_b(tv1) && f_fb7_a1_b(tv1)) {
					tv0->AddReply(537881, 39741, 39740);
				}
				if (f_f6f_a1_b(tv1) && f_fc1_a1_b(tv1)) {
					tv0->AddReply(537895, 39756, 39755);
				}
				if (f_f6f_a1_b(tv1) && f_fcb_a1_b(tv1)) {
					tv0->AddReply(537905, 39766, 39765);
				}
				if (f_f6f_a1_b(tv1) && f_fd5_a1_b(tv1)) {
					tv0->AddReply(537918, 39780, 39779);
				}
				tv0->AddReply(537927, -1, 39788);
				tv0->AddReply(537928, -1, 39789);
				return;
			}
			if (a0 == 39780) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537919);
				tv0->ClearReplies();
				tv0->AddReply(537920, 39782, 39781);
				tv0->AddReply(537926, -1, 39787);
				return;
			}
			if (a0 == 39782) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537921);
				tv0->ClearReplies();
				tv0->AddReply(537922, 39784, 39783);
				return;
			}
			if (a0 == 39784) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537923);
				tv0->ClearReplies();
				tv0->AddReply(537924, -1, 39785);
				tv0->AddReply(537925, -1, 39786);
				return;
			}
			if (a0 == 39766) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537906);
				tv0->ClearReplies();
				tv0->AddReply(537907, 39768, 39767);
				tv0->AddReply(537917, -1, 39778);
				return;
			}
			if (a0 == 39768) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537908);
				tv0->ClearReplies();
				tv0->AddReply(537909, 39770, 39769);
				tv0->AddReply(537913, 39774, 39773);
				return;
			}
			if (a0 == 39774) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537914);
				tv0->ClearReplies();
				tv0->AddReply(537915, 39770, 39775);
				tv0->AddReply(537916, -1, 39777);
				return;
			}
			if (a0 == 39770) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537910);
				tv0->ClearReplies();
				tv0->AddReply(537911, -1, 39771);
				tv0->AddReply(537912, -1, 39772);
				return;
			}
			if (a0 == 39756) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537896);
				tv0->ClearReplies();
				tv0->AddReply(537897, 39758, 39757);
				tv0->AddReply(537904, -1, 39764);
				return;
			}
			if (a0 == 39758) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537898);
				tv0->ClearReplies();
				tv0->AddReply(537899, 39760, 39759);
				tv0->AddReply(537903, -1, 39763);
				return;
			}
			if (a0 == 39760) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537900);
				tv0->ClearReplies();
				tv0->AddReply(537901, -1, 39761);
				tv0->AddReply(537902, -1, 39762);
				return;
			}
			if (a0 == 39741) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537882);
				tv0->ClearReplies();
				tv0->AddReply(537883, 39743, 39742);
				tv0->AddReply(537891, 39751, 39750);
				return;
			}
			if (a0 == 39751) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537892);
				tv0->ClearReplies();
				tv0->AddReply(537893, 39745, 39752);
				tv0->AddReply(537894, -1, 39754);
				return;
			}
			if (a0 == 39743) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537884);
				tv0->ClearReplies();
				tv0->AddReply(537885, 39745, 39744);
				return;
			}
			if (a0 == 39745) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537886);
				tv0->ClearReplies();
				tv0->AddReply(537887, 39747, 39746);
				tv0->AddReply(537890, -1, 39749);
				return;
			}
			if (a0 == 39747) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537888);
				tv0->ClearReplies();
				tv0->AddReply(537889, -1, 39748);
				return;
			}
			if (a0 == 39726) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537868);
				tv0->ClearReplies();
				tv0->AddReply(537869, 39728, 39727);
				tv0->AddReply(537880, -1, 39739);
				return;
			}
			if (a0 == 39728) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537870);
				tv0->ClearReplies();
				tv0->AddReply(537871, 39730, 39729);
				tv0->AddReply(537877, 39736, 39735);
				return;
			}
			if (a0 == 39736) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537878);
				tv0->ClearReplies();
				tv0->AddReply(537879, 39730, 39737);
				return;
			}
			if (a0 == 39730) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537872);
				tv0->ClearReplies();
				tv0->AddReply(537873, 39732, 39731);
				return;
			}
			if (a0 == 39732) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537874);
				tv0->ClearReplies();
				tv0->AddReply(537875, -1, 39733);
				tv0->AddReply(537876, -1, 39734);
				return;
			}
			if (a0 == 39713) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537856);
				tv0->ClearReplies();
				tv0->AddReply(537857, 39715, 39714);
				tv0->AddReply(537864, 39722, 39721);
				return;
			}
			if (a0 == 39722) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537865);
				tv0->ClearReplies();
				tv0->AddReply(537866, 39717, 39723);
				return;
			}
			if (a0 == 39715) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537858);
				tv0->ClearReplies();
				tv0->AddReply(537859, 39717, 39716);
				tv0->AddReply(537863, -1, 39720);
				return;
			}
			if (a0 == 39717) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537860);
				tv0->ClearReplies();
				tv0->AddReply(537861, -1, 39718);
				tv0->AddReply(537862, -1, 39719);
				return;
			}
			if (a0 == 39703) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537847);
				tv0->ClearReplies();
				tv0->AddReply(537848, 39705, 39704);
				tv0->AddReply(537854, 39707, 39710);
				return;
			}
			if (a0 == 39705) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537849);
				tv0->ClearReplies();
				tv0->AddReply(537850, 39707, 39706);
				return;
			}
			if (a0 == 39707) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537851);
				tv0->ClearReplies();
				tv0->AddReply(537852, -1, 39708);
				tv0->AddReply(537853, -1, 39709);
				return;
			}
			if (a0 == 39679) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537827);
				tv0->ClearReplies();
				tv0->AddReply(537828, 39681, 39680);
				tv0->AddReply(537843, 39699, 39698);
				return;
			}
			if (a0 == 39699) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537844);
				tv0->ClearReplies();
				tv0->AddReply(537845, 39681, 39700);
				return;
			}
			if (a0 == 39681) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537829);
				tv0->ClearReplies();
				tv0->AddReply(537830, 39683, 39682);
				tv0->AddReply(537840, 39695, 39694);
				return;
			}
			if (a0 == 39695) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537841);
				tv0->ClearReplies();
				tv0->AddReply(537842, 39685, 39696);
				return;
			}
			if (a0 == 39683) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537831);
				tv0->ClearReplies();
				tv0->AddReply(537832, 39685, 39684);
				return;
			}
			if (a0 == 39685) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537833);
				tv0->ClearReplies();
				tv0->AddReply(537834, 39687, 39686);
				tv0->AddReply(537838, 39687, 39690);
				tv0->AddReply(537839, 39687, 39692);
				return;
			}
			if (a0 == 39687) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537835);
				tv0->ClearReplies();
				tv0->AddReply(537836, -1, 39688);
				tv0->AddReply(537837, -1, 39689);
				return;
			}
			if (a0 == 39658) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537806);
				tv0->ClearReplies();
				tv0->AddReply(537807, 39660, 39659);
				tv0->AddReply(537818, 39671, 39670);
				return;
			}
			if (a0 == 39671) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537819);
				tv0->ClearReplies();
				tv0->AddReply(537820, 39673, 39672);
				return;
			}
			if (a0 == 39673) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537821);
				tv0->ClearReplies();
				tv0->AddReply(537822, 39675, 39674);
				return;
			}
			if (a0 == 39675) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537823);
				tv0->ClearReplies();
				tv0->AddReply(537824, -1, 39676);
				tv0->AddReply(537825, -1, 39677);
				return;
			}
			if (a0 == 39660) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537808);
				tv0->ClearReplies();
				tv0->AddReply(537809, 39662, 39661);
				tv0->AddReply(537815, 39668, 39667);
				return;
			}
			if (a0 == 39668) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537816);
				tv0->ClearReplies();
				tv0->AddReply(537817, -1, 39669);
				return;
			}
			if (a0 == 39662) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537810);
				tv0->ClearReplies();
				tv0->AddReply(537811, 39664, 39663);
				tv0->AddReply(537814, -1, 39666);
				return;
			}
			if (a0 == 39664) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537812);
				tv0->ClearReplies();
				tv0->AddReply(537813, -1, 39665);
				return;
			}
			if (a0 == 39644) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537793);
				tv0->ClearReplies();
				tv0->AddReply(537794, 39646, 39645);
				tv0->AddReply(537804, -1, 39656);
				return;
			}
			if (a0 == 39646) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537795);
				tv0->ClearReplies();
				tv0->AddReply(537796, 39648, 39647);
				tv0->AddReply(537803, 39648, 39654);
				return;
			}
			if (a0 == 39648) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537797);
				tv0->ClearReplies();
				tv0->AddReply(537798, 39650, 39649);
				tv0->AddReply(537802, -1, 39653);
				return;
			}
			if (a0 == 39650) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537799);
				tv0->ClearReplies();
				tv0->AddReply(537800, -1, 39651);
				tv0->AddReply(537801, -1, 39652);
				return;
			}
			if (a0 == 39641) {
				f_157_a1_v("Neutral");
				tv0->SetMessage(537790);
				tv0->ClearReplies();
				tv0->AddReply(537791, -1, 39642);
				return;
			}
			tv3 = true;
			if (f_12dd_a0_b()) {
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
		f_67e_a1_v(a0);
		f_1306_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1295_a1_i(a0);
		if (L0 > 0) {
			f_1298_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_129e_a0_v();
	}

	void f_67e_a1_v(object a0)
	{
		if (a0 == null) {
			f_6d9_a1_v("fdie");
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
			f_efc_a1_v(L4);
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

	void f_6d9_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_efc_a1_v(a0);
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
		f_12df_a0_v();
		f_708_a0_v();
		for (; ; ) {
			tv2 = false;
			f_80d_a0_v();
		}
	}

	void f_708_a0_v(void)
	{
		if (!f_e83_a0_b()) {
			f_129e_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1295_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_7cc_a0_v();
			}
			f_1298_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_11d2_a1_v(a0);
		L0 = f_1225_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_7cc_a0_v();
			}
			f_122f_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_12fd_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1237_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_7cc_a0_v();
				}
				f_1241_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_128b_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_7cc_a0_v();
			}
			f_128e_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_117c_a2_b(a0, a1)) {
			f_7cc_a0_v();
			f_119c_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1290_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_7cc_a0_v();
				}
				f_1293_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_11df_a1_b(a0)) {
			f_7cc_a0_v();
			f_11ef_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_11b5_a1_b(a0)) {
			f_7cc_a0_v();
			f_11cc_a1_v(a0);
		} else {
			f_7e5_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_7e5_a1_v(a0);
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
		f_7cc_a0_v();
		f_129e_a0_v();
	}

	void f_7cc_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_854_a0_v();
	}

	void f_7d4_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_85b_a0_v();
	}

	void OnDeath(object a0)
	{
		f_7cc_a0_v();
		global.OnDeath(a0);
	}

	void f_7e5_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_de2_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_1214_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_7d4_a0_v();
			}
			f_121d_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_80d_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_848_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_864_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_862_a0_b(), L5);
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

	float f_848_a0_f(void)
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

	void f_854_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_85b_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_862_a0_b(void)
	{
		return false;
	}

	object f_864_a1_o(Vector a0)
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
		L0 = f_1295_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_95f_a0_v();
			}
			f_1298_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_11d2_a1_v(a0);
		L0 = f_1225_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_95f_a0_v();
			}
			f_122f_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_12fd_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1237_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_95f_a0_v();
				}
				f_1241_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_128b_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_95f_a0_v();
			}
			f_128e_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_117c_a2_b(a0, a1)) {
			f_95f_a0_v();
			f_119c_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1290_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_95f_a0_v();
				}
				f_1293_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_11df_a1_b(a0)) {
			f_95f_a0_v();
			f_11ef_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_95f_a0_v();
		f_129e_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_11b5_a1_b(a0)) {
			f_95f_a0_v();
			f_11cc_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_e83_a0_b()) {
			return;
		}
		L0 = f_1203_a0_i();
		for (L1 = 0; L1 < 5 && f_e83_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_11fc_a1_s(L3));
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
			if (!f_95d_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_95d_a0_b(void)
	{
		return true;
	}

	void f_95f_a0_v(void)
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
		f_997_a0_v();
		@GetDirection(L0);
		L1 = f_d99_a1_V(tv0);
		if (f_f50_a2_f(L0, L1) < 0) {
			f_e78_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_e78_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_997_a0_v(void)
	{
		f_eea_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1295_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_a2b_a0_v();
			}
			f_1298_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_11d2_a1_v(a0);
		L0 = f_1225_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_a2b_a0_v();
			}
			f_122f_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_12fd_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1237_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_a2b_a0_v();
				}
				f_1241_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_128b_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_a2b_a0_v();
			}
			f_128e_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_117c_a2_b(a0, a1)) {
			f_a2b_a0_v();
			f_119c_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1290_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_a2b_a0_v();
				}
				f_1293_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_11df_a1_b(a0)) {
			f_a2b_a0_v();
			f_11ef_a1_v(a0);
		}
	}

	void f_a2b_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_a2b_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_de2_a1_b(tv0)) {
			f_a2b_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_d99_a1_V(tv0);
		if (f_f50_a2_f(L0, L1) < 0.4999999701976776) {
			f_e78_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_a2b_a0_v();
		f_129e_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_11b5_a1_b(a0)) {
			f_a2b_a0_v();
			f_11cc_a1_v(a0);
		}
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void init(object a0)
	{
		@Face(a0);
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
		@PlayAnimation("all", "attack_stay");
		@WaitForAnimEnd();
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		@StopAsync();
		f_ab8_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_b35_a0_v();
		f_129e_a0_v();
	}

	Vector f_a9a_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_f2b_a1_V(f_f2b_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_ab8_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_a9a_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_a9a_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_d94_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_a9a_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_d94_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_a9a_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_b45_a0_b())) {
				@Stop();
				tv1 = f_d94_a0_V() + L2;
			}
		}
	}

	void f_b35_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_b35_a0_v();
		global.OnDeath(a0);
	}

	bool f_b45_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_d99_a1_V(tv0);
		return f_f35_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t7
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_b55_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_f2b_a1_V(f_f2b_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void init(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_b55_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_b55_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_d94_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_b55_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_d94_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_b55_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_c00_a0_b())) {
				@Stop();
				tv1 = f_d94_a0_V() + L2;
			}
		}
	}

	void f_bf0_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_bf0_a0_v();
		global.OnDeath(a0);
	}

	bool f_c00_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_d99_a1_V(tv0);
		return f_f35_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t8
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_cb2_a0_v();
		f_129e_a0_v();
	}

	Vector f_c17_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_f2b_a1_V(f_f2b_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void init(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_c17_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_c17_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_d94_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_c17_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_d94_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_c17_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_cc2_a0_b())) {
				@Stop();
				tv1 = f_d94_a0_V() + L2;
			}
		}
	}

	void f_cb2_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_cb2_a0_v();
		global.OnDeath(a0);
	}

	bool f_cc2_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_d99_a1_V(tv0);
		return f_f35_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t9
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_d74_a0_v();
		f_129e_a0_v();
	}

	Vector f_cd9_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_f2b_a1_V(f_f2b_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void init(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_cd9_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_cd9_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_d94_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_cd9_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_d94_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_cd9_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_d84_a0_b())) {
				@Stop();
				tv1 = f_d94_a0_V() + L2;
			}
		}
	}

	void f_d74_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_d74_a0_v();
		global.OnDeath(a0);
	}

	bool f_d84_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_d99_a1_V(tv0);
		return f_f35_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_d94_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_d99_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_da0_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_da8_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_dad_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_db9_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_dbe_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_db9_a1_b(a0)) {
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

bool f_de2_a1_b(object a0)
{
	int L0;
	if (!f_dbe_a1_b(a0)) {
		return false;
	}
	if (!f_dad_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_dfa_a1_v(object a0)
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

void f_e26_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_f2b_a1_V(f_d99_a1_V(a0));
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
			f_e6a_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_dfa_a1_v(a0);
}

void f_e6a_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_dfa_a1_v(a0);
}

void f_e78_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_e83_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_e88_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_f2b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_12dd_a0_b()) {
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

void f_ecc_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_12dd_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_edd_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_ee4_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_eea_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_ef5_a0_v(void)
{
	if (f_12dd_a0_b()) {
		@lshStopSpeech();
	}
}

void f_efc_a1_v(string a0)
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

object f_f25_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_f2b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_f35_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_f3d_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_f46_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_f50_a2_f(Vector a0, Vector a1)
{
	return f_f3d_a2_f(a0, a1) / (f_f46_a1_f(a0) * f_f46_a1_f(a1));
}

int f_f61_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_f66_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_f6f_a1_b(object a0)
{
	if (f_f61_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_f7b_a1_b(object a0)
{
	if (f_fdf_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_f85_a1_b(object a0)
{
	if (f_fe2_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_f8f_a1_b(object a0)
{
	if (f_fe9_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_f99_a1_b(object a0)
{
	if (f_ff0_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fa3_a1_b(object a0)
{
	if (f_ff7_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fad_a1_b(object a0)
{
	if (f_ffe_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fb7_a1_b(object a0)
{
	if (f_1005_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fc1_a1_b(object a0)
{
	if (f_100c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fcb_a1_b(object a0)
{
	if (f_1013_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fd5_a1_b(object a0)
{
	if (f_101a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fdf_a1_b(object a0)
{
	return false;
}

bool f_fe2_a1_b(object a0)
{
	return f_f66_a0_i() == 1;
}

bool f_fe9_a1_b(object a0)
{
	return f_f66_a0_i() == 2;
}

bool f_ff0_a1_b(object a0)
{
	return f_f66_a0_i() == 3;
}

bool f_ff7_a1_b(object a0)
{
	return f_f66_a0_i() == 4;
}

bool f_ffe_a1_b(object a0)
{
	return f_f66_a0_i() == 6;
}

bool f_1005_a1_b(object a0)
{
	return f_f66_a0_i() == 7;
}

bool f_100c_a1_b(object a0)
{
	return f_f66_a0_i() == 8;
}

bool f_1013_a1_b(object a0)
{
	return f_f66_a0_i() == 10;
}

bool f_101a_a1_b(object a0)
{
	return f_f66_a0_i() == 11;
}

int f_1021_a0_i(void)
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

int f_1032_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

float f_1038_a0_f(void)
{
	object L0;
	float L1;
	@FindActor(L0, "player");
	if (!L0) {
		return 0;
	}
	L0->GetProperty("reputation", L1);
	return L1;
}

void f_1046_a1_v(object a0)
{
	if (f_1032_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_1053_a2_v(int a0, int a1)
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
	@AddItem(L1, f_114a_a1_i("Money"), 0, L0);
}

void f_1072_a1_v(string a0)
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

void f_1083_a0_v(void)
{
	if (f_1032_a0_i() != 1) {
		return;
	}
	f_1072_a1_v("liver");
	f_1072_a1_v("kidney");
	f_1072_a1_v("heart");
	f_1072_a1_v("blood");
}

void f_109b_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_1053_a2_v(0, 100 + f_f66_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_114a_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_114a_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_114a_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_114a_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_114a_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_114a_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_1053_a2_v(0, 50 + f_f66_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_114a_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_114a_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_114a_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_114a_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_114a_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_114a_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_114a_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_114f_a1_v(object a0)
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
	f_114f_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_e26_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_e6a_a5_v(a0, a1, a2, a4, a5);
}

bool f_117c_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_129f_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_12ac_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_12c3_a1_b(a0);
			}
		}
	}
	return false;
}

void f_119c_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_12a4_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_12bb_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_12ca_a1_v(a0);
			}
		}
	}
}

bool f_11b5_a1_b(object a0)
{
	if (f_129f_a1_b(a0) && f_da8_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_11cc_a1_v(object a0)
{
	f_12a4_a1_v(a0);
}

void f_11d2_a1_v(object a0)
{
	if (f_da8_a1_b(a0)) {
		@ReportReputationChange(a0, f_f25_a0_o(), -0.029999999329447746);
	}
}

bool f_11df_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_12d0_a1_b(L0);
	}
	return false;
}

void f_11ef_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_12d3_a1_v(L0);
	}
}

string f_11fc_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1203_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_11fc_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1214_a1_i(object a0)
{
	return f_12f7_a0_b() ? 2 : 0;
}

void f_121d_a1_v(object a0)
{
	t5{a0};
}

int f_1225_a1_i(object a0)
{
	return f_de2_a1_b(a0) ? 2 : 0;
}

void f_122f_a1_v(object a0)
{
	t6{a0};
}

int f_1237_a2_i(object a0, bool a1)
{
	return f_de2_a1_b(a0) ? 2 : 0;
}

void f_1241_a1_v(object a0)
{
	t7{a0};
}

bool f_1249_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_dad_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	if (L0 == "rat") {
		return false;
	} else {
		if (L0 == "rat_big") {
			return false;
		} else {
			if (L0 == "dog") {
				return false;
			}
		}
	}
	@CanSee(L1, a0);
	if (L1 || f_da0_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_da0_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_128b_a1_i(object a0)
{
	return 0;
}

void f_128e_a1_v(object a0)
{
}

int f_1290_a2_i(string a0, object a1)
{
	return 0;
}

void f_1293_a2_v(string a0, object a1)
{
}

int f_1295_a1_i(object a0)
{
	return 2;
}

void f_1298_a1_v(object a0)
{
	f_12e3_a1_v(a0);
}

void f_129e_a0_v(void)
{
}

bool f_129f_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_12a4_a1_v(object a0)
{
	t8{a0};
}

bool f_12ac_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_da0_a1_f(a0) <= 4000000;
}

void f_12bb_a1_v(object a0)
{
	t9{a0};
}

bool f_12c3_a1_b(object a0)
{
	return f_12ac_a1_b(a0);
}

void f_12ca_a1_v(object a0)
{
	f_12bb_a1_v(a0);
}

bool f_12d0_a1_b(object a0)
{
	return false;
}

void f_12d3_a1_v(object a0)
{
}

int f_12d5_a0_i(void)
{
	return 515596;
}

int f_12d7_a0_i(void)
{
	return 514839;
}

string f_12d9_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_12db_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_12dd_a0_b(void)
{
	return false;
}

void f_12df_a0_v(void)
{
	g0 = false;
}

void f_12e3_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_1046_a1_v(a0);
		}
		return;
	} else {
		t0{a0};
	}
}

bool f_12f7_a0_b(void)
{
	return f_1038_a0_f() > 0.20000000298023224;
}

bool f_12fd_a3_b(object a0, object a1, bool a2)
{
	return f_1249_a3_b(a0, a1, 700.0);
}

void f_1306_a1_v(object a0)
{
	if (f_da8_a1_b(a0)) {
		@ReportReputationChange(a0, f_f25_a0_o(), -0.07000000029802322, true);
		f_109b_a1_v(false);
	}
	f_1083_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

