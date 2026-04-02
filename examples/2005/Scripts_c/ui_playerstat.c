maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, float var_11_float, int var_12_int, int var_13_int, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object)
	{
		object var_20_object; object var_21_object;
		disable event_201;
		@GetWindowSize(var_12_int, var_13_int);
		var_10_int = -1;
		bool var_22_bool;
		func_1078(var_22_bool);
		if(var_22_bool != 0) {
			@CreateWindow("visir.xml", false, var_0_object);
			int var_31_int;
			func_1064(var_31_int);
			@SendMessage(var_31_int, "charge");
			func_577();
		}
		@CreateIntVector(var_5_object);
		@CreateStringVector(var_2_object);
		@CreateIntVector(var_3_object);
		@CreateFloatVector(var_4_object);
		@CreateIntVector(var_6_object);
		@CreateIntVector(var_7_object);
		@CreateFloatVector(var_8_object);
		disable OnSee;
		disable OnUse;
	
		for(;;) {
			if(true != 0) {
				@FindActor(var_21_object, "player");
				if(var_21_object != 0) {
				} else {
					@UISync();
					var_21_object = null;
				}
			}
			enable OnSee;
			enable OnUse;
			func_672(var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object);
			enable event_201;
			@SetOwnerDraw(true);
			@SetNeedUpdate(true);
			@ProcessEvents();

		}
	}

	void event_201(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, float var_11_float, int var_12_int, int var_13_int, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, int var_20_int, object var_21_object)
	{
		int var_28_int; int var_29_int; int var_30_int; int var_31_int; int var_32_int; string var_33_string;
		if(var_20_int == 1000) {
			var_11_float = 1.0;
		} else if(var_20_int == 200) {
				if(var_21_object != 0) {
					var_21_object->size(var_28_int);
					if(var_28_int == 1) {
						var_21_object->get(109, 0);
						var_11_float = 1.0;
					}
				}
		}

		for(;;) {
			return 12;

		}
	
		if(var_20_int == 1) {
			if(!var_0_object) //@nz
				@CreateWindow("visir.xml", false, var_0_object);
			int var_47_int;
			func_1064(var_47_int);
			@SendMessage(var_47_int, "charge");
			func_577();
		} else if(var_20_int == 2) {
			if(var_0_object != 0)
				var_0_object->DestroyWindow(); //@t
		} else if(var_20_int == 3) {
			var_21_object->get(var_29_int, 0);
			var_21_object->get(var_30_int, 1);
			int var_87_int; int var_88_int;
			var_29_int = var_87_int;
			var_30_int = var_88_int;
			func_217(var_30_int, var_31_int, var_32_int, var_33_string, var_87_int, var_88_int);
		} else if(var_20_int == 4) {
			var_21_object->get(var_31_int, 0);
			var_21_object->get(var_32_int, 1);
		} else if(var_20_int == 100) {
			func_65(var_33_string, 100);
		} else if(var_20_int == 101) {
			func_65(var_33_string, 101);
		} else if(var_20_int == 6) {
			func_90(var_32_int, var_33_string, 2);
			@PlaySound("mail");
			@Trace("HasMail");
		} else if(var_20_int == 7) {
			func_90(var_32_int, var_33_string, 3);
			@PlaySound("diary");
			@Trace("HasDiary");
		} else if(var_20_int == 8) {
			@PlaySound("rep_up");
			@Trace("ReputationUP");
		} else if(var_20_int == 9) {
			@PlaySound("rep_down");
			@Trace("ReputationDown");
		} else if(var_20_int == 11) {
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "tiredness", true);
		} else if(var_20_int == 12) {
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "hunger", true);
		} else if(var_20_int == 13) {
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "immunity", true);
		} else if(var_20_int == 14) {
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "disease", true);
		} else if(var_20_int == 15) {
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "health", true);
		} else if(var_20_int == 16) {
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_33_string, "repuatation", true);
		} else if(var_20_int == 10) {
			var_21_object->get(var_33_string, 0);
			string var_202_string;
			func_754(var_29_int, var_30_int, var_31_int, var_32_int, var_202_string, var_202_string, false);
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, float var_11_float, int var_12_int, int var_13_int, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, float var_20_float)
	{
		float var_21_float;
		func_120(var_19_object, var_21_float, var_21_float);
		float var_33_float;
		func_240(var_18_object, var_19_object, var_33_float, var_33_float);
		float var_58_float;
		func_287(var_58_float, var_58_float);
		func_577();
		float var_104_float;
		func_811(var_19_object, var_104_float, var_104_float);
		float var_117_float;
		func_661(var_19_object, var_117_float, var_117_float);
	}

	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, float var_11_float, int var_12_int, int var_13_int, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object)
	{
		bool var_20_bool = false;
		bool var_21_bool;
		func_1105(var_21_bool);
		if(var_21_bool != 0) {
			if(!var_1_object) //@nz
				var_20_bool = true;
		}
		if(var_20_bool != 0)
			@Blit("cross", ((var_12_int / 2) - 1), ((var_13_int / 2) - 1));
		func_141(var_17_object, var_18_object, var_19_object);
		func_315(var_16_object, var_17_object, var_18_object, var_19_object);
		func_872(var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object);
		func_833();
		func_638(var_18_object, var_19_object);
	}

}


