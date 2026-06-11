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
		if (!f_fce_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1513_a0_i());
		L0->SetNPCDescription(f_1511_a0_i());
		L0->SetPhoto(f_1515_a0_s());
		L0->SetPhoto2(f_1517_a0_s());
		L0->SetPlayerName(f_127b_a0_i());
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
		f_1012_a1_v(a0);
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
			f_18e_a1_v("Neutral");
			tv0->SetMessage(537052);
			tv0->ClearReplies();
			tv0->AddReply(537053, 38893, 38892);
			if (f_112a_a1_b(tv1) && f_117e_a1_b(tv1)) {
				tv0->AddReply(537062, 38902, 38901);
			}
			if (f_112a_a1_b(tv1) && f_1192_a1_b(tv1)) {
				tv0->AddReply(537065, 38905, 38904);
			}
			if (f_112a_a1_b(tv1) && f_1188_a1_b(tv1)) {
				tv0->AddReply(537089, 38929, 38928);
			}
			if (f_1188_a1_b(tv1) && f_112a_a1_b(tv1)) {
				tv0->AddReply(537104, 38945, 38944);
			}
			if (f_112a_a1_b(tv1) && f_1192_a1_b(tv1)) {
				tv0->AddReply(537124, 38966, 38965);
			}
			if (f_112a_a1_b(tv1) && f_119c_a1_b(tv1)) {
				tv0->AddReply(537140, 38982, 38981);
			}
			if (f_112a_a1_b(tv1) && f_11a6_a1_b(tv1)) {
				tv0->AddReply(537157, 38999, 38998);
			}
			if (f_112a_a1_b(tv1) && f_11b0_a1_b(tv1)) {
				tv0->AddReply(537175, 39019, 39018);
			}
			if (f_112a_a1_b(tv1) && f_11ba_a1_b(tv1)) {
				tv0->AddReply(537187, 39031, 39030);
			}
			if (f_112a_a1_b(tv1) && f_11c4_a1_b(tv1)) {
				tv0->AddReply(537199, 39043, 39042);
			}
			if (f_112a_a1_b(tv1) && f_11ce_a1_b(tv1)) {
				tv0->AddReply(537209, 39053, 39052);
			}
			if (f_112a_a1_b(tv1) && f_11d8_a1_b(tv1)) {
				tv0->AddReply(537219, 39063, 39062);
			}
			if (f_112a_a1_b(tv1) && f_11e2_a1_b(tv1)) {
				tv0->AddReply(537226, 39070, 39069);
			}
			tv0->AddReply(537237, -1, 39080);
			if (f_1136_a1_b(tv1) || f_112a_a1_b(tv1)) {
				tv0->AddReply(537238, -1, 39081);
			}
			break;
			return;
		}
		if (f_1519_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1023_a1_v(tv2);
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
		if (!f_1519_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_102a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_103b_a0_v();
			if (a1 == 38894) {
				f_110c_a2_v(tv1, tv0);
			}
			if (a1 == 38895) {
				f_1111_a2_v(tv1, tv0);
			}
			if (a1 == 38896) {
				f_1116_a2_v(tv1, tv0);
			}
			if (a1 == 38897) {
				f_111b_a2_v(tv1, tv0);
			}
			if (a1 == 38898) {
				f_1120_a2_v(tv1, tv0);
			}
			if (a1 == 38899) {
				f_1125_a2_v(tv1, tv0);
			}
			if (a0 == 38891) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537052);
				tv0->ClearReplies();
				tv0->AddReply(537053, 38893, 38892);
				if (f_112a_a1_b(tv1) && f_117e_a1_b(tv1)) {
					tv0->AddReply(537062, 38902, 38901);
				}
				if (f_112a_a1_b(tv1) && f_1192_a1_b(tv1)) {
					tv0->AddReply(537065, 38905, 38904);
				}
				if (f_112a_a1_b(tv1) && f_1188_a1_b(tv1)) {
					tv0->AddReply(537089, 38929, 38928);
				}
				if (f_1188_a1_b(tv1) && f_112a_a1_b(tv1)) {
					tv0->AddReply(537104, 38945, 38944);
				}
				if (f_112a_a1_b(tv1) && f_1192_a1_b(tv1)) {
					tv0->AddReply(537124, 38966, 38965);
				}
				if (f_112a_a1_b(tv1) && f_119c_a1_b(tv1)) {
					tv0->AddReply(537140, 38982, 38981);
				}
				if (f_112a_a1_b(tv1) && f_11a6_a1_b(tv1)) {
					tv0->AddReply(537157, 38999, 38998);
				}
				if (f_112a_a1_b(tv1) && f_11b0_a1_b(tv1)) {
					tv0->AddReply(537175, 39019, 39018);
				}
				if (f_112a_a1_b(tv1) && f_11ba_a1_b(tv1)) {
					tv0->AddReply(537187, 39031, 39030);
				}
				if (f_112a_a1_b(tv1) && f_11c4_a1_b(tv1)) {
					tv0->AddReply(537199, 39043, 39042);
				}
				if (f_112a_a1_b(tv1) && f_11ce_a1_b(tv1)) {
					tv0->AddReply(537209, 39053, 39052);
				}
				if (f_112a_a1_b(tv1) && f_11d8_a1_b(tv1)) {
					tv0->AddReply(537219, 39063, 39062);
				}
				if (f_112a_a1_b(tv1) && f_11e2_a1_b(tv1)) {
					tv0->AddReply(537226, 39070, 39069);
				}
				tv0->AddReply(537237, -1, 39080);
				if (f_1136_a1_b(tv1) || f_112a_a1_b(tv1)) {
					tv0->AddReply(537238, -1, 39081);
				}
				return;
			}
			if (a0 == 39070) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537227);
				tv0->ClearReplies();
				tv0->AddReply(537228, 39072, 39071);
				tv0->AddReply(537235, -1, 39078);
				tv0->AddReply(537236, -1, 39079);
				return;
			}
			if (a0 == 39072) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537229);
				tv0->ClearReplies();
				tv0->AddReply(537230, 39074, 39073);
				tv0->AddReply(537234, -1, 39077);
				return;
			}
			if (a0 == 39074) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537231);
				tv0->ClearReplies();
				tv0->AddReply(537232, -1, 39075);
				tv0->AddReply(537233, -1, 39076);
				return;
			}
			if (a0 == 39063) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537220);
				tv0->ClearReplies();
				tv0->AddReply(537221, 39065, 39064);
				tv0->AddReply(537225, -1, 39068);
				return;
			}
			if (a0 == 39065) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537222);
				tv0->ClearReplies();
				tv0->AddReply(537223, -1, 39066);
				tv0->AddReply(537224, -1, 39067);
				return;
			}
			if (a0 == 39053) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537210);
				tv0->ClearReplies();
				tv0->AddReply(537211, 39055, 39054);
				tv0->AddReply(537218, -1, 39061);
				return;
			}
			if (a0 == 39055) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537212);
				tv0->ClearReplies();
				tv0->AddReply(537213, 39057, 39056);
				tv0->AddReply(537217, -1, 39060);
				return;
			}
			if (a0 == 39057) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537214);
				tv0->ClearReplies();
				tv0->AddReply(537215, -1, 39058);
				tv0->AddReply(537216, -1, 39059);
				return;
			}
			if (a0 == 39043) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537200);
				tv0->ClearReplies();
				tv0->AddReply(537201, 39045, 39044);
				tv0->AddReply(537208, -1, 39051);
				return;
			}
			if (a0 == 39045) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537202);
				tv0->ClearReplies();
				tv0->AddReply(537203, 39047, 39046);
				tv0->AddReply(537207, -1, 39050);
				return;
			}
			if (a0 == 39047) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537204);
				tv0->ClearReplies();
				tv0->AddReply(537205, -1, 39048);
				tv0->AddReply(537206, -1, 39049);
				return;
			}
			if (a0 == 39031) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537188);
				tv0->ClearReplies();
				tv0->AddReply(537189, 39033, 39032);
				tv0->AddReply(537193, 39037, 39036);
				return;
			}
			if (a0 == 39037) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537194);
				tv0->ClearReplies();
				tv0->AddReply(537195, 39039, 39038);
				tv0->AddReply(537198, -1, 39041);
				return;
			}
			if (a0 == 39039) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537196);
				tv0->ClearReplies();
				tv0->AddReply(537197, -1, 39040);
				return;
			}
			if (a0 == 39033) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537190);
				tv0->ClearReplies();
				tv0->AddReply(537191, -1, 39034);
				tv0->AddReply(537192, -1, 39035);
				return;
			}
			if (a0 == 39019) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537176);
				tv0->ClearReplies();
				tv0->AddReply(537177, 39021, 39020);
				tv0->AddReply(537186, -1, 39029);
				return;
			}
			if (a0 == 39021) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537178);
				tv0->ClearReplies();
				tv0->AddReply(537179, 39023, 39022);
				tv0->AddReply(537185, -1, 39028);
				return;
			}
			if (a0 == 39023) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537180);
				tv0->ClearReplies();
				tv0->AddReply(537181, 39025, 39024);
				tv0->AddReply(537184, -1, 39027);
				return;
			}
			if (a0 == 39025) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537182);
				tv0->ClearReplies();
				tv0->AddReply(537183, -1, 39026);
				return;
			}
			if (a0 == 38999) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537158);
				tv0->ClearReplies();
				tv0->AddReply(537159, 39001, 39000);
				tv0->AddReply(537170, 39012, 39011);
				tv0->AddReply(537174, -1, 39017);
				return;
			}
			if (a0 == 39012) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537171);
				tv0->ClearReplies();
				tv0->AddReply(537172, 39001, 39013);
				tv0->AddReply(537173, 39001, 39015);
				return;
			}
			if (a0 == 39001) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537160);
				tv0->ClearReplies();
				tv0->AddReply(537161, 39003, 39002);
				tv0->AddReply(537165, 39007, 39006);
				return;
			}
			if (a0 == 39007) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537166);
				tv0->ClearReplies();
				tv0->AddReply(537167, 39009, 39008);
				return;
			}
			if (a0 == 39009) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537168);
				tv0->ClearReplies();
				tv0->AddReply(537169, -1, 39010);
				return;
			}
			if (a0 == 39003) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537162);
				tv0->ClearReplies();
				tv0->AddReply(537163, -1, 39004);
				tv0->AddReply(537164, -1, 39005);
				return;
			}
			if (a0 == 38982) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537141);
				tv0->ClearReplies();
				tv0->AddReply(537142, 38984, 38983);
				tv0->AddReply(537148, 38990, 38989);
				tv0->AddReply(537156, -1, 38997);
				return;
			}
			if (a0 == 38990) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537149);
				tv0->ClearReplies();
				tv0->AddReply(537150, 38992, 38991);
				return;
			}
			if (a0 == 38992) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537151);
				tv0->ClearReplies();
				tv0->AddReply(537152, 38994, 38993);
				return;
			}
			if (a0 == 38994) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537153);
				tv0->ClearReplies();
				tv0->AddReply(537154, -1, 38995);
				tv0->AddReply(537155, -1, 38996);
				return;
			}
			if (a0 == 38984) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537143);
				tv0->ClearReplies();
				tv0->AddReply(537144, 38986, 38985);
				return;
			}
			if (a0 == 38986) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537145);
				tv0->ClearReplies();
				tv0->AddReply(537146, -1, 38987);
				tv0->AddReply(537147, -1, 38988);
				return;
			}
			if (a0 == 38966) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537125);
				tv0->ClearReplies();
				tv0->AddReply(537126, 38968, 38967);
				tv0->AddReply(537130, 38972, 38971);
				tv0->AddReply(537139, -1, 38980);
				return;
			}
			if (a0 == 38972) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537131);
				tv0->ClearReplies();
				tv0->AddReply(537132, 38974, 38973);
				tv0->AddReply(537136, 38978, 38977);
				return;
			}
			if (a0 == 38978) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537137);
				tv0->ClearReplies();
				tv0->AddReply(537138, -1, 38979);
				return;
			}
			if (a0 == 38974) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537133);
				tv0->ClearReplies();
				tv0->AddReply(537134, -1, 38975);
				tv0->AddReply(537135, -1, 38976);
				return;
			}
			if (a0 == 38968) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537127);
				tv0->ClearReplies();
				tv0->AddReply(537128, -1, 38969);
				tv0->AddReply(537129, -1, 38970);
				return;
			}
			if (a0 == 38945) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537105);
				tv0->ClearReplies();
				tv0->AddReply(537106, 38947, 38946);
				tv0->AddReply(537123, -1, 38964);
				return;
			}
			if (a0 == 38947) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537107);
				tv0->ClearReplies();
				tv0->AddReply(537108, 38949, 38948);
				tv0->AddReply(537116, 38958, 38957);
				return;
			}
			if (a0 == 38958) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537117);
				tv0->ClearReplies();
				tv0->AddReply(537118, 38960, 38959);
				tv0->AddReply(537122, -1, 38963);
				return;
			}
			if (a0 == 38960) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537119);
				tv0->ClearReplies();
				tv0->AddReply(537120, -1, 38961);
				tv0->AddReply(537121, -1, 38962);
				return;
			}
			if (a0 == 38949) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537109);
				tv0->ClearReplies();
				tv0->AddReply(537110, 38951, 38950);
				tv0->AddReply(537115, 38951, 38955);
				return;
			}
			if (a0 == 38951) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537111);
				tv0->ClearReplies();
				tv0->AddReply(537112, -1, 38952);
				tv0->AddReply(537113, -1, 38953);
				tv0->AddReply(537114, -1, 38954);
				return;
			}
			if (a0 == 38929) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537090);
				tv0->ClearReplies();
				tv0->AddReply(537091, 38931, 38930);
				tv0->AddReply(537100, 38940, 38939);
				tv0->AddReply(537103, -1, 38943);
				return;
			}
			if (a0 == 38940) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537101);
				tv0->ClearReplies();
				tv0->AddReply(537102, 38933, 38941);
				return;
			}
			if (a0 == 38931) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537092);
				tv0->ClearReplies();
				tv0->AddReply(537093, 38933, 38932);
				return;
			}
			if (a0 == 38933) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537094);
				tv0->ClearReplies();
				tv0->AddReply(537095, 38935, 38934);
				tv0->AddReply(537099, -1, 38938);
				return;
			}
			if (a0 == 38935) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537096);
				tv0->ClearReplies();
				tv0->AddReply(537097, -1, 38936);
				tv0->AddReply(537098, -1, 38937);
				return;
			}
			if (a0 == 38905) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537066);
				tv0->ClearReplies();
				tv0->AddReply(537067, 38907, 38906);
				tv0->AddReply(537085, 38925, 38924);
				return;
			}
			if (a0 == 38925) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537086);
				tv0->ClearReplies();
				tv0->AddReply(537087, -1, 38926);
				tv0->AddReply(537088, -1, 38927);
				return;
			}
			if (a0 == 38907) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537068);
				tv0->ClearReplies();
				tv0->AddReply(537069, 38909, 38908);
				tv0->AddReply(537080, 38920, 38919);
				return;
			}
			if (a0 == 38920) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537081);
				tv0->ClearReplies();
				tv0->AddReply(537082, 38922, 38921);
				return;
			}
			if (a0 == 38922) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537083);
				tv0->ClearReplies();
				tv0->AddReply(537084, -1, 38923);
				return;
			}
			if (a0 == 38909) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537070);
				tv0->ClearReplies();
				tv0->AddReply(537071, 38911, 38910);
				tv0->AddReply(537077, 38917, 38916);
				return;
			}
			if (a0 == 38917) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537078);
				tv0->ClearReplies();
				tv0->AddReply(537079, -1, 38918);
				return;
			}
			if (a0 == 38911) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537072);
				tv0->ClearReplies();
				tv0->AddReply(537073, 38913, 38912);
				tv0->AddReply(537076, -1, 38915);
				return;
			}
			if (a0 == 38913) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537074);
				tv0->ClearReplies();
				tv0->AddReply(537075, -1, 38914);
				return;
			}
			if (a0 == 38902) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537063);
				tv0->ClearReplies();
				tv0->AddReply(537064, -1, 38903);
				return;
			}
			if (a0 == 38893) {
				f_18e_a1_v("Neutral");
				tv0->SetMessage(537054);
				tv0->ClearReplies();
				if (f_1142_a1_b(tv1)) {
					tv0->AddReply(537055, -1, 38894);
				}
				if (f_114c_a1_b(tv1)) {
					tv0->AddReply(537056, -1, 38895);
				}
				if (f_1156_a1_b(tv1)) {
					tv0->AddReply(537057, -1, 38896);
				}
				if (f_1160_a1_b(tv1)) {
					tv0->AddReply(537058, -1, 38897);
				}
				if (f_116a_a1_b(tv1)) {
					tv0->AddReply(537059, -1, 38898);
				}
				if (f_1174_a1_b(tv1)) {
					tv0->AddReply(537060, -1, 38899);
				}
				tv0->AddReply(537061, -1, 38900);
				return;
			}
			tv3 = true;
			if (f_1519_a0_b()) {
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
		f_869_a1_v(a0);
		f_15a0_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_14e1_a1_i(a0);
		if (L0 > 0) {
			f_14e4_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_14ea_a0_v();
	}

	void f_869_a1_v(object a0)
	{
		if (a0 == null) {
			f_8c4_a1_v("fdie");
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
			f_1042_a1_v(L4);
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

	void f_8c4_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_1042_a1_v(a0);
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
		f_151b_a0_v();
		f_8f3_a0_v();
		for (; ; ) {
			tv2 = false;
			f_9f8_a0_v();
		}
	}

	void f_8f3_a0_v(void)
	{
		if (!f_fc9_a0_b()) {
			f_14ea_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_14e1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_9b7_a0_v();
			}
			f_14e4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_141e_a1_v(a0);
		L0 = f_1471_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_9b7_a0_v();
			}
			f_147b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1597_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1483_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_9b7_a0_v();
				}
				f_148d_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_14d7_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_9b7_a0_v();
			}
			f_14da_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_13c8_a2_b(a0, a1)) {
			f_9b7_a0_v();
			f_13e8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_14dc_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_9b7_a0_v();
				}
				f_14df_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_142b_a1_b(a0)) {
			f_9b7_a0_v();
			f_143b_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_1401_a1_b(a0)) {
			f_9b7_a0_v();
			f_1418_a1_v(a0);
		} else {
			f_9d0_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_9d0_a1_v(a0);
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
		f_9b7_a0_v();
		f_14ea_a0_v();
	}

	void f_9b7_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_a3f_a0_v();
	}

	void f_9bf_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_a46_a0_v();
	}

	void OnDeath(object a0)
	{
		f_9b7_a0_v();
		global.OnDeath(a0);
	}

	void f_9d0_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_f28_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_1460_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_9bf_a0_v();
			}
			f_1469_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_9f8_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_a33_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_a4f_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_a4d_a0_b(), L5);
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

	float f_a33_a0_f(void)
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

	void f_a3f_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_a46_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_a4d_a0_b(void)
	{
		return false;
	}

	object f_a4f_a1_o(Vector a0)
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
		L0 = f_14e1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b4a_a0_v();
			}
			f_14e4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_141e_a1_v(a0);
		L0 = f_1471_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b4a_a0_v();
			}
			f_147b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1597_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1483_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_b4a_a0_v();
				}
				f_148d_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_14d7_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b4a_a0_v();
			}
			f_14da_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_13c8_a2_b(a0, a1)) {
			f_b4a_a0_v();
			f_13e8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_14dc_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_b4a_a0_v();
				}
				f_14df_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_142b_a1_b(a0)) {
			f_b4a_a0_v();
			f_143b_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_b4a_a0_v();
		f_14ea_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_1401_a1_b(a0)) {
			f_b4a_a0_v();
			f_1418_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_fc9_a0_b()) {
			return;
		}
		L0 = f_144f_a0_i();
		for (L1 = 0; L1 < 5 && f_fc9_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_1448_a1_s(L3));
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
			if (!f_b48_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_b48_a0_b(void)
	{
		return true;
	}

	void f_b4a_a0_v(void)
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
		f_b82_a0_v();
		@GetDirection(L0);
		L1 = f_ec2_a1_V(tv0);
		if (f_10a1_a2_f(L0, L1) < 0) {
			f_fbe_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_fbe_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_b82_a0_v(void)
	{
		f_1030_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_14e1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_c16_a0_v();
			}
			f_14e4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_141e_a1_v(a0);
		L0 = f_1471_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_c16_a0_v();
			}
			f_147b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1597_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1483_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_c16_a0_v();
				}
				f_148d_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_14d7_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_c16_a0_v();
			}
			f_14da_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_13c8_a2_b(a0, a1)) {
			f_c16_a0_v();
			f_13e8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_14dc_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_c16_a0_v();
				}
				f_14df_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_142b_a1_b(a0)) {
			f_c16_a0_v();
			f_143b_a1_v(a0);
		}
	}

	void f_c16_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_c16_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_f28_a1_b(tv0)) {
			f_c16_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_ec2_a1_V(tv0);
		if (f_10a1_a2_f(L0, L1) < 0.4999999701976776) {
			f_fbe_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_c16_a0_v();
		f_14ea_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_1401_a1_b(a0)) {
			f_c16_a0_v();
			f_1418_a1_v(a0);
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
		f_ca3_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_d20_a0_v();
		f_14ea_a0_v();
	}

	Vector f_c85_a1_V(float a0)
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
		L3 = f_1071_a1_V(f_1071_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_ca3_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_c85_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_c85_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_ebd_a0_V() + L0;
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
				L3 = f_c85_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_ebd_a0_V() + L3;
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
			L2 = f_c85_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_d30_a0_b())) {
				@Stop();
				tv1 = f_ebd_a0_V() + L2;
			}
		}
	}

	void f_d20_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_d20_a0_v();
		global.OnDeath(a0);
	}

	bool f_d30_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_ec2_a1_V(tv0);
		return f_1086_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t7
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_d40_a1_V(float a0)
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
		L3 = f_1071_a1_V(f_1071_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_d40_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_d40_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_ebd_a0_V() + L0;
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
				L3 = f_d40_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_ebd_a0_V() + L3;
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
			L2 = f_d40_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_deb_a0_b())) {
				@Stop();
				tv1 = f_ebd_a0_V() + L2;
			}
		}
	}

	void f_ddb_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_ddb_a0_v();
		global.OnDeath(a0);
	}

	bool f_deb_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_ec2_a1_V(tv0);
		return f_1086_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t8
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_e9d_a0_v();
		f_14ea_a0_v();
	}

	Vector f_e02_a1_V(float a0)
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
		L3 = f_1071_a1_V(f_1071_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_e02_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_e02_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_ebd_a0_V() + L0;
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
				L3 = f_e02_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_ebd_a0_V() + L3;
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
			L2 = f_e02_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_ead_a0_b())) {
				@Stop();
				tv1 = f_ebd_a0_V() + L2;
			}
		}
	}

	void f_e9d_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_e9d_a0_v();
		global.OnDeath(a0);
	}

	bool f_ead_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_ec2_a1_V(tv0);
		return f_1086_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_ebd_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_ec2_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_ec9_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_ed1_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_ed6_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_ee2_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_ed6_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_107b_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_ef8_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_eff_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_f04_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_eff_a1_b(a0)) {
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

bool f_f28_a1_b(object a0)
{
	int L0;
	if (!f_f04_a1_b(a0)) {
		return false;
	}
	if (!f_ed6_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_f40_a1_v(object a0)
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

void f_f6c_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_1071_a1_V(f_ec2_a1_V(a0));
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
			f_fb0_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_f40_a1_v(a0);
}

void f_fb0_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_f40_a1_v(a0);
}

void f_fbe_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_fc9_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_fce_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1071_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1519_a0_b()) {
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

void f_1012_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1519_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_1023_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_102a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_1030_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_103b_a0_v(void)
{
	if (f_1519_a0_b()) {
		@lshStopSpeech();
	}
}

void f_1042_a1_v(string a0)
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

object f_106b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1071_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_107b_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_1086_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_108e_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_1097_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_10a1_a2_f(Vector a0, Vector a1)
{
	return f_108e_a2_f(a0, a1) / (f_1097_a1_f(a0) * f_1097_a1_f(a1));
}

int f_10b2_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_10b7_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_10c3_a2_v(object a0, int a1)
{
	f_ef8_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_10b7_a2_v(L0, a1);
	}
}

