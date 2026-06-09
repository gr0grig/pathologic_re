event evt_11 11;
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
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_1587_a0_b()) {
				f_1136_a1_v("Neutral");
				@lshWaitForAnimEnd();
			} else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "idle");
			}
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		if (f_1587_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
	}
}

task t1
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_10a2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1581_a0_i());
		L0->SetNPCDescription(f_157f_a0_i());
		L0->SetPhoto(f_1583_a0_s());
		L0->SetPhoto2(f_1585_a0_s());
		L0->SetPlayerName(f_12a1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10e7_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t2
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
			if (f_121d_a1_b(tv1) && f_123d_a1_b(tv1)) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(543329);
				tv0->ClearReplies();
				tv0->AddReply(543330, 45790, 45787);
				tv0->AddReply(543332, 45790, 45789);
				tv0->AddReply(543331, -1, 45788);
				break;
			}
			if (f_121d_a1_b(tv1) && !f_123d_a1_b(tv1)) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(543328);
				tv0->ClearReplies();
				tv0->AddReply(543336, -1, 45794);
				break;
			}
			f_1a8_a1_v("Neutral");
			tv0->SetMessage(537969);
			tv0->ClearReplies();
			if (f_1229_a1_b(tv1) && f_1211_a1_b(tv1)) {
				tv0->AddReply(537970, 39833, 39832);
			}
			if (f_1229_a1_b(tv1) && f_1211_a1_b(tv1)) {
				tv0->AddReply(537995, 39861, 39860);
			}
			if (f_1229_a1_b(tv1) && f_1211_a1_b(tv1)) {
				tv0->AddReply(538003, 39869, 39868);
			}
			if (f_1229_a1_b(tv1) && f_1211_a1_b(tv1)) {
				tv0->AddReply(538012, 39878, 39877);
			}
			if (f_1229_a1_b(tv1) && f_125b_a1_b(tv1) && f_1211_a1_b(tv1)) {
				tv0->AddReply(538017, 39883, 39882);
			}
			if (f_1233_a1_b(tv1) && f_1251_a1_b(tv1) && f_1211_a1_b(tv1)) {
				tv0->AddReply(538043, 39911, 39910);
			}
			if (f_1247_a1_b(tv1) && f_1251_a1_b(tv1) && f_1211_a1_b(tv1)) {
				tv0->AddReply(538083, 39952, 39951);
			}
			if (f_1247_a1_b(tv1) && f_125b_a1_b(tv1) && f_1211_a1_b(tv1)) {
				tv0->AddReply(538110, 39980, 39979);
			}
			tv0->AddReply(538126, -1, 39997);
			break;
			return;
		}
		if (f_1587_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1136_a1_v(tv2);
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

	void f_1a8_a1_v(string a0)
	{
		if (!f_1587_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1146_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1160_a0_v();
			if (a0 == 45786) {
				if (f_121d_a1_b(tv1) && f_123d_a1_b(tv1)) {
					f_1a8_a1_v("Neutral");
					tv0->SetMessage(543329);
					tv0->ClearReplies();
					tv0->AddReply(543330, 45790, 45787);
					tv0->AddReply(543332, 45790, 45789);
					tv0->AddReply(543331, -1, 45788);
					return;
				}
				if (f_121d_a1_b(tv1) && !f_123d_a1_b(tv1)) {
					f_1a8_a1_v("Neutral");
					tv0->SetMessage(543328);
					tv0->ClearReplies();
					tv0->AddReply(543336, -1, 45794);
					return;
				}
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537969);
				tv0->ClearReplies();
				if (f_1229_a1_b(tv1) && f_1211_a1_b(tv1)) {
					tv0->AddReply(537970, 39833, 39832);
				}
				if (f_1229_a1_b(tv1) && f_1211_a1_b(tv1)) {
					tv0->AddReply(537995, 39861, 39860);
				}
				if (f_1229_a1_b(tv1) && f_1211_a1_b(tv1)) {
					tv0->AddReply(538003, 39869, 39868);
				}
				if (f_1229_a1_b(tv1) && f_1211_a1_b(tv1)) {
					tv0->AddReply(538012, 39878, 39877);
				}
				if (f_1229_a1_b(tv1) && f_125b_a1_b(tv1) && f_1211_a1_b(tv1)) {
					tv0->AddReply(538017, 39883, 39882);
				}
				if (f_1233_a1_b(tv1) && f_1251_a1_b(tv1) && f_1211_a1_b(tv1)) {
					tv0->AddReply(538043, 39911, 39910);
				}
				if (f_1247_a1_b(tv1) && f_1251_a1_b(tv1) && f_1211_a1_b(tv1)) {
					tv0->AddReply(538083, 39952, 39951);
				}
				if (f_1247_a1_b(tv1) && f_125b_a1_b(tv1) && f_1211_a1_b(tv1)) {
					tv0->AddReply(538110, 39980, 39979);
				}
				tv0->AddReply(538126, -1, 39997);
				return;
			}
			if (a0 == 39980) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538111);
				tv0->ClearReplies();
				tv0->AddReply(538112, 39982, 39981);
				tv0->AddReply(538124, 39982, 39994);
				tv0->AddReply(538125, -1, 39996);
				return;
			}
			if (a0 == 39982) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538113);
				tv0->ClearReplies();
				tv0->AddReply(538114, 39984, 39983);
				tv0->AddReply(538118, 39989, 39988);
				return;
			}
			if (a0 == 39989) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538119);
				tv0->ClearReplies();
				tv0->AddReply(538120, 39991, 39990);
				return;
			}
			if (a0 == 39991) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538121);
				tv0->ClearReplies();
				tv0->AddReply(538122, -1, 39992);
				tv0->AddReply(538123, -1, 39993);
				return;
			}
			if (a0 == 39984) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538115);
				tv0->ClearReplies();
				tv0->AddReply(538116, -1, 39985);
				tv0->AddReply(538117, 39991, 39986);
				return;
			}
			if (a0 == 39952) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538084);
				tv0->ClearReplies();
				tv0->AddReply(538085, 39954, 39953);
				tv0->AddReply(538094, 39963, 39962);
				tv0->AddReply(538103, 39972, 39971);
				tv0->AddReply(538109, -1, 39978);
				return;
			}
			if (a0 == 39972) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538104);
				tv0->ClearReplies();
				tv0->AddReply(538105, 39974, 39973);
				tv0->AddReply(538108, -1, 39977);
				return;
			}
			if (a0 == 39974) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538106);
				tv0->ClearReplies();
				tv0->AddReply(538107, 39963, 39975);
				return;
			}
			if (a0 == 39963) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538095);
				tv0->ClearReplies();
				tv0->AddReply(538096, 39965, 39964);
				tv0->AddReply(538100, 39969, 39968);
				return;
			}
			if (a0 == 39969) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538101);
				tv0->ClearReplies();
				tv0->AddReply(538102, -1, 39970);
				return;
			}
			if (a0 == 39965) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538097);
				tv0->ClearReplies();
				tv0->AddReply(538098, -1, 39966);
				tv0->AddReply(538099, -1, 39967);
				return;
			}
			if (a0 == 39954) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538086);
				tv0->ClearReplies();
				tv0->AddReply(538087, 39956, 39955);
				tv0->AddReply(538093, -1, 39961);
				return;
			}
			if (a0 == 39956) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538088);
				tv0->ClearReplies();
				tv0->AddReply(538089, 39958, 39957);
				return;
			}
			if (a0 == 39958) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538090);
				tv0->ClearReplies();
				tv0->AddReply(538091, -1, 39959);
				tv0->AddReply(538092, -1, 39960);
				return;
			}
			if (a0 == 39911) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538044);
				tv0->ClearReplies();
				tv0->AddReply(538045, 39913, 39912);
				tv0->AddReply(538063, 39932, 39931);
				return;
			}
			if (a0 == 39932) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538064);
				tv0->ClearReplies();
				tv0->AddReply(538065, 39934, 39933);
				return;
			}
			if (a0 == 39934) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538066);
				tv0->ClearReplies();
				tv0->AddReply(538067, 39936, 39935);
				return;
			}
			if (a0 == 39936) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538068);
				tv0->ClearReplies();
				tv0->AddReply(538069, 39938, 39937);
				tv0->AddReply(538075, 39944, 39943);
				return;
			}
			if (a0 == 39944) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538076);
				tv0->ClearReplies();
				tv0->AddReply(538077, 39946, 39945);
				tv0->AddReply(538082, -1, 39950);
				return;
			}
			if (a0 == 39946) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538078);
				tv0->ClearReplies();
				tv0->AddReply(538079, 39948, 39947);
				return;
			}
			if (a0 == 39948) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538080);
				tv0->ClearReplies();
				tv0->AddReply(538081, -1, 39949);
				return;
			}
			if (a0 == 39938) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538070);
				tv0->ClearReplies();
				tv0->AddReply(538071, 39940, 39939);
				tv0->AddReply(538074, -1, 39942);
				return;
			}
			if (a0 == 39940) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538072);
				tv0->ClearReplies();
				tv0->AddReply(538073, -1, 39941);
				return;
			}
			if (a0 == 39913) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538046);
				tv0->ClearReplies();
				tv0->AddReply(538047, 39915, 39914);
				tv0->AddReply(538060, 39928, 39927);
				return;
			}
			if (a0 == 39928) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538061);
				tv0->ClearReplies();
				tv0->AddReply(538062, 39915, 39929);
				return;
			}
			if (a0 == 39915) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538048);
				tv0->ClearReplies();
				tv0->AddReply(538049, 39917, 39916);
				tv0->AddReply(538057, 39925, 39924);
				return;
			}
			if (a0 == 39925) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538058);
				tv0->ClearReplies();
				tv0->AddReply(538059, -1, 39926);
				return;
			}
			if (a0 == 39917) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538050);
				tv0->ClearReplies();
				tv0->AddReply(538051, 39919, 39918);
				tv0->AddReply(538056, -1, 39923);
				return;
			}
			if (a0 == 39919) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538052);
				tv0->ClearReplies();
				tv0->AddReply(538053, 39921, 39920);
				return;
			}
			if (a0 == 39921) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538054);
				tv0->ClearReplies();
				tv0->AddReply(538055, -1, 39922);
				return;
			}
			if (a0 == 39883) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538018);
				tv0->ClearReplies();
				tv0->AddReply(538019, 39885, 39884);
				tv0->AddReply(538030, 39897, 39896);
				tv0->AddReply(538039, 39907, 39906);
				tv0->AddReply(538042, -1, 39909);
				return;
			}
			if (a0 == 39907) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538040);
				tv0->ClearReplies();
				tv0->AddReply(538041, -1, 39908);
				return;
			}
			if (a0 == 39897) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538031);
				tv0->ClearReplies();
				tv0->AddReply(538032, 39899, 39898);
				tv0->AddReply(538038, 39899, 39904);
				return;
			}
			if (a0 == 39899) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538033);
				tv0->ClearReplies();
				tv0->AddReply(538034, 39901, 39900);
				tv0->AddReply(538037, -1, 39903);
				return;
			}
			if (a0 == 39901) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538035);
				tv0->ClearReplies();
				tv0->AddReply(538036, -1, 39902);
				return;
			}
			if (a0 == 39885) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538020);
				tv0->ClearReplies();
				tv0->AddReply(538021, 39887, 39886);
				tv0->AddReply(538027, 39894, 39893);
				return;
			}
			if (a0 == 39894) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538028);
				tv0->ClearReplies();
				tv0->AddReply(538029, -1, 39895);
				return;
			}
			if (a0 == 39887) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538022);
				tv0->ClearReplies();
				tv0->AddReply(538023, 39889, 39888);
				tv0->AddReply(538026, 39889, 39891);
				return;
			}
			if (a0 == 39889) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538024);
				tv0->ClearReplies();
				tv0->AddReply(538025, -1, 39890);
				return;
			}
			if (a0 == 39878) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538013);
				tv0->ClearReplies();
				tv0->AddReply(538014, 39880, 39879);
				return;
			}
			if (a0 == 39880) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538015);
				tv0->ClearReplies();
				tv0->AddReply(538016, -1, 39881);
				return;
			}
			if (a0 == 39869) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538004);
				tv0->ClearReplies();
				tv0->AddReply(538005, 39871, 39870);
				tv0->AddReply(538011, -1, 39876);
				return;
			}
			if (a0 == 39871) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538006);
				tv0->ClearReplies();
				tv0->AddReply(538007, 39873, 39872);
				return;
			}
			if (a0 == 39873) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538008);
				tv0->ClearReplies();
				tv0->AddReply(538009, -1, 39874);
				tv0->AddReply(538010, -1, 39875);
				return;
			}
			if (a0 == 39861) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537996);
				tv0->ClearReplies();
				tv0->AddReply(537997, 39863, 39862);
				return;
			}
			if (a0 == 39863) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537998);
				tv0->ClearReplies();
				tv0->AddReply(537999, 39865, 39864);
				tv0->AddReply(538002, -1, 39867);
				return;
			}
			if (a0 == 39865) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(538000);
				tv0->ClearReplies();
				tv0->AddReply(538001, -1, 39866);
				return;
			}
			if (a0 == 39833) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537971);
				tv0->ClearReplies();
				tv0->AddReply(537972, 39835, 39834);
				tv0->AddReply(537976, 39840, 39839);
				tv0->AddReply(537988, 39852, 39851);
				tv0->AddReply(537994, -1, 39859);
				return;
			}
			if (a0 == 39852) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537989);
				tv0->ClearReplies();
				tv0->AddReply(537990, 39835, 39853);
				tv0->AddReply(537991, 39856, 39855);
				return;
			}
			if (a0 == 39856) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537992);
				tv0->ClearReplies();
				tv0->AddReply(537993, 39840, 39857);
				return;
			}
			if (a0 == 39840) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537977);
				tv0->ClearReplies();
				tv0->AddReply(537978, 39842, 39841);
				tv0->AddReply(537987, -1, 39850);
				return;
			}
			if (a0 == 39842) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537979);
				tv0->ClearReplies();
				tv0->AddReply(537980, 39844, 39843);
				tv0->AddReply(537986, -1, 39849);
				return;
			}
			if (a0 == 39844) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537981);
				tv0->ClearReplies();
				tv0->AddReply(537982, 39846, 39845);
				tv0->AddReply(537985, -1, 39848);
				return;
			}
			if (a0 == 39846) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537983);
				tv0->ClearReplies();
				tv0->AddReply(537984, -1, 39847);
				return;
			}
			if (a0 == 39835) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(537973);
				tv0->ClearReplies();
				tv0->AddReply(537974, 39840, 39836);
				tv0->AddReply(537975, -1, 39838);
				return;
			}
			if (a0 == 45790) {
				f_1a8_a1_v("Neutral");
				tv0->SetMessage(543333);
				tv0->ClearReplies();
				tv0->AddReply(543334, -1, 45791);
				tv0->AddReply(543335, -1, 45792);
				return;
			}
			tv3 = true;
			if (f_1587_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t3
{
	void init(object a0)
	{
		disable OnUse;
		f_7b8_a1_v(a0);
		f_15c4_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1551_a1_i(a0);
		if (L0 > 0) {
			f_1554_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_155a_a0_v();
	}

	void f_7b8_a1_v(object a0)
	{
		if (a0 == null) {
			f_813_a1_v("fdie");
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
			f_1167_a1_v(L4);
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

	void f_813_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_1167_a1_v(a0);
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

maintask t4
{
	var bool tv0;
	var bool tv1;
	var bool tv2;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_1589_a0_v();
		f_842_a0_v();
		for (; ; ) {
			tv2 = false;
			f_947_a0_v();
		}
	}

	void f_842_a0_v(void)
	{
		if (!f_109d_a0_b()) {
			f_155a_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1551_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_906_a0_v();
			}
			f_1554_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1444_a1_v(a0);
		L0 = f_1497_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_906_a0_v();
			}
			f_14a1_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_15ba_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_14f4_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_906_a0_v();
				}
				f_14fb_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_151e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_906_a0_v();
			}
			f_1521_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_13ee_a2_b(a0, a1)) {
			f_906_a0_v();
			f_140e_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1523_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_906_a0_v();
				}
				f_152f_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1451_a1_b(a0)) {
			f_906_a0_v();
			f_1461_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_1427_a1_b(a0)) {
			f_906_a0_v();
			f_143e_a1_v(a0);
		} else {
			f_91f_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_91f_a1_v(a0);
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
		f_906_a0_v();
		f_155a_a0_v();
	}

	void f_906_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_98e_a0_v();
	}

	void f_90e_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_995_a0_v();
	}

	void OnDeath(object a0)
	{
		f_906_a0_v();
		global.OnDeath(a0);
	}

	void f_91f_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_ffc_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_1486_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_90e_a0_v();
			}
			f_148f_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_947_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_982_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_99e_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_99c_a0_b(), L5);
					L4 = null;
					if (L5) {
						t5{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_982_a0_f(void)
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

	void f_98e_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_995_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_99c_a0_b(void)
	{
		return false;
	}

	object f_99e_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t5
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_1551_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_a99_a0_v();
			}
			f_1554_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1444_a1_v(a0);
		L0 = f_1497_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_a99_a0_v();
			}
			f_14a1_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_15ba_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_14f4_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_a99_a0_v();
				}
				f_14fb_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_151e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_a99_a0_v();
			}
			f_1521_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_13ee_a2_b(a0, a1)) {
			f_a99_a0_v();
			f_140e_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1523_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_a99_a0_v();
				}
				f_152f_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1451_a1_b(a0)) {
			f_a99_a0_v();
			f_1461_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_a99_a0_v();
		f_155a_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_1427_a1_b(a0)) {
			f_a99_a0_v();
			f_143e_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_109d_a0_b()) {
			return;
		}
		L0 = f_1475_a0_i();
		for (L1 = 0; L1 < 5 && f_109d_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_146e_a1_s(L3));
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
			if (!f_a97_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_a97_a0_b(void)
	{
		return true;
	}

	void f_a99_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t6
{
	var object tv0;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		bool L2;
		tv0 = a0;
		f_ad1_a0_v();
		@GetDirection(L0);
		L1 = f_f6a_a1_V(tv0);
		if (f_11c5_a2_f(L0, L1) < 0) {
			f_1092_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_1092_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_ad1_a0_v(void)
	{
		f_1155_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1551_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b65_a0_v();
			}
			f_1554_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1444_a1_v(a0);
		L0 = f_1497_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b65_a0_v();
			}
			f_14a1_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_15ba_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_14f4_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_b65_a0_v();
				}
				f_14fb_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_151e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b65_a0_v();
			}
			f_1521_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_13ee_a2_b(a0, a1)) {
			f_b65_a0_v();
			f_140e_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1523_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_b65_a0_v();
				}
				f_152f_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1451_a1_b(a0)) {
			f_b65_a0_v();
			f_1461_a1_v(a0);
		}
	}

	void f_b65_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_b65_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_ffc_a1_b(tv0)) {
			f_b65_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_f6a_a1_V(tv0);
		if (f_11c5_a2_f(L0, L1) < 0.4999999701976776) {
			f_1092_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_b65_a0_v();
		f_155a_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_1427_a1_b(a0)) {
			f_b65_a0_v();
			f_143e_a1_v(a0);
		}
	}
}