void func_577(void)
{
	int var_44_int;
	func_1091(var_44_int);
	int var_42_int;
	var_44_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		if(var_43_int < 4) {
			if(var_43_int < var_42_int)
				var_55_int = 1;
			else
				var_61_int = 0; //@pi
		int var_62_int;
		func_1064(var_62_int);
		@SendMessage(var_62_int, "charge");
		return 4;
		}
		@SendMessage(var_55_int, ("vlevel" + (var_43_int + 1)));
		var_43_int += 1;
	}
	
}


void func_65(object var_5_object, int var_98_int)
{
	int var_104_int;
	var_5_object->add(var_98_int); //@t
	int var_102_int;
	var_5_object->size(var_102_int); //@t
	int var_103_int = 0;
	
	while(var_103_int < (var_102_int - 1)) {
		var_5_object->get(var_104_int, var_103_int); //@t
		if(var_104_int == var_98_int)
			var_5_object->remove(var_103_int); //@t
		var_103_int += 1;
	}
	
}


void func_1091(int var_44_int)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) //@nz
		var_44_int = 0;
	int var_48_int;
	var_47_object->GetProperty("visir", var_48_int);
	var_48_int = var_44_int;
}
EMIT "Stack[-2] = 0";


void func_833(void)
{
}
EMIT "PushEmpty(float)";
EMIT "Call2 0x45e";
EMIT "Stack[-1] = Stack[-6]";
EMIT "Pop(1)";
EMIT "Stack[-4] = (int) 59";
EMIT "Stack[-3] = (int) 400";
EMIT "Push((int) 800)";
EMIT "Pop(1); Push((bool) Stack[12 + Tasks[-1].StackPointer] == Stack[-1])";
EMIT "IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)";
EMIT "Stack[-4] = (int) 59";
EMIT "Stack[-3] = (int) 400";
EMIT "GOTO 0x35a";


void func_141(object var_3_object, object var_4_object, int var_13_int)
{
	int var_42_int;
	var_3_object->size(var_42_int); //@t
	if(!var_42_int) //@nz
		return 8;
	int var_43_int;
	var_3_object->get(var_43_int, 0); //@t
	float var_44_float;
	var_4_object->get(var_44_float, 0); //@t
	float var_45_float = (6.283 * var_44_float) / 4.0;
	if(var_43_int == 2) {
		var_60_float = cos(var_45_float);
		@Blit("mail", 20, (var_13_int - 130), (0.5 - (0.5 * var_60_float)));
	} else if(var_43_int == 3) {
			var_71_float = cos(var_45_float);
			@Blit("diary", 20, (var_13_int - 130), (0.5 - (0.5 * var_71_float)));
	}

	for(;;) {
		return 8;

	}
	
	if(var_43_int == 4) {
		var_82_float = cos(var_45_float);
		@Blit("rep_up", 20, (var_13_int - 100), (0.5 - (0.5 * var_82_float)));
	} else if(var_43_int == 5) {
		var_93_float = cos(var_45_float);
		@Blit("rep_down", 20, (var_13_int - 100), (0.5 - (0.5 * var_93_float)));
	}
}


