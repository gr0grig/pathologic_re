// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2122();
			if(var_27_cvector == 32175) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2258();
			}
			if(var_26_bool == 32173) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530857); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool;
				func_2274(var_1_object);
				if(var_51_bool != 0)
					var_0_object->AddReply(530859, 32176, 32175); //@t
				var_0_object->AddReply(530858, -1, 32174); //@t
				return 0;
			}
			if(var_26_bool == 32176) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530861, 32179, 32177); //@t
				var_0_object->AddReply(530862, 32185, 32178); //@t
				return 0;
			}
			if(var_26_bool == 32179) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530864, 32182, 32180); //@t
				var_0_object->AddReply(530865, 32185, 32181); //@t
				return 0;
			}
			if(var_26_bool == 32182) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530866); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530867, 32185, 32183); //@t
				var_0_object->AddReply(530868, 32185, 32184); //@t
				return 0;
			}
			if(var_26_bool == 32185) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530871, -1, 32189); //@t
				var_0_object->AddReply(530872, -1, 32190); //@t
				return 0;
			}
			var_3_string = true;
			bool var_105_bool;
			func_2228(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2122();
			if(var_26_bool == 36971) {
				func_470(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_26_bool == 36973) {
				func_470(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_26_bool == 36975) {
				func_470(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_2228(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1ed";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2122();
			if(var_26_bool == 19130) {
				func_724(var_27_cvector, "Neutral");
				var_0_object->SetMessage(517997); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517998, 29658, 19131); //@t
				var_0_object->AddReply(528292, 29658, 29657); //@t
				return 0;
			}
			if(var_26_bool == 29658) {
				func_724(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528294, -1, 29660); //@t
				var_0_object->AddReply(528295, -1, 29661); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2228(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2eb";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2122();
			if(var_27_cvector == 19739) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2230();
			}
			if(var_27_cvector == 19745) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_2236();
				object var_42_object = var_1_object;
				func_2242(var_0_object);
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_2252();
			}
			if(var_27_cvector == 19824) {
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_2236();
				object var_71_object = var_1_object;
				func_2264(var_0_object);
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_2252();
			}
			if(var_26_bool == 19738) {
				func_983(var_27_cvector, "Fear");
				var_0_object->SetMessage(518646); //@t
				var_0_object->ClearReplies(); //@t
				bool var_93_bool = false;
				bool var_94_bool;
				func_2286(var_1_object);
				if(var_94_bool != 0) {
					bool var_102_bool;
					func_2310(var_1_object);
					if(var_102_bool != 0)
						var_93_bool = true;
				}
				if(var_93_bool != 0)
					var_0_object->AddReply(518647, 19740, 19739); //@t
				bool var_111_bool = false;
				bool var_112_bool;
				func_2298(var_1_object);
				if(var_112_bool != 0) {
					bool var_118_bool;
					func_2322(var_1_object);
					if(var_118_bool != 0)
						var_111_bool = true;
				}
				if(var_111_bool != 0)
					var_0_object->AddReply(518651, 19744, 19743); //@t
				var_0_object->AddReply(518654, -1, 19746); //@t
				return 0;
			}
			if(var_26_bool == 19744) {
				func_983(var_27_cvector, "Rage");
				var_0_object->SetMessage(518652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518720, 19815, 19811); //@t
				var_0_object->AddReply(518722, -1, 19813); //@t
				var_0_object->AddReply(518732, -1, 19824); //@t
				return 0;
			}
			if(var_26_bool == 19815) {
				func_983(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518725, 19817, 19816); //@t
				var_0_object->AddReply(518727, 19819, 19818); //@t
				return 0;
			}
			if(var_26_bool == 19819) {
				func_983(var_27_cvector, "Dream");
				var_0_object->SetMessage(518728); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518729, 19817, 19820); //@t
				return 0;
			}
			if(var_26_bool == 19817) {
				func_983(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518730, -1, 19822); //@t
				var_0_object->AddReply(518653, -1, 19745); //@t
				return 0;
			}
			if(var_26_bool == 19740) {
				func_983(var_27_cvector, "Fear");
				var_0_object->SetMessage(518648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518649, 19826, 19741); //@t
				return 0;
			}
			if(var_26_bool == 19826) {
				func_983(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518735, 19830, 19827); //@t
				var_0_object->AddReply(518736, 19829, 19828); //@t
				bool var_187_bool;
				func_2298(var_1_object);
				if(var_187_bool != 0)
					var_0_object->AddReply(531552, 19744, 32915); //@t
				return 0;
			}
			if(var_26_bool == 19829) {
				var_0_object->SetMessage(518737); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528296, 29663, 29662); //@t
				var_0_object->AddReply(518742, -1, 19834); //@t
				return 0;
			}
			if(var_26_bool == 29663) {
				func_983(var_27_cvector, "Dream");
				var_0_object->SetMessage(528297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518741, 19835, 19833); //@t
				return 0;
			}
			if(var_26_bool == 19835) {
				func_983(var_27_cvector, "Adoration");
				var_0_object->SetMessage(518743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518744, 19837, 19836); //@t
				return 0;
			}
			if(var_26_bool == 19837) {
				var_0_object->SetMessage(518745); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518746, -1, 19838); //@t
				var_0_object->AddReply(518747, -1, 19839); //@t
				return 0;
			}
			if(var_26_bool == 19830) {
				func_983(var_27_cvector, "Adoration");
				var_0_object->SetMessage(518738); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518739, -1, 19831); //@t
				var_0_object->AddReply(518740, -1, 19832); //@t
				return 0;
			}
			var_3_string = true;
			bool var_234_bool;
			func_2228(var_234_bool);
			if(var_234_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3ee";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2122();
			if(var_26_int == 42560) {
				func_1503(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2228(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5f6";
	
	}

}


maintask task_11
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		var_26_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1574(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1645();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1866(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1614(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1594(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2129(var_72_object);
					var_72_object = var_71_object;
					func_2014(var_70_bool, var_71_object);
				}
			} else {
				func_1609(var_26_int);
				func_1636();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1827();
		func_1645();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_1645();
		func_2094("Neutral");
		func_1636();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1636();
		else
			func_2094("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1827();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1857(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2351(var_44_object);
			func_2094("Neutral");
			func_1645();
			func_1636();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_31_bool;
	func_1866(var_31_bool);
	if(!var_31_bool) goto Label_0; //@nz
}


void func_2051(bool var_100_bool, object var_101_object)
{
	bool var_109_bool; int var_110_int; string var_111_string;
	int var_113_int;
	func_2181(var_113_int);
	string var_107_string = ("d" + var_113_int) + "m";
	int var_108_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_101_object->HasProperty((var_107_string + (var_108_int + 1)), var_109_bool);
			if(!var_109_bool) { //@nz
			} else {
				var_108_int += 1;
			}
		}
		if(!var_108_int) { //@nz
			var_100_bool = false;
			return 10;
		}
		var_110_int = 0;
		if(var_108_int > 1)
			@irand(var_110_int, var_108_int);
		var_101_object->GetProperty((var_107_string + (var_110_int + 1)), var_111_string);
		bool var_132_bool; string var_133_string;
		var_111_string = var_133_string;
		func_2107(var_132_bool, var_133_string);
		var_132_bool = var_100_bool;
		return 10;

	}
}


// @pe
void func_2310(bool var_313_bool)
{
	int var_315_int;
	func_2145(var_315_int, "b5q01_1");
	if(var_315_int == 0) {
		var_313_bool = true;
		return 0;
	}
	var_313_bool = false;
}


void func_13(object var_0_object, int var_353_int, object var_354_object)
{
	var_0_object = var_354_object;
	bool var_364_bool; object var_365_object;
	object var_366_object;
	func_2129(var_366_object);
	var_366_object = var_365_object;
	func_1956(var_364_bool, var_365_object);
	bool var_367_bool; object var_368_object;
	var_354_object = var_368_object;
	func_1871(var_367_bool, var_368_object, 70.0);
	if(!var_367_bool) { //@nz
		var_353_int = -2;
		return 8;
	}
	object var_360_object;
	@CreateDialog(var_360_object);
	int var_371_int;
	func_2222(var_371_int);
	var_360_object->SetNPCName(var_371_int);
	int var_372_int;
	func_2220(var_372_int);
	var_360_object->SetNPCDescription(var_372_int);
	string var_373_string;
	func_2224(var_373_string);
	var_360_object->SetPhoto(var_373_string);
	string var_374_string;
	func_2226(var_374_string);
	var_360_object->SetPhoto2(var_374_string);
	int var_375_int;
	func_2334(var_375_int);
	var_360_object->SetPlayerName(var_375_int);
	bool var_361_bool;
	@IsOverrideActive(var_361_bool);
	if(var_361_bool != 0) {
		var_353_int = -2;
		return 8;
	}
	@DoDialog(var_360_object);
	object var_377_object; object var_378_object;
	var_354_object = var_377_object;
	var_360_object = var_378_object;
	TaskCall(2);
	func_94(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object);
	TaskReturn();
	bool var_363_bool;
	var_360_object->IsDialogEnd(var_363_bool);
	
	for(;;) {
		var_413_bool = !var_363_bool; //@nz
		if(var_413_bool == 0) goto Label_83;
		@sync();
		var_360_object->IsDialogEnd(var_363_bool);
	}
	
Label_83:
	object var_414_object;
	var_354_object = var_414_object;
	func_1939();
	@StopDialog(var_360_object);
	var_360_object->GetReturnValue(-1);
	int var_362_int = var_353_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2322(bool var_329_bool)
{
	int var_331_int;
	func_2145(var_331_int, "b5q01_1");
	if(var_331_int == 1)
		var_329_bool = true;
	var_329_bool = false;
}


void func_2334(int var_204_int)
{
	int var_206_int;
	@GetVariable("branch", var_206_int);
	if(var_206_int == 0) {
		var_204_int = 1;
		return 2;
	EMIT "GOTO 0x92d";
	}
	if(var_206_int == 1) {
		var_204_int = 2;
		return 2;
	}
	var_204_int = 3;
}


void func_1825(bool var_79_bool)
{
	var_79_bool = true;
}


void func_1827(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1574(object var_0_object)
{
	bool var_27_bool;
	func_1866(var_27_bool);
	if(!var_27_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1702();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1756();
	}
}
EMIT "Return(); Pop(0)";


void func_1832(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_811(object var_0_object, int var_264_int, object var_265_object)
{
	var_0_object = var_265_object;
	bool var_275_bool; object var_276_object;
	object var_277_object;
	func_2129(var_277_object);
	var_277_object = var_276_object;
	func_1956(var_275_bool, var_276_object);
	bool var_278_bool; object var_279_object;
	var_265_object = var_279_object;
	func_1871(var_278_bool, var_279_object, 70.0);
	if(!var_278_bool) { //@nz
		var_264_int = -2;
		return 8;
	}
	object var_271_object;
	@CreateDialog(var_271_object);
	int var_282_int;
	func_2222(var_282_int);
	var_271_object->SetNPCName(var_282_int);
	int var_283_int;
	func_2220(var_283_int);
	var_271_object->SetNPCDescription(var_283_int);
	string var_284_string;
	func_2224(var_284_string);
	var_271_object->SetPhoto(var_284_string);
	string var_285_string;
	func_2226(var_285_string);
	var_271_object->SetPhoto2(var_285_string);
	int var_286_int;
	func_2334(var_286_int);
	var_271_object->SetPlayerName(var_286_int);
	bool var_272_bool;
	@IsOverrideActive(var_272_bool);
	if(var_272_bool != 0) {
		var_264_int = -2;
		return 8;
	}
	@DoDialog(var_271_object);
	object var_288_object; object var_289_object;
	var_265_object = var_288_object;
	var_271_object = var_289_object;
	TaskCall(8);
	func_892(var_290_object, var_291_object, var_292_string, var_293_bool, var_288_object, var_289_object);
	TaskReturn();
	bool var_274_bool;
	var_271_object->IsDialogEnd(var_274_bool);
	
	for(;;) {
		var_349_bool = !var_274_bool; //@nz
		if(var_349_bool == 0) goto Label_881;
		@sync();
		var_271_object->IsDialogEnd(var_274_bool);
	}
	
Label_881:
	object var_350_object;
	var_265_object = var_350_object;
	func_1939();
	@StopDialog(var_271_object);
	var_271_object->GetReturnValue(-1);
	int var_273_int = var_264_int;
}
EMIT "Stack[-4] = 0";


void func_2094(string var_34_string)
{
	float var_37_float; float var_38_float;
	@lshGetAnimTimes(var_34_string, var_37_float, var_38_float);
	@lshPlayAnimation(var_37_float, var_38_float, false);
}


// @pe
void func_2351(object var_44_object)
{
	var_45_bool = GlobalVars[1];
	if(!var_45_bool) { //@nz
		int var_47_int; object var_48_object;
		var_44_object = var_48_object;
		TaskCall(5);
		func_585(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_260_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_261_bool;
	func_2190(var_261_bool, 5);
	if(var_261_bool != 0) {
		int var_264_int; object var_265_object;
		var_44_object = var_265_object;
		TaskCall(7);
		func_811(var_266_object, var_264_int, var_265_object);
		TaskReturn();
		return 0;
	}
	bool var_351_bool;
	func_2190(var_351_bool, 6);
	if(var_351_bool != 0) {
		int var_353_int; object var_354_object;
		var_44_object = var_354_object;
		TaskCall(1);
		func_13(var_355_object, var_353_int, var_354_object);
		TaskReturn();
		return 0;
	}
	bool var_415_bool = false;
	bool var_416_bool;
	func_2190(var_416_bool, 12);
	if(var_416_bool != 0) {
		var_418_bool = GlobalVars[2];
		if(!var_418_bool) //@nz
			var_415_bool = true;
	}
	if(var_415_bool != 0) {
		int var_420_int; object var_421_object;
		var_44_object = var_421_object;
		TaskCall(3);
		func_326(var_422_object, var_420_int, var_421_object);
		TaskReturn();
		var_479_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_480_int; object var_481_object;
	var_44_object = var_481_object;
	TaskCall(9);
	func_1364(var_482_object, var_480_int, var_481_object);
	TaskReturn();
}


void func_1840(object var_49_object, string var_50_string, int var_51_int)
{
	int var_53_int;
	var_49_object->GetProperty(var_50_string, var_53_int);
	var_49_object->SetProperty(var_50_string, (var_53_int + var_51_int));
}


void func_2101(string var_224_string, bool var_225_bool)
{
	float var_230_float; float var_231_float;
	@lshGetAnimTimes(var_224_string, var_230_float, var_231_float);
	@lshPlayAnimation(var_230_float, var_231_float, var_225_bool);
}


void func_1847(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


void func_1594(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1857(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_2107(bool var_92_bool, string var_93_string)
{
	bool var_95_bool;
	bool var_96_bool;
	func_2228(var_96_bool);
	if(var_96_bool != 0) {
		@lshHasSpeech(var_95_bool, var_93_string);
		if(var_95_bool != 0) {
			@lshPlaySpeech(var_93_string);
			var_92_bool = true;
		}
	}
	var_92_bool = false;
}


void func_1857(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1847(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_326(object var_0_object, int var_420_int, object var_421_object)
{
	var_0_object = var_421_object;
	bool var_431_bool; object var_432_object;
	object var_433_object;
	func_2129(var_433_object);
	var_433_object = var_432_object;
	func_1956(var_431_bool, var_432_object);
	bool var_434_bool; object var_435_object;
	var_421_object = var_435_object;
	func_1871(var_434_bool, var_435_object, 70.0);
	if(!var_434_bool) { //@nz
		var_420_int = -2;
		return 8;
	}
	object var_427_object;
	@CreateDialog(var_427_object);
	int var_438_int;
	func_2222(var_438_int);
	var_427_object->SetNPCName(var_438_int);
	int var_439_int;
	func_2220(var_439_int);
	var_427_object->SetNPCDescription(var_439_int);
	string var_440_string;
	func_2224(var_440_string);
	var_427_object->SetPhoto(var_440_string);
	string var_441_string;
	func_2226(var_441_string);
	var_427_object->SetPhoto2(var_441_string);
	int var_442_int;
	func_2334(var_442_int);
	var_427_object->SetPlayerName(var_442_int);
	bool var_428_bool;
	@IsOverrideActive(var_428_bool);
	if(var_428_bool != 0) {
		var_420_int = -2;
		return 8;
	}
	@DoDialog(var_427_object);
	object var_444_object; object var_445_object;
	var_421_object = var_444_object;
	var_427_object = var_445_object;
	TaskCall(4);
	func_407(var_446_object, var_447_object, var_448_string, var_449_bool, var_444_object, var_445_object);
	TaskReturn();
	bool var_430_bool;
	var_427_object->IsDialogEnd(var_430_bool);
	
	for(;;) {
		var_477_bool = !var_430_bool; //@nz
		if(var_477_bool == 0) goto Label_396;
		@sync();
		var_427_object->IsDialogEnd(var_430_bool);
	}
	
Label_396:
	object var_478_object;
	var_421_object = var_478_object;
	func_1939();
	@StopDialog(var_427_object);
	var_427_object->GetReturnValue(-1);
	int var_429_int = var_420_int;
}
EMIT "Stack[-4] = 0";


void func_1609(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_1866(bool var_27_bool)
{
	bool var_29_bool;
	@IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
}


void func_2122(void)
{
	bool var_29_bool;
	func_2228(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_585(object var_0_object, int var_47_int, object var_48_object)
{
	var_0_object = var_48_object;
	bool var_58_bool; object var_59_object;
	object var_60_object;
	func_2129(var_60_object);
	var_60_object = var_59_object;
	func_1956(var_58_bool, var_59_object);
	bool var_153_bool; object var_154_object;
	var_48_object = var_154_object;
	func_1871(var_153_bool, var_154_object, 70.0);
	if(!var_153_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_200_int;
	func_2222(var_200_int);
	var_54_object->SetNPCName(var_200_int);
	int var_201_int;
	func_2220(var_201_int);
	var_54_object->SetNPCDescription(var_201_int);
	string var_202_string;
	func_2224(var_202_string);
	var_54_object->SetPhoto(var_202_string);
	string var_203_string;
	func_2226(var_203_string);
	var_54_object->SetPhoto2(var_203_string);
	int var_204_int;
	func_2334(var_204_int);
	var_54_object->SetPlayerName(var_204_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	object var_213_object; object var_214_object;
	var_48_object = var_213_object;
	var_54_object = var_214_object;
	TaskCall(6);
	func_666(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_252_bool = !var_57_bool; //@nz
		if(var_252_bool == 0) goto Label_655;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_655:
	object var_253_object;
	var_48_object = var_253_object;
	func_1939();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


void func_1614(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1832(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_1871(bool var_153_bool, object var_154_object, float var_155_float)
{
	cvector var_166_cvector; bool var_173_bool;
	var_154_object->GetPosition(var_166_cvector);
	float var_165_float;
	var_154_object->GetEyesHeight(var_165_float);
	var_174_float = GetByIndex(var_166_cvector, 1);
	SetByIndex(var_166_cvector, 1) = (var_174_float + var_165_float);
	cvector var_167_cvector;
	@GetPosition(var_167_cvector);
	@GetEyesHeight(var_165_float);
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (var_175_float + var_165_float);
	cvector var_168_cvector = var_166_cvector - var_167_cvector;
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (float)0;
	var_178_float = sqrt(var_168_cvector | var_168_cvector);
	var_168_cvector /= var_178_float;
	cvector var_169_cvector = -var_168_cvector;
	cvector var_180_cvector;
	func_2135(var_180_cvector, (var_169_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_170_cvector = ((var_168_cvector * var_155_float) + (var_180_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_172_bool;
	@IsOverrideActive(var_172_bool);
	if(var_172_bool != 0)
		var_153_bool = false;
	@StopWorld();
	@CameraTransit((var_167_cvector + var_170_cvector), var_169_cvector);
	var_193_float = GetByIndex(var_170_cvector, 0);
	var_194_float = GetByIndex(var_170_cvector, 2);
	@Rotate(var_193_float, var_194_float);
	bool var_195_bool;
	func_2228(var_195_bool);
	if(var_195_bool != 0) {
	} else {
		@HasAnimationTrack(var_173_bool, "head");
		if(var_173_bool == 0) goto Label_1933;
		@LookAsyncCamera("head");
	}
Label_1933:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_153_bool = true;
	
}


void func_2129(object var_60_object)
{
	object var_62_object;
	@self(var_62_object);
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


void func_1364(object var_0_object, int var_480_int, object var_481_object)
{
	var_0_object = var_481_object;
	bool var_491_bool; object var_492_object;
	object var_493_object;
	func_2129(var_493_object);
	var_493_object = var_492_object;
	func_1956(var_491_bool, var_492_object);
	bool var_494_bool; object var_495_object;
	var_481_object = var_495_object;
	func_1871(var_494_bool, var_495_object, 70.0);
	if(!var_494_bool) { //@nz
		var_480_int = -2;
		return 8;
	}
	object var_487_object;
	@CreateDialog(var_487_object);
	int var_498_int;
	func_2222(var_498_int);
	var_487_object->SetNPCName(var_498_int);
	int var_499_int;
	func_2220(var_499_int);
	var_487_object->SetNPCDescription(var_499_int);
	string var_500_string;
	func_2224(var_500_string);
	var_487_object->SetPhoto(var_500_string);
	string var_501_string;
	func_2226(var_501_string);
	var_487_object->SetPhoto2(var_501_string);
	int var_502_int;
	func_2334(var_502_int);
	var_487_object->SetPlayerName(var_502_int);
	bool var_488_bool;
	@IsOverrideActive(var_488_bool);
	if(var_488_bool != 0) {
		var_480_int = -2;
		return 8;
	}
	@DoDialog(var_487_object);
	object var_504_object; object var_505_object;
	var_481_object = var_504_object;
	var_487_object = var_505_object;
	TaskCall(10);
	func_1445(var_506_object, var_507_object, var_508_string, var_509_bool, var_504_object, var_505_object);
	TaskReturn();
	bool var_490_bool;
	var_487_object->IsDialogEnd(var_490_bool);
	
	for(;;) {
		var_534_bool = !var_490_bool; //@nz
		if(var_534_bool == 0) goto Label_1434;
		@sync();
		var_487_object->IsDialogEnd(var_490_bool);
	}
	
Label_1434:
	object var_535_object;
	var_481_object = var_535_object;
	func_1939();
	@StopDialog(var_487_object);
	var_487_object->GetReturnValue(-1);
	int var_489_int = var_480_int;
}
EMIT "Stack[-4] = 0";


void func_2135(cvector var_180_cvector, cvector var_181_cvector)
{
	float var_184_float = sqrt(var_181_cvector | var_181_cvector);
	if(var_184_float < 0.000001)
		var_180_cvector = [0.0, 0.0, 0.0];
	var_180_cvector = var_181_cvector / var_184_float;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_377_object, object var_378_object)
{
	var_0_object = var_378_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_378_object, "Neutral");
		var_0_object->SetMessage(530857); //@t
		var_0_object->ClearReplies(); //@t
		bool var_393_bool;
		func_2274(var_377_object);
		if(var_393_bool != 0)
			var_0_object->AddReply(530859, 32176, 32175); //@t
		var_0_object->AddReply(530858, -1, 32174); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_405_bool;
	func_2228(var_405_bool);
	if(var_405_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2094(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


void func_2145(int var_307_int, string var_308_string)
{
	int var_310_int;
	@GetVariable(var_308_string, var_310_int);
	var_310_int = var_307_int;
}


void func_1636(void)
{
	float var_41_float;
	@rand(var_41_float, 8, 16);
	@SetTimer(10, var_41_float);
}


void func_2150(int var_58_int, int var_59_int)
{
	object var_61_object;
	@CreateIntVector(var_61_object);
	var_61_object->add(var_58_int);
	var_61_object->add(var_59_int);
	@SendWorldWndMessage(3, var_61_object);
}
EMIT "Stack[-1] = 0";


void func_1645(void)
{
	@KillTimer(10);
}


void func_2162(object var_45_object, int var_46_int)
{
	int var_48_int;
	object var_49_object;
	var_45_object = var_49_object;
	int var_51_int;
	func_1840(var_49_object, "money", var_51_int);
	if(var_51_int > 0) {
		@GetInvItemByName(var_48_int, "Money");
		int var_58_int; int var_59_int;
		var_48_int = var_58_int;
		var_46_int = var_59_int;
		func_2150(var_58_int, var_59_int);
	}
}


// @pe
void func_892(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_288_object, object var_289_object)
{
	var_0_object = var_289_object;
	var_1_object = var_288_object;
	var_3_string = false;
	if(1 != 0) {
		func_983(var_289_object, "Fear");
		var_0_object->SetMessage(518646); //@t
		var_0_object->ClearReplies(); //@t
		bool var_304_bool = false;
		bool var_305_bool;
		func_2286(var_1_object);
		if(var_305_bool != 0) {
			bool var_313_bool;
			func_2310(var_1_object);
			if(var_313_bool != 0)
				var_304_bool = true;
		}
		if(var_304_bool != 0)
			var_0_object->AddReply(518647, 19740, 19739); //@t
		bool var_322_bool = false;
		bool var_323_bool;
		func_2298(var_1_object);
		if(var_323_bool != 0) {
			bool var_329_bool;
			func_2322(var_1_object);
			if(var_329_bool != 0)
				var_322_bool = true;
		}
		if(var_322_bool != 0)
			var_0_object->AddReply(518651, 19744, 19743); //@t
		var_0_object->AddReply(518654, -1, 19746); //@t
		goto Label_953;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x380";
	}
Label_953:
	bool var_341_bool;
	func_2228(var_341_bool);
	if(var_341_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2094(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_982;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_982:
		return 0;

	}
	
}


void func_2181(int var_113_int)
{
	float var_115_float;
	@GetGameTime(var_115_float);
	var_113_int = 1 + (var_115_float / 24);
}


// @pe
void func_2190(bool var_261_bool, int var_262_int)
{
	int var_263_int;
	func_2181(var_263_int);
	var_261_bool = var_263_int == var_262_int;
}


void func_1939(void)
{
	bool var_255_bool;
	@CameraSwitchToNormal();
	bool var_256_bool;
	func_2228(var_256_bool);
	if(var_256_bool != 0) {
	} else {
		@HasAnimationTrack(var_255_bool, "head");
		if(var_255_bool == 0) goto Label_1955;
		@UnlookAsync("head");
	}
Label_1955:
	
}


void func_2196(string var_65_string, int var_66_int)
{
	string var_68_string = "idle";
	if(var_66_int != 0)
		var_68_string += var_66_int;
	var_68_string = var_65_string;
}


// @pe
void func_407(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_444_object, object var_445_object)
{
	var_0_object = var_445_object;
	var_1_object = var_444_object;
	var_3_string = false;
	if(1 != 0) {
		func_470(var_445_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_440;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19b";
	}
Label_440:
	bool var_469_bool;
	func_2228(var_469_bool);
	if(var_469_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2094(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_469;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_469:
		return 0;

	}
	
}


// @pe
void func_666(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_213_object, object var_214_object)
{
	var_0_object = var_214_object;
	var_1_object = var_213_object;
	var_3_string = false;
	if(1 != 0) {
		func_724(var_214_object, "Neutral");
		var_0_object->SetMessage(517997); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(517998, 29658, 19131); //@t
		var_0_object->AddReply(528292, 29658, 29657); //@t
		goto Label_694;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x29e";
	}
Label_694:
	bool var_239_bool;
	func_2228(var_239_bool);
	if(var_239_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2094(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_723;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_723:
		return 0;

	}
	
}


void func_2203(int var_59_int)
{
	int var_62_int; bool var_63_bool;
	var_62_int = 0;
	
	for(;;) {
		string var_65_string; int var_66_int;
		var_62_int = var_66_int;
		func_2196(var_65_string, var_66_int);
		@HasAnimation(var_63_bool, "all", var_65_string);
		if(!var_63_bool) //@nz
			break;
		var_62_int += 1;
	}
	var_62_int = var_59_int;
}


// @pe
void func_157(object var_2_object, string var_384_string)
{
	bool var_385_bool;
	func_2228(var_385_bool);
	if(!var_385_bool) //@nz
		return 0;
	if(var_384_string == var_2_object)
		return 0;
	string var_388_string; bool var_389_bool;
	var_384_string = var_388_string;
	if(var_384_string == "")
		var_389_bool = false;
	else
		var_389_bool = true;
	func_2101(var_388_string, var_389_bool);
	var_2_object = var_384_string;
	
}


void func_1956(bool var_58_bool, object var_59_object)
{
	int var_65_int; int var_66_int;
	@GetVariable("voice_common", var_65_int);
	if(var_65_int != 0) {
		bool var_69_bool; object var_70_object;
		var_59_object = var_70_object;
		func_2014(var_69_bool, var_70_object);
		if(!var_69_bool) { //@nz
			bool var_100_bool; object var_101_object;
			var_59_object = var_101_object;
			func_2051(var_100_bool, var_101_object);
			if(!var_100_bool) { //@nz
				var_58_bool = false;
				return 4;
			}
		}
		@irand(var_66_int, 2);
		if(var_66_int != 0)
			@SetVariable("voice_common", ((var_65_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_145_bool; object var_146_object;
		var_59_object = var_146_object;
		func_2051(var_145_bool, var_146_object);
		if(!var_145_bool) { //@nz
			bool var_148_bool; object var_149_object;
			var_59_object = var_149_object;
			func_2014(var_148_bool, var_149_object);
			if(!var_148_bool) { //@nz
				var_58_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2012;
	
Label_2012:
	var_58_bool = true;
	
}


// @pe
void func_1445(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_504_object, object var_505_object)
{
	var_0_object = var_505_object;
	var_1_object = var_504_object;
	var_3_string = false;
	if(1 != 0) {
		func_1503(var_505_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1473;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5a9";
	}
Label_1473:
	bool var_526_bool;
	func_2228(var_526_bool);
	if(var_526_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2094(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1502;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1502:
		return 0;

	}
	
}


void func_2220(int var_201_int)
{
	var_201_int = 515530;
}


void func_2222(int var_200_int)
{
	var_200_int = 502856;
}


void func_2224(string var_202_string)
{
	var_202_string = "ui/NPC_Anna.png";
}


void func_2226(string var_203_string)
{
	var_203_string = "ui/NPC_Anna_b.png";
}


void func_2228(bool var_96_bool)
{
	var_96_bool = true;
}


// @pe
void func_2230(void)
{
	@SetVariable("b5q01_1", 1);
}


// @pe
void func_2236(void)
{
	@SetVariable("b5q01_1", 1000);
}


// @pe
void func_2242(object var_42_object)
{
	@Trace("money10000 is given");
	object var_45_object;
	var_42_object = var_45_object;
	func_2162(var_45_object, 10000);
}


// @pe
void func_2252(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_2258(void)
{
	@SetVariable("oob6Anna1", 1);
}


// @pe
void func_724(object var_2_object, string var_220_string)
{
	bool var_221_bool;
	func_2228(var_221_bool);
	if(!var_221_bool) //@nz
		return 0;
	if(var_220_string == var_2_object)
		return 0;
	string var_224_string; bool var_225_bool;
	var_220_string = var_224_string;
	if(var_220_string == "")
		var_225_bool = false;
	else
		var_225_bool = true;
	func_2101(var_224_string, var_225_bool);
	var_2_object = var_220_string;
	
}


// @pe
void func_470(object var_2_object, string var_451_string)
{
	bool var_452_bool;
	func_2228(var_452_bool);
	if(!var_452_bool) //@nz
		return 0;
	if(var_451_string == var_2_object)
		return 0;
	string var_455_string; bool var_456_bool;
	var_451_string = var_455_string;
	if(var_451_string == "")
		var_456_bool = false;
	else
		var_456_bool = true;
	func_2101(var_455_string, var_456_bool);
	var_2_object = var_451_string;
	
}


// @pe
void func_983(object var_2_object, string var_295_string)
{
	bool var_296_bool;
	func_2228(var_296_bool);
	if(!var_296_bool) //@nz
		return 0;
	if(var_295_string == var_2_object)
		return 0;
	string var_299_string; bool var_300_bool;
	var_295_string = var_299_string;
	if(var_295_string == "")
		var_300_bool = false;
	else
		var_300_bool = true;
	func_2101(var_299_string, var_300_bool);
	var_2_object = var_295_string;
	
}


// @pe
void func_2264(object var_71_object)
{
	@Trace("money3000 is given");
	object var_74_object;
	var_71_object = var_74_object;
	func_2162(var_74_object, 3000);
}


void func_1756(void)
{
	bool var_53_bool; int var_54_int; int var_55_int; bool var_56_bool;
	@WaitForAnimEnd();
	bool var_57_bool;
	func_1866(var_57_bool);
	if(!var_57_bool) //@nz
		return 12;
	int var_59_int;
	func_2203(var_59_int);
	int var_51_int;
	var_59_int = var_51_int;
	int var_52_int = 0;
	
	for(;;) {
		bool var_72_bool = false;
		if(var_52_int < 5) {
			bool var_75_bool;
			func_1866(var_75_bool);
			if(var_75_bool != 0)
				var_72_bool = true;
		}
		if(var_72_bool != 0) {
			if(!var_51_int) { //@nz
				@Sleep(3, var_53_bool);
				if(!var_53_bool) { //@nz
				} else {
			} else {
			@irand(var_54_int, var_51_int);
			@irand(var_55_int, 5);
			if(var_55_int != 0)
				var_54_int = 0;
			string var_86_string; int var_87_int;
			var_54_int = var_87_int;
			func_2196(var_86_string, var_87_int);
			@PlayAnimation("all", var_86_string);
			@WaitForAnimEnd(var_56_bool);
			var_88_bool = !var_56_bool; //@nz
			if(var_88_bool == 0) goto Label_1811;
			goto Label_1822;
			}
				Label_1811:
					bool var_79_bool;
					func_1825(var_79_bool);
					var_80_bool = !var_79_bool; //@nz
					if(var_80_bool == 0) goto Label_1817;
			}
		}
	Label_1822:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1817:
		@ResetAAS();
		var_52_int += 1;
	}
	
}


void func_2014(bool var_69_bool, object var_70_object)
{
	string var_76_string; bool var_78_bool; int var_79_int; string var_80_string;
	var_76_string = "c";
	int var_77_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_70_object->HasProperty((var_76_string + (var_77_int + 1)), var_78_bool);
			if(!var_78_bool) { //@nz
			} else {
				var_77_int += 1;
			}
		}
		if(!var_77_int) { //@nz
			var_69_bool = false;
			return 10;
		}
		var_79_int = 0;
		if(var_77_int > 1)
			@irand(var_79_int, var_77_int);
		var_70_object->GetProperty((var_76_string + (var_79_int + 1)), var_80_string);
		bool var_92_bool; string var_93_string;
		var_80_string = var_93_string;
		func_2107(var_92_bool, var_93_string);
		var_92_bool = var_69_bool;
		return 10;

	}
}


// @pe
void func_1503(object var_2_object, string var_511_string)
{
	bool var_512_bool;
	func_2228(var_512_bool);
	if(!var_512_bool) //@nz
		return 0;
	if(var_511_string == var_2_object)
		return 0;
	string var_515_string; bool var_516_bool;
	var_511_string = var_515_string;
	if(var_511_string == "")
		var_516_bool = false;
	else
		var_516_bool = true;
	func_2101(var_515_string, var_516_bool);
	var_2_object = var_511_string;
	
}


// @pe
void func_2274(bool var_393_bool)
{
	int var_395_int;
	func_2145(var_395_int, "oob6Anna1");
	if(var_395_int == 0) {
		var_393_bool = true;
		return 0;
	}
	var_393_bool = false;
}


// @pe
void func_2286(bool var_305_bool)
{
	int var_307_int;
	func_2145(var_307_int, "b5q01TalkToVera");
	if(var_307_int == 1)
		var_305_bool = true;
	var_305_bool = false;
}


// @pe
void func_2298(bool var_323_bool)
{
	int var_325_int;
	func_2145(var_325_int, "b5q01VeraDead");
	if(var_325_int != 0) {
		var_323_bool = true;
		return 0;
	}
	var_323_bool = false;
}


