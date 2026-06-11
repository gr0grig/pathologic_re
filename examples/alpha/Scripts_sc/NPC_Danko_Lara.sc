event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	void init(void)
	{
		f_1a46_a0_v();
		if (!f_132a_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_136b_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		t0{};
	}

	void OnUse(object a0)
	{
		f_1a4a_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_131e_a1_b(a0);
		@WaitForAnimEnd();
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
		if (!f_132f_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13e9_a0_i());
		L0->SetPhoto(f_13eb_a0_s());
		L0->SetPlayerName(f_19a5_a0_i());
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
		f_1367_a1_v(a0);
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
			f_1663_a2_v(tv1, tv0);
			f_aa_a1_v("Neutral");
			tv0->SetMessage(441);
			tv0->ClearReplies();
			tv0->AddReply(8443, 9267, 9266);
			break;
			return;
		}
		if (f_13ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_136b_a1_v(tv2);
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

	void f_aa_a1_v(string a0)
	{
		if (!f_13ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_136b_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_137d_a0_v();
			if (a0 == 510) {
				f_1663_a2_v(tv1, tv0);
				f_aa_a1_v("Neutral");
				tv0->SetMessage(441);
				tv0->ClearReplies();
				tv0->AddReply(8443, 9267, 9266);
				return;
			}
			if (a0 == 9267) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(8444);
				tv0->ClearReplies();
				tv0->AddReply(443, 519, 512);
				tv0->AddReply(442, 513, 511);
				return;
			}
			if (a0 == 513) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(444);
				tv0->ClearReplies();
				tv0->AddReply(445, 516, 514);
				tv0->AddReply(446, -1, 515);
				return;
			}
			if (a0 == 516) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(447);
				tv0->ClearReplies();
				tv0->AddReply(449, -1, 518);
				tv0->AddReply(448, -1, 517);
				return;
			}
			if (a0 == 519) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(450);
				tv0->ClearReplies();
				tv0->AddReply(451, 522, 520);
				tv0->AddReply(452, -1, 521);
				return;
			}
			if (a0 == 522) {
				f_16c4_a2_v(tv1, tv0);
				f_aa_a1_v("Neutral");
				tv0->SetMessage(453);
				tv0->ClearReplies();
				tv0->AddReply(454, -1, 523);
				tv0->AddReply(455, -1, 524);
				return;
			}
			tv3 = true;
			if (f_13ed_a0_b()) {
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
		if (!f_132f_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13e9_a0_i());
		L0->SetPhoto(f_13eb_a0_s());
		L0->SetPlayerName(f_19a5_a0_i());
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
		f_1367_a1_v(a0);
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
			f_227_a1_v("Neutral");
			tv0->SetMessage(3662);
			tv0->ClearReplies();
			if (f_1819_a1_b(tv1) && f_1825_a1_b(tv1)) {
				tv0->AddReply(12735, 11881, 13929);
			}
			if (f_1831_a1_b(tv1) && f_183d_a1_b(tv1) && !f_186d_a1_b(tv1) && !f_1879_a1_b(tv1)) {
				tv0->AddReply(12736, 11904, 13930);
			}
			if (f_1849_a1_b(tv1) && f_1769_a1_b(tv1)) {
				tv0->AddReply(3664, 3970, 3969);
			}
			if (f_1861_a1_b(tv1)) {
				tv0->AddReply(3663, 3972, 3968);
			}
			tv0->AddReply(13019, -1, 14225);
			break;
			return;
		}
		if (f_13ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_136b_a1_v(tv2);
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

	void f_227_a1_v(string a0)
	{
		if (!f_13ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_136b_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_137d_a0_v();
			if (a1 == 13929) {
				f_15a9_a2_v(tv1, tv0);
			}
			if (a1 == 11890) {
				f_15af_a2_v(tv1, tv0);
				f_15bd_a2_v(tv1, tv0);
			}
			if (a1 == 11891) {
				f_15af_a2_v(tv1, tv0);
				f_15bd_a2_v(tv1, tv0);
			}
			if (a1 == 13930) {
				f_15c3_a2_v(tv1, tv0);
			}
			if (a1 == 11915) {
				f_15d5_a2_v(tv1, tv0);
			}
			if (a1 == 3969) {
				f_15c9_a2_v(tv1, tv0);
			}
			if (a1 == 3968) {
				f_15cf_a2_v(tv1, tv0);
			}
			if (a0 == 3967) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3662);
				tv0->ClearReplies();
				if (f_1819_a1_b(tv1) && f_1825_a1_b(tv1)) {
					tv0->AddReply(12735, 11881, 13929);
				}
				if (f_1831_a1_b(tv1) && f_183d_a1_b(tv1) && !f_186d_a1_b(tv1) && !f_1879_a1_b(tv1)) {
					tv0->AddReply(12736, 11904, 13930);
				}
				if (f_1849_a1_b(tv1) && f_1769_a1_b(tv1)) {
					tv0->AddReply(3664, 3970, 3969);
				}
				if (f_1861_a1_b(tv1)) {
					tv0->AddReply(3663, 3972, 3968);
				}
				tv0->AddReply(13019, -1, 14225);
				return;
			}
			if (a0 == 3972) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3667);
				tv0->ClearReplies();
				tv0->AddReply(3668, 3975, 3973);
				tv0->AddReply(3669, 3975, 3974);
				tv0->AddReply(3672, 3991, 3978);
				return;
			}
			if (a0 == 3991) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3683);
				tv0->ClearReplies();
				tv0->AddReply(3684, 3972, 3992);
				return;
			}
			if (a0 == 3975) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3670);
				tv0->ClearReplies();
				tv0->AddReply(3671, 3981, 3976);
				tv0->AddReply(3673, -1, 3980);
				return;
			}
			if (a0 == 3981) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3674);
				tv0->ClearReplies();
				tv0->AddReply(3675, 3984, 3982);
				tv0->AddReply(3676, 3984, 3983);
				return;
			}
			if (a0 == 3984) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3677);
				tv0->ClearReplies();
				tv0->AddReply(3678, 3988, 3986);
				tv0->AddReply(3679, 3988, 3987);
				return;
			}
			if (a0 == 3988) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3680);
				tv0->ClearReplies();
				tv0->AddReply(3681, -1, 3989);
				tv0->AddReply(3682, -1, 3990);
				tv0->AddReply(3685, -1, 3995);
				return;
			}
			if (a0 == 3970) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3665);
				tv0->ClearReplies();
				tv0->AddReply(3666, -1, 3971);
				return;
			}
			if (a0 == 11904) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10773);
				tv0->ClearReplies();
				tv0->AddReply(10774, 11906, 11905);
				tv0->AddReply(10789, 11906, 11923);
				tv0->AddReply(10790, 11906, 11925);
				return;
			}
			if (a0 == 11906) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10775);
				tv0->ClearReplies();
				tv0->AddReply(10776, 11908, 11907);
				tv0->AddReply(10788, 11908, 11921);
				return;
			}
			if (a0 == 11908) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10777);
				tv0->ClearReplies();
				tv0->AddReply(10778, 11910, 11909);
				tv0->AddReply(10787, 11910, 11920);
				return;
			}
			if (a0 == 11910) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10779);
				tv0->ClearReplies();
				tv0->AddReply(10780, 11912, 11911);
				tv0->AddReply(10785, 11912, 11916);
				tv0->AddReply(10786, 11912, 11918);
				return;
			}
			if (a0 == 11912) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10781);
				tv0->ClearReplies();
				tv0->AddReply(10782, -1, 11913);
				tv0->AddReply(10783, -1, 11914);
				tv0->AddReply(10784, -1, 11915);
				return;
			}
			if (a0 == 11881) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10753);
				tv0->ClearReplies();
				tv0->AddReply(10754, 11883, 11882);
				tv0->AddReply(10767, 11897, 11896);
				tv0->AddReply(10769, 11899, 11898);
				return;
			}
			if (a0 == 11899) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10770);
				tv0->ClearReplies();
				tv0->AddReply(10771, 11885, 11900);
				tv0->AddReply(10772, 11897, 11902);
				return;
			}
			if (a0 == 11897) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10768);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 11883) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10755);
				tv0->ClearReplies();
				tv0->AddReply(10756, 11885, 11884);
				tv0->AddReply(10766, -1, 11895);
				return;
			}
			if (a0 == 11885) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10757);
				tv0->ClearReplies();
				tv0->AddReply(10758, 11887, 11886);
				tv0->AddReply(10765, -1, 11894);
				return;
			}
			if (a0 == 11887) {
				f_227_a1_v("Grief");
				tv0->SetMessage(10759);
				tv0->ClearReplies();
				tv0->AddReply(10760, 11889, 11888);
				tv0->AddReply(10764, 11889, 11892);
				return;
			}
			if (a0 == 11889) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10761);
				tv0->ClearReplies();
				tv0->AddReply(10762, -1, 11890);
				tv0->AddReply(10763, -1, 11891);
				return;
			}
			tv3 = true;
			if (f_13ed_a0_b()) {
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
		if (!f_132f_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13e9_a0_i());
		L0->SetPhoto(f_13eb_a0_s());
		L0->SetPlayerName(f_19a5_a0_i());
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
		f_1367_a1_v(a0);
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
			if (f_16d6_a1_b(tv1) && !f_1706_a1_b(tv1) && !f_16fa_a1_b(tv1) && f_1775_a1_b(tv1) && !f_16e2_a1_b(tv1)) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(5423);
				tv0->ClearReplies();
				tv0->AddReply(5447, 6886, 6001);
				tv0->AddReply(6231, 6893, 6892);
				break;
			}
			if (f_16e2_a1_b(tv1) && !f_1706_a1_b(tv1) && !f_16fa_a1_b(tv1) && !f_1775_a1_b(tv1)) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8666);
				tv0->ClearReplies();
				tv0->AddReply(8667, 9493, 9492);
				break;
			}
			f_631_a1_v("Neutral");
			tv0->SetMessage(8034);
			tv0->ClearReplies();
			if (f_1781_a1_b(tv1) && f_16ee_a1_b(tv1) || f_17bb_a1_b(tv1) && f_16ee_a1_b(tv1)) {
				tv0->AddReply(8036, 5976, 8859);
			}
			if (f_18f1_a1_b(tv1) && f_189d_a1_b(tv1)) {
				tv0->AddReply(8039, 5991, 8862);
			}
			if (f_1885_a1_b(tv1) && f_18a9_a1_b(tv1)) {
				tv0->AddReply(8042, 8884, 8865);
			}
			if (f_1891_a1_b(tv1) && f_18b5_a1_b(tv1)) {
				tv0->AddReply(8046, 8885, 8869);
			}
			if (f_1855_a1_b(tv1) && f_18c1_a1_b(tv1)) {
				tv0->AddReply(8047, 8886, 8870);
			}
			if (f_18e5_a1_b(tv1) && f_18cd_a1_b(tv1)) {
				tv0->AddReply(8051, 8887, 8874);
			}
			if (f_180d_a1_b(tv1) && f_18d9_a1_b(tv1)) {
				tv0->AddReply(8052, 8888, 8875);
			}
			tv0->AddReply(8709, -1, 9546);
			break;
			return;
		}
		if (f_13ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_136b_a1_v(tv2);
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

	void f_631_a1_v(string a0)
	{
		if (!f_13ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_136b_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_137d_a0_v();
			if (a1 == 6898) {
				f_13ef_a2_v(tv1, tv0);
			}
			if (a1 == 6899) {
				f_13ef_a2_v(tv1, tv0);
			}
			if (a1 == 9508) {
				f_14d3_a2_v(tv1, tv0);
				f_13f5_a2_v(tv1, tv0);
			}
			if (a1 == 8859) {
				f_13fb_a2_v(tv1, tv0);
			}
			if (a1 == 8862) {
				f_166f_a2_v(tv1, tv0);
			}
			if (a1 == 8865) {
				f_1675_a2_v(tv1, tv0);
			}
			if (a1 == 8869) {
				f_167b_a2_v(tv1, tv0);
			}
			if (a1 == 8870) {
				f_1681_a2_v(tv1, tv0);
			}
			if (a1 == 8874) {
				f_1687_a2_v(tv1, tv0);
			}
			if (a1 == 8875) {
				f_168d_a2_v(tv1, tv0);
			}
			if (a0 == 5972) {
				if (f_16d6_a1_b(tv1) && !f_1706_a1_b(tv1) && !f_16fa_a1_b(tv1) && f_1775_a1_b(tv1) && !f_16e2_a1_b(tv1)) {
					f_631_a1_v("Neutral");
					tv0->SetMessage(5423);
					tv0->ClearReplies();
					tv0->AddReply(5447, 6886, 6001);
					tv0->AddReply(6231, 6893, 6892);
					return;
				}
				if (f_16e2_a1_b(tv1) && !f_1706_a1_b(tv1) && !f_16fa_a1_b(tv1) && !f_1775_a1_b(tv1)) {
					f_631_a1_v("Neutral");
					tv0->SetMessage(8666);
					tv0->ClearReplies();
					tv0->AddReply(8667, 9493, 9492);
					return;
				}
				f_631_a1_v("Neutral");
				tv0->SetMessage(8034);
				tv0->ClearReplies();
				if (f_1781_a1_b(tv1) && f_16ee_a1_b(tv1) || f_17bb_a1_b(tv1) && f_16ee_a1_b(tv1)) {
					tv0->AddReply(8036, 5976, 8859);
				}
				if (f_18f1_a1_b(tv1) && f_189d_a1_b(tv1)) {
					tv0->AddReply(8039, 5991, 8862);
				}
				if (f_1885_a1_b(tv1) && f_18a9_a1_b(tv1)) {
					tv0->AddReply(8042, 8884, 8865);
				}
				if (f_1891_a1_b(tv1) && f_18b5_a1_b(tv1)) {
					tv0->AddReply(8046, 8885, 8869);
				}
				if (f_1855_a1_b(tv1) && f_18c1_a1_b(tv1)) {
					tv0->AddReply(8047, 8886, 8870);
				}
				if (f_18e5_a1_b(tv1) && f_18cd_a1_b(tv1)) {
					tv0->AddReply(8051, 8887, 8874);
				}
				if (f_180d_a1_b(tv1) && f_18d9_a1_b(tv1)) {
					tv0->AddReply(8052, 8888, 8875);
				}
				tv0->AddReply(8709, -1, 9546);
				return;
			}
			if (a0 == 8888) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8065);
				tv0->ClearReplies();
				tv0->AddReply(8708, -1, 9545);
				return;
			}
			if (a0 == 8887) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8064);
				tv0->ClearReplies();
				tv0->AddReply(8707, -1, 9544);
				return;
			}
			if (a0 == 8886) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8063);
				tv0->ClearReplies();
				tv0->AddReply(8706, -1, 9543);
				return;
			}
			if (a0 == 8885) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8062);
				tv0->ClearReplies();
				tv0->AddReply(8705, -1, 9542);
				return;
			}
			if (a0 == 8884) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8061);
				tv0->ClearReplies();
				tv0->AddReply(8704, -1, 9541);
				return;
			}
			if (a0 == 5991) {
				f_1669_a2_v(tv1, tv0);
				f_631_a1_v("Neutral");
				tv0->SetMessage(5438);
				tv0->ClearReplies();
				tv0->AddReply(5439, 5993, 5992);
				tv0->AddReply(5446, -1, 6000);
				return;
			}
			if (a0 == 5993) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(5440);
				tv0->ClearReplies();
				tv0->AddReply(5441, 5995, 5994);
				tv0->AddReply(5445, 5995, 5998);
				return;
			}
			if (a0 == 5995) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(5442);
				tv0->ClearReplies();
				tv0->AddReply(5443, -1, 5996);
				tv0->AddReply(5444, -1, 5997);
				return;
			}
			if (a0 == 5976) {
				if (f_16ee_a1_b(tv1)) {
					f_631_a1_v("Neutral");
					tv0->SetMessage(5427);
					tv0->ClearReplies();
					tv0->AddReply(5428, 5978, 5977);
					tv0->AddReply(5436, 5978, 5987);
					tv0->AddReply(5437, 5978, 5989);
					return;
				}
			}
			if (a0 == 5978) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(5429);
				tv0->ClearReplies();
				tv0->AddReply(5430, 5980, 5979);
				tv0->AddReply(5434, 5980, 5983);
				tv0->AddReply(5435, 5980, 5985);
				return;
			}
			if (a0 == 5980) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(5431);
				tv0->ClearReplies();
				tv0->AddReply(5432, -1, 5981);
				tv0->AddReply(5433, -1, 5982);
				return;
			}
			if (a0 == 9493) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8668);
				tv0->ClearReplies();
				tv0->AddReply(8669, 9495, 9494);
				return;
			}
			if (a0 == 9495) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8670);
				tv0->ClearReplies();
				tv0->AddReply(8671, 9497, 9496);
				return;
			}
			if (a0 == 9497) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8672);
				tv0->ClearReplies();
				tv0->AddReply(8673, 9499, 9498);
				return;
			}
			if (a0 == 9499) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8674);
				tv0->ClearReplies();
				tv0->AddReply(8675, 9501, 9500);
				return;
			}
			if (a0 == 9501) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8676);
				tv0->ClearReplies();
				tv0->AddReply(8677, 9503, 9502);
				return;
			}
			if (a0 == 9503) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8678);
				tv0->ClearReplies();
				tv0->AddReply(8679, 9505, 9504);
				return;
			}
			if (a0 == 9505) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8680);
				tv0->ClearReplies();
				tv0->AddReply(8681, 9507, 9506);
				return;
			}
			if (a0 == 9507) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(8682);
				tv0->ClearReplies();
				tv0->AddReply(8683, -1, 9508);
				return;
			}
			if (a0 == 6893) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(6232);
				tv0->ClearReplies();
				tv0->AddReply(6233, 6895, 6894);
				return;
			}
			if (a0 == 6895) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(6234);
				tv0->ClearReplies();
				tv0->AddReply(6235, 6888, 6896);
				return;
			}
			if (a0 == 6886) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(6225);
				tv0->ClearReplies();
				tv0->AddReply(6226, 6888, 6887);
				return;
			}
			if (a0 == 6888) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(6227);
				tv0->ClearReplies();
				tv0->AddReply(6229, 6891, 6890);
				if (f_16ca_a1_b(tv1)) {
					tv0->AddReply(6228, 6891, 6889);
				}
				return;
			}
			if (a0 == 6891) {
				f_631_a1_v("Neutral");
				tv0->SetMessage(6230);
				tv0->ClearReplies();
				tv0->AddReply(6236, -1, 6898);
				tv0->AddReply(6237, -1, 6899);
				return;
			}
			tv3 = true;
			if (f_13ed_a0_b()) {
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
		if (!f_132f_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13e9_a0_i());
		L0->SetPhoto(f_13eb_a0_s());
		L0->SetPlayerName(f_19a5_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1367_a1_v(a0);
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
			if (f_1712_a1_b(tv1) && f_1736_a1_b(tv1)) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(6893);
				tv0->ClearReplies();
				tv0->AddReply(7378, 8140, 8139);
				tv0->AddReply(7384, 8140, 8145);
				break;
			}
			f_abf_a1_v("Neutral");
			tv0->SetMessage(7377);
			tv0->ClearReplies();
			if (f_171e_a1_b(tv1) && f_175d_a1_b(tv1) && f_1747_a1_b(tv1)) {
				tv0->AddReply(6900, 7607, 7606);
			}
			if (f_172a_a1_b(tv1) && f_1747_a1_b(tv1)) {
				tv0->AddReply(6902, 7609, 7608);
			}
			if (f_1742_a1_b(tv1) && f_1751_a1_b(tv1)) {
				tv0->AddReply(6905, 7612, 7611);
			}
			if (f_1736_a1_b(tv1)) {
				tv0->AddReply(7745, 7601, 8545);
			}
			tv0->AddReply(7744, -1, 8544);
			break;
			f_abf_a1_v("Neutral");
			tv0->SetMessage(9342);
			tv0->ClearReplies();
			tv0->AddReply(9343, 10264, 10263);
			tv0->AddReply(9350, 10264, 10271);
			break;
			f_abf_a1_v("Neutral");
			tv0->SetMessage(9451);
			tv0->ClearReplies();
			tv0->AddReply(9452, 10391, 10390);
			tv0->AddReply(9471, 10391, 10412);
			break;
			return;
		}
		if (f_13ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_136b_a1_v(tv2);
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

	void f_abf_a1_v(string a0)
	{
		if (!f_13ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_136b_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_137d_a0_v();
			if (a1 == 7604) {
				f_1407_a2_v(tv1, tv0);
				f_1419_a2_v(tv1, tv0);
			}
			if (a1 == 8158) {
				f_1407_a2_v(tv1, tv0);
				f_1419_a2_v(tv1, tv0);
			}
			if (a1 == 8155) {
				f_140d_a2_v(tv1, tv0);
			}
			if (a1 == 8161) {
				f_140d_a2_v(tv1, tv0);
				f_1472_a2_v(tv1, tv0);
				f_14c6_a2_v(tv1, tv0);
			}
			if (a1 == 8165) {
				f_1413_a2_v(tv1, tv0);
				f_14cc_a2_v(tv1, tv0);
				f_1452_a2_v(tv1, tv0);
				f_1693_a2_v(tv1, tv0);
			}
			if (a0 == 7599) {
				if (f_1712_a1_b(tv1) && f_1736_a1_b(tv1)) {
					f_abf_a1_v("Neutral");
					tv0->SetMessage(6893);
					tv0->ClearReplies();
					tv0->AddReply(7378, 8140, 8139);
					tv0->AddReply(7384, 8140, 8145);
					return;
				}
				f_abf_a1_v("Neutral");
				tv0->SetMessage(7377);
				tv0->ClearReplies();
				if (f_171e_a1_b(tv1) && f_175d_a1_b(tv1) && f_1747_a1_b(tv1)) {
					tv0->AddReply(6900, 7607, 7606);
				}
				if (f_172a_a1_b(tv1) && f_1747_a1_b(tv1)) {
					tv0->AddReply(6902, 7609, 7608);
				}
				if (f_1742_a1_b(tv1) && f_1751_a1_b(tv1)) {
					tv0->AddReply(6905, 7612, 7611);
				}
				if (f_1736_a1_b(tv1)) {
					tv0->AddReply(7745, 7601, 8545);
				}
				tv0->AddReply(7744, -1, 8544);
				return;
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9342);
				tv0->ClearReplies();
				tv0->AddReply(9343, 10264, 10263);
				tv0->AddReply(9350, 10264, 10271);
				return;
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9451);
				tv0->ClearReplies();
				tv0->AddReply(9452, 10391, 10390);
				tv0->AddReply(9471, 10391, 10412);
				return;
			}
			if (a0 == 10391) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9453);
				tv0->ClearReplies();
				tv0->AddReply(9454, 10393, 10392);
				tv0->AddReply(9467, 10408, 10407);
				tv0->AddReply(9470, -1, 10411);
				return;
			}
			if (a0 == 10408) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9468);
				tv0->ClearReplies();
				tv0->AddReply(9469, 10393, 10409);
				return;
			}
			if (a0 == 10393) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9455);
				tv0->ClearReplies();
				tv0->AddReply(9456, 10395, 10394);
				tv0->AddReply(9463, 10403, 10402);
				tv0->AddReply(9466, -1, 10406);
				return;
			}
			if (a0 == 10403) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9464);
				tv0->ClearReplies();
				tv0->AddReply(9465, 10395, 10404);
				return;
			}
			if (a0 == 10395) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9457);
				tv0->ClearReplies();
				tv0->AddReply(9458, 10397, 10396);
				tv0->AddReply(9462, 10397, 10400);
				return;
			}
			if (a0 == 10397) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9459);
				tv0->ClearReplies();
				tv0->AddReply(9460, -1, 10398);
				tv0->AddReply(9461, -1, 10399);
				return;
			}
			if (a0 == 10264) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9344);
				tv0->ClearReplies();
				tv0->AddReply(9345, 10266, 10265);
				tv0->AddReply(9349, 10266, 10269);
				return;
			}
			if (a0 == 10266) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(9346);
				tv0->ClearReplies();
				tv0->AddReply(9347, -1, 10267);
				tv0->AddReply(9348, -1, 10268);
				return;
			}
			if (a0 == 7612) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(6906);
				tv0->ClearReplies();
				tv0->AddReply(6907, -1, 7613);
				return;
			}
			if (a0 == 7609) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(6903);
				tv0->ClearReplies();
				tv0->AddReply(7397, 8163, 8162);
				tv0->AddReply(6908, 8163, 7614);
				return;
			}
			if (a0 == 8163) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(7398);
				tv0->ClearReplies();
				tv0->AddReply(7399, -1, 8165);
				return;
			}
			if (a0 == 7607) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(6901);
				tv0->ClearReplies();
				tv0->AddReply(7396, -1, 8161);
				return;
			}
			if (a0 == 8140) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(7379);
				tv0->ClearReplies();
				tv0->AddReply(7380, 8142, 8141);
				tv0->AddReply(7385, 8142, 8147);
				return;
			}
			if (a0 == 8142) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(7381);
				tv0->ClearReplies();
				tv0->AddReply(7382, 8144, 8143);
				tv0->AddReply(7386, 8150, 8149);
				return;
			}
			if (a0 == 8150) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(7387);
				tv0->ClearReplies();
				tv0->AddReply(7388, 8144, 8151);
				return;
			}
			if (a0 == 8144) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(7383);
				tv0->ClearReplies();
				tv0->AddReply(6894, 8153, 7600);
				return;
			}
			if (a0 == 8153) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(7389);
				tv0->ClearReplies();
				tv0->AddReply(7390, 7601, 8154);
				tv0->AddReply(7391, -1, 8155);
				return;
			}
			if (a0 == 7601) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(6895);
				tv0->ClearReplies();
				tv0->AddReply(6896, 7603, 7602);
				tv0->AddReply(7392, 8157, 8156);
				return;
			}
			if (a0 == 8157) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(7393);
				tv0->ClearReplies();
				tv0->AddReply(7395, 7603, 8159);
				return;
			}
			if (a0 == 7603) {
				f_abf_a1_v("Neutral");
				tv0->SetMessage(6897);
				tv0->ClearReplies();
				tv0->AddReply(6898, -1, 7604);
				tv0->AddReply(7394, -1, 8158);
				return;
			}
			tv3 = true;
			if (f_13ed_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t10
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_132f_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13e9_a0_i());
		L0->SetPhoto(f_13eb_a0_s());
		L0->SetPlayerName(f_19a5_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1367_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t11
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
			f_e57_a1_v("Neutral");
			tv0->SetMessage(10151);
			tv0->ClearReplies();
			if (f_1797_a1_b(tv1) && f_178b_a1_b(tv1)) {
				tv0->AddReply(10152, 11195, 11194);
			}
			if (f_17a3_a1_b(tv1) && f_17af_a1_b(tv1)) {
				tv0->AddReply(10995, 12163, 12162);
			}
			if (f_17d1_a1_b(tv1) && f_17c5_a1_b(tv1)) {
				tv0->AddReply(11435, 12638, 12637);
			}
			if (f_17c5_a1_b(tv1) && !f_17dd_a1_b(tv1)) {
				tv0->AddReply(11476, 12683, 12682);
			}
			if (f_17f5_a1_b(tv1) && f_17e9_a1_b(tv1)) {
				tv0->AddReply(11859, 13073, 13072);
			}
			tv0->AddReply(11479, -1, 12685);
			break;
			return;
		}
		if (f_13ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_136b_a1_v(tv2);
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

	void f_e57_a1_v(string a0)
	{
		if (!f_13ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_136b_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_137d_a0_v();
			if (a1 == 12160) {
				f_14fc_a2_v(tv1, tv0);
				f_1502_a2_v(tv1, tv0);
				f_14ec_a2_v(tv1, tv0);
			}
			if (a1 == 12161) {
				f_14fc_a2_v(tv1, tv0);
				f_1502_a2_v(tv1, tv0);
				f_14ec_a2_v(tv1, tv0);
			}
			if (a1 == 12181) {
				f_1522_a2_v(tv1, tv0);
				f_1528_a2_v(tv1, tv0);
			}
			if (a1 == 12182) {
				f_1522_a2_v(tv1, tv0);
				f_1528_a2_v(tv1, tv0);
			}
			if (a1 == 12183) {
				f_1522_a2_v(tv1, tv0);
				f_1528_a2_v(tv1, tv0);
				f_14dc_a2_v(tv1, tv0);
			}
			if (a1 == 12649) {
				f_1545_a2_v(tv1, tv0);
				f_154b_a2_v(tv1, tv0);
				f_1551_a2_v(tv1, tv0);
				f_16b9_a2_v(tv1, tv0);
				f_16a3_a2_v(tv1, tv0);
				f_16ae_a2_v(tv1, tv0);
				f_1401_a2_v(tv1, tv0);
			}
			if (a1 == 12650) {
				f_1545_a2_v(tv1, tv0);
			}
			if (a1 == 12684) {
				f_154b_a2_v(tv1, tv0);
				f_1551_a2_v(tv1, tv0);
				f_16a3_a2_v(tv1, tv0);
				f_16b9_a2_v(tv1, tv0);
				f_16ae_a2_v(tv1, tv0);
				f_1401_a2_v(tv1, tv0);
			}
			if (a1 == 13074) {
				f_1595_a2_v(tv1, tv0);
			}
			if (a0 == 11193) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10151);
				tv0->ClearReplies();
				if (f_1797_a1_b(tv1) && f_178b_a1_b(tv1)) {
					tv0->AddReply(10152, 11195, 11194);
				}
				if (f_17a3_a1_b(tv1) && f_17af_a1_b(tv1)) {
					tv0->AddReply(10995, 12163, 12162);
				}
				if (f_17d1_a1_b(tv1) && f_17c5_a1_b(tv1)) {
					tv0->AddReply(11435, 12638, 12637);
				}
				if (f_17c5_a1_b(tv1) && !f_17dd_a1_b(tv1)) {
					tv0->AddReply(11476, 12683, 12682);
				}
				if (f_17f5_a1_b(tv1) && f_17e9_a1_b(tv1)) {
					tv0->AddReply(11859, 13073, 13072);
				}
				tv0->AddReply(11479, -1, 12685);
				return;
			}
			if (a0 == 13073) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11860);
				tv0->ClearReplies();
				tv0->AddReply(11861, -1, 13074);
				return;
			}
			if (a0 == 12683) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11477);
				tv0->ClearReplies();
				tv0->AddReply(11478, -1, 12684);
				return;
			}
			if (a0 == 12638) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11436);
				tv0->ClearReplies();
				tv0->AddReply(11437, 12640, 12639);
				tv0->AddReply(11450, 12654, 12653);
				return;
			}
			if (a0 == 12654) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11451);
				tv0->ClearReplies();
				tv0->AddReply(11452, 12656, 12655);
				return;
			}
			if (a0 == 12656) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11453);
				tv0->ClearReplies();
				tv0->AddReply(11454, 12640, 12657);
				return;
			}
			if (a0 == 12640) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11438);
				tv0->ClearReplies();
				tv0->AddReply(11439, 12642, 12641);
				return;
			}
			if (a0 == 12642) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11440);
				tv0->ClearReplies();
				tv0->AddReply(11441, 12644, 12643);
				tv0->AddReply(11449, 12644, 12651);
				return;
			}
			if (a0 == 12644) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11442);
				tv0->ClearReplies();
				tv0->AddReply(11443, 12646, 12645);
				return;
			}
			if (a0 == 12646) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11444);
				tv0->ClearReplies();
				tv0->AddReply(11445, 12648, 12647);
				return;
			}
			if (a0 == 12648) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11446);
				tv0->ClearReplies();
				tv0->AddReply(11447, -1, 12649);
				tv0->AddReply(11448, -1, 12650);
				return;
			}
			if (a0 == 12163) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10996);
				tv0->ClearReplies();
				tv0->AddReply(10997, 12165, 12164);
				return;
			}
			if (a0 == 12165) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10998);
				tv0->ClearReplies();
				tv0->AddReply(10999, 12167, 12166);
				tv0->AddReply(11001, 12170, 12168);
				return;
			}
			if (a0 == 12170) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11002);
				tv0->ClearReplies();
				tv0->AddReply(11003, 12167, 12171);
				tv0->AddReply(11004, 12167, 12172);
				return;
			}
			if (a0 == 12167) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11000);
				tv0->ClearReplies();
				tv0->AddReply(11005, 12176, 12175);
				tv0->AddReply(11008, 12176, 12178);
				return;
			}
			if (a0 == 12176) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11006);
				tv0->ClearReplies();
				tv0->AddReply(11007, 12180, 12177);
				tv0->AddReply(11012, -1, 12183);
				return;
			}
			if (a0 == 12180) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(11009);
				tv0->ClearReplies();
				tv0->AddReply(11010, -1, 12181);
				tv0->AddReply(11011, -1, 12182);
				return;
			}
			if (a0 == 11195) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10153);
				tv0->ClearReplies();
				tv0->AddReply(10977, 12140, 12139);
				tv0->AddReply(10154, 11197, 11196);
				return;
			}
			if (a0 == 11197) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10155);
				tv0->ClearReplies();
				tv0->AddReply(10982, 12145, 12144);
				tv0->AddReply(10986, 12149, 12148);
				return;
			}
			if (a0 == 12149) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10987);
				tv0->ClearReplies();
				tv0->AddReply(10988, 12143, 12150);
				return;
			}
			if (a0 == 12145) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10983);
				tv0->ClearReplies();
				tv0->AddReply(10984, 12143, 12146);
				tv0->AddReply(10985, 12143, 12147);
				return;
			}
			if (a0 == 12140) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10978);
				tv0->ClearReplies();
				tv0->AddReply(10980, 12143, 12142);
				return;
			}
			if (a0 == 12143) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10981);
				tv0->ClearReplies();
				tv0->AddReply(10159, 12154, 11201);
				tv0->AddReply(10990, 12154, 12155);
				return;
			}
			if (a0 == 12154) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10989);
				tv0->ClearReplies();
				tv0->AddReply(10992, 12157, 12158);
				return;
			}
			if (a0 == 12157) {
				f_e57_a1_v("Neutral");
				tv0->SetMessage(10991);
				tv0->ClearReplies();
				tv0->AddReply(10993, -1, 12160);
				tv0->AddReply(10994, -1, 12161);
				return;
			}
			tv3 = true;
			if (f_13ed_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t12
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_132f_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13e9_a0_i());
		L0->SetPhoto(f_13eb_a0_s());
		L0->SetPlayerName(f_19a5_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1367_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t13
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
			f_1202_a1_v("Neutral");
			tv0->SetMessage(11662);
			tv0->ClearReplies();
			if (f_1801_a1_b(tv1)) {
				tv0->AddReply(11663, 12863, 12862);
			}
			tv0->AddReply(11960, -1, 13174);
			break;
			return;
		}
		if (f_13ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_136b_a1_v(tv2);
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

	void f_1202_a1_v(string a0)
	{
		if (!f_13ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_136b_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_137d_a0_v();
			if (a1 == 12878) {
				f_159b_a2_v(tv1, tv0);
			}
			if (a0 == 12861) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11662);
				tv0->ClearReplies();
				if (f_1801_a1_b(tv1)) {
					tv0->AddReply(11663, 12863, 12862);
				}
				tv0->AddReply(11960, -1, 13174);
				return;
			}
			if (a0 == 12863) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11664);
				tv0->ClearReplies();
				tv0->AddReply(11680, 12867, 12879);
				tv0->AddReply(11665, 12865, 12864);
				return;
			}
			if (a0 == 12865) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11666);
				tv0->ClearReplies();
				tv0->AddReply(11667, 12867, 12866);
				return;
			}
			if (a0 == 12867) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11668);
				tv0->ClearReplies();
				tv0->AddReply(11669, 12869, 12868);
				tv0->AddReply(11684, 12886, 12885);
				return;
			}
			if (a0 == 12886) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11685);
				tv0->ClearReplies();
				tv0->AddReply(11686, 12888, 12887);
				return;
			}
			if (a0 == 12888) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11687);
				tv0->ClearReplies();
				tv0->AddReply(11688, 12869, 12889);
				return;
			}
			if (a0 == 12869) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11670);
				tv0->ClearReplies();
				tv0->AddReply(11673, 12873, 12872);
				tv0->AddReply(11671, 12871, 12870);
				return;
			}
			if (a0 == 12871) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11672);
				tv0->ClearReplies();
				tv0->AddReply(11681, 12882, 12881);
				return;
			}
			if (a0 == 12882) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11682);
				tv0->ClearReplies();
				tv0->AddReply(11683, 12873, 12883);
				return;
			}
			if (a0 == 12873) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11674);
				tv0->ClearReplies();
				tv0->AddReply(11675, 12875, 12874);
				return;
			}
			if (a0 == 12875) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11676);
				tv0->ClearReplies();
				tv0->AddReply(11677, 12877, 12876);
				return;
			}
			if (a0 == 12877) {
				f_1202_a1_v("Neutral");
				tv0->SetMessage(11678);
				tv0->ClearReplies();
				tv0->AddReply(11679, -1, 12878);
				return;
			}
			tv3 = true;
			if (f_13ed_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_131e_a1_b(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	bool L3;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@Rotate(L2.x, L2.z, L3);
	return L3;
}

bool f_132a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_132f_a1_b(object a0)
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
	L5 = L3 * 70 + f_1384_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_1367_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_136b_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_137d_a0_v(void)
{
	if (f_13ed_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1384_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_138e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1393_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_139e_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

void f_13ab_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_139e_a3_v(a0, L0, a2);
}

bool f_13b8_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_13c4_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_13c9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_13d2_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_13da_a1_b(int a0)
{
	return f_13c9_a0_i() == a0;
}

bool f_13e0_a0_b(void)
{
	bool L0;
	f_136b_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_13e9_a0_i(void)
{
	return 2866;
}

string f_13eb_a0_s(void)
{
	return "ui/NPC_Lara.png";
}

bool f_13ed_a0_b(void)
{
	return true;
}

void f_13ef_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara1", 1);
}

void f_13f5_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara2", 1);
}

void f_13fb_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara3", 1);
}