void func_1105(bool var_21_bool)
{
	object var_24_object;
	@FindActor(var_24_object, "player");
	if(!var_24_object) //@nz
		var_21_bool = false;
	bool var_25_bool;
	var_24_object->IsWeaponHolstered(var_25_bool);
	var_21_bool = !var_25_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_661(int var_10_int, float var_11_float, float var_117_float)
{
	if(var_10_int == -1)
		return 0;
	if((var_11_float - var_117_float) <= 0)
		var_10_int = -1;
}


void func_86(object var_5_object)
{
	var_5_object->remove(0); //@t
}


void func_217(object var_2_object, object var_6_object, object var_7_object, object var_8_object, int var_87_int, int var_88_int)
{
	var_6_object->add(var_87_int); //@t
	var_7_object->add(var_88_int); //@t
	var_8_object->add(4.0); //@t
	string var_90_string;
	@GetInvItemSprite(var_90_string, var_87_int);
	@LoadImage(var_90_string);
	var_2_object->add(var_90_string); //@t
}


void func_90(object var_3_object, object var_4_object, int var_115_int)
{
	int var_119_int; int var_121_int;
	var_3_object->size(var_119_int); //@t
	int var_120_int = 0;
	
	while(var_120_int < var_119_int) {
		var_3_object->get(var_121_int, var_120_int); //@t
		if(var_115_int == var_121_int)
			var_4_object->set(var_120_int, 4.0); //@t
		var_120_int += 1;
	}
	
	var_3_object->add(var_115_int); //@t
	var_4_object->add(4.0); //@t
}


void func_1118(void)
{
0x45e: PushEmpty(object, bool, int, object, bool, int)
0x45f: Push("player") // @poff=34
0x460: @ FindActor(Stack[-4], Stack[-1])
0x461: Pop(1)
0x462: Pop(0); Push((bool) Stack[-3] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)
}
EMIT "Stack[-3] = 0";


void func_287(object var_1_object, object var_5_object)
{
	int var_61_int;
	var_5_object->size(var_61_int); //@t
	if(!var_61_int) //@nz
		return 4;
	if(var_1_object != 0)
		return 4;
	int var_62_int;
	var_5_object->get(var_62_int, 0); //@t
	if(var_62_int == 100)
		@CreateWindow("daychange.xml", false, var_1_object);
	else
		@CreateWindow("daychangereal.xml", false, var_1_object);
	func_86(var_62_int);
	
}


void func_672(object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object)
{
	int var_73_int; int var_74_int; string var_75_string; float var_76_float;
	@CreateStringVector(var_14_object);
	@CreateFloatVector(var_15_object);
	@CreateFloatVector(var_16_object);
	@CreateFloatVector(var_17_object);
	@CreateFloatVector(var_18_object);
	@CreateBoolVector(var_19_object);
	object var_72_object;
	@FindActor(var_72_object, "player");
	if(var_72_object != 0) {
		var_14_object->add("health"); //@t
		var_19_object->add(false); //@t
		var_14_object->add("hunger"); //@t
		var_19_object->add(true); //@t
		var_14_object->add("tiredness"); //@t
		var_19_object->add(true); //@t
		var_14_object->add("immunity"); //@t
		var_19_object->add(false); //@t
		var_14_object->add("disease"); //@t
		var_19_object->add(true); //@t
		var_14_object->add("reputation"); //@t
		var_19_object->add(false); //@t
		var_14_object->size(var_73_int); //@t
		var_74_int = 0;

		while(var_74_int < var_73_int) {
			var_14_object->get(var_75_string, var_74_int); //@t
			var_72_object->GetProperty(var_75_string, var_76_float);
			var_15_object->add(var_76_float); //@t
			var_16_object->add(var_76_float); //@t
			var_17_object->add(0); //@t
			var_18_object->add(0); //@t
			var_74_int += 1;
		}

	} else {
		@Trace("BAD PLAYER!");
	}
	
}
EMIT "Stack[-5] = 0";


void func_607(int var_114_int, int var_115_int, int var_116_int, float var_117_float)
{
	string var_121_string;
	@GetInvItemSprite(var_121_string, var_114_int);
	int var_122_int = 40 + (var_116_int * 60);
	int var_123_int = 40;
	@Blit("slot", var_122_int, var_123_int, var_117_float);
	@Blit(var_121_string, (var_122_int + 1), (var_123_int + 1), var_117_float);
	if(var_115_int > 1)
		@Print("default", (var_122_int + 2), (var_123_int + 35), var_115_int, 1.0, 1.0, 1.0, var_117_float);
}


void func_1064(int var_31_int)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_31_int = 0;
	int var_35_int;
	var_34_object->GetProperty("vcharge", var_35_int);
	var_35_int = var_31_int;
}
EMIT "Stack[-2] = 0";


// @pe
void func_232(object var_6_object, object var_7_object, object var_8_object, int var_51_int)
{
	var_6_object->remove(var_51_int); //@t
	var_8_object->remove(var_51_int); //@t
	var_7_object->remove(var_51_int); //@t
}


