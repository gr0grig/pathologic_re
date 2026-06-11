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
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_1b35_a0_b()) {
				f_167f_a1_v("Neutral");
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

	void OnDialogReply(int a0)
	{
		if (f_1b35_a0_b()) {
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
		if (!f_15eb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b2f_a0_i());
		L0->SetNPCDescription(f_1b2d_a0_i());
		L0->SetPhoto(f_1b31_a0_s());
		L0->SetPhoto2(f_1b33_a0_s());
		L0->SetPlayerName(f_1896_a0_i());
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
		f_1630_a1_v(a0);
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
			if (f_178a_a1_b(tv1)) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543072);
				tv0->ClearReplies();
				if (f_1796_a1_b(tv1)) {
					tv0->AddReply(543073, 45531, 45528);
				}
				if (f_17a0_a1_b(tv1)) {
					tv0->AddReply(543092, 45550, 45547);
				}
				if (f_17aa_a1_b(tv1) || f_17d2_a1_b(tv1)) {
					tv0->AddReply(543108, 45564, 45563);
				}
				if (f_17b4_a1_b(tv1)) {
					tv0->AddReply(543101, 45557, 45556);
				}
				if (f_17be_a1_b(tv1)) {
					tv0->AddReply(543117, 45573, 45572);
				}
				if (f_17c8_a1_b(tv1)) {
					tv0->AddReply(543127, 45583, 45582);
				}
				if (f_17dc_a1_b(tv1) || f_17e6_a1_b(tv1)) {
					tv0->AddReply(543139, 45595, 45594);
				}
				if (f_1796_a1_b(tv1)) {
					tv0->AddReply(543075, -1, 45530);
				}
				if (f_17a0_a1_b(tv1) || f_17aa_a1_b(tv1) || f_17b4_a1_b(tv1) || f_17be_a1_b(tv1)) {
					tv0->AddReply(543100, -1, 45555);
				}
				if (f_17c8_a1_b(tv1)) {
					tv0->AddReply(543125, -1, 45580);
				}
				if (f_17d2_a1_b(tv1) || f_17dc_a1_b(tv1) || f_17e6_a1_b(tv1)) {
					tv0->AddReply(543147, -1, 45602);
				}
				if (f_17f0_a1_b(tv1) || f_17fa_a1_b(tv1) || f_1804_a1_b(tv1)) {
					tv0->AddReply(543148, -1, 45603);
				}
				if (f_1796_a1_b(tv1)) {
					tv0->AddReply(543074, -1, 45529);
				}
				if (f_17a0_a1_b(tv1) || f_17aa_a1_b(tv1)) {
					tv0->AddReply(543090, -1, 45545);
				}
				if (f_17a0_a1_b(tv1) || f_17aa_a1_b(tv1)) {
					tv0->AddReply(543099, -1, 45554);
				}
				if (f_17c8_a1_b(tv1) || f_17e6_a1_b(tv1)) {
					tv0->AddReply(543126, -1, 45581);
				}
				if (f_17d2_a1_b(tv1) || f_17dc_a1_b(tv1) || f_17f0_a1_b(tv1) || f_1804_a1_b(tv1)) {
					tv0->AddReply(543149, -1, 45604);
				}
				if (f_17b4_a1_b(tv1) || f_17be_a1_b(tv1) || f_17e6_a1_b(tv1) || f_17fa_a1_b(tv1) || f_1804_a1_b(tv1)) {
					tv0->AddReply(543150, -1, 45605);
				}
				break;
			}
			f_2e6_a1_v("Neutral");
			tv0->SetMessage(536854);
			tv0->ClearReplies();
			tv0->AddReply(536855, -1, 38691);
			if (f_1796_a1_b(tv1) && f_180e_a1_b(tv1)) {
				tv0->AddReply(536856, 38693, 38692);
			}
			if (f_1796_a1_b(tv1) && f_1818_a1_b(tv1)) {
				tv0->AddReply(536870, 38709, 38708);
			}
			if (f_17a0_a1_b(tv1)) {
				tv0->AddReply(536885, 38724, 38723);
			}
			if (f_17aa_a1_b(tv1)) {
				tv0->AddReply(536904, 38743, 38742);
			}
			if (f_17b4_a1_b(tv1)) {
				tv0->AddReply(536916, 38755, 38754);
			}
			if (f_17c8_a1_b(tv1) && f_177e_a1_b(tv1)) {
				tv0->AddReply(536931, 38770, 38769);
			}
			if (f_17dc_a1_b(tv1)) {
				tv0->AddReply(536943, 38782, 38781);
			}
			if (f_17e6_a1_b(tv1)) {
				tv0->AddReply(536961, 38800, 38799);
			}
			if (f_17f0_a1_b(tv1)) {
				tv0->AddReply(536978, 38817, 38816);
			}
			if (f_17fa_a1_b(tv1) && f_177e_a1_b(tv1)) {
				tv0->AddReply(536993, 38832, 38831);
			}
			if (f_1796_a1_b(tv1) && f_177e_a1_b(tv1)) {
				tv0->AddReply(537006, 38846, 38845);
			}
			if (f_1796_a1_b(tv1) && f_177e_a1_b(tv1)) {
				tv0->AddReply(537017, 38857, 38856);
			}
			if (f_1796_a1_b(tv1)) {
				tv0->AddReply(537025, 38865, 38864);
			}
			if (f_1796_a1_b(tv1)) {
				tv0->AddReply(537035, 38875, 38874);
			}
			if (f_1796_a1_b(tv1)) {
				tv0->AddReply(537044, 38884, 38883);
			}
			tv0->AddReply(537050, -1, 38889);
			break;
			return;
		}
		if (f_1b35_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167f_a1_v(tv2);
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

	void f_2e6_a1_v(string a0)
	{
		if (!f_1b35_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_168f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_16a9_a0_v();
			if (a1 == 45532) {
				f_1779_a2_v(tv1, tv0);
			}
			if (a1 == 45530) {
				f_1779_a2_v(tv1, tv0);
			}
			if (a1 == 45555) {
				f_1779_a2_v(tv1, tv0);
			}
			if (a1 == 45580) {
				f_1779_a2_v(tv1, tv0);
			}
			if (a1 == 45602) {
				f_1779_a2_v(tv1, tv0);
			}
			if (a1 == 45603) {
				f_1779_a2_v(tv1, tv0);
			}
			if (a1 == 38691) {
				f_1779_a2_v(tv1, tv0);
			}
			if (a0 == 45527) {
				if (f_178a_a1_b(tv1)) {
					f_2e6_a1_v("Neutral");
					tv0->SetMessage(543072);
					tv0->ClearReplies();
					if (f_1796_a1_b(tv1)) {
						tv0->AddReply(543073, 45531, 45528);
					}
					if (f_17a0_a1_b(tv1)) {
						tv0->AddReply(543092, 45550, 45547);
					}
					if (f_17aa_a1_b(tv1) || f_17d2_a1_b(tv1)) {
						tv0->AddReply(543108, 45564, 45563);
					}
					if (f_17b4_a1_b(tv1)) {
						tv0->AddReply(543101, 45557, 45556);
					}
					if (f_17be_a1_b(tv1)) {
						tv0->AddReply(543117, 45573, 45572);
					}
					if (f_17c8_a1_b(tv1)) {
						tv0->AddReply(543127, 45583, 45582);
					}
					if (f_17dc_a1_b(tv1) || f_17e6_a1_b(tv1)) {
						tv0->AddReply(543139, 45595, 45594);
					}
					if (f_1796_a1_b(tv1)) {
						tv0->AddReply(543075, -1, 45530);
					}
					if (f_17a0_a1_b(tv1) || f_17aa_a1_b(tv1) || f_17b4_a1_b(tv1) || f_17be_a1_b(tv1)) {
						tv0->AddReply(543100, -1, 45555);
					}
					if (f_17c8_a1_b(tv1)) {
						tv0->AddReply(543125, -1, 45580);
					}
					if (f_17d2_a1_b(tv1) || f_17dc_a1_b(tv1) || f_17e6_a1_b(tv1)) {
						tv0->AddReply(543147, -1, 45602);
					}
					if (f_17f0_a1_b(tv1) || f_17fa_a1_b(tv1) || f_1804_a1_b(tv1)) {
						tv0->AddReply(543148, -1, 45603);
					}
					if (f_1796_a1_b(tv1)) {
						tv0->AddReply(543074, -1, 45529);
					}
					if (f_17a0_a1_b(tv1) || f_17aa_a1_b(tv1)) {
						tv0->AddReply(543090, -1, 45545);
					}
					if (f_17a0_a1_b(tv1) || f_17aa_a1_b(tv1)) {
						tv0->AddReply(543099, -1, 45554);
					}
					if (f_17c8_a1_b(tv1) || f_17e6_a1_b(tv1)) {
						tv0->AddReply(543126, -1, 45581);
					}
					if (f_17d2_a1_b(tv1) || f_17dc_a1_b(tv1) || f_17f0_a1_b(tv1) || f_1804_a1_b(tv1)) {
						tv0->AddReply(543149, -1, 45604);
					}
					if (f_17b4_a1_b(tv1) || f_17be_a1_b(tv1) || f_17e6_a1_b(tv1) || f_17fa_a1_b(tv1) || f_1804_a1_b(tv1)) {
						tv0->AddReply(543150, -1, 45605);
					}
					return;
				}
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536854);
				tv0->ClearReplies();
				tv0->AddReply(536855, -1, 38691);
				if (f_1796_a1_b(tv1) && f_180e_a1_b(tv1)) {
					tv0->AddReply(536856, 38693, 38692);
				}
				if (f_1796_a1_b(tv1) && f_1818_a1_b(tv1)) {
					tv0->AddReply(536870, 38709, 38708);
				}
				if (f_17a0_a1_b(tv1)) {
					tv0->AddReply(536885, 38724, 38723);
				}
				if (f_17aa_a1_b(tv1)) {
					tv0->AddReply(536904, 38743, 38742);
				}
				if (f_17b4_a1_b(tv1)) {
					tv0->AddReply(536916, 38755, 38754);
				}
				if (f_17c8_a1_b(tv1) && f_177e_a1_b(tv1)) {
					tv0->AddReply(536931, 38770, 38769);
				}
				if (f_17dc_a1_b(tv1)) {
					tv0->AddReply(536943, 38782, 38781);
				}
				if (f_17e6_a1_b(tv1)) {
					tv0->AddReply(536961, 38800, 38799);
				}
				if (f_17f0_a1_b(tv1)) {
					tv0->AddReply(536978, 38817, 38816);
				}
				if (f_17fa_a1_b(tv1) && f_177e_a1_b(tv1)) {
					tv0->AddReply(536993, 38832, 38831);
				}
				if (f_1796_a1_b(tv1) && f_177e_a1_b(tv1)) {
					tv0->AddReply(537006, 38846, 38845);
				}
				if (f_1796_a1_b(tv1) && f_177e_a1_b(tv1)) {
					tv0->AddReply(537017, 38857, 38856);
				}
				if (f_1796_a1_b(tv1)) {
					tv0->AddReply(537025, 38865, 38864);
				}
				if (f_1796_a1_b(tv1)) {
					tv0->AddReply(537035, 38875, 38874);
				}
				if (f_1796_a1_b(tv1)) {
					tv0->AddReply(537044, 38884, 38883);
				}
				tv0->AddReply(537050, -1, 38889);
				return;
			}
			if (a0 == 38884) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537045);
				tv0->ClearReplies();
				tv0->AddReply(537046, 38886, 38885);
				tv0->AddReply(537049, -1, 38888);
				return;
			}
			if (a0 == 38886) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537047);
				tv0->ClearReplies();
				tv0->AddReply(537048, -1, 38887);
				return;
			}
			if (a0 == 38875) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537036);
				tv0->ClearReplies();
				tv0->AddReply(537037, 38877, 38876);
				tv0->AddReply(537043, -1, 38882);
				return;
			}
			if (a0 == 38877) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537038);
				tv0->ClearReplies();
				if (f_177e_a1_b(tv1)) {
					tv0->AddReply(537039, 38879, 38878);
				}
				tv0->AddReply(537042, -1, 38881);
				return;
			}
			if (a0 == 38879) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537040);
				tv0->ClearReplies();
				tv0->AddReply(537041, -1, 38880);
				return;
			}
			if (a0 == 38865) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537026);
				tv0->ClearReplies();
				tv0->AddReply(537027, 38867, 38866);
				tv0->AddReply(537034, -1, 38873);
				return;
			}
			if (a0 == 38867) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537028);
				tv0->ClearReplies();
				tv0->AddReply(537029, 38869, 38868);
				tv0->AddReply(537033, -1, 38872);
				return;
			}
			if (a0 == 38869) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537030);
				tv0->ClearReplies();
				tv0->AddReply(537031, -1, 38870);
				if (f_177e_a1_b(tv1)) {
					tv0->AddReply(537032, -1, 38871);
				}
				return;
			}
			if (a0 == 38857) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537018);
				tv0->ClearReplies();
				tv0->AddReply(537019, 38859, 38858);
				return;
			}
			if (a0 == 38859) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537020);
				tv0->ClearReplies();
				tv0->AddReply(537021, 38861, 38860);
				return;
			}
			if (a0 == 38861) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537022);
				tv0->ClearReplies();
				tv0->AddReply(537023, -1, 38862);
				tv0->AddReply(537024, -1, 38863);
				return;
			}
			if (a0 == 38846) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537007);
				tv0->ClearReplies();
				tv0->AddReply(537008, 38848, 38847);
				tv0->AddReply(537016, -1, 38855);
				return;
			}
			if (a0 == 38848) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537009);
				tv0->ClearReplies();
				tv0->AddReply(537010, 38850, 38849);
				return;
			}
			if (a0 == 38850) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537011);
				tv0->ClearReplies();
				tv0->AddReply(537012, 38852, 38851);
				return;
			}
			if (a0 == 38852) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537013);
				tv0->ClearReplies();
				tv0->AddReply(537014, -1, 38853);
				tv0->AddReply(537015, -1, 38854);
				return;
			}
			if (a0 == 38832) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536994);
				tv0->ClearReplies();
				tv0->AddReply(536995, 38834, 38833);
				tv0->AddReply(537005, -1, 38844);
				return;
			}
			if (a0 == 38834) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536996);
				tv0->ClearReplies();
				tv0->AddReply(536997, 38836, 38835);
				tv0->AddReply(537004, -1, 38843);
				return;
			}
			if (a0 == 38836) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536998);
				tv0->ClearReplies();
				tv0->AddReply(536999, 38838, 38837);
				tv0->AddReply(537003, 38838, 38841);
				return;
			}
			if (a0 == 38838) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(537000);
				tv0->ClearReplies();
				tv0->AddReply(537001, -1, 38839);
				tv0->AddReply(537002, -1, 38840);
				return;
			}
			if (a0 == 38817) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536979);
				tv0->ClearReplies();
				tv0->AddReply(536980, 38819, 38818);
				tv0->AddReply(536992, -1, 38830);
				return;
			}
			if (a0 == 38819) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536981);
				tv0->ClearReplies();
				tv0->AddReply(536982, 38821, 38820);
				tv0->AddReply(536991, -1, 38829);
				return;
			}
			if (a0 == 38821) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536983);
				tv0->ClearReplies();
				tv0->AddReply(536984, 38823, 38822);
				return;
			}
			if (a0 == 38823) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536985);
				tv0->ClearReplies();
				tv0->AddReply(536986, 38825, 38824);
				tv0->AddReply(536990, -1, 38828);
				return;
			}
			if (a0 == 38825) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536987);
				tv0->ClearReplies();
				tv0->AddReply(536988, -1, 38826);
				tv0->AddReply(536989, -1, 38827);
				return;
			}
			if (a0 == 38800) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536962);
				tv0->ClearReplies();
				tv0->AddReply(536963, 38802, 38801);
				tv0->AddReply(536971, 38810, 38809);
				return;
			}
			if (a0 == 38810) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536972);
				tv0->ClearReplies();
				tv0->AddReply(536973, 38812, 38811);
				tv0->AddReply(536976, -1, 38814);
				tv0->AddReply(536977, -1, 38815);
				return;
			}
			if (a0 == 38812) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536974);
				tv0->ClearReplies();
				tv0->AddReply(536975, -1, 38813);
				return;
			}
			if (a0 == 38802) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536964);
				tv0->ClearReplies();
				tv0->AddReply(536965, 38804, 38803);
				return;
			}
			if (a0 == 38804) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536966);
				tv0->ClearReplies();
				tv0->AddReply(536967, 38806, 38805);
				return;
			}
			if (a0 == 38806) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536968);
				tv0->ClearReplies();
				tv0->AddReply(536969, -1, 38807);
				tv0->AddReply(536970, -1, 38808);
				return;
			}
			if (a0 == 38782) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536944);
				tv0->ClearReplies();
				tv0->AddReply(536945, 38784, 38783);
				tv0->AddReply(536960, -1, 38798);
				return;
			}
			if (a0 == 38784) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536946);
				tv0->ClearReplies();
				tv0->AddReply(536947, 38786, 38785);
				return;
			}
			if (a0 == 38786) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536948);
				tv0->ClearReplies();
				tv0->AddReply(536949, 38788, 38787);
				if (f_177e_a1_b(tv1)) {
					tv0->AddReply(536957, 38796, 38795);
				}
				return;
			}
			if (a0 == 38796) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536958);
				tv0->ClearReplies();
				tv0->AddReply(536959, -1, 38797);
				return;
			}
			if (a0 == 38788) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536950);
				tv0->ClearReplies();
				tv0->AddReply(536951, 38790, 38789);
				return;
			}
			if (a0 == 38790) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536952);
				tv0->ClearReplies();
				tv0->AddReply(536953, 38792, 38791);
				tv0->AddReply(536956, -1, 38794);
				return;
			}
			if (a0 == 38792) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536954);
				tv0->ClearReplies();
				tv0->AddReply(536955, -1, 38793);
				return;
			}
			if (a0 == 38770) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536932);
				tv0->ClearReplies();
				tv0->AddReply(536933, 38772, 38771);
				tv0->AddReply(536942, -1, 38780);
				return;
			}
			if (a0 == 38772) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536934);
				tv0->ClearReplies();
				tv0->AddReply(536935, 38774, 38773);
				return;
			}
			if (a0 == 38774) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536936);
				tv0->ClearReplies();
				tv0->AddReply(536937, 38776, 38775);
				tv0->AddReply(536941, -1, 38779);
				return;
			}
			if (a0 == 38776) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536938);
				tv0->ClearReplies();
				tv0->AddReply(536939, -1, 38777);
				tv0->AddReply(536940, -1, 38778);
				return;
			}
			if (a0 == 38755) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536917);
				tv0->ClearReplies();
				tv0->AddReply(536918, 38757, 38756);
				if (f_177e_a1_b(tv1)) {
					tv0->AddReply(536930, -1, 38768);
				}
				return;
			}
			if (a0 == 38757) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536919);
				tv0->ClearReplies();
				tv0->AddReply(536920, 38759, 38758);
				tv0->AddReply(536929, -1, 38767);
				return;
			}
			if (a0 == 38759) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536921);
				tv0->ClearReplies();
				if (f_177e_a1_b(tv1)) {
					tv0->AddReply(536922, 38761, 38760);
				}
				tv0->AddReply(536926, 38765, 38764);
				return;
			}
			if (a0 == 38765) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536927);
				tv0->ClearReplies();
				tv0->AddReply(536928, -1, 38766);
				return;
			}
			if (a0 == 38761) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536923);
				tv0->ClearReplies();
				tv0->AddReply(536924, -1, 38762);
				tv0->AddReply(536925, -1, 38763);
				return;
			}
			if (a0 == 38743) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536905);
				tv0->ClearReplies();
				tv0->AddReply(536906, 38745, 38744);
				return;
			}
			if (a0 == 38745) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536907);
				tv0->ClearReplies();
				tv0->AddReply(536908, 38747, 38746);
				if (f_177e_a1_b(tv1)) {
					tv0->AddReply(536912, 38751, 38750);
				}
				return;
			}
			if (a0 == 38751) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536913);
				tv0->ClearReplies();
				tv0->AddReply(536914, -1, 38752);
				tv0->AddReply(536915, -1, 38753);
				return;
			}
			if (a0 == 38747) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536909);
				tv0->ClearReplies();
				tv0->AddReply(536910, -1, 38748);
				tv0->AddReply(536911, -1, 38749);
				return;
			}
			if (a0 == 38724) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536886);
				tv0->ClearReplies();
				tv0->AddReply(536887, 38726, 38725);
				tv0->AddReply(536901, 38740, 38739);
				return;
			}
			if (a0 == 38740) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536902);
				tv0->ClearReplies();
				tv0->AddReply(536903, -1, 38741);
				return;
			}
			if (a0 == 38726) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536888);
				tv0->ClearReplies();
				tv0->AddReply(536889, 38728, 38727);
				return;
			}
			if (a0 == 38728) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536890);
				tv0->ClearReplies();
				tv0->AddReply(536891, 38730, 38729);
				tv0->AddReply(536900, -1, 38738);
				return;
			}
			if (a0 == 38730) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536892);
				tv0->ClearReplies();
				if (f_177e_a1_b(tv1)) {
					tv0->AddReply(536893, 38732, 38731);
				}
				tv0->AddReply(536899, -1, 38737);
				return;
			}
			if (a0 == 38732) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536894);
				tv0->ClearReplies();
				tv0->AddReply(536895, 38734, 38733);
				tv0->AddReply(536898, -1, 38736);
				return;
			}
			if (a0 == 38734) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536896);
				tv0->ClearReplies();
				tv0->AddReply(536897, -1, 38735);
				return;
			}
			if (a0 == 38709) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536871);
				tv0->ClearReplies();
				tv0->AddReply(536872, 38711, 38710);
				tv0->AddReply(536882, 38721, 38720);
				return;
			}
			if (a0 == 38721) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536883);
				tv0->ClearReplies();
				tv0->AddReply(536884, -1, 38722);
				return;
			}
			if (a0 == 38711) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536873);
				tv0->ClearReplies();
				tv0->AddReply(536874, 38713, 38712);
				tv0->AddReply(536881, -1, 38719);
				return;
			}
			if (a0 == 38713) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536875);
				tv0->ClearReplies();
				tv0->AddReply(536876, 38715, 38714);
				if (f_177e_a1_b(tv1)) {
					tv0->AddReply(536880, -1, 38718);
				}
				return;
			}
			if (a0 == 38715) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536877);
				tv0->ClearReplies();
				tv0->AddReply(536878, -1, 38716);
				tv0->AddReply(536879, -1, 38717);
				return;
			}
			if (a0 == 38693) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536857);
				tv0->ClearReplies();
				tv0->AddReply(536858, 38695, 38694);
				tv0->AddReply(536867, 38705, 38704);
				return;
			}
			if (a0 == 38705) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536868);
				tv0->ClearReplies();
				tv0->AddReply(536869, 38697, 38706);
				return;
			}
			if (a0 == 38695) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536859);
				tv0->ClearReplies();
				tv0->AddReply(536860, 38697, 38696);
				tv0->AddReply(536864, 38701, 38700);
				return;
			}
			if (a0 == 38701) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536865);
				tv0->ClearReplies();
				tv0->AddReply(536866, 38697, 38702);
				return;
			}
			if (a0 == 38697) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(536861);
				tv0->ClearReplies();
				tv0->AddReply(536862, -1, 38698);
				tv0->AddReply(536863, -1, 38699);
				return;
			}
			if (a0 == 45595) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543140);
				tv0->ClearReplies();
				tv0->AddReply(543141, -1, 45596);
				tv0->AddReply(543142, -1, 45597);
				tv0->AddReply(543143, 45599, 45598);
				return;
			}
			if (a0 == 45599) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543144);
				tv0->ClearReplies();
				tv0->AddReply(543145, -1, 45600);
				tv0->AddReply(543146, -1, 45601);
				return;
			}
			if (a0 == 45583) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543128);
				tv0->ClearReplies();
				tv0->AddReply(543129, 45587, 45584);
				tv0->AddReply(543130, -1, 45585);
				tv0->AddReply(543131, -1, 45586);
				return;
			}
			if (a0 == 45587) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543132);
				tv0->ClearReplies();
				tv0->AddReply(543133, -1, 45588);
				tv0->AddReply(543134, 45591, 45589);
				tv0->AddReply(543135, -1, 45590);
				return;
			}
			if (a0 == 45591) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543136);
				tv0->ClearReplies();
				tv0->AddReply(543137, -1, 45592);
				tv0->AddReply(543138, -1, 45593);
				return;
			}
			if (a0 == 45573) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543118);
				tv0->ClearReplies();
				tv0->AddReply(543119, -1, 45574);
				tv0->AddReply(543120, 45577, 45575);
				tv0->AddReply(543121, -1, 45576);
				return;
			}
			if (a0 == 45577) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543122);
				tv0->ClearReplies();
				tv0->AddReply(543123, -1, 45578);
				tv0->AddReply(543124, -1, 45579);
				return;
			}
			if (a0 == 45557) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543102);
				tv0->ClearReplies();
				tv0->AddReply(543103, -1, 45558);
				tv0->AddReply(543104, 45560, 45559);
				return;
			}
			if (a0 == 45560) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543105);
				tv0->ClearReplies();
				tv0->AddReply(543106, -1, 45561);
				tv0->AddReply(543107, -1, 45562);
				return;
			}
			if (a0 == 45564) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543109);
				tv0->ClearReplies();
				tv0->AddReply(543110, -1, 45565);
				tv0->AddReply(543111, 45568, 45566);
				return;
			}
			if (a0 == 45568) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543113);
				tv0->ClearReplies();
				tv0->AddReply(543114, -1, 45569);
				tv0->AddReply(543116, -1, 45571);
				return;
			}
			if (a0 == 45550) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543095);
				tv0->ClearReplies();
				tv0->AddReply(543096, -1, 45551);
				tv0->AddReply(543098, -1, 45553);
				return;
			}
			if (a0 == 45531) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543076);
				tv0->ClearReplies();
				tv0->AddReply(543077, -1, 45532);
				tv0->AddReply(543078, -1, 45533);
				tv0->AddReply(543079, 45535, 45534);
				return;
			}
			if (a0 == 45535) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543080);
				tv0->ClearReplies();
				tv0->AddReply(543081, -1, 45536);
				tv0->AddReply(543082, 45538, 45537);
				return;
			}
			if (a0 == 45538) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543083);
				tv0->ClearReplies();
				tv0->AddReply(543084, 45541, 45539);
				tv0->AddReply(543085, -1, 45540);
				return;
			}
			if (a0 == 45541) {
				f_2e6_a1_v("Neutral");
				tv0->SetMessage(543086);
				tv0->ClearReplies();
				tv0->AddReply(543087, -1, 45542);
				tv0->AddReply(543088, -1, 45543);
				return;
			}
			tv3 = true;
			if (f_1b35_a0_b()) {
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
		f_d01_a1_v(a0);
		f_1b73_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1ae4_a1_i(a0);
		if (L0 > 0) {
			f_1ae7_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_1aed_a0_v();
	}

	void f_d01_a1_v(object a0)
	{
		if (a0 == null) {
			f_d5c_a1_v("fdie");
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
			f_16ca_a1_v(L4);
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

	void f_d5c_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_16ca_a1_v(a0);
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
		f_1b37_a0_v();
		f_d8b_a0_v();
		for (; ; ) {
			tv2 = false;
			f_e90_a0_v();
		}
	}

	void f_d8b_a0_v(void)
	{
		if (!f_15e6_a0_b()) {
			f_1aed_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1ae4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_e4f_a0_v();
			}
			f_1ae7_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1a0a_a1_v(a0);
		L0 = f_1a5d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_e4f_a0_v();
			}
			f_1a67_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1b69_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1aba_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_e4f_a0_v();
				}
				f_1ac1_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_1aee_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_e4f_a0_v();
			}
			f_1afe_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_19b4_a2_b(a0, a1)) {
			f_e4f_a0_v();
			f_19d4_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1b04_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_e4f_a0_v();
				}
				f_1b07_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1a17_a1_b(a0)) {
			f_e4f_a0_v();
			f_1a27_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_19ed_a1_b(a0)) {
			f_e4f_a0_v();
			f_1a04_a1_v(a0);
		} else {
			f_e68_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_e68_a1_v(a0);
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
		f_e4f_a0_v();
		f_1aed_a0_v();
	}

	void f_e4f_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_ed7_a0_v();
	}

	void f_e57_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_ede_a0_v();
	}

	void OnDeath(object a0)
	{
		f_e4f_a0_v();
		global.OnDeath(a0);
	}

	void f_e68_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_1545_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_1a4c_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_e57_a0_v();
			}
			f_1a55_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_e90_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_ecb_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_ee7_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_ee5_a0_b(), L5);
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

	float f_ecb_a0_f(void)
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

	void f_ed7_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_ede_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_ee5_a0_b(void)
	{
		return false;
	}

	object f_ee7_a1_o(Vector a0)
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
		L0 = f_1ae4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fe2_a0_v();
			}
			f_1ae7_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1a0a_a1_v(a0);
		L0 = f_1a5d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fe2_a0_v();
			}
			f_1a67_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1b69_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1aba_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fe2_a0_v();
				}
				f_1ac1_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_1aee_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fe2_a0_v();
			}
			f_1afe_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_19b4_a2_b(a0, a1)) {
			f_fe2_a0_v();
			f_19d4_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1b04_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fe2_a0_v();
				}
				f_1b07_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1a17_a1_b(a0)) {
			f_fe2_a0_v();
			f_1a27_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_fe2_a0_v();
		f_1aed_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_19ed_a1_b(a0)) {
			f_fe2_a0_v();
			f_1a04_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_15e6_a0_b()) {
			return;
		}
		L0 = f_1a3b_a0_i();
		for (L1 = 0; L1 < 5 && f_15e6_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_1a34_a1_s(L3));
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
			if (!f_fe0_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_fe0_a0_b(void)
	{
		return true;
	}

	void f_fe2_a0_v(void)
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
		f_101a_a0_v();
		@GetDirection(L0);
		L1 = f_14b3_a1_V(tv0);
		if (f_172d_a2_f(L0, L1) < 0) {
			f_15db_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_15db_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_101a_a0_v(void)
	{
		f_169e_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1ae4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_10ae_a0_v();
			}
			f_1ae7_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1a0a_a1_v(a0);
		L0 = f_1a5d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_10ae_a0_v();
			}
			f_1a67_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1b69_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1aba_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_10ae_a0_v();
				}
				f_1ac1_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_1aee_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_10ae_a0_v();
			}
			f_1afe_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_19b4_a2_b(a0, a1)) {
			f_10ae_a0_v();
			f_19d4_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1b04_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_10ae_a0_v();
				}
				f_1b07_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1a17_a1_b(a0)) {
			f_10ae_a0_v();
			f_1a27_a1_v(a0);
		}
	}

	void f_10ae_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_10ae_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_1545_a1_b(tv0)) {
			f_10ae_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_14b3_a1_V(tv0);
		if (f_172d_a2_f(L0, L1) < 0.4999999701976776) {
			f_15db_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_10ae_a0_v();
		f_1aed_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_19ed_a1_b(a0)) {
			f_10ae_a0_v();
			f_1a04_a1_v(a0);
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
		f_1108_a3_v(a0, true, 180.0);
	}

	float f_1102_a2_f(object a0, int a1)
	{
		return 0.029999999329447746;
	}

	int f_1105_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_1108_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_11ed_a0_v();
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
			@SendPlayerEnemy(a0, f_16f3_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_1545_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_138a_a0_v();
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
						f_15db_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_138a_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_1545_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_135f_a0_b()) {
						@Face(tv0);
						f_1391_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_12db_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_138a_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_135f_a0_b()) {
							if (!f_1545_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_1237_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_1237_a1_b(a2)) {
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

	void f_11ed_a0_v(void)
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

	void f_1210_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_1102_a2_f(L0, a1);
			L2 = f_14d3_a3_f(L0, L1, f_1105_a2_i(L0, a1));
			@ReportHit(tv0, f_138f_a0_i(), L2, L1);
			f_1396_a2_v(L0, L2);
		}
	}

	bool f_1237_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_138a_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_176e_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_136a_a0_v();
		if (!f_1545_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_1210_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_176e_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_138a_a0_v();
			if (!f_1545_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_1210_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_176e_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_138a_a0_v();
				if (!f_1545_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_1210_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_1398_a0_b()) {
			f_12c0_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_12c0_a1_b(float a0)
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
				if (f_1322_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_138a_a0_v();
		}
		return false;
	}

	bool f_12db_a1_b(float a0)
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
			if (f_1322_a0_b()) {
				return true;
			}
			if (!f_1545_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_1237_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_138a_a0_v();
		return false;
	}

	bool f_1306_a0_b(void)
	{
		if (!f_1545_a1_b(tv0)) {
			return false;
		}
		if (f_135f_a0_b()) {
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

	bool f_1322_a0_b(void)
	{
		if (f_1306_a0_b() && f_1332_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_1332_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_14b3_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_138a_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_1306_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_135f_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_136a_a0_v(void)
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
		if (L0 < f_139c_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_139a_a0_i();
		}
	}

	void f_138a_a0_v(void)
	{
		f_1765_a1_v(tv0);
	}

	int f_138f_a0_i(void)
	{
		return 0;
	}

	void f_1391_a0_v(void)
	{
		f_16ca_a1_v("attack_stay");
	}

	void f_1396_a2_v(object a0, float a1)
	{
	}

	bool f_1398_a0_b(void)
	{
		return true;
	}

	int f_139a_a0_i(void)
	{
		return 1;
	}

	float f_139c_a0_f(void)
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
		f_13e4_a0_v();
		f_1aed_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_1765_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_169e_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_14c2_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_16f3_a0_o());
		}
		L1 = f_140e_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_1765_a1_v(tv1);
		} else {
			f_1474_a1_v(a0);
		}
	}

	void f_13e4_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_148a_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_169e_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_140e_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_149a_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_14a1_a0_s(), f_14a3_a0_s());
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

	void f_1474_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_149a_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_148a_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_13e4_a0_v();
		global.OnDeath(a0);
	}
}