void f_1401_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1407_a2_v(object a0, object a1)
{
	@SetVariable("ood2Lara1", 1);
}

void f_140d_a2_v(object a0, object a1)
{
	@SetVariable("ood2Lara2", 1);
}

void f_1413_a2_v(object a0, object a1)
{
	@SetVariable("ood2Lara3", 1);
}

void f_1419_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q03", 1);
	L0 = f_1973_a0_o();
	L0->AddMark("d2q03LaraGotoMoneyFoodSelf", "pt_map_lara", 0, 15286, f_13c4_a0_f());
	L0->AddMark("d2q03LaraGotoJulia", "pt_map_julia", 0, 15288, f_13c4_a0_f());
	L0->AddMark("d2q03LaraGotoMaria", "pt_map_maria", 0, 15289, f_13c4_a0_f());
	L0->AddMark("d2q03LaraGotoMladVlad", "pt_map_mladvlad", 0, 15287, f_13c4_a0_f());
	f_19c6_a0_v();
	f_19d6_a0_v();
	f_1393_a1_o("quest_d2_03");
}

void f_1452_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q03", 2);
	L0 = f_1973_a0_o();
	L0->AddMark("d2q03LaraGotoSklad", "pt_map_d2q03_shouse", 0, 15290, f_13c4_a0_f());
	L0->AddMark("d2q03LaraGotoSkladSelf", "pt_map_lara", 0, 15291, f_13c4_a0_f());
	f_19e6_a0_v();
}

