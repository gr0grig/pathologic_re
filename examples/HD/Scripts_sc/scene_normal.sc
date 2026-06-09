event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;
	var object tv1;

	void f_0_a1_v(object a0)
	{
		int L0;
		for (L0 = 1; ; L0++) {
			string L1;
			bool L2;
			Vector L3;
			int L4;
			L1 = "pt_child" + L0;
			@GetLocator(L1, L2, L3);
			if (!L2) {
				break;
			}
			a0->add(0);
			a0->add(L0);
			@irand(L4, 5);
			a0->add(L4);
		}
		int L5;
		for (L5 = 1; ; L5++) {
			string L6;
			bool L7;
			Vector L8;
			int L9;
			L6 = "pt_woman" + L5;
			@GetLocator(L6, L7, L8);
			if (!L7) {
				break;
			}
			a0->add(1);
			a0->add(L5);
			@irand(L9, 2);
			a0->add(L9);
		}
		int L10;
		for (L10 = 1; ; L10++) {
			string L11;
			bool L12;
			Vector L13;
			int L14;
			L11 = "pt_man" + L10;
			@GetLocator(L11, L12, L13);
			if (!L12) {
				break;
			}
			a0->add(2);
			a0->add(L10);
			@irand(L14, 5);
			a0->add(L14);
		}
	}

	string f_41_a2_s(int a0, int a1)
	{
		if (a0 == 0) {
			return "pt_child" + a1;
		} else {
			if (a0 == 1) {
				return "pt_woman" + a1;
			} else {
				if (a0 == 2) {
					return "pt_man" + a1;
				}
			}
		}
		return "";
	}

	string f_58_a2_s(int a0, int a1)
	{
		if (a0 == 0) {
			if (a1 == 0) {
				return "pers_littleboy";
			} else {
				if (a1 == 1) {
					return "pers_littlegirl";
				} else {
					if (a1 == 2) {
						return "pers_boy";
					} else {
						if (a1 == 3) {
							return "pers_girl";
						} else {
							if (a1 == 4) {
								return "pers_girl";
							}
						}
					}
				}
			}
		} else {
			if (a0 == 1) {
				if (a1 == 0) {
					return "pers_woman";
				} else {
					if (a1 == 1) {
						return "pers_wasted_girl";
					}
				}
			} else {
				if (a0 == 2) {
					if (a1 == 0) {
						return "pers_unosha";
					} else {
						if (a1 == 1) {
							return "pers_unosha";
						} else {
							if (a1 == 2) {
								return "pers_worker";
							} else {
								if (a1 == 3) {
									return "pers_worker";
								} else {
									if (a1 == 4) {
										return "pers_wasted_male";
									}
								}
							}
						}
					}
				}
			}
		}
		return "";
	}

	string f_ab_a2_s(int a0, int a1)
	{
		if (a0 == 0) {
			if (a1 == 0) {
				return "ilittleboy.xml";
			} else {
				if (a1 == 1) {
					return "ilittlegirl.xml";
				} else {
					if (a1 == 2) {
						return "iboy.xml";
					} else {
						if (a1 == 3) {
							return "igirl.xml";
						} else {
							if (a1 == 4) {
								return "igirl2.xml";
							}
						}
					}
				}
			}
		} else {
			if (a0 == 1) {
				if (a1 == 0) {
					return "iwoman.xml";
				} else {
					if (a1 == 1) {
						return "iwasted_girl.xml";
					}
				}
			} else {
				if (a0 == 2) {
					if (a1 == 0) {
						return "iunosha.xml";
					} else {
						if (a1 == 1) {
							return "iunosha2.xml";
						} else {
							if (a1 == 2) {
								return "iworker.xml";
							} else {
								if (a1 == 3) {
									return "iworker2.xml";
								} else {
									if (a1 == 4) {
										return "iwasted_male.xml";
									}
								}
							}
						}
					}
				}
			}
		}
		return "";
	}

	void init(void)
	{
		f_105_a0_v();
		f_22b_a0_v();
	}

	void f_105_a0_v(void)
	{
		bool L0;
		@GetProperty("nailed", L0);
		f_11a_a1_v(L0);
		f_12d_a1_v(L0);
		f_140_a1_v(L0);
		f_153_a1_v(L0);
	}

	void f_11a_a1_v(bool a0)
	{
		int L0;
		for (L0 = 1; ; L0++) {
			bool L1;
			Vector L2;
			Vector L3;
			@GetLocator("pt_item_food" + L0, L1, L2, L3);
			if (!L1) {
				break;
			}
			f_166_a3_v(L2, L3, a0);
		}
	}

	void f_12d_a1_v(bool a0)
	{
		int L0;
		for (L0 = 1; ; L0++) {
			bool L1;
			Vector L2;
			Vector L3;
			@GetLocator("pt_item_pfood" + L0, L1, L2, L3);
			if (!L1) {
				break;
			}
			f_1a1_a3_v(L2, L3, a0);
		}
	}

	void f_140_a1_v(bool a0)
	{
		int L0;
		for (L0 = 1; ; L0++) {
			bool L1;
			Vector L2;
			Vector L3;
			@GetLocator("pt_item_knife" + L0, L1, L2, L3);
			if (!L1) {
				break;
			}
			f_1f4_a3_v(L2, L3, a0);
		}
	}

	void f_153_a1_v(bool a0)
	{
		int L0;
		for (L0 = 1; ; L0++) {
			bool L1;
			Vector L2;
			Vector L3;
			@GetLocator("pt_item_bottle" + L0, L1, L2, L3);
			if (!L1) {
				break;
			}
			f_207_a3_v(L2, L3, a0);
		}
	}

	void f_166_a3_v(Vector a0, Vector a1, bool a2)
	{
		if (f_2bc_a1_b(a2 ? 0.05000000074505806 : 0.20000000298023224)) {
			string L0;
			object L1;
			@RandOneOf(L0, 5, 5, 3, 2, 3, "bread", "bottle_water", "milk", "vegetables", "lemon");
			@AddActorByType(L1, "scripted_container", f_2b6_a0_o(), a0, a1, "item_" + L0 + "_steal.xml");
		} else {
			if (f_2bc_a1_b(0.5)) {
				object L2;
				float L3;
				float L4;
				Vector L5;
				@RandVec2D(L3, L4);
				L5.x = L3;
				L5.y = 0;
				L5.z = L4;
				@AddActorByType(L2, "scripted_container", f_2b6_a0_o(), a0, L5, "item_plate.xml");
			}
		}
	}

	void f_1a1_a3_v(Vector a0, Vector a1, bool a2)
	{
		if (f_2bc_a1_b(a2 ? 0.05000000074505806 : 0.20000000298023224)) {
			string L0;
			object L1;
			float L2;
			float L3;
			Vector L4;
			@RandOneOf(L0, 8, 3, 3, 3, 2, 2, 1, "rusk", "dried_fish", "dried_meat", "smoked_meat", "fresh_fish", "fresh_meat", "tvirin");
			@RandVec2D(L2, L3);
			L4.x = L2;
			L4.y = 0;
			L4.z = L3;
			@AddActorByType(L1, "scripted_container", f_2b6_a0_o(), a0, L4, "item_plate.xml");
			@AddActorByType(L1, "scripted_container", f_2b6_a0_o(), a0 + [0.0, 5.0, 0.0], a1, "item_" + L0 + "_steal.xml");
		} else {
			if (f_2bc_a1_b(0.5)) {
				object L5;
				float L6;
				float L7;
				Vector L8;
				@RandVec2D(L6, L7);
				L8.x = L6;
				L8.y = 0;
				L8.z = L7;
				@AddActorByType(L5, "scripted_container", f_2b6_a0_o(), a0, L8, "item_plate.xml");
			}
		}
	}

	void f_1f4_a3_v(Vector a0, Vector a1, bool a2)
	{
		if (f_2bc_a1_b(a2 ? 0.05000000074505806 : 0.05000000074505806)) {
			object L0;
			@AddActorByType(L0, "scripted_container", f_2b6_a0_o(), a0, a1, "item_knife_steal.xml");
		}
	}

	void f_207_a3_v(Vector a0, Vector a1, bool a2)
	{
		if (f_2bc_a1_b(a2 ? 0.20000000298023224 : 0.4000000059604645)) {
			string L0;
			object L1;
			@RandOneOf(L0, 10, 15, 3, 3, 3, 1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
			@AddActorByType(L1, "scripted_container", f_2b6_a0_o(), a0, a1, "item_" + L0 + "_steal.xml");
		}
	}

	void f_22b_a0_v(void)
	{
		if (!tv1) {
			tv1 = f_2c1_a0_o();
		}
		if (!tv0) {
			@CreateIntVector(tv0);
		}
		f_0_a1_v(tv0);
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		int L0;
		int L1;
		if (!tv1) {
			tv1 = f_2c1_a0_o();
		}
		if (!tv0) {
			@CreateIntVector(tv0);
		}
		f_2d9_a1_v(tv1);
		tv0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 3) {
			int L2;
			int L3;
			int L4;
			string L5;
			string L6;
			string L7;
			tv0->get(L2, L1);
			tv0->get(L3, L1 + 1);
			tv0->get(L4, L1 + 2);
			L5 = f_41_a2_s(L2, L3);
			L6 = f_58_a2_s(L2, L4);
			L7 = f_ab_a2_s(L2, L4);
			tv1->add(f_2c7_a4_o(f_2b6_a0_o(), L5, L6, L7));
		}
	}

	void OnUnload(void)
	{
		int L0;
		int L1;
		tv1->size(L0);
		L1 = 0;
		for (; L1 < L0; ) {
			object L2;
			tv1->get(L2, L1);
			if (L2 != null) {
				bool L3;
				L2->IsDead(L3);
				if (!L3) {
					if (!f_2aa_a2_b(L2, "ToDie")) {
						L1 = L1 + 1;
						continue;
					}
				}
				@RemoveActor(L2);
			}
			tv1->remove(L1);
			tv0->remove(L1 * 3, (L1 + 1) * 3);
			L0 = L0 + -1;
		}
		f_2d9_a1_v(tv1);
	}
}

bool f_2aa_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

object f_2b6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_2bc_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

object f_2c1_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_2c7_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

void f_2d9_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@RemoveActor(L2);
			}
		}
		a0->clear();
	}
}

