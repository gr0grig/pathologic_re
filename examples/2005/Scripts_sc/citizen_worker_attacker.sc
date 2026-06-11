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
		if (!f_1026_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_15b5_a0_i());
		L0->SetNPCDescription(f_15b3_a0_i());
		L0->SetPhoto(f_15b7_a0_s());
		L0->SetPhoto2(f_15b9_a0_s());
		L0->SetPlayerName(f_11f7_a0_i());
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
		f_106a_a1_v(a0);
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
			f_18b_a1_v("Neutral");
			tv0->SetMessage(538207);
			tv0->ClearReplies();
			if (f_111c_a1_b(tv1)) {
				tv0->AddReply(538208, -1, 40085);
			}
			if (f_1128_a1_b(tv1)) {
				tv0->AddReply(538209, -1, 40086);
			}
			if (f_1134_a1_b(tv1)) {
				tv0->AddReply(538210, -1, 40087);
			}
			if (f_111c_a1_b(tv1) && f_114a_a1_b(tv1)) {
				tv0->AddReply(538211, 40089, 40088);
			}
			if (f_111c_a1_b(tv1) && f_114a_a1_b(tv1)) {
				tv0->AddReply(538222, 40100, 40099);
			}
			if (f_111c_a1_b(tv1) && f_1154_a1_b(tv1)) {
				tv0->AddReply(538235, 40114, 40113);
			}
			if (f_111c_a1_b(tv1) && f_115e_a1_b(tv1)) {
				tv0->AddReply(538253, 40135, 40134);
			}
			if (f_111c_a1_b(tv1) && f_1168_a1_b(tv1)) {
				tv0->AddReply(538272, 40155, 40154);
			}
			if (f_111c_a1_b(tv1) && f_1172_a1_b(tv1)) {
				tv0->AddReply(538291, 40174, 40173);
			}
			if (f_111c_a1_b(tv1) && f_117c_a1_b(tv1)) {
				tv0->AddReply(538308, 40192, 40191);
			}
			if (f_111c_a1_b(tv1) && f_1186_a1_b(tv1)) {
				tv0->AddReply(538322, 40206, 40205);
			}
			if (f_1140_a1_b(tv1)) {
				tv0->AddReply(538332, 40216, 40215);
			}
			if (f_111c_a1_b(tv1) && f_1190_a1_b(tv1)) {
				tv0->AddReply(538347, 40233, 40232);
			}
			if (f_111c_a1_b(tv1) && f_119a_a1_b(tv1)) {
				tv0->AddReply(538364, 40250, 40249);
			}
			if (f_111c_a1_b(tv1) && f_11a4_a1_b(tv1)) {
				tv0->AddReply(538375, 40262, 40261);
			}
			if (f_111c_a1_b(tv1) && f_11a4_a1_b(tv1)) {
				tv0->AddReply(538385, 40272, 40271);
			}
			tv0->AddReply(538396, -1, 40282);
			break;
			return;
		}
		if (f_15bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_107b_a1_v(tv2);
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

	void f_18b_a1_v(string a0)
	{
		if (!f_15bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1082_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1093_a0_v();
			if (a1 == 40085) {
				f_1117_a2_v(tv1, tv0);
			}
			if (a1 == 40086) {
				f_1117_a2_v(tv1, tv0);
			}
			if (a1 == 40087) {
				f_1117_a2_v(tv1, tv0);
			}
			if (a0 == 40084) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538207);
				tv0->ClearReplies();
				if (f_111c_a1_b(tv1)) {
					tv0->AddReply(538208, -1, 40085);
				}
				if (f_1128_a1_b(tv1)) {
					tv0->AddReply(538209, -1, 40086);
				}
				if (f_1134_a1_b(tv1)) {
					tv0->AddReply(538210, -1, 40087);
				}
				if (f_111c_a1_b(tv1) && f_114a_a1_b(tv1)) {
					tv0->AddReply(538211, 40089, 40088);
				}
				if (f_111c_a1_b(tv1) && f_114a_a1_b(tv1)) {
					tv0->AddReply(538222, 40100, 40099);
				}
				if (f_111c_a1_b(tv1) && f_1154_a1_b(tv1)) {
					tv0->AddReply(538235, 40114, 40113);
				}
				if (f_111c_a1_b(tv1) && f_115e_a1_b(tv1)) {
					tv0->AddReply(538253, 40135, 40134);
				}
				if (f_111c_a1_b(tv1) && f_1168_a1_b(tv1)) {
					tv0->AddReply(538272, 40155, 40154);
				}
				if (f_111c_a1_b(tv1) && f_1172_a1_b(tv1)) {
					tv0->AddReply(538291, 40174, 40173);
				}
				if (f_111c_a1_b(tv1) && f_117c_a1_b(tv1)) {
					tv0->AddReply(538308, 40192, 40191);
				}
				if (f_111c_a1_b(tv1) && f_1186_a1_b(tv1)) {
					tv0->AddReply(538322, 40206, 40205);
				}
				if (f_1140_a1_b(tv1)) {
					tv0->AddReply(538332, 40216, 40215);
				}
				if (f_111c_a1_b(tv1) && f_1190_a1_b(tv1)) {
					tv0->AddReply(538347, 40233, 40232);
				}
				if (f_111c_a1_b(tv1) && f_119a_a1_b(tv1)) {
					tv0->AddReply(538364, 40250, 40249);
				}
				if (f_111c_a1_b(tv1) && f_11a4_a1_b(tv1)) {
					tv0->AddReply(538375, 40262, 40261);
				}
				if (f_111c_a1_b(tv1) && f_11a4_a1_b(tv1)) {
					tv0->AddReply(538385, 40272, 40271);
				}
				tv0->AddReply(538396, -1, 40282);
				return;
			}
			if (a0 == 40272) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538386);
				tv0->ClearReplies();
				tv0->AddReply(538387, 40274, 40273);
				tv0->AddReply(538395, -1, 40281);
				return;
			}
			if (a0 == 40274) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538388);
				tv0->ClearReplies();
				tv0->AddReply(538389, 40276, 40275);
				tv0->AddReply(538392, 40279, 40278);
				return;
			}
			if (a0 == 40279) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538393);
				tv0->ClearReplies();
				tv0->AddReply(538394, -1, 40280);
				return;
			}
			if (a0 == 40276) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538390);
				tv0->ClearReplies();
				tv0->AddReply(538391, -1, 40277);
				return;
			}
			if (a0 == 40262) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538376);
				tv0->ClearReplies();
				tv0->AddReply(538377, 40264, 40263);
				tv0->AddReply(538384, -1, 40270);
				return;
			}
			if (a0 == 40264) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538378);
				tv0->ClearReplies();
				tv0->AddReply(538379, 40266, 40265);
				tv0->AddReply(538383, -1, 40269);
				return;
			}
			if (a0 == 40266) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538380);
				tv0->ClearReplies();
				tv0->AddReply(538381, -1, 40267);
				tv0->AddReply(538382, -1, 40268);
				return;
			}
			if (a0 == 40250) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538365);
				tv0->ClearReplies();
				tv0->AddReply(538366, 40252, 40251);
				tv0->AddReply(538370, 40256, 40255);
				tv0->AddReply(538374, -1, 40260);
				return;
			}
			if (a0 == 40256) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538371);
				tv0->ClearReplies();
				tv0->AddReply(538372, 40252, 40257);
				tv0->AddReply(538373, -1, 40259);
				return;
			}
			if (a0 == 40252) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538367);
				tv0->ClearReplies();
				tv0->AddReply(538368, -1, 40253);
				tv0->AddReply(538369, -1, 40254);
				return;
			}
			if (a0 == 40233) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538348);
				tv0->ClearReplies();
				tv0->AddReply(538349, 40235, 40234);
				tv0->AddReply(538363, -1, 40248);
				return;
			}
			if (a0 == 40235) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538350);
				tv0->ClearReplies();
				tv0->AddReply(538351, 40237, 40236);
				tv0->AddReply(538362, -1, 40247);
				return;
			}
			if (a0 == 40237) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538352);
				tv0->ClearReplies();
				tv0->AddReply(538353, 40239, 40238);
				tv0->AddReply(538359, 40245, 40244);
				return;
			}
			if (a0 == 40245) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538360);
				tv0->ClearReplies();
				tv0->AddReply(538361, -1, 40246);
				return;
			}
			if (a0 == 40239) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538354);
				tv0->ClearReplies();
				tv0->AddReply(538355, -1, 40240);
				tv0->AddReply(538356, 40242, 40241);
				return;
			}
			if (a0 == 40242) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538357);
				tv0->ClearReplies();
				tv0->AddReply(538358, -1, 40243);
				return;
			}
			if (a0 == 40216) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538333);
				tv0->ClearReplies();
				tv0->AddReply(538334, 40218, 40217);
				tv0->AddReply(538346, -1, 40231);
				return;
			}
			if (a0 == 40218) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538335);
				tv0->ClearReplies();
				tv0->AddReply(538336, 40220, 40219);
				tv0->AddReply(538343, 40228, 40227);
				return;
			}
			if (a0 == 40228) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538344);
				tv0->ClearReplies();
				tv0->AddReply(538345, 40220, 40229);
				return;
			}
			if (a0 == 40220) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538337);
				tv0->ClearReplies();
				tv0->AddReply(538338, 40222, 40221);
				tv0->AddReply(538342, 40222, 40225);
				return;
			}
			if (a0 == 40222) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538339);
				tv0->ClearReplies();
				tv0->AddReply(538340, -1, 40223);
				tv0->AddReply(538341, -1, 40224);
				return;
			}
			if (a0 == 40206) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538323);
				tv0->ClearReplies();
				tv0->AddReply(538324, 40208, 40207);
				tv0->AddReply(538331, -1, 40214);
				return;
			}
			if (a0 == 40208) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538325);
				tv0->ClearReplies();
				tv0->AddReply(538326, 40210, 40209);
				tv0->AddReply(538330, -1, 40213);
				return;
			}
			if (a0 == 40210) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538327);
				tv0->ClearReplies();
				tv0->AddReply(538328, -1, 40211);
				tv0->AddReply(538329, -1, 40212);
				return;
			}
			if (a0 == 40192) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538309);
				tv0->ClearReplies();
				tv0->AddReply(538310, 40194, 40193);
				return;
			}
			if (a0 == 40194) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538311);
				tv0->ClearReplies();
				tv0->AddReply(538312, 40196, 40195);
				tv0->AddReply(538316, 40200, 40199);
				return;
			}
			if (a0 == 40200) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538317);
				tv0->ClearReplies();
				tv0->AddReply(538318, 40202, 40201);
				return;
			}
			if (a0 == 40202) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538319);
				tv0->ClearReplies();
				tv0->AddReply(538320, -1, 40203);
				tv0->AddReply(538321, -1, 40204);
				return;
			}
			if (a0 == 40196) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538313);
				tv0->ClearReplies();
				tv0->AddReply(538314, -1, 40197);
				tv0->AddReply(538315, -1, 40198);
				return;
			}
			if (a0 == 40174) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538292);
				tv0->ClearReplies();
				tv0->AddReply(538293, 40176, 40175);
				tv0->AddReply(538302, 40186, 40185);
				return;
			}
			if (a0 == 40186) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538303);
				tv0->ClearReplies();
				tv0->AddReply(538304, 40188, 40187);
				return;
			}
			if (a0 == 40188) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538305);
				tv0->ClearReplies();
				tv0->AddReply(538306, -1, 40189);
				tv0->AddReply(538307, -1, 40190);
				return;
			}
			if (a0 == 40176) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538294);
				tv0->ClearReplies();
				tv0->AddReply(538295, 40178, 40177);
				tv0->AddReply(538299, 40182, 40181);
				return;
			}
			if (a0 == 40182) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538300);
				tv0->ClearReplies();
				tv0->AddReply(538301, 40178, 40183);
				return;
			}
			if (a0 == 40178) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538296);
				tv0->ClearReplies();
				tv0->AddReply(538297, -1, 40179);
				tv0->AddReply(538298, -1, 40180);
				return;
			}
			if (a0 == 40155) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538273);
				tv0->ClearReplies();
				tv0->AddReply(538274, 40157, 40156);
				tv0->AddReply(538289, -1, 40171);
				tv0->AddReply(538290, -1, 40172);
				return;
			}
			if (a0 == 40157) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538275);
				tv0->ClearReplies();
				tv0->AddReply(538276, 40159, 40158);
				tv0->AddReply(538288, -1, 40170);
				return;
			}
			if (a0 == 40159) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538277);
				tv0->ClearReplies();
				tv0->AddReply(538278, 40161, 40160);
				return;
			}
			if (a0 == 40161) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538279);
				tv0->ClearReplies();
				tv0->AddReply(538280, 40163, 40162);
				tv0->AddReply(538284, 40167, 40166);
				return;
			}
			if (a0 == 40167) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538285);
				tv0->ClearReplies();
				tv0->AddReply(538286, -1, 40168);
				tv0->AddReply(538287, -1, 40169);
				return;
			}
			if (a0 == 40163) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538281);
				tv0->ClearReplies();
				tv0->AddReply(538282, -1, 40164);
				tv0->AddReply(538283, -1, 40165);
				return;
			}
			if (a0 == 40135) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538254);
				tv0->ClearReplies();
				tv0->AddReply(538255, 40137, 40136);
				tv0->AddReply(538271, -1, 40153);
				return;
			}
			if (a0 == 40137) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538256);
				tv0->ClearReplies();
				tv0->AddReply(538257, 40139, 40138);
				tv0->AddReply(538269, 40139, 40150);
				tv0->AddReply(538270, -1, 40152);
				return;
			}
			if (a0 == 40139) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538258);
				tv0->ClearReplies();
				tv0->AddReply(538259, 40141, 40140);
				return;
			}
			if (a0 == 40141) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538260);
				tv0->ClearReplies();
				tv0->AddReply(538261, 40143, 40142);
				tv0->AddReply(538265, 40147, 40146);
				return;
			}
			if (a0 == 40147) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538266);
				tv0->ClearReplies();
				tv0->AddReply(538267, -1, 40148);
				tv0->AddReply(538268, -1, 40149);
				return;
			}
			if (a0 == 40143) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538262);
				tv0->ClearReplies();
				tv0->AddReply(538263, -1, 40144);
				tv0->AddReply(538264, -1, 40145);
				return;
			}
			if (a0 == 40114) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538236);
				tv0->ClearReplies();
				tv0->AddReply(538237, 40116, 40115);
				tv0->AddReply(538252, -1, 40133);
				return;
			}
			if (a0 == 40116) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538238);
				tv0->ClearReplies();
				tv0->AddReply(538239, 40118, 40117);
				tv0->AddReply(538251, 40120, 40131);
				return;
			}
			if (a0 == 40118) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538240);
				tv0->ClearReplies();
				tv0->AddReply(538241, 40120, 40119);
				tv0->AddReply(538250, 40120, 40129);
				return;
			}
			if (a0 == 40120) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538242);
				tv0->ClearReplies();
				tv0->AddReply(538243, 40122, 40121);
				tv0->AddReply(538249, 40124, 40127);
				return;
			}
			if (a0 == 40122) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538244);
				tv0->ClearReplies();
				tv0->AddReply(538245, 40124, 40123);
				return;
			}
			if (a0 == 40124) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538246);
				tv0->ClearReplies();
				tv0->AddReply(538247, -1, 40125);
				tv0->AddReply(538248, -1, 40126);
				return;
			}
			if (a0 == 40100) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538223);
				tv0->ClearReplies();
				tv0->AddReply(538224, 40102, 40101);
				tv0->AddReply(538234, -1, 40112);
				return;
			}
			if (a0 == 40102) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538225);
				tv0->ClearReplies();
				tv0->AddReply(538226, 40104, 40103);
				tv0->AddReply(538230, 40108, 40107);
				return;
			}
			if (a0 == 40108) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538231);
				tv0->ClearReplies();
				tv0->AddReply(538232, 40104, 40109);
				tv0->AddReply(538233, -1, 40111);
				return;
			}
			if (a0 == 40104) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538227);
				tv0->ClearReplies();
				tv0->AddReply(538228, -1, 40105);
				tv0->AddReply(538229, -1, 40106);
				return;
			}
			if (a0 == 40089) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538212);
				tv0->ClearReplies();
				tv0->AddReply(538213, 40091, 40090);
				return;
			}
			if (a0 == 40091) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538214);
				tv0->ClearReplies();
				tv0->AddReply(538215, 40093, 40092);
				tv0->AddReply(538221, -1, 40098);
				return;
			}
			if (a0 == 40093) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538216);
				tv0->ClearReplies();
				tv0->AddReply(538217, 40095, 40094);
				return;
			}
			if (a0 == 40095) {
				f_18b_a1_v("Neutral");
				tv0->SetMessage(538218);
				tv0->ClearReplies();
				tv0->AddReply(538219, -1, 40096);
				tv0->AddReply(538220, -1, 40097);
				return;
			}
			tv3 = true;
			if (f_15bb_a0_b()) {
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
		f_84f_a1_v(a0);
		f_15f6_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_14eb_a1_i(a0);
		if (L0 > 0) {
			f_14ee_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_14f4_a0_v();
	}

	void f_84f_a1_v(object a0)
	{
		if (a0 == null) {
			f_8aa_a1_v("fdie");
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
			f_109a_a1_v(L4);
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

	void f_8aa_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_109a_a1_v(a0);
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
		f_15bd_a0_v();
		f_8d9_a0_v();
		for (; ; ) {
			tv2 = false;
			f_9de_a0_v();
		}
	}

	void f_8d9_a0_v(void)
	{
		if (!f_1021_a0_b()) {
			f_14f4_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_14eb_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_99d_a0_v();
			}
			f_14ee_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_13df_a1_v(a0);
		L0 = f_1431_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_99d_a0_v();
			}
			f_143b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_15ec_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_148e_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_99d_a0_v();
				}
				f_1495_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_14b8_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_99d_a0_v();
			}
			f_14bb_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_1389_a2_b(a0, a1)) {
			f_99d_a0_v();
			f_13a9_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_14bd_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_99d_a0_v();
				}
				f_14c9_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_13ec_a1_b(a0)) {
			f_99d_a0_v();
			f_13fc_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_13c2_a1_b(a0)) {
			f_99d_a0_v();
			f_13d9_a1_v(a0);
		} else {
			f_9b6_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_9b6_a1_v(a0);
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
		f_99d_a0_v();
		f_14f4_a0_v();
	}

	void f_99d_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_a25_a0_v();
	}

	void f_9a5_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_a2c_a0_v();
	}

	void OnDeath(object a0)
	{
		f_99d_a0_v();
		global.OnDeath(a0);
	}

	void f_9b6_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_f80_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_1421_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_9a5_a0_v();
			}
			f_142b_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_9de_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_a19_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_a35_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_a33_a0_b(), L5);
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

	float f_a19_a0_f(void)
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

	void f_a25_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_a2c_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_a33_a0_b(void)
	{
		return false;
	}

	object f_a35_a1_o(Vector a0)
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
		L0 = f_14eb_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b30_a0_v();
			}
			f_14ee_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_13df_a1_v(a0);
		L0 = f_1431_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b30_a0_v();
			}
			f_143b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_15ec_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_148e_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_b30_a0_v();
				}
				f_1495_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_14b8_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_b30_a0_v();
			}
			f_14bb_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_1389_a2_b(a0, a1)) {
			f_b30_a0_v();
			f_13a9_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_14bd_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_b30_a0_v();
				}
				f_14c9_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_13ec_a1_b(a0)) {
			f_b30_a0_v();
			f_13fc_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_b30_a0_v();
		f_14f4_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_13c2_a1_b(a0)) {
			f_b30_a0_v();
			f_13d9_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_1021_a0_b()) {
			return;
		}
		L0 = f_1410_a0_i();
		for (L1 = 0; L1 < 5 && f_1021_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_1409_a1_s(L3));
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
			if (!f_b2e_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_b2e_a0_b(void)
	{
		return true;
	}

	void f_b30_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t5
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(object a0)
	{
		f_b43_a3_v(a0, true, 180.0);
	}

	float f_b3d_a2_f(object a0, int a1)
	{
		return 0.05000000074505806;
	}

	int f_b40_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_b43_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_c28_a0_v();
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
			@SendPlayerEnemy(a0, f_10c3_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_f80_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_dc5_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t6{tv0, L0, 3000.0, true, false}) {
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
						if (!t6{tv0, L0, 3000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_1016_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_dc5_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_f80_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_d9a_a0_b()) {
						@Face(tv0);
						f_dcc_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_d16_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_dc5_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_d9a_a0_b()) {
							if (!f_f80_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_c72_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_c72_a1_b(a2)) {
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

	void f_c28_a0_v(void)
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

	void f_c4b_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_b3d_a2_f(L0, a1);
			L2 = f_f0e_a3_f(L0, L1, f_b40_a2_i(L0, a1));
			@ReportHit(tv0, f_dca_a0_i(), L2, L1);
			f_dd1_a2_v(L0, L2);
		}
	}

	bool f_c72_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_dc5_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_110c_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_da5_a0_v();
		if (!f_f80_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_c4b_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_110c_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_dc5_a0_v();
			if (!f_f80_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_c4b_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_110c_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_dc5_a0_v();
				if (!f_f80_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_c4b_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_dd3_a0_b()) {
			f_cfb_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_cfb_a1_b(float a0)
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
				if (f_d5d_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_dc5_a0_v();
		}
		return false;
	}

	bool f_d16_a1_b(float a0)
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
			if (f_d5d_a0_b()) {
				return true;
			}
			if (!f_f80_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_c72_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_dc5_a0_v();
		return false;
	}

	bool f_d41_a0_b(void)
	{
		if (!f_f80_a1_b(tv0)) {
			return false;
		}
		if (f_d9a_a0_b()) {
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

	bool f_d5d_a0_b(void)
	{
		if (f_d41_a0_b() && f_d6d_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_d6d_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_eee_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_dc5_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_d41_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_d9a_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_da5_a0_v(void)
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
		if (L0 < f_dd7_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_dd5_a0_i();
		}
	}

	void f_dc5_a0_v(void)
	{
		f_1103_a1_v(tv0);
	}

	int f_dca_a0_i(void)
	{
		return 0;
	}

	void f_dcc_a0_v(void)
	{
		f_109a_a1_v("attack_stay");
	}

	void f_dd1_a2_v(object a0, float a1)
	{
	}

	bool f_dd3_a0_b(void)
	{
		return true;
	}

	int f_dd5_a0_i(void)
	{
		return 1;
	}

	float f_dd7_a0_f(void)
	{
		return 0.5;
	}
}

task t6
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_e1f_a0_v();
		f_14f4_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_1103_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_1088_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_efd_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_10c3_a0_o());
		}
		L1 = f_e49_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_1103_a1_v(tv1);
		} else {
			f_eaf_a1_v(a0);
		}
	}

	void f_e1f_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_ec5_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_1088_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_e49_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_ed5_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_edc_a0_s(), f_ede_a0_s());
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

	void f_eaf_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_ed5_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_ec5_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_e1f_a0_v();
		global.OnDeath(a0);
	}
}