task t7
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(object a0)
	{
		f_bbf_a3_v(a0, true, 180.0);
	}

	float f_bb9_a2_f(object a0, int a1)
	{
		return 0.05000000074505806;
	}

	int f_bbc_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_bbf_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_ca4_a0_v();
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
			@SendPlayerEnemy(a0, f_1190_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_ffc_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_e41_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t8{tv0, L0, 3000.0, true, false}) {
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
						if (!t8{tv0, L0, 3000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_1092_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_e41_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_ffc_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_e16_a0_b()) {
						@Face(tv0);
						f_e48_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_d92_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_e41_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_e16_a0_b()) {
							if (!f_ffc_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_cee_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_cee_a1_b(a2)) {
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

	void f_ca4_a0_v(void)
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

	void f_cc7_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_bb9_a2_f(L0, a1);
			L2 = f_f8a_a3_f(L0, L1, f_bbc_a2_i(L0, a1));
			@ReportHit(tv0, f_e46_a0_i(), L2, L1);
			f_e4d_a2_v(L0, L2);
		}
	}

	bool f_cee_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_e41_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_1206_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_e21_a0_v();
		if (!f_ffc_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_cc7_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_1206_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_e41_a0_v();
			if (!f_ffc_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_cc7_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_1206_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_e41_a0_v();
				if (!f_ffc_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_cc7_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_e4f_a0_b()) {
			f_d77_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_d77_a1_b(float a0)
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
				if (f_dd9_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_e41_a0_v();
		}
		return false;
	}

	bool f_d92_a1_b(float a0)
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
			if (f_dd9_a0_b()) {
				return true;
			}
			if (!f_ffc_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_cee_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_e41_a0_v();
		return false;
	}

	bool f_dbd_a0_b(void)
	{
		if (!f_ffc_a1_b(tv0)) {
			return false;
		}
		if (f_e16_a0_b()) {
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

	bool f_dd9_a0_b(void)
	{
		if (f_dbd_a0_b() && f_de9_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_de9_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_f6a_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_e41_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_dbd_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_e16_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_e21_a0_v(void)
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
		if (L0 < f_e53_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_e51_a0_i();
		}
	}

	void f_e41_a0_v(void)
	{
		f_11fd_a1_v(tv0);
	}

	int f_e46_a0_i(void)
	{
		return 0;
	}

	void f_e48_a0_v(void)
	{
		f_1167_a1_v("attack_stay");
	}

	void f_e4d_a2_v(object a0, float a1)
	{
	}

	bool f_e4f_a0_b(void)
	{
		return true;
	}

	int f_e51_a0_i(void)
	{
		return 1;
	}

	float f_e53_a0_f(void)
	{
		return 0.5;
	}
}

task t8
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_e9b_a0_v();
		f_155a_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_11fd_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_1155_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_f79_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_1190_a0_o());
		}
		L1 = f_ec5_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_11fd_a1_v(tv1);
		} else {
			f_f2b_a1_v(a0);
		}
	}

	void f_e9b_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_f41_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_1155_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_ec5_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_f51_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_f58_a0_s(), f_f5a_a0_s());
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

	void f_f2b_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_f51_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_f41_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_e9b_a0_v();
		global.OnDeath(a0);
	}
}