void f_1472_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1973_a0_o();
	L0->FindMark(L1, "d2q03BirdmaskGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03BirdmaskGotoLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoMoneyFoodSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoSklad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoSkladSelf");
	if (L1) {
		L1->Remove();
	}
	f_19f6_a0_v();
	a0->RemoveItemByType(L2, "smoked_meat", 3);
	a0->RemoveItemByType(L2, "dried_fish", 3);
	a0->RemoveItemByType(L2, "bread", 3);
	f_13b8_a2_b("quest_d2_03", "completed");
}

void f_14c6_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_14cc_a2_v(object a0, object a1)
{
	f_13b8_a2_b("quest_d2_03", "birdmask");
}

void f_14d3_a2_v(object a0, object a1)
{
	@SetVariable("d1q01KnowEpidemic", 1);
	f_19b6_a0_v();
}

void f_14dc_a2_v(object a0, object a1)
{
	f_1984_a3_v(f_1973_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_1973_a0_o());
}

void f_14ec_a2_v(object a0, object a1)
{
	f_1984_a3_v(f_1973_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_1973_a0_o());
}

void f_14fc_a2_v(object a0, object a1)
{
	@SetVariable("ood4Lara1", 1);
}

void f_1502_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01", 2);
	L0 = f_1973_a0_o();
	L0->AddMark("d4q01LaraGotoMladVlad", "pt_map_mladvlad", 1, 11483, f_13c4_a0_f());
	L0->AddMark("d4q01LaraGotoMladVladSelf", "pt_map_lara", 1, 15321, f_13c4_a0_f());
	f_1a06_a0_v();
}

