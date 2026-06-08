event OnDraw 0;
event OnUpdate 1;

maintask t0
{
	var int tv0;
	var int tv1;
	var int tv2;
	var string tv3;
	var float tv4;

	void init(void)
	{
		int L0;
		string L1;
		if (f_82_a0_i() == 0) {
			L0 = 12;
		} else {
			if (f_82_a0_i() == 1) {
				L0 = 0;
			} else {
				L0 = 24;
			}
		}
		L1 = f_88_a1_s(f_74_a0_i());
		if (L1 != "") {
			f_3a_a2_v(L1, 10);
		}
		f_31_a2_v(300 + L0 + f_74_a0_i() - 1, 8);
		@DestroyWindow();
	}

	void f_31_a2_v(int a0, float a1)
	{
		string L0;
		@GetStringByID(L0, a0);
		f_3a_a2_v(L0, a1);
	}

	void f_3a_a2_v(string a0, float a1)
	{
		tv3 = a0;
		tv4 = a1;
		@GetWindowSize(tv0, tv1);
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		float L0;
		int L1;
		if (tv4 <= 0) {
			return;
		}
		if (tv4 < 1.0) {
			L0 = tv4 / 1.0;
		} else {
			L0 = 1;
		}
		@GetTextHeightInWidth(L1, "default", tv0, tv3);
		@PrintInWidth(L1, "default", 0, (tv1 - L1) / 2, tv0, tv3, 1.0, 1.0, 1.0, L0);
	}

	void OnUpdate(float a0)
	{
		tv4 = tv4 - a0;
		if (tv4 <= 0 && f_72_a0_b()) {
			@StopEventProcessing();
		}
	}
}

bool f_72_a0_b(void)
{
	return true;
}

int f_74_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_7d_a1_s(int a0)
{
	string L0;
	@GetStringByID(L0, a0);
	return L0;
}

int f_82_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

string f_88_a1_s(int a0)
{
	int L0;
	int L1;
	int L2;
	int L3;
	int L4;
	string L5;
	if (a0 < 2 || a0 > 12) {
		return "";
	}
	L0 = f_c8_a1_i(a0);
	L1 = f_112_a1_i(a0);
	L2 = f_161_a1_i(a0);
	L3 = f_1ab_a1_i(a0);
	L4 = f_b9_a1_i(a0);
	@format(L5, f_7d_a1_s(550 + (a0 - 2)), L0, L1, L2, L4, L3);
	return L5;
}

int f_b9_a1_i(int a0)
{
	int L0;
	int L1;
	L0 = 0;
	for (L1 = 1; L1 <= a0; L1 = L1 + 1) {
		int L2;
		@GetVariable("ps_dead_count" + a0, L2);
		L0 = L0 + L2;
	}
	return L0;
}

int f_c8_a1_i(int a0)
{
	int L0;
	int L1;
	int L2;
	if (a0 == 2) {
		L0 = 20;
		L1 = 30;
	} else {
		if (a0 == 3) {
			L0 = 30;
			L1 = 50;
		} else {
			if (a0 == 4) {
				L0 = 40;
				L1 = 60;
			} else {
				if (a0 == 5) {
					L0 = 100;
					L1 = 130;
				} else {
					if (a0 == 6) {
						L0 = 150;
						L1 = 200;
					} else {
						if (a0 == 7) {
							L0 = 170;
							L1 = 220;
						} else {
							if (a0 == 8) {
								L0 = 200;
								L1 = 250;
							} else {
								if (a0 == 9) {
									L0 = 330;
									L1 = 390;
								} else {
									if (a0 == 10) {
										L0 = 330;
										L1 = 390;
									} else {
										if (a0 == 11) {
											L0 = 330;
											L1 = 390;
										} else {
											if (a0 == 12) {
												L0 = 330;
												L1 = 390;
											} else {
												return 0;
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
	@irand(L2, L1 - L0);
	return L2 + L0;
}

int f_112_a1_i(int a0)
{
	int L0;
	int L1;
	int L2;
	if (a0 == 2) {
		L0 = 10;
		L1 = 20;
	} else {
		if (a0 == 3) {
			L0 = 30;
			L1 = 40;
		} else {
			if (a0 == 4) {
				L0 = 50;
				L1 = 60;
			} else {
				if (a0 == 5) {
					L0 = 70;
					L1 = 90;
				} else {
					if (a0 == 6) {
						L0 = 110;
						L1 = 170;
					} else {
						if (a0 == 7) {
							L0 = 310;
							L1 = 360;
						} else {
							if (a0 == 8) {
								L0 = 360;
								L1 = 430;
							} else {
								if (a0 == 9) {
									L0 = 400;
									L1 = 490;
								} else {
									if (a0 == 10) {
										L0 = 600;
										L1 = 690;
									} else {
										if (a0 == 11) {
											L0 = 600;
											L1 = 690;
										} else {
											if (a0 == 12) {
												L0 = 600;
												L1 = 690;
											} else {
												return 0;
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
	@irand(L2, L1 - L0);
	@SetVariable("ps_dead_count" + a0, L2 + L0);
	return L2 + L0;
}

int f_161_a1_i(int a0)
{
	int L0;
	int L1;
	int L2;
	if (a0 == 2) {
		L0 = 5;
		L1 = 10;
	} else {
		if (a0 == 3) {
			L0 = 10;
			L1 = 15;
		} else {
			if (a0 == 4) {
				L0 = 15;
				L1 = 35;
			} else {
				if (a0 == 5) {
					L0 = 15;
					L1 = 35;
				} else {
					if (a0 == 6) {
						L0 = 10;
						L1 = 30;
					} else {
						if (a0 == 7) {
							L0 = 10;
							L1 = 30;
						} else {
							if (a0 == 8) {
								L0 = 30;
								L1 = 60;
							} else {
								if (a0 == 9) {
									L0 = 30;
									L1 = 60;
								} else {
									if (a0 == 10) {
										L0 = 120;
										L1 = 140;
									} else {
										if (a0 == 11) {
											L0 = 120;
											L1 = 140;
										} else {
											if (a0 == 12) {
												L0 = 120;
												L1 = 140;
											} else {
												return 0;
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
	@irand(L2, L1 - L0);
	return L2 + L0;
}

int f_1ab_a1_i(int a0)
{
	int L0;
	int L1;
	int L2;
	if (a0 == 2) {
		L0 = 20;
		L1 = 30;
	} else {
		if (a0 == 3) {
			L0 = 40;
			L1 = 60;
		} else {
			if (a0 == 4) {
				L0 = 50;
				L1 = 70;
			} else {
				if (a0 == 5) {
					L0 = 90;
					L1 = 110;
				} else {
					if (a0 == 6) {
						L0 = 310;
						L1 = 360;
					} else {
						if (a0 == 7) {
							L0 = 360;
							L1 = 460;
						} else {
							if (a0 == 8) {
								L0 = 500;
								L1 = 590;
							} else {
								if (a0 == 9) {
									L0 = 500;
									L1 = 590;
								} else {
									if (a0 == 10) {
										L0 = 500;
										L1 = 590;
									} else {
										if (a0 == 11) {
											L0 = 500;
											L1 = 590;
										} else {
											if (a0 == 12) {
												L0 = 500;
												L1 = 590;
											} else {
												return 0;
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
	@irand(L2, L1 - L0);
	return L2 + L0;
}