bool f_f51_a1_b(object a0)
{
	return f_ffc_a1_b(a0);
}

string f_f58_a0_s(void)
{
	return "walk";
}

string f_f5a_a0_s(void)
{
	return "run";
}

string f_f5c_a1_s(int a0)
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

Vector f_f6a_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_f71_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_f79_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_f7e_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_f8a_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_f7e_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_f7e_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_f5c_a1_s(a2);
	if (!f_f7e_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_11a0_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_11a7_a3_f(L4 - L5, 0, 1));
	if (f_f79_a1_b(a0)) {
		f_11db_a1_v(-L5);
	}
	return L5;
}

bool f_fd3_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_fd8_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_fd3_a1_b(a0)) {
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

bool f_ffc_a1_b(object a0)
{
	int L0;
	if (!f_fd8_a1_b(a0)) {
		return false;
	}
	if (!f_f7e_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_1014_a1_v(object a0)
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

void f_1040_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_1196_a1_V(f_f6a_a1_V(a0));
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
			f_1084_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_1014_a1_v(a0);
}

void f_1084_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_1014_a1_v(a0);
}

void f_1092_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_109d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_10a2_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1196_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1587_a0_b()) {
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

void f_10e7_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1587_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_10f9_a1_b(object a0)
{
	return f_1101_a2_b(a0, 70);
}

bool f_1101_a2_b(object a0, float a1)
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
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_1131_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_1136_a1_v(string a0)
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

void f_1146_a2_v(string a0, bool a1)
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

void f_1155_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_1160_a0_v(void)
{
	if (f_1587_a0_b()) {
		@lshStopSpeech();
	}
}

void f_1167_a1_v(string a0)
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

object f_1190_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1196_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_11a0_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_11a7_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_11b2_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_11bb_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_11c5_a2_f(Vector a0, Vector a1)
{
	return f_11b2_a2_f(a0, a1) / (f_11bb_a1_f(a0) * f_11bb_a1_f(a1));
}

int f_11d6_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_11db_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

int f_11ec_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_11f5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void f_11fd_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_1206_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_1190_a0_o(), L0);
}