void func_872(int var_12_int, object var_14_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object)
{
	float var_157_float; string var_161_string; float var_162_float; float var_163_float; float var_164_float; bool var_165_bool; float var_166_float; float var_167_float; float var_168_float; float var_169_float;
	var_157_float = 20;
	float var_158_float = 20;
	int var_159_int;
	var_14_object->size(var_159_int); //@t
	int var_160_int = 0;
	
	for(;;) {
		if(var_160_int < var_159_int) {
			var_14_object->get(var_161_string, var_160_int); //@t
			var_16_object->get(var_162_float, var_160_int); //@t
			var_18_object->get(var_163_float, var_160_int); //@t
			var_17_object->get(var_164_float, var_160_int); //@t
			var_19_object->get(var_165_bool, var_160_int); //@t
			if(var_161_string == "health") {
				if(var_162_float <= 0.33) {
					var_166_float = 1;
				} else {
					if(var_164_float == 0) {
						goto Label_1023;
					}
					var_166_float = 0.2;
			}
				if(var_161_string == "immunity") {
					if(var_162_float < 0.5) {
						var_166_float = 1;
					} else {
						if(var_164_float == 0) {
							goto Label_1023;
						}
						var_166_float = 0.2;
				}
					if(var_161_string == "tiredness") {
						if(var_162_float >= 0.66) {
							var_166_float = 1;
						} else {
							if(var_164_float == 0) {
								goto Label_1023;
							}
							var_166_float = 0.2;
					}
						if(var_161_string == "hunger") {
							if(var_162_float >= 0.66) {
								var_166_float = 1;
							} else {
								if(var_164_float == 0) {
									goto Label_1023;
								}
								var_166_float = 0.2;
						}
							if(var_161_string == "reputation") {
								if(var_162_float <= 0.66) {
									var_166_float = 1;
								} else {
									if(var_164_float == 0) {
										goto Label_1023;
									}
									var_166_float = 0.2;
							}
								if(!(var_161_string == "disease")) goto Label_973;
								if(var_162_float >= 0.33) {
									var_166_float = 1;
									goto Label_973;
								}
								if(var_164_float == 0) {
									goto Label_1023;
								}
								var_166_float = 0.2;
		}
						}
						goto Label_973;
					}
					goto Label_973;
				}
				goto Label_973;
			}
			goto Label_973;
		}
		goto Label_973;

	Label_973:
		if(var_164_float > 0)
			var_167_float = sin(((var_164_float / 2.0) * 3.1415) / 2);
		else
			var_166_float = var_167_float;

		if(var_167_float > 1)
			var_167_float = 1;
		if(var_167_float < 0)
			var_167_float = 0;
		var_168_float = 256;
		var_169_float = 64;
		@BlitClipped("nerv_b", ((var_12_int - var_168_float) - var_158_float), var_157_float, ((var_12_int - var_168_float) - var_158_float), var_157_float, var_168_float, 43, var_167_float);
		@BlitClipped("nerv_r", ((var_12_int - var_168_float) - var_158_float), var_157_float, ((var_12_int - var_168_float) - var_158_float), var_157_float, (((var_168_float - var_169_float) * var_162_float) + var_169_float), 43, var_167_float);
		@BlitClipped(var_161_string, ((var_12_int - var_168_float) - var_158_float), var_157_float, ((var_12_int - var_168_float) - var_158_float), var_157_float, var_168_float, 43, var_167_float);
		var_157_float += 25;

	Label_1023:
		var_160_int += 1;
	}
	
}


void func_811(object var_14_object, object var_17_object, float var_104_float)
{
	int var_108_int; float var_110_float;
	var_14_object->size(var_108_int); //@t
	int var_109_int = 0;
	
	while(var_109_int < var_108_int) {
		var_17_object->get(var_110_float, var_109_int); //@t
		if(var_110_float > 0)
			var_110_float -= var_104_float;
		if(var_110_float < 0)
			var_110_float = 0;
		var_17_object->set(var_109_int, var_110_float); //@t
		var_109_int += 1;
	}
	
}