bool f_149a_a1_b(object a0)
{
	return f_1545_a1_b(a0);
}

string f_14a1_a0_s(void)
{
	return "walk";
}

string f_14a3_a0_s(void)
{
	return "run";
}

string f_14a5_a1_s(int a0)
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

Vector f_14b3_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_14ba_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_14c2_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_14c7_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_14d3_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_14c7_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_14c7_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_14a5_a1_s(a2);
	if (!f_14c7_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_1703_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_170a_a3_f(L4 - L5, 0, 1));
	if (f_14c2_a1_b(a0)) {
		f_1743_a1_v(-L5);
	}
	return L5;
}

bool f_151c_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_1521_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_151c_a1_b(a0)) {
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

bool f_1545_a1_b(object a0)
{
	int L0;
	if (!f_1521_a1_b(a0)) {
		return false;
	}
	if (!f_14c7_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_155d_a1_v(object a0)
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

void f_1589_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_16f9_a1_V(f_14b3_a1_V(a0));
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
			f_15cd_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_155d_a1_v(a0);
}

void f_15cd_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_155d_a1_v(a0);
}

void f_15db_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_15e6_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_15eb_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_16f9_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1b35_a0_b()) {
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

void f_1630_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1b35_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1642_a1_b(object a0)
{
	return f_164a_a2_b(a0, 70);
}

bool f_164a_a2_b(object a0, float a1)
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

void f_167a_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_167f_a1_v(string a0)
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

void f_168f_a2_v(string a0, bool a1)
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

void f_169e_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_16a9_a0_v(void)
{
	if (f_1b35_a0_b()) {
		@lshStopSpeech();
	}
}

void f_16b0_a3_v(string a0, int a1, int a2)
{
	if (f_1715_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_16bb_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_1715_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

void f_16ca_a1_v(string a0)
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

object f_16f3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_16f9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1703_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_170a_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_1715_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_171a_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_1723_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_172d_a2_f(Vector a0, Vector a1)
{
	return f_171a_a2_f(a0, a1) / (f_1723_a1_f(a0) * f_1723_a1_f(a1));
}

int f_173e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1743_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

int f_1754_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_175d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void f_1765_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_176e_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_16f3_a0_o(), L0);
}

void f_1779_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_177e_a1_b(object a0)
{
	if (f_173e_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_178a_a1_b(object a0)
{
	if (f_173e_a1_i("branch") == 2) {
		return true;
	}
	return false;
}

bool f_1796_a1_b(object a0)
{
	if (f_1822_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17a0_a1_b(object a0)
{
	if (f_1829_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17aa_a1_b(object a0)
{
	if (f_1830_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17b4_a1_b(object a0)
{
	if (f_1837_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17be_a1_b(object a0)
{
	if (f_183e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17c8_a1_b(object a0)
{
	if (f_1845_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17d2_a1_b(object a0)
{
	if (f_184c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17dc_a1_b(object a0)
{
	if (f_1853_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17e6_a1_b(object a0)
{
	if (f_185a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17f0_a1_b(object a0)
{
	if (f_1861_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_17fa_a1_b(object a0)
{
	if (f_1868_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1804_a1_b(object a0)
{
	if (f_186f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_180e_a1_b(object a0)
{
	if (f_1876_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1818_a1_b(object a0)
{
	if (f_188b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1822_a1_b(object a0)
{
	return f_1754_a0_i() == 1;
}

bool f_1829_a1_b(object a0)
{
	return f_1754_a0_i() == 2;
}

bool f_1830_a1_b(object a0)
{
	return f_1754_a0_i() == 3;
}

bool f_1837_a1_b(object a0)
{
	return f_1754_a0_i() == 4;
}

bool f_183e_a1_b(object a0)
{
	return f_1754_a0_i() == 5;
}

bool f_1845_a1_b(object a0)
{
	return f_1754_a0_i() == 6;
}

bool f_184c_a1_b(object a0)
{
	return f_1754_a0_i() == 7;
}

bool f_1853_a1_b(object a0)
{
	return f_1754_a0_i() == 8;
}

bool f_185a_a1_b(object a0)
{
	return f_1754_a0_i() == 9;
}

bool f_1861_a1_b(object a0)
{
	return f_1754_a0_i() == 10;
}

bool f_1868_a1_b(object a0)
{
	return f_1754_a0_i() == 11;
}

bool f_186f_a1_b(object a0)
{
	return f_1754_a0_i() == 12;
}

bool f_1876_a1_b(object a0)
{
	if (f_175d_a0_i() >= 0 && f_175d_a0_i() < 12) {
		return true;
	}
	return false;
}

bool f_188b_a1_b(object a0)
{
	if (f_175d_a0_i() >= 12) {
		return true;
	}
	return false;
}

int f_1896_a0_i(void)
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

int f_18a7_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_18ad_a1_v(object a0)
{
	if (f_18a7_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_18ba_a2_v(int a0, int a1)
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
	@AddItem(L1, f_1982_a1_i("Money"), 0, L0);
}

void f_18d9_a1_v(string a0)
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

void f_18ea_a0_v(void)
{
	if (f_18a7_a0_i() != 1) {
		return;
	}
	f_18d9_a1_v("liver");
	f_18d9_a1_v("kidney");
	f_18d9_a1_v("heart");
	f_18d9_a1_v("blood");
}

void f_1902_a1_v(bool a0)
{
	bool L0;
	@ClearSubContainer(0);
	f_18ba_a2_v(0, 10 + f_1754_a0_i() * 10);
	f_16b0_a3_v("hook", 1, 4);
	f_16b0_a3_v("watch", 1, 10);
}

void f_191e_a1_v(bool a0)
{
	int L0;
	bool L1;
	int L2;
	@ClearSubContainer(0);
	L2 = f_1754_a0_i();
	if (a0) {
		f_16bb_a4_v("alpha_pills", 1, 2, 4);
		f_16bb_a4_v("meradorm", 2, 3, 3);
		if (L2 >= 3) {
			f_16b0_a3_v("beta_pills", 1, 4);
		}
		if (L2 >= 8) {
			f_16bb_a4_v("monomicin", 1, 2, 2);
		} else {
			if (L2 >= 4) {
				f_16b0_a3_v("monomicin", 1, 2);
			}
		}
	} else {
		f_16b0_a3_v("lockpick", 1, 4);
		f_16b0_a3_v("rifle_ammo", 1, 2);
		f_16b0_a3_v("revolver_ammo", 1, 2);
		f_16bb_a4_v("samopal_ammo", 1, 2, 2);
		if (L2 >= 8) {
			f_16bb_a4_v("monomicin", 1, 2, 2);
		} else {
			if (L2 >= 4) {
				f_16b0_a3_v("monomicin", 1, 2);
			}
		}
	}
}

int f_1982_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_1987_a1_v(object a0)
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
	f_1987_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_1589_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_15cd_a5_v(a0, a1, a2, a4, a5);
}

bool f_19b4_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_1b09_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_1b0e_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_1b23_a1_b(a0);
			}
		}
	}
	return false;
}

void f_19d4_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_1b0c_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_1b1d_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_1b26_a1_v(a0);
			}
		}
	}
}

bool f_19ed_a1_b(object a0)
{
	if (f_1b09_a1_b(a0) && f_14c2_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_1a04_a1_v(object a0)
{
	f_1b0c_a1_v(a0);
}

void f_1a0a_a1_v(object a0)
{
	if (f_14c2_a1_b(a0)) {
		@ReportReputationChange(a0, f_16f3_a0_o(), -0.05000000074505806);
	}
}

bool f_1a17_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_1b28_a1_b(L0);
	}
	return false;
}

void f_1a27_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_1b2b_a1_v(L0);
	}
}

string f_1a34_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1a3b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1a34_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1a4c_a1_i(object a0)
{
	return f_1b67_a0_b() ? 2 : 0;
}

void f_1a55_a1_v(object a0)
{
	t6{a0};
}

int f_1a5d_a1_i(object a0)
{
	return f_1545_a1_b(a0) ? 2 : 0;
}

void f_1a67_a1_v(object a0)
{
	t7{a0};
}

bool f_1a6f_a2_b(object a0, bool a1)
{
	string L0;
	string L1;
	if (!f_14c7_a2_b(a0, "class")) {
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

int f_1aba_a2_i(object a0, bool a1)
{
	return f_1a5d_a1_i(a0);
}

void f_1ac1_a1_v(object a0)
{
	f_1a67_a1_v(a0);
}

bool f_1ac7_a4_b(object a0, object a1, float a2, bool a3)
{
	bool L0;
	if (!f_1a6f_a2_b(a1, !a3)) {
		return false;
	}
	@CanSee(L0, a0);
	if (L0 || f_14ba_a1_f(a0) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_1ae4_a1_i(object a0)
{
	return 2;
}

void f_1ae7_a1_v(object a0)
{
	f_1b3f_a1_v(a0);
}

void f_1aed_a0_v(void)
{
}

int f_1aee_a1_i(object a0)
{
	bool L0;
	@Trace("Received steal");
	@CanSee(L0, a0);
	if (L0) {
		return f_1a5d_a1_i(a0);
	}
	return 0;
}

void f_1afe_a1_v(object a0)
{
	f_1a67_a1_v(a0);
}

int f_1b04_a2_i(string a0, object a1)
{
	return 0;
}

void f_1b07_a2_v(string a0, object a1)
{
}

bool f_1b09_a1_b(object a0)
{
	return false;
}

void f_1b0c_a1_v(object a0)
{
}

bool f_1b0e_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_14ba_a1_f(a0) <= 2250000;
}

void f_1b1d_a1_v(object a0)
{
	f_1a55_a1_v(a0);
}

bool f_1b23_a1_b(object a0)
{
	return false;
}

void f_1b26_a1_v(object a0)
{
}

bool f_1b28_a1_b(object a0)
{
	return false;
}

void f_1b2b_a1_v(object a0)
{
}

int f_1b2d_a0_i(void)
{
	return 515558;
}

int f_1b2f_a0_i(void)
{
	return 503343;
}

string f_1b31_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_1b33_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_1b35_a0_b(void)
{
	return false;
}

void f_1b37_a0_v(void)
{
	g0 = false;
	f_191e_a1_v(true);
}

void f_1b3f_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_18ad_a1_v(a0);
		}
		return;
	} else {
		if (1000 == t1{a0}) {
			if (!f_1642_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_167a_a1_v(a0);
		}
	}
}

bool f_1b67_a0_b(void)
{
	return false;
}

bool f_1b69_a3_b(object a0, object a1, bool a2)
{
	return f_1ac7_a4_b(a0, a1, 500.0, a2);
}

void f_1b73_a1_v(object a0)
{
	if (f_14c2_a1_b(a0)) {
		@ReportReputationChange(a0, f_16f3_a0_o(), -0.10000000149011612, true);
		f_1902_a1_v(true);
	}
	f_18ea_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