bool f_10d6_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_10f9_a1_v(a1);
	f_ee2_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_10f9_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

int f_1103_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_110c_a2_v(object a0, object a1)
{
	a1->SetReturnValue(100);
}

void f_1111_a2_v(object a0, object a1)
{
	a1->SetReturnValue(500);
}

void f_1116_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

void f_111b_a2_v(object a0, object a1)
{
	a1->SetReturnValue(2000);
}

void f_1120_a2_v(object a0, object a1)
{
	a1->SetReturnValue(3000);
}

void f_1125_a2_v(object a0, object a1)
{
	a1->SetReturnValue(4000);
}

bool f_112a_a1_b(object a0)
{
	if (f_10b2_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_1136_a1_b(object a0)
{
	if (f_10b2_a1_i("branch") == 1) {
		return true;
	}
	return false;
}

bool f_1142_a1_b(object a0)
{
	if (f_11ec_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_114c_a1_b(object a0)
{
	if (f_11f7_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1156_a1_b(object a0)
{
	if (f_1202_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1160_a1_b(object a0)
{
	if (f_120d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_116a_a1_b(object a0)
{
	if (f_1218_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1174_a1_b(object a0)
{
	if (f_1223_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_117e_a1_b(object a0)
{
	if (f_122e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1188_a1_b(object a0)
{
	if (f_1235_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1192_a1_b(object a0)
{
	if (f_123c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_119c_a1_b(object a0)
{
	if (f_1243_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11a6_a1_b(object a0)
{
	if (f_124a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11b0_a1_b(object a0)
{
	if (f_1251_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11ba_a1_b(object a0)
{
	if (f_1258_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11c4_a1_b(object a0)
{
	if (f_125f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11ce_a1_b(object a0)
{
	if (f_1266_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11d8_a1_b(object a0)
{
	if (f_126d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11e2_a1_b(object a0)
{
	if (f_1274_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11ec_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 100) {
		return true;
	}
	return false;
}

bool f_11f7_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 500) {
		return true;
	}
	return false;
}

bool f_1202_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 1000) {
		return true;
	}
	return false;
}

bool f_120d_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 2000) {
		return true;
	}
	return false;
}

bool f_1218_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 3000) {
		return true;
	}
	return false;
}

bool f_1223_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 4000) {
		return true;
	}
	return false;
}

bool f_122e_a1_b(object a0)
{
	return f_1103_a0_i() == 1;
}

bool f_1235_a1_b(object a0)
{
	return f_1103_a0_i() == 2;
}

bool f_123c_a1_b(object a0)
{
	return f_1103_a0_i() == 3;
}

bool f_1243_a1_b(object a0)
{
	return f_1103_a0_i() == 4;
}

bool f_124a_a1_b(object a0)
{
	return f_1103_a0_i() == 5;
}

bool f_1251_a1_b(object a0)
{
	return f_1103_a0_i() == 6;
}

bool f_1258_a1_b(object a0)
{
	return f_1103_a0_i() == 7;
}

bool f_125f_a1_b(object a0)
{
	return f_1103_a0_i() == 8;
}

bool f_1266_a1_b(object a0)
{
	return f_1103_a0_i() == 9;
}

bool f_126d_a1_b(object a0)
{
	return f_1103_a0_i() == 10;
}

bool f_1274_a1_b(object a0)
{
	return f_1103_a0_i() == 11;
}

int f_127b_a0_i(void)
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

int f_128c_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_1292_a1_v(object a0)
{
	if (f_128c_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_129f_a2_v(int a0, int a1)
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
	@AddItem(L1, f_1396_a1_i("Money"), 0, L0);
}

void f_12be_a1_v(string a0)
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

void f_12cf_a0_v(void)
{
	if (f_128c_a0_i() != 1) {
		return;
	}
	f_12be_a1_v("liver");
	f_12be_a1_v("kidney");
	f_12be_a1_v("heart");
	f_12be_a1_v("blood");
}

void f_12e7_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_129f_a2_v(0, 100 + f_1103_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_1396_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_1396_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_1396_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_1396_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_1396_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_1396_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_129f_a2_v(0, 50 + f_1103_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_1396_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_1396_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_1396_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_1396_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_1396_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_1396_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_1396_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_139b_a1_v(object a0)
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
	f_139b_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_f6c_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_fb0_a5_v(a0, a1, a2, a4, a5);
}

bool f_13c8_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_14eb_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_14f0_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_1507_a1_b(a0);
			}
		}
	}
	return false;
}

void f_13e8_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_14ee_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_14ff_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_150a_a1_v(a0);
			}
		}
	}
}

bool f_1401_a1_b(object a0)
{
	if (f_14eb_a1_b(a0) && f_ed1_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_1418_a1_v(object a0)
{
	f_14ee_a1_v(a0);
}

void f_141e_a1_v(object a0)
{
	if (f_ed1_a1_b(a0)) {
		@ReportReputationChange(a0, f_106b_a0_o(), -0.019999999552965164);
	}
}

bool f_142b_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_150c_a1_b(L0);
	}
	return false;
}

void f_143b_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_150f_a1_v(L0);
	}
}

string f_1448_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_144f_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1448_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1460_a1_i(object a0)
{
	return f_1595_a0_b() ? 2 : 0;
}

void f_1469_a1_v(object a0)
{
	t5{a0};
}

int f_1471_a1_i(object a0)
{
	return f_f28_a1_b(a0) ? 2 : 0;
}

void f_147b_a1_v(object a0)
{
	t6{a0};
}

int f_1483_a2_i(object a0, bool a1)
{
	return f_f28_a1_b(a0) ? 2 : 0;
}

void f_148d_a1_v(object a0)
{
	t7{a0};
}

bool f_1495_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_ed6_a2_b(a1, "class")) {
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
	if (L1 || f_ec9_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_ec9_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_14d7_a1_i(object a0)
{
	return 0;
}

void f_14da_a1_v(object a0)
{
}

int f_14dc_a2_i(string a0, object a1)
{
	return 0;
}

void f_14df_a2_v(string a0, object a1)
{
}

int f_14e1_a1_i(object a0)
{
	return 2;
}

void f_14e4_a1_v(object a0)
{
	f_151f_a1_v(a0);
}

void f_14ea_a0_v(void)
{
}

bool f_14eb_a1_b(object a0)
{
	return false;
}

void f_14ee_a1_v(object a0)
{
}

bool f_14f0_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_ec9_a1_f(a0) <= 4000000;
}

void f_14ff_a1_v(object a0)
{
	t8{a0};
}

bool f_1507_a1_b(object a0)
{
	return false;
}

void f_150a_a1_v(object a0)
{
}

bool f_150c_a1_b(object a0)
{
	return false;
}

void f_150f_a1_v(object a0)
{
}

int f_1511_a0_i(void)
{
	return 515563;
}

int f_1513_a0_i(void)
{
	return 503348;
}

string f_1515_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_1517_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_1519_a0_b(void)
{
	return false;
}

void f_151b_a0_v(void)
{
	g0 = false;
}

void f_151f_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_1292_a1_v(a0);
		}
		return;
	} else {
		int L1;
		float L2;
		int L3;
		if (g1) {
			return;
		}
		L1 = t0{a0};
		if (L1 == -1) {
			return;
		}
		g1 = true;
		L2 = L1 / 10000.0;
		L3 = f_1103_a0_i();
		if (L3 == 1) {
			L1 = L1 * 3;
		} else {
			if (L3 == 2) {
				L2 = L2 * 0;
			} else {
				if (L3 == 3) {
					L2 = L2 * 0;
				} else {
					if (L3 == 4) {
						L2 = L2 * 1;
					} else {
						if (L3 == 5) {
							L2 = L2 * 0;
						} else {
							if (L3 == 6) {
								L2 = L2 * 0;
							} else {
								if (L3 == 7) {
									L2 = L2 * 1;
								} else {
									if (L3 == 8) {
										L2 = L2 * 0;
									} else {
										if (L3 == 9) {
											L2 = L2 * 0;
										} else {
											if (L3 == 10) {
												L2 = L2 * 0;
											} else {
												if (L3 == 11) {
													L2 = L2 * 0;
												} else {
													if (L3 == 12) {
														L2 = L2 * 0;
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
		f_10d6_a2_b(a0, L2);
		f_10c3_a2_v(a0, -L1);
	}
}

bool f_1595_a0_b(void)
{
	return false;
}

bool f_1597_a3_b(object a0, object a1, bool a2)
{
	return f_1495_a3_b(a0, a1, 700.0);
}

void f_15a0_a1_v(object a0)
{
	if (f_ed1_a1_b(a0)) {
		@ReportReputationChange(a0, f_106b_a0_o(), -0.029999999329447746, true);
		f_12e7_a1_v(true);
	}
	f_12cf_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