void func_240(object var_2_object, object var_6_object, object var_8_object, float var_33_float)
{
	int var_40_int; float var_42_float; int var_43_int; int var_44_int; string var_45_string;
	var_6_object->size(var_40_int); //@t
	if(!var_40_int) //@nz
		return 12;
	int var_41_int = 0;
	
	for(;;) {
		if(var_41_int < var_40_int) {
			var_8_object->get(var_42_float, var_41_int); //@t
			var_42_float -= var_33_float;
			if(var_42_float > 0) {
				var_8_object->set(var_41_int, var_42_float); //@t
			} else {
			int var_51_int;
			var_41_int = var_51_int;
			func_232(var_43_int, var_44_int, var_45_string, var_51_int);
			var_40_int += -1;
			var_41_int += -1;
		}
		if(var_40_int == 0) {
			var_2_object->size(var_43_int); //@t
			var_44_int = 0;

			while(var_44_int < var_43_int) {
				var_2_object->get(var_45_string, var_44_int); //@t
				@ReleaseImage(var_45_string);
				var_44_int += 1;
			}

			var_2_object->clear(); //@t
		}
		return 12;
		}
		var_41_int += 1;
	}
	
}


void func_113(object var_3_object, object var_4_object)
{
	var_3_object->remove(0); //@t
	var_4_object->remove(0); //@t
}


void func_754(object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, string var_144_string, bool var_145_bool)
{
	object var_154_object; string var_157_string; float var_158_float; float var_159_float; float var_160_float; float var_161_float;
	@FindActor(var_154_object, "player");
	if(!var_154_object) //@nz
		return 16;
	int var_155_int;
	var_14_object->size(var_155_int); //@t
	int var_156_int = 0;
	
	for(;;) {
		if(var_156_int < var_155_int) {
			var_14_object->get(var_157_string, var_156_int); //@t
			if(var_157_string == var_144_string) {
				var_16_object->get(var_158_float, var_156_int); //@t
				var_154_object->GetProperty(var_157_string, var_159_float);
				if(var_158_float == var_159_float)
					return 16;
				var_16_object->set(var_156_int, var_159_float); //@t
				if(var_145_bool != 0) {
					var_15_object->get(var_160_float, var_156_int); //@t
					var_17_object->set(var_156_int, 2.0); //@t
					var_161_float = 10.0 * (var_160_float - var_159_float);
					if(var_161_float < 0)
						var_161_float *= -1.0;
					if(var_161_float < 0.2) {
					} else if(0.2 > 1.0) {
						var_161_float = 1.0;
			}
					var_156_int += 1;
				}
				var_18_object->set(var_156_int, var_161_float); //@t
			}
			goto Label_809;
		}
	Label_809:
		return 16;

	}
}
EMIT "Stack[-8] = 0";


void func_1078(bool var_22_bool)
{
	object var_25_object;
	@FindActor(var_25_object, "player");
	if(!var_25_object) //@nz
		var_22_bool = false;
	bool var_26_bool;
	var_25_object->IsVisirOn(var_26_bool);
	var_26_bool = var_22_bool;
}
EMIT "Stack[-2] = 0";


void func_120(object var_3_object, object var_4_object, float var_21_float)
{
	int var_24_int;
	var_3_object->size(var_24_int); //@t
	if(!var_24_int) { //@nz
	}
	float var_25_float;
	var_4_object->get(var_25_float, 0); //@t
	var_25_float -= var_21_float;
	if(var_25_float > 0)
		var_4_object->set(0, var_25_float); //@t
	else
		func_113(var_24_int, var_25_float);
	
}


void func_315(object var_6_object, object var_7_object, object var_8_object, int var_10_int)
{
	int var_104_int; int var_105_int; float var_106_float; float var_107_float;
	if(var_10_int != -1)
		return 12;
	int var_102_int;
	var_6_object->size(var_102_int); //@t
	if(!var_102_int) //@nz
		return 12;
	int var_103_int = 0;
	
	while(var_103_int < var_102_int) {
		var_6_object->get(var_104_int, var_103_int); //@t
		var_7_object->get(var_105_int, var_103_int); //@t
		var_8_object->get(var_106_float, var_103_int); //@t
		var_107_float = sqrt(var_106_float / 4.0);
		int var_114_int; int var_115_int; int var_116_int; float var_117_float;
		var_104_int = var_114_int;
		var_105_int = var_115_int;
		var_103_int = var_116_int;
		var_107_float = var_117_float;
		func_607(var_114_int, var_115_int, var_116_int, var_117_float);
		var_103_int += 1;
	}
	
}


void func_638(int var_10_int, float var_11_float)
{
	if(var_10_int == -1) {
	}
	string var_253_string;
	@GetStringByID(var_253_string, var_10_int);
	float var_254_float = sin(((3.14 * var_11_float) / 1.0) / 2.0);
	@Print("help", 10, 10, var_253_string, 1.0, 1.0, 1.0, var_254_float);
}