void f_1522_a2_v(object a0, object a1)
{
	@SetVariable("ood4Lara2", 1);
}

void f_1528_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01_subquest", 3);
	L0 = f_1973_a0_o();
	L0->AddMark("d4q01LaraGotoOspina", "pt_map_ospina", 0, 11506, f_13c4_a0_f());
	L0->AddMark("d4q01LaraGotoOspinaSelf", "pt_map_lara", 1, 15324, f_13c4_a0_f());
}

void f_1545_a2_v(object a0, object a1)
{
	@SetVariable("ood4Lara3", 1);
}

void f_154b_a2_v(object a0, object a1)
{
	@SetVariable("d4q02LaraGivesMedcine", 1);
}

void f_1551_a2_v(object a0, object a1)
{
	if (f_138e_a1_i("d4q02AnnaGivesMedcine") == 1 && f_138e_a1_i("d4q02JuliaGivesMedcine") == 1 && f_138e_a1_i("d4q02LaraGivesMedcine") == 1) {
		object L0;
		@SetVariable("d4q02", 2);
		L0 = f_1973_a0_o();
		L0->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 11842, f_13c4_a0_f());
		f_13b8_a2_b("quest_d4_02", "birdmask");
		f_1984_a3_v(f_1973_a0_o(), "pt_d4q02_birdmask", 2);
		a1->ShowMap(f_1973_a0_o());
	}
}