bool f_ed5_a1_b(object a0)
{
	return f_f80_a1_b(a0);
}

string f_edc_a0_s(void)
{
	return "walk";
}

string f_ede_a0_s(void)
{
	return "run";
}

string f_ee0_a1_s(int a0)
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

Vector f_eee_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_ef5_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_efd_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_f02_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_f0e_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_f02_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_f02_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_ee0_a1_s(a2);
	if (!f_f02_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_10d3_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_10da_a3_f(L4 - L5, 0, 1));
	if (f_efd_a1_b(a0)) {
		f_10f0_a1_v(-L5);
	}
	return L5;
}

bool f_f57_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_f5c_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_f57_a1_b(a0)) {
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

bool f_f80_a1_b(object a0)
{
	int L0;
	if (!f_f5c_a1_b(a0)) {
		return false;
	}
	if (!f_f02_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_f98_a1_v(object a0)
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

void f_fc4_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_10c9_a1_V(f_eee_a1_V(a0));
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
			f_1008_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_f98_a1_v(a0);
}

void f_1008_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_f98_a1_v(a0);
}

void f_1016_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_1021_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1026_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_10c9_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_15bb_a0_b()) {
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

void f_106a_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_15bb_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_107b_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1082_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_1088_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_1093_a0_v(void)
{
	if (f_15bb_a0_b()) {
		@lshStopSpeech();
	}
}

void f_109a_a1_v(string a0)
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

object f_10c3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_10c9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_10d3_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_10da_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_10e5_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

int f_10eb_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_10f0_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

int f_10fa_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_1103_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_110c_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_10c3_a0_o(), L0);
}

