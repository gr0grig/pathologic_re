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
	var int tv12;
	var int tv13;
	var object tv14;
	var object tv15;
	var object tv16;
	var object tv17;
	var object tv18;
	var object tv19;

	void init(void)
	{
		disable OnGameMessage;
		@GetWindowSize(tv12, tv13);
		tv10 = -1;
		if (f_436_a0_b()) {
			@CreateWindow("visir.xml", false, tv0);
			@SendMessage(f_428_a0_i(), "charge");
			f_241_a0_v();
		}
		@CreateIntVector(tv5);
		@CreateStringVector(tv2);
		@CreateIntVector(tv3);
		@CreateFloatVector(tv4);
		@CreateIntVector(tv6);
		@CreateIntVector(tv7);
		@CreateFloatVector(tv8);
		disable OnUpdate;
		disable OnDraw;
		while (true) {
			object L0;
			@FindActor(L0, "player");
			if (L0) {
				break;
			}
			@UISync();
		}
		enable OnUpdate;
		enable OnDraw;
		f_2a0_a0_v();
		enable OnGameMessage;
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void f_41_a1_v(int a0)
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

	void f_56_a0_v(void)
	{
		tv5->remove(0);
	}

	void f_5a_a1_v(int a0)
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

	void f_71_a0_v(void)
	{
		tv3->remove(0);
		tv4->remove(0);
	}

	void f_78_a1_v(float a0)
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
			f_71_a0_v();
		}
	}

	void f_8d_a0_v(void)
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
			@Blit("mail", 20, tv13 - 130, 0.5 - 0.5 * cos(L3));
		} else {
			if (L1 == 3) {
				@Blit("diary", 20, tv13 - 130, 0.5 - 0.5 * cos(L3));
			} else {
				if (L1 == 4) {
					@Blit("rep_up", 20, tv13 - 100, 0.5 - 0.5 * cos(L3));
				} else {
					if (L1 == 5) {
						@Blit("rep_down", 20, tv13 - 100, 0.5 - 0.5 * cos(L3));
					}
				}
			}
		}
	}

	void f_d9_a2_v(int a0, int a1)
	{
		string L0;
		tv6->add(a0);
		tv7->add(a1);
		tv8->add(4.0);
		@GetInvItemSprite(L0, a0);
		@LoadImage(L0);
		tv2->add(L0);
	}

	void f_e8_a1_v(int a0)
	{
		tv6->remove(a0);
		tv8->remove(a0);
		tv7->remove(a0);
	}

	void f_f0_a1_v(float a0)
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
				f_e8_a1_v(L1);
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

	void f_11f_a1_v(float a0)
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
		f_56_a0_v();
	}

	void f_13b_a0_v(void)
	{
		int L0;
		int L1;
		if (tv10 != -1) {
			return;
		}
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
			f_25f_a4_v(L2, L3, L1, L5);
		}
	}

	void OnGameMessage(int a0, object a1)
	{
		if (a0 == 1000) {
			tv10 = 109;
			tv11 = 1.0;
		} else {
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
					@SendMessage(f_428_a0_i(), "charge");
					f_241_a0_v();
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
							f_d9_a2_v(L1, L2);
						} else {
							if (a0 == 4) {
								int L3;
								int L4;
								a1->get(L3, 0);
								a1->get(L4, 1);
							} else {
								if (a0 == 100) {
									f_41_a1_v(100);
								} else {
									if (a0 == 101) {
										f_41_a1_v(101);
									} else {
										if (a0 == 6) {
											f_5a_a1_v(2);
											@PlaySound("mail");
											@Trace("HasMail");
										} else {
											if (a0 == 7) {
												f_5a_a1_v(3);
												@PlaySound("diary");
												@Trace("HasDiary");
											} else {
												if (a0 == 8) {
													@PlaySound("rep_up");
													@Trace("ReputationUP");
												} else {
													if (a0 == 9) {
														@PlaySound("rep_down");
														@Trace("ReputationDown");
													} else {
														if (a0 == 11) {
															f_2f2_a2_v("tiredness", true);
														} else {
															if (a0 == 12) {
																f_2f2_a2_v("hunger", true);
															} else {
																if (a0 == 13) {
																	f_2f2_a2_v("immunity", true);
																} else {
																	if (a0 == 14) {
																		f_2f2_a2_v("disease", true);
																	} else {
																		if (a0 == 15) {
																			f_2f2_a2_v("health", true);
																		} else {
																			if (a0 == 16) {
																				f_2f2_a2_v("repuatation", true);
																			} else {
																				if (a0 == 10) {
																					string L5;
																					a1->get(L5, 0);
																					f_2f2_a2_v(L5, false);
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
		f_78_a1_v(a0);
		f_f0_a1_v(a0);
		f_11f_a1_v(a0);
		f_241_a0_v();
		f_32b_a1_v(a0);
		f_295_a1_v(a0);
	}

	void f_241_a0_v(void)
	{
		int L0;
		int L1;
		L0 = f_443_a0_i();
		for (L1 = 0; L1 < 4; L1++) {
			@SendMessage(L1 < L0 ? 1 : 0, "vlevel" + (L1 + 1));
		}
		@SendMessage(f_428_a0_i(), "charge");
	}

	void f_25f_a4_v(int a0, int a1, int a2, float a3)
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

	void f_27e_a0_v(void)
	{
		string L0;
		float L1;
		if (tv10 == -1) {
			return;
		}
		@GetStringByID(L0, tv10);
		L1 = sin(3.140000104904175 * tv11 / 1.0 / 2.0);
		@Print("help", 10, 10, L0, 1.0, 1.0, 1.0, L1);
	}

	void f_295_a1_v(float a0)
	{
		if (tv10 == -1) {
			return;
		}
		tv11 = tv11 - a0;
		if (tv11 <= 0) {
			tv10 = -1;
		}
	}

	void f_2a0_a0_v(void)
	{
		object L0;
		@CreateStringVector(tv14);
		@CreateFloatVector(tv15);
		@CreateFloatVector(tv16);
		@CreateFloatVector(tv17);
		@CreateFloatVector(tv18);
		@CreateBoolVector(tv19);
		@FindActor(L0, "player");
		if (L0) {
			int L1;
			int L2;
			tv14->add("health");
			tv19->add(false);
			tv14->add("hunger");
			tv19->add(true);
			tv14->add("tiredness");
			tv19->add(true);
			tv14->add("immunity");
			tv19->add(false);
			tv14->add("disease");
			tv19->add(true);
			tv14->add("reputation");
			tv19->add(false);
			tv14->size(L1);
			for (L2 = 0; L2 < L1; L2++) {
				string L3;
				float L4;
				tv14->get(L3, L2);
				L0->GetProperty(L3, L4);
				tv15->add(L4);
				tv16->add(L4);
				tv17->add(0);
				tv18->add(0);
			}
		} else {
			@Trace("BAD PLAYER!");
		}
	}

	void f_2f2_a2_v(string a0, bool a1)
	{
		object L0;
		int L1;
		int L2;
		@FindActor(L0, "player");
		if (!L0) {
			return;
		}
		tv14->size(L1);
		for (L2 = 0; L2 < L1; L2++) {
			string L3;
			tv14->get(L3, L2);
			if (L3 == a0) {
				float L4;
				float L5;
				tv16->get(L4, L2);
				L0->GetProperty(L3, L5);
				if (L4 == L5) {
					return;
				}
				tv16->set(L2, L5);
				if (a1) {
					float L6;
					float L7;
					tv15->get(L6, L2);
					tv17->set(L2, 2.0);
					L7 = 10.0 * (L6 - L5);
					if (L7 < 0) {
						L7 = L7 * -1.0;
					}
					if (L7 < 0.20000000298023224) {
						L7 = 0.20000000298023224;
					} else {
						if (L7 > 1.0) {
							L7 = 1.0;
						}
					}
					tv18->set(L2, L7);
				}
				break;
			}
		}
	}

	void f_32b_a1_v(float a0)
	{
		int L0;
		int L1;
		tv14->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			float L2;
			tv17->get(L2, L1);
			if (L2 > 0) {
				L2 = L2 - a0;
			}
			if (L2 < 0) {
				L2 = 0;
			}
			tv17->set(L1, L2);
		}
	}

	void f_341_a0_v(void)
	{
		float L0;
		float L1;
		float L2;
		int L3;
		float L4;
		return;
		L0 = f_45e_a0_f();
		L1 = 59;
		L2 = 400;
		if (tv12 == 800) {
			L1 = 59;
			L2 = 400;
		} else {
			if (tv12 == 1024) {
				L1 = 75;
				L2 = 512;
			} else {
				if (tv12 == 1280) {
					L1 = 99;
					L2 = 680;
				}
			}
		}
		L3 = (tv13 - L2) / 2;
		L4 = L2 * (1 - L0);
		@BlitClipped("nerv_v", 0, L3, 0, L3 + L4, L1, L2 - L4);
	}

	void f_368_a0_v(void)
	{
		float L0;
		float L1;
		int L2;
		int L3;
		L0 = 20;
		L1 = 20;
		tv14->size(L2);
		L3 = 0;
		for (; L3 < L2; L3++) {
			string L4;
			float L5;
			float L6;
			float L7;
			bool L8;
			float L9;
			float L10;
			float L11;
			float L12;
			float L13;
			tv14->get(L4, L3);
			tv16->get(L5, L3);
			tv18->get(L6, L3);
			tv17->get(L7, L3);
			tv19->get(L8, L3);
			if (L4 == "health") {
				if (L5 <= 0.33000001311302185) {
					L9 = 1;
				} else {
					if (L7 == 0) {
						continue;
					}
					L9 = 0.20000000298023224;
				}
			} else {
				if (L4 == "immunity") {
					if (L5 < 0.5) {
						L9 = 1;
					} else {
						if (L7 == 0) {
							continue;
						}
						L9 = 0.20000000298023224;
					}
				} else {
					if (L4 == "tiredness") {
						if (L5 >= 0.6600000262260437) {
							L9 = 1;
						} else {
							if (L7 == 0) {
								continue;
							}
							L9 = 0.20000000298023224;
						}
					} else {
						if (L4 == "hunger") {
							if (L5 >= 0.6600000262260437) {
								L9 = 1;
							} else {
								if (L7 == 0) {
									continue;
								}
								L9 = 0.20000000298023224;
							}
						} else {
							if (L4 == "reputation") {
								if (L5 <= 0.6600000262260437) {
									L9 = 1;
								} else {
									if (L7 == 0) {
										continue;
									}
									L9 = 0.20000000298023224;
								}
							} else {
								if (L4 == "disease") {
									if (L5 >= 0.33000001311302185) {
										L9 = 1;
									} else {
										if (L7 == 0) {
											continue;
										}
										L9 = 0.20000000298023224;
									}
								}
							}
						}
					}
				}
			}
			if (L7 > 0) {
				L10 = sin(L7 / 2.0 * 3.1414999961853027 / 2);
			} else {
				L10 = L9;
			}
			if (L10 > 1) {
				L10 = 1;
			}
			if (L10 < 0) {
				L10 = 0;
			}
			L11 = 256;
			L12 = 64;
			@BlitClipped("nerv_b", tv12 - L11 - L1, L0, tv12 - L11 - L1, L0, L11, 43, L10);
			L13 = (L11 - L12) * L5 + L12;
			@BlitClipped("nerv_r", tv12 - L11 - L1, L0, tv12 - L11 - L1, L0, L13, 43, L10);
			@BlitClipped(L4, tv12 - L11 - L1, L0, tv12 - L11 - L1, L0, L11, 43, L10);
			L0 = L0 + 25;
		}
	}

	void OnDraw(void)
	{
		if (f_451_a0_b() && !tv1) {
			@Blit("cross", tv12 / 2 - 1, tv13 / 2 - 1);
		}
		f_8d_a0_v();
		f_13b_a0_v();
		f_368_a0_v();
		f_341_a0_v();
		f_27e_a0_v();
	}
}

int f_428_a0_i(void)
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

bool f_436_a0_b(void)
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

int f_443_a0_i(void)
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

bool f_451_a0_b(void)
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

float f_45e_a0_f(void)
{
	object L0;
	bool L1;
	int L2;
	@FindActor(L0, "player");
	if (!L0) {
		return 0;
	}
	L0->HasProperty("walk_distance", L1);
	if (!L1) {
		return 0;
	}
	L0->GetProperty("walk_distance", L2);
	return L2 / 1000.0;
}