void f_1595_a2_v(object a0, object a1)
{
	@SetVariable("ood4Lara4", 1);
}

void f_159b_a2_v(object a0, object a1)
{
	@SetVariable("d5q01", 5);
	f_1a16_a0_v();
	f_13b8_a2_b("quest_d5_01", "factory");
}

void f_15a9_a2_v(object a0, object a1)
{
	@SetVariable("ood6Lara1", 1);
}

void f_15af_a2_v(object a0, object a1)
{
	f_1a26_a0_v();
	@Trace("lara blood is given");
	f_13ab_a3_v(a0, "d6q01_lara_blood", 1);
}

void f_15bd_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_15c3_a2_v(object a0, object a1)
{
	@SetVariable("ood6Lara2", 1);
}

void f_15c9_a2_v(object a0, object a1)
{
	@SetVariable("ood6Lara3", 1);
}

void f_15cf_a2_v(object a0, object a1)
{
	@SetVariable("ood6Lara4", 1);
}

void f_15d5_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	@SetVariable("d6q01LaraVolonteer", 1);
	L0 = f_1973_a0_o();
	L0->FindMark(L1, "d6q01AlexandrGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexangrGotoJulLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnnaOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinagotoLaskaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KillerIsKlara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01LaskaGotoAlbinos");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlxBigSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	f_1a36_a0_v();
	f_1962_a1_b(112);
	f_1962_a1_b(113);
	f_1962_a1_b(114);
	f_1962_a1_b(115);
	f_1962_a1_b(116);
	f_1962_a1_b(117);
	f_13b8_a2_b("quest_d6_01", "completed");
}