void f_1117_a2_v(object a0, object a1)
{
	a1->SetReturnValue(100);
}

bool f_111c_a1_b(object a0)
{
	if (f_10eb_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_1128_a1_b(object a0)
{
	if (f_10eb_a1_i("branch") == 1) {
		return true;
	}
	return false;
}

bool f_1134_a1_b(object a0)
{
	if (f_10eb_a1_i("branch") == 2) {
		return true;
	}
	return false;
}

bool f_1140_a1_b(object a0)
{
	if (f_11ae_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_114a_a1_b(object a0)
{
	if (f_11b1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1154_a1_b(object a0)
{
	if (f_11b8_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_115e_a1_b(object a0)
{
	if (f_11bf_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1168_a1_b(object a0)
{
	if (f_11c6_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1172_a1_b(object a0)
{
	if (f_11cd_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_117c_a1_b(object a0)
{
	if (f_11d4_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1186_a1_b(object a0)
{
	if (f_11db_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1190_a1_b(object a0)
{
	if (f_11e2_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_119a_a1_b(object a0)
{
	if (f_11e9_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11a4_a1_b(object a0)
{
	if (f_11f0_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_11ae_a1_b(object a0)
{
	return false;
}

bool f_11b1_a1_b(object a0)
{
	return f_10fa_a0_i() == 1;
}

bool f_11b8_a1_b(object a0)
{
	return f_10fa_a0_i() == 2;
}

bool f_11bf_a1_b(object a0)
{
	return f_10fa_a0_i() == 3;
}

bool f_11c6_a1_b(object a0)
{
	return f_10fa_a0_i() == 5;
}

bool f_11cd_a1_b(object a0)
{
	return f_10fa_a0_i() == 6;
}

bool f_11d4_a1_b(object a0)
{
	return f_10fa_a0_i() == 7;
}

bool f_11db_a1_b(object a0)
{
	return f_10fa_a0_i() == 8;
}

bool f_11e2_a1_b(object a0)
{
	return f_10fa_a0_i() == 9;
}

bool f_11e9_a1_b(object a0)
{
	return f_10fa_a0_i() == 10;
}

bool f_11f0_a1_b(object a0)
{
	return f_10fa_a0_i() == 11;
}

int f_11f7_a0_i(void)
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

int f_1208_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

int f_120e_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

int f_1213_a2_i(object a0, int a1)
{
	if (a1 == 0) {
		int L0;
		L0 = f_10fa_a0_i();
		int L1;
		L1 = 0;
		int L2;
		L2 = 1;
		for (; L2 <= L0; L2++) {
			string L3;
			bool L4;
			L3 = "Price";
			if (L2 != 1) {
				L3 = L3 + L2;
			}
			@HasInvItemProperty(L4, f_120e_a1_i(a0), L3);
			if (!L4) {
				continue;
			}
			@GetInvItemProperty(L1, f_120e_a1_i(a0), L3);
		}
		return L1;
	}
	bool L5;
	@HasInvItemProperty(L5, f_120e_a1_i(a0), "BarterPrice" + a1);
	if (!L5) {
		return 0;
	}
	int L6;
	@GetInvItemProperty(L6, f_120e_a1_i(a0), "BarterPrice" + a1);
	if (L6 > 0) {
		return L6;
	}
	return -L6;
}

void f_1253_a1_v(object a0)
{
	if (f_1208_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_1260_a2_v(int a0, int a1)
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
	@AddItem(L1, f_1357_a1_i("Money"), 0, L0);
}

void f_127f_a1_v(string a0)
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

void f_1290_a0_v(void)
{
	if (f_1208_a0_i() != 1) {
		return;
	}
	f_127f_a1_v("liver");
	f_127f_a1_v("kidney");
	f_127f_a1_v("heart");
	f_127f_a1_v("blood");
}

void f_12a8_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_1260_a2_v(0, 100 + f_10fa_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_1357_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_1357_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_1357_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_1357_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_1357_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_1357_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_1260_a2_v(0, 50 + f_10fa_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_1357_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_1357_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_1357_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_1357_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_1357_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_1357_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_1357_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_135c_a1_v(object a0)
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
	f_135c_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_fc4_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_1008_a5_v(a0, a1, a2, a4, a5);
}

bool f_1389_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_14f5_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_14fa_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_14ff_a1_b(a0);
			}
		}
	}
	return false;
}

void f_13a9_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_14f8_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_14fd_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_1502_a1_v(a0);
			}
		}
	}
}

bool f_13c2_a1_b(object a0)
{
	if (f_14f5_a1_b(a0) && f_efd_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_13d9_a1_v(object a0)
{
	f_14f8_a1_v(a0);
}

void f_13df_a1_v(object a0)
{
	if (f_efd_a1_b(a0)) {
		@ReportReputationChange(a0, f_10c3_a0_o(), -0.009999999776482582);
	}
}

bool f_13ec_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_1504_a1_b(L0);
	}
	return false;
}

void f_13fc_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_1507_a1_v(L0);
	}
}

string f_1409_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1410_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1409_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1421_a1_i(object a0)
{
	return f_15d9_a1_b(a0) ? 2 : 0;
}

void f_142b_a1_v(object a0)
{
	f_143b_a1_v(a0);
}

int f_1431_a1_i(object a0)
{
	return f_f80_a1_b(a0) ? 2 : 0;
}

void f_143b_a1_v(object a0)
{
	t5{a0};
}

bool f_1443_a2_b(object a0, bool a1)
{
	string L0;
	string L1;
	if (!f_f02_a2_b(a0, "class")) {
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

int f_148e_a2_i(object a0, bool a1)
{
	return f_1431_a1_i(a0);
}

void f_1495_a1_v(object a0)
{
	f_143b_a1_v(a0);
}

bool f_149b_a4_b(object a0, object a1, float a2, bool a3)
{
	bool L0;
	if (!f_1443_a2_b(a1, !a3)) {
		return false;
	}
	@CanSee(L0, a0);
	if (L0 || f_ef5_a1_f(a0) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_14b8_a1_i(object a0)
{
	return 0;
}

void f_14bb_a1_v(object a0)
{
}

int f_14bd_a2_i(string a0, object a1)
{
	if (a0 == "killme") {
		return f_14d3_a1_i(a1);
	}
	return 0;
}

void f_14c9_a2_v(string a0, object a1)
{
	if (a0 == "killme") {
		f_14e5_a1_v(a1);
		return;
	}
}

int f_14d3_a1_i(object a0)
{
	if (!f_f80_a1_b(a0)) {
		return 0;
	}
	return f_15e9_a1_b(a0) ? 2 : 0;
}

void f_14e5_a1_v(object a0)
{
	f_143b_a1_v(a0);
}

int f_14eb_a1_i(object a0)
{
	return 2;
}

void f_14ee_a1_v(object a0)
{
	f_15c1_a1_v(a0);
}

void f_14f4_a0_v(void)
{
}

bool f_14f5_a1_b(object a0)
{
	return false;
}

void f_14f8_a1_v(object a0)
{
}

bool f_14fa_a1_b(object a0)
{
	return false;
}

void f_14fd_a1_v(object a0)
{
}

bool f_14ff_a1_b(object a0)
{
	return false;
}

void f_1502_a1_v(object a0)
{
}

bool f_1504_a1_b(object a0)
{
	return false;
}

void f_1507_a1_v(object a0)
{
}

void f_1509_a1_v(object a0)
{
	object L0;
	L0 = f_10e5_a0_o();
	object L1;
	@CreateIntVector(L1);
	object L2;
	@CreateIntVector(L2);
	object L3;
	@CreateIntVector(L3);
	int L4;
	a0->GetSubContainerCount(L4);
	int L5;
	for (L5 = 0; L5 < L4; L5++) {
		int L6;
		int L7;
		a0->GetItemCount(L6, L5);
		for (L7 = 0; L7 < L6; L7++) {
			object L8;
			int L9;
			bool L10;
			a0->GetItem(L8, L7, L5);
			L8->GetItemID(L9);
			@HasInvItemProperty(L10, L9, "HasDurability");
			if (L10) {
				L8->HasProperty(L10, "durability");
				if (L10) {
					int L11;
					L8->GetProperty(L11, "durability");
					if (L11 < 100 && f_159c_a1_b(L8)) {
						float L12;
						int L13;
						L0->add(L8);
						L1->add(L5);
						L2->add(L7);
						L12 = f_1213_a2_i(L8, 0);
						L13 = L12 * (1.0 + 2.0 * L11 / 100.0) * (100 - L11) / 300;
						if (!L13) {
							L13 = 1;
						}
						L3->add(L13);
					}
				}
			}
		}
	}
	object L14;
	@CreateIntVector(L14);
	@ChooseItem(L0, L14, L3, "repair.xml");
	int L15;
	L14->size(L15);
	if (!L15) {
		return;
	}
	int L16;
	L16 = 0;
	int L17;
	for (L17 = 0; L17 < L15; L17++) {
		int L18;
		int L19;
		L14->get(L18, L17);
		L3->get(L19, L18);
		L16 = L16 + L19;
	}
	int L20;
	a0->GetProperty("money", L20);
	L20 = L20 - L16;
	if (L20 < 0) {
		return;
	}
	a0->SetProperty("money", L20);
	int L21;
	for (L21 = 0; L21 < L15; L21++) {
		int L22;
		int L23;
		int L24;
		object L25;
		L14->get(L22, L21);
		L1->get(L23, L22);
		L2->get(L24, L22);
		a0->GetItem(L25, L24, L23);
		L25->SetProperty("durability", 100);
		a0->SetItem(L25, 1, L24, L23);
	}
}

bool f_159c_a1_b(object a0)
{
	int L0;
	bool L1;
	a0->GetItemID(L0);
	@HasInvItemProperty(L1, L0, "Weapon");
	return L1;
}

void f_15a4_a1_v(object a0)
{
	if (t0{a0} == 100) {
		f_1509_a1_v(a0);
	}
}

int f_15b3_a0_i(void)
{
	return 515568;
}

int f_15b5_a0_i(void)
{
	return 503353;
}

string f_15b7_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_15b9_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_15bb_a0_b(void)
{
	return false;
}

void f_15bd_a0_v(void)
{
	g0 = false;
}

void f_15c1_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_1253_a1_v(a0);
		}
		return;
	} else {
		if (!f_15d9_a1_b(a0)) {
			f_15a4_a1_v(a0);
		}
	}
}

bool f_15d9_a1_b(object a0)
{
	if (f_efd_a1_b(a0)) {
		float L0;
		a0->GetProperty("reputation", L0);
		if (L0 < 0.4000000059604645) {
			return true;
		}
	}
	return false;
}

bool f_15e9_a1_b(object a0)
{
	return true;
}

bool f_15ec_a3_b(object a0, object a1, bool a2)
{
	return f_149b_a4_b(a0, a1, 700.0, a2);
}

void f_15f6_a1_v(object a0)
{
	if (f_efd_a1_b(a0)) {
		@ReportReputationChange(a0, f_10c3_a0_o(), -0.03999999910593033, true);
		f_12a8_a1_v(true);
	}
	f_1290_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