bool f_1211_a1_b(object a0)
{
	if (f_11d6_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_121d_a1_b(object a0)
{
	if (f_11d6_a1_i("branch") == 2) {
		return true;
	}
	return false;
}

bool f_1229_a1_b(object a0)
{
	if (f_1265_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1233_a1_b(object a0)
{
	if (f_126c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_123d_a1_b(object a0)
{
	if (f_1273_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1247_a1_b(object a0)
{
	if (f_127a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1251_a1_b(object a0)
{
	if (f_1281_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_125b_a1_b(object a0)
{
	if (f_1296_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1265_a1_b(object a0)
{
	return f_11ec_a0_i() == 1;
}

bool f_126c_a1_b(object a0)
{
	return f_11ec_a0_i() == 2;
}

bool f_1273_a1_b(object a0)
{
	return f_11ec_a0_i() == 4;
}

bool f_127a_a1_b(object a0)
{
	return f_11ec_a0_i() == 5;
}

bool f_1281_a1_b(object a0)
{
	if (f_11f5_a0_i() >= 0 && f_11f5_a0_i() < 12) {
		return true;
	}
	return false;
}

bool f_1296_a1_b(object a0)
{
	if (f_11f5_a0_i() >= 12) {
		return true;
	}
	return false;
}

int f_12a1_a0_i(void)
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

int f_12b2_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_12b8_a1_v(object a0)
{
	if (f_12b2_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_12c5_a2_v(int a0, int a1)
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
	@AddItem(L1, f_13bc_a1_i("Money"), 0, L0);
}

void f_12e4_a1_v(string a0)
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

void f_12f5_a0_v(void)
{
	if (f_12b2_a0_i() != 1) {
		return;
	}
	f_12e4_a1_v("liver");
	f_12e4_a1_v("kidney");
	f_12e4_a1_v("heart");
	f_12e4_a1_v("blood");
}

void f_130d_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_12c5_a2_v(0, 100 + f_11ec_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_13bc_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_13bc_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_13bc_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_13bc_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_13bc_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_13bc_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_12c5_a2_v(0, 50 + f_11ec_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_13bc_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_13bc_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_13bc_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_13bc_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_13bc_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_13bc_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_13bc_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_13c1_a1_v(object a0)
{
	t3{a0};
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
	f_13c1_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_1040_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_1084_a5_v(a0, a1, a2, a4, a5);
}

bool f_13ee_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_155b_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_1560_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_1575_a1_b(a0);
			}
		}
	}
	return false;
}

void f_140e_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_155e_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_156f_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_1578_a1_v(a0);
			}
		}
	}
}

bool f_1427_a1_b(object a0)
{
	if (f_155b_a1_b(a0) && f_f79_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_143e_a1_v(object a0)
{
	f_155e_a1_v(a0);
}

void f_1444_a1_v(object a0)
{
	if (f_f79_a1_b(a0)) {
		@ReportReputationChange(a0, f_1190_a0_o(), -0.029999999329447746);
	}
}

bool f_1451_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_157a_a1_b(L0);
	}
	return false;
}

void f_1461_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_157d_a1_v(L0);
	}
}

string f_146e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1475_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_146e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1486_a1_i(object a0)
{
	return f_15b5_a0_b() ? 2 : 0;
}

void f_148f_a1_v(object a0)
{
	t6{a0};
}

int f_1497_a1_i(object a0)
{
	return f_ffc_a1_b(a0) ? 2 : 0;
}

void f_14a1_a1_v(object a0)
{
	t7{a0};
}

bool f_14a9_a2_b(object a0, bool a1)
{
	string L0;
	string L1;
	if (!f_f7e_a2_b(a0, "class")) {
		return false;
	}
	@GetProperty("class", L0);
	a0->GetProperty("class", L1);
	if (!a1 && L0 == L1) {
		return true;
	}
	if (L1 == "rat") {
		return false;
	} else {
		if (L1 == "rat_big") {
			return false;
		} else {
			if (L1 == "dog") {
				return false;
			} else {
				if (L1 == "grabitel") {
					return false;
				} else {
					if (L1 == "bomber") {
						return false;
					} else {
						if (L1 == "sanitar") {
							return false;
						} else {
							if (L1 == "hunter") {
								return false;
							} else {
								if (L1 == "soldier") {
									return false;
								}
							}
						}
					}
				}
			}
		}
	}
	return true;
}

int f_14f4_a2_i(object a0, bool a1)
{
	return f_1497_a1_i(a0);
}

void f_14fb_a1_v(object a0)
{
	f_14a1_a1_v(a0);
}

bool f_1501_a4_b(object a0, object a1, float a2, bool a3)
{
	bool L0;
	if (!f_14a9_a2_b(a1, !a3)) {
		return false;
	}
	@CanSee(L0, a0);
	if (L0 || f_f71_a1_f(a0) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_151e_a1_i(object a0)
{
	return 0;
}

void f_1521_a1_v(object a0)
{
}

int f_1523_a2_i(string a0, object a1)
{
	if (a0 == "killme") {
		return f_1539_a1_i(a1);
	}
	return 0;
}

void f_152f_a2_v(string a0, object a1)
{
	if (a0 == "killme") {
		f_154b_a1_v(a1);
		return;
	}
}

int f_1539_a1_i(object a0)
{
	if (!f_ffc_a1_b(a0)) {
		return 0;
	}
	return f_15b7_a1_b(a0) ? 2 : 0;
}

void f_154b_a1_v(object a0)
{
	f_14a1_a1_v(a0);
}

int f_1551_a1_i(object a0)
{
	return 2;
}

void f_1554_a1_v(object a0)
{
	f_158d_a1_v(a0);
}

void f_155a_a0_v(void)
{
}

bool f_155b_a1_b(object a0)
{
	return false;
}

void f_155e_a1_v(object a0)
{
}

bool f_1560_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_f71_a1_f(a0) <= 2250000;
}

void f_156f_a1_v(object a0)
{
	f_148f_a1_v(a0);
}

bool f_1575_a1_b(object a0)
{
	return false;
}

void f_1578_a1_v(object a0)
{
}

bool f_157a_a1_b(object a0)
{
	return false;
}

void f_157d_a1_v(object a0)
{
}

int f_157f_a0_i(void)
{
	return 515564;
}

int f_1581_a0_i(void)
{
	return 503349;
}

string f_1583_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_1585_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_1587_a0_b(void)
{
	return false;
}

void f_1589_a0_v(void)
{
	g0 = false;
}

void f_158d_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_12b8_a1_v(a0);
		}
		return;
	} else {
		if (1000 == t1{a0}) {
			if (!f_10f9_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_1131_a1_v(a0);
		}
	}
}

bool f_15b5_a0_b(void)
{
	return false;
}

bool f_15b7_a1_b(object a0)
{
	return true;
}

bool f_15ba_a3_b(object a0, object a1, bool a2)
{
	return f_1501_a4_b(a0, a1, 700.0, a2);
}

void f_15c4_a1_v(object a0)
{
	if (f_f79_a1_b(a0)) {
		@ReportReputationChange(a0, f_1190_a0_o(), -0.07000000029802322, true);
		f_130d_a1_v(true);
	}
	f_12f5_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