void f_1663_a2_v(object a0, object a1)
{
	@SetVariable("KnowLara", 1);
}

void f_1669_a2_v(object a0, object a1)
{
	@SetVariable("KnowMaria", 1);
}

void f_166f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara4", 1);
}

void f_1675_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara5", 1);
}

void f_167b_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara6", 1);
}

void f_1681_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara7", 1);
}

void f_1687_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara8", 1);
}

void f_168d_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara9", 1);
}

void f_1693_a2_v(object a0, object a1)
{
	f_1984_a3_v(f_1973_a0_o(), "pt_map_d2q03_shouse", 2);
	a1->ShowMap(f_1973_a0_o());
}

void f_16a3_a2_v(object a0, object a1)
{
	@Trace("morfin is given");
	f_13ab_a3_v(a0, "morfin", 1);
}

void f_16ae_a2_v(object a0, object a1)
{
	@Trace("etorfin is given");
	f_13ab_a3_v(a0, "etorfin", 1);
}

void f_16b9_a2_v(object a0, object a1)
{
	@Trace("novocaine is given");
	f_13ab_a3_v(a0, "novocaine", 1);
}

void f_16c4_a2_v(object a0, object a1)
{
	@SetVariable("KnowPredictions", 1);
}

bool f_16ca_a1_b(object a0)
{
	if (f_138e_a1_i("KnowWarehouses") == 1) {
		return true;
	}
	return false;
}

bool f_16d6_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_16e2_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_16ee_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara3") == 0) {
		return true;
	}
	return false;
}

bool f_16fa_a1_b(object a0)
{
	if (f_138e_a1_i("d1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1706_a1_b(object a0)
{
	if (f_138e_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_1712_a1_b(object a0)
{
	if (f_138e_a1_i("ood2Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_171e_a1_b(object a0)
{
	if (f_138e_a1_i("ood2Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_172a_a1_b(object a0)
{
	if (f_138e_a1_i("ood2Lara3") == 0) {
		return true;
	}
	return false;
}

bool f_1736_a1_b(object a0)
{
	if (f_138e_a1_i("d2q03") == 0) {
		return true;
	}
	return false;
}

bool f_1742_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1747_a1_b(object a0)
{
	if (f_18fd_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1751_a1_b(object a0)
{
	if (f_138e_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_175d_a1_b(object a0)
{
	if (f_138e_a1_i("d2q03") == 3) {
		return true;
	}
	return false;
}

bool f_1769_a1_b(object a0)
{
	if (f_138e_a1_i("d2q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1775_a1_b(object a0)
{
	if (f_138e_a1_i("d1q01KnowEpidemic") == 1) {
		return true;
	}
	return false;
}

bool f_1781_a1_b(object a0)
{
	if (f_1918_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_178b_a1_b(object a0)
{
	if (f_138e_a1_i("d4q01") == 1) {
		return true;
	}
	return false;
}

bool f_1797_a1_b(object a0)
{
	if (f_138e_a1_i("ood4Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_17a3_a1_b(object a0)
{
	if (f_138e_a1_i("ood4Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_17af_a1_b(object a0)
{
	if (f_138e_a1_i("d4q01_subquest") == 2) {
		return true;
	}
	return false;
}

bool f_17bb_a1_b(object a0)
{
	if (f_1923_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17c5_a1_b(object a0)
{
	if (f_138e_a1_i("d4q02") == 1) {
		return true;
	}
	return false;
}

bool f_17d1_a1_b(object a0)
{
	if (f_138e_a1_i("ood4Lara3") == 0) {
		return true;
	}
	return false;
}

bool f_17dd_a1_b(object a0)
{
	if (f_138e_a1_i("d4q02LaraGivesMedcine") == 1) {
		return true;
	}
	return false;
}

bool f_17e9_a1_b(object a0)
{
	if (f_138e_a1_i("d4q02") == 1000) {
		return true;
	}
	return false;
}

bool f_17f5_a1_b(object a0)
{
	if (f_138e_a1_i("ood4Lara4") == 0) {
		return true;
	}
	return false;
}

bool f_1801_a1_b(object a0)
{
	if (f_138e_a1_i("d5q01") == 4) {
		return true;
	}
	return false;
}

bool f_180d_a1_b(object a0)
{
	if (f_138e_a1_i("KnowMark") == 1) {
		return true;
	}
	return false;
}

bool f_1819_a1_b(object a0)
{
	if (f_138e_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_1825_a1_b(object a0)
{
	if (f_138e_a1_i("ood6Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_1831_a1_b(object a0)
{
	if (f_138e_a1_i("microscope_d6q01_lara_blood") != 0) {
		return true;
	}
	return false;
}

bool f_183d_a1_b(object a0)
{
	if (f_138e_a1_i("ood6Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_1849_a1_b(object a0)
{
	if (f_138e_a1_i("ood6Lara3") == 0) {
		return true;
	}
	return false;
}

bool f_1855_a1_b(object a0)
{
	if (f_138e_a1_i("KnowAlexandr") == 1) {
		return true;
	}
	return false;
}

bool f_1861_a1_b(object a0)
{
	if (f_138e_a1_i("ood6Lara4") == 0) {
		return true;
	}
	return false;
}

bool f_186d_a1_b(object a0)
{
	if (f_138e_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1879_a1_b(object a0)
{
	if (f_138e_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_1885_a1_b(object a0)
{
	if (f_138e_a1_i("KnowJulia") == 1) {
		return true;
	}
	return false;
}

bool f_1891_a1_b(object a0)
{
	if (f_138e_a1_i("KnowKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_189d_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara4") == 0) {
		return true;
	}
	return false;
}

bool f_18a9_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara5") == 0) {
		return true;
	}
	return false;
}

bool f_18b5_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara6") == 0) {
		return true;
	}
	return false;
}

bool f_18c1_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara7") == 0) {
		return true;
	}
	return false;
}

bool f_18cd_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara8") == 0) {
		return true;
	}
	return false;
}

bool f_18d9_a1_b(object a0)
{
	if (f_138e_a1_i("ood1Lara9") == 0) {
		return true;
	}
	return false;
}

bool f_18e5_a1_b(object a0)
{
	if (f_138e_a1_i("KnowMladVlad") == 1) {
		return true;
	}
	return false;
}

bool f_18f1_a1_b(object a0)
{
	if (f_138e_a1_i("KnowPredictions") == 1) {
		return true;
	}
	return false;
}

bool f_18fd_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "smoked_meat");
	if (L0 < 3) {
		return false;
	}
	a0->GetItemCountOfType(L0, "dried_fish");
	if (L0 < 3) {
		return false;
	}
	a0->GetItemCountOfType(L0, "bread");
	if (L0 < 3) {
		return false;
	}
	return true;
}

bool f_1918_a1_b(object a0)
{
	if (f_13d2_a0_i() >= 18) {
		return true;
	}
	return false;
}

bool f_1923_a1_b(object a0)
{
	if (f_13d2_a0_i() >= 12 && f_13d2_a0_i() < 18) {
		return true;
	}
	return false;
}

object f_1938_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1945_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1938_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

bool f_1962_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_1938_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_1973_a0_o(void)
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

void f_1984_a3_v(object a0, string a1, float a2)
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

int f_19a5_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_19b6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 33, 1, 12115);
	f_1945_a2_b(L0, 2);
}

void f_19c6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 12, 2, 3096);
	f_1945_a2_b(L0, -1);
}

void f_19d6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 63, 2, 12145);
	f_1945_a2_b(L0, 12);
}

void f_19e6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 65, 2, 12147);
	f_1945_a2_b(L0, 12);
}

void f_19f6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 66, 2, 12148);
	f_1945_a2_b(L0, 12);
}

void f_1a06_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 88, 1, 12170);
	f_1945_a2_b(L0, 20);
}

void f_1a16_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 143, 1, 15343);
	f_1945_a2_b(L0, 139);
}

void f_1a26_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 160, 1, 15393);
	f_1945_a2_b(L0, 111);
}

void f_1a36_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 118, 1, 13741);
	f_1945_a2_b(L0, 111);
}

void f_1a46_a0_v(void)
{
	g1 = false;
}

void f_1a4a_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_13da_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_13da_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_13da_a1_b(4)) {
		t10{a0};
		return;
	}
	if (f_13da_a1_b(5)) {
		t12{a0};
		return;
	}
	if (f_13da_a1_b(6)) {
		t4{a0};
		return;
	}
	f_13e0_a0_b();
}

