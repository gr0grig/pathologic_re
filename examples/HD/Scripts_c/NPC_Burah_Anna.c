// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2131();
			if(var_26_bool == 19130) {
				func_139(var_27_cvector, "Neutral");
				var_0_object->SetMessage(517997); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517998, 29658, 19131); //@t
				var_0_object->AddReply(528292, 29658, 29657); //@t
				return 0;
			}
			if(var_26_bool == 29658) {
				func_139(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528294, -1, 29660); //@t
				var_0_object->AddReply(528295, -1, 29661); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_2237(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2131();
			if(var_27_cvector == 19739) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2239();
			}
			if(var_27_cvector == 19745) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_2245();
				object var_42_object = var_1_object;
				func_2251(var_0_object);
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_2261();
			}
			if(var_27_cvector == 19824) {
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_2245();
				object var_71_object = var_1_object;
				func_2273(var_0_object);
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_2261();
			}
			if(var_26_bool == 19738) {
				func_398(var_27_cvector, "Fear");
				var_0_object->SetMessage(518646); //@t
				var_0_object->ClearReplies(); //@t
				bool var_98_bool = false;
				bool var_99_bool;
				func_2295(var_1_object);
				if(var_99_bool != 0) {
					bool var_107_bool;
					func_2319(var_1_object);
					if(var_107_bool != 0)
						var_98_bool = true;
				}
				if(var_98_bool != 0)
					var_0_object->AddReply(518647, 19740, 19739); //@t
				bool var_116_bool = false;
				bool var_117_bool;
				func_2307(var_1_object);
				if(var_117_bool != 0) {
					bool var_123_bool;
					func_2331(var_1_object);
					if(var_123_bool != 0)
						var_116_bool = true;
				}
				if(var_116_bool != 0)
					var_0_object->AddReply(518651, 19744, 19743); //@t
				var_0_object->AddReply(518654, -1, 19746); //@t
				return 0;
			}
			if(var_26_bool == 19744) {
				func_398(var_27_cvector, "Rage");
				var_0_object->SetMessage(518652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518720, 19815, 19811); //@t
				var_0_object->AddReply(518722, -1, 19813); //@t
				var_0_object->AddReply(518732, -1, 19824); //@t
				return 0;
			}
			if(var_26_bool == 19815) {
				func_398(var_27_cvector, "Rage");
				var_0_object->SetMessage(518724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518725, 19817, 19816); //@t
				var_0_object->AddReply(518727, 19819, 19818); //@t
				return 0;
			}
			if(var_26_bool == 19819) {
				func_398(var_27_cvector, "Adoration");
				var_0_object->SetMessage(518728); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518729, 19817, 19820); //@t
				return 0;
			}
			if(var_26_bool == 19817) {
				func_398(var_27_cvector, "Adoration");
				var_0_object->SetMessage(518726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518730, -1, 19822); //@t
				var_0_object->AddReply(518653, -1, 19745); //@t
				return 0;
			}
			if(var_26_bool == 19740) {
				func_398(var_27_cvector, "Rage");
				var_0_object->SetMessage(518648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518649, 19826, 19741); //@t
				return 0;
			}
			if(var_26_bool == 19826) {
				func_398(var_27_cvector, "Rage");
				var_0_object->SetMessage(518734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518735, 19830, 19827); //@t
				var_0_object->AddReply(518736, 19829, 19828); //@t
				bool var_192_bool;
				func_2307(var_1_object);
				if(var_192_bool != 0)
					var_0_object->AddReply(531552, 19744, 32915); //@t
				return 0;
			}
			if(var_26_bool == 19829) {
				func_398(var_27_cvector, "Rage");
				var_0_object->SetMessage(518737); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528296, 29663, 29662); //@t
				var_0_object->AddReply(518742, -1, 19834); //@t
				return 0;
			}
			if(var_26_bool == 29663) {
				func_398(var_27_cvector, "Dream");
				var_0_object->SetMessage(528297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518741, 19835, 19833); //@t
				return 0;
			}
			if(var_26_bool == 19835) {
				func_398(var_27_cvector, "Dream");
				var_0_object->SetMessage(518743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518744, 19837, 19836); //@t
				return 0;
			}
			if(var_26_bool == 19837) {
				func_398(var_27_cvector, "Dream");
				var_0_object->SetMessage(518745); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518746, -1, 19838); //@t
				var_0_object->AddReply(518747, -1, 19839); //@t
				return 0;
			}
			if(var_26_bool == 19830) {
				func_398(var_27_cvector, "Adoration");
				var_0_object->SetMessage(518738); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518739, -1, 19831); //@t
				var_0_object->AddReply(518740, -1, 19832); //@t
				return 0;
			}
			var_3_string = true;
			bool var_241_bool;
			func_2237(var_241_bool);
			if(var_241_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2131();
			if(var_27_cvector == 32175) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2267();
			}
			if(var_26_bool == 32173) {
				func_931(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530857); //@t
				var_0_object->ClearReplies(); //@t
				bool var_56_bool;
				func_2283(var_1_object);
				if(var_56_bool != 0)
					var_0_object->AddReply(530859, 32176, 32175); //@t
				var_0_object->AddReply(530858, -1, 32174); //@t
				return 0;
			}
			if(var_26_bool == 32176) {
				func_931(var_27_cvector, "Fear");
				var_0_object->SetMessage(530860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530861, 32179, 32177); //@t
				var_0_object->AddReply(530862, 32185, 32178); //@t
				return 0;
			}
			if(var_26_bool == 32179) {
				func_931(var_27_cvector, "Fear");
				var_0_object->SetMessage(530863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530864, 32182, 32180); //@t
				var_0_object->AddReply(530865, 32185, 32181); //@t
				return 0;
			}
			if(var_26_bool == 32182) {
				func_931(var_27_cvector, "Fear");
				var_0_object->SetMessage(530866); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530867, 32185, 32183); //@t
				var_0_object->AddReply(530868, 32185, 32184); //@t
				return 0;
			}
			if(var_26_bool == 32185) {
				func_931(var_27_cvector, "Fear");
				var_0_object->SetMessage(530870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530871, -1, 32189); //@t
				var_0_object->AddReply(530872, -1, 32190); //@t
				return 0;
			}
			var_3_string = true;
			bool var_110_bool;
			func_2237(var_110_bool);
			if(var_110_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3ba";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2131();
			if(var_26_bool == 36971) {
				func_1244(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_26_bool == 36973) {
				func_1244(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_26_bool == 36975) {
				func_1244(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_79_bool;
			func_2237(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4f3";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2131();
			if(var_26_int == 42560) {
				func_1498(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2237(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5f1";
	
	}

}


maintask task_10
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		var_26_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1569(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1634();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1855(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1603(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1583(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2138(var_72_object);
					var_72_object = var_71_object;
					func_2005(var_70_bool, var_71_object);
				}
			} else {
				func_1598(var_26_int);
				func_1625();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1816();
		func_1634();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		func_1634();
		func_2085("Neutral");
		func_1625();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1625();
		else
			func_2085("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1816();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1846(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2360(var_44_object);
			func_2085("Neutral");
			func_1634();
			func_1625();
		}
	}

}


void func_0(object var_0_object, int var_47_int, object var_48_object)
{
	var_0_object = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_1860(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_106_int;
	func_2231(var_106_int);
	var_54_object->SetNPCName(var_106_int);
	int var_107_int;
	func_2229(var_107_int);
	var_54_object->SetNPCDescription(var_107_int);
	string var_108_string;
	func_2233(var_108_string);
	var_54_object->SetPhoto(var_108_string);
	string var_109_string;
	func_2235(var_109_string);
	var_54_object->SetPhoto2(var_109_string);
	int var_110_int;
	func_2343(var_110_int);
	var_54_object->SetPlayerName(var_110_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	bool var_119_bool; object var_120_object;
	object var_121_object;
	func_2138(var_121_object);
	var_121_object = var_120_object;
	func_1947(var_119_bool, var_120_object);
	object var_214_object; object var_215_object;
	var_48_object = var_214_object;
	var_54_object = var_215_object;
	TaskCall(1);
	func_81(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_263_bool = !var_57_bool; //@nz
		if(var_263_bool == 0) goto Label_70;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_70:
	object var_264_object;
	var_48_object = var_264_object;
	func_1929();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2307(bool var_335_bool)
{
	int var_337_int;
	func_2154(var_337_int, "b5q01VeraDead");
	if(var_337_int != 0) {
		var_335_bool = true;
		return 0;
	}
	var_335_bool = false;
}


// @pe
void func_2319(bool var_325_bool)
{
	int var_327_int;
	func_2154(var_327_int, "b5q01_1");
	if(var_327_int == 0) {
		var_325_bool = true;
		return 0;
	}
	var_325_bool = false;
}


void func_787(object var_0_object, int var_365_int, object var_366_object)
{
	var_0_object = var_366_object;
	bool var_376_bool; object var_377_object;
	var_366_object = var_377_object;
	func_1860(var_376_bool, var_377_object, 70.0);
	if(!var_376_bool) { //@nz
		var_365_int = -2;
		return 8;
	}
	object var_372_object;
	@CreateDialog(var_372_object);
	int var_380_int;
	func_2231(var_380_int);
	var_372_object->SetNPCName(var_380_int);
	int var_381_int;
	func_2229(var_381_int);
	var_372_object->SetNPCDescription(var_381_int);
	string var_382_string;
	func_2233(var_382_string);
	var_372_object->SetPhoto(var_382_string);
	string var_383_string;
	func_2235(var_383_string);
	var_372_object->SetPhoto2(var_383_string);
	int var_384_int;
	func_2343(var_384_int);
	var_372_object->SetPlayerName(var_384_int);
	bool var_373_bool;
	@IsOverrideActive(var_373_bool);
	if(var_373_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	@DoDialog(var_372_object);
	bool var_386_bool; object var_387_object;
	object var_388_object;
	func_2138(var_388_object);
	var_388_object = var_387_object;
	func_1947(var_386_bool, var_387_object);
	object var_389_object; object var_390_object;
	var_366_object = var_389_object;
	var_372_object = var_390_object;
	TaskCall(5);
	func_868(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object);
	TaskReturn();
	bool var_375_bool;
	var_372_object->IsDialogEnd(var_375_bool);
	
	for(;;) {
		var_425_bool = !var_375_bool; //@nz
		if(var_425_bool == 0) goto Label_857;
		@sync();
		var_372_object->IsDialogEnd(var_375_bool);
	}
	
Label_857:
	object var_426_object;
	var_366_object = var_426_object;
	func_1929();
	@StopDialog(var_372_object);
	var_372_object->GetReturnValue(-1);
	int var_374_int = var_365_int;
}
EMIT "Stack[-4] = 0";


void func_1814(bool var_65_bool)
{
	var_65_bool = true;
}


void func_1816(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2331(bool var_341_bool)
{
	int var_343_int;
	func_2154(var_343_int, "b5q01_1");
	if(var_343_int == 1)
		var_341_bool = true;
	var_341_bool = false;
}


void func_1821(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_1569(object var_0_object)
{
	bool var_27_bool;
	func_1855(var_27_bool);
	if(!var_27_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1745();
	}
}
EMIT "Return(); Pop(0)";


void func_2085(string var_247_string)
{
	bool var_251_bool; float var_252_float; float var_253_float;
	@lshHasAnimation(var_251_bool, var_247_string);
	if(var_251_bool != 0) {
		@lshGetAnimTimes(var_247_string, var_252_float, var_253_float);
		@lshPlayAnimation(var_252_float, var_253_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_247_string);
	}
	
}


void func_1829(object var_49_object, string var_50_string, int var_51_int)
{
	int var_53_int;
	var_49_object->GetProperty(var_50_string, var_53_int);
	var_49_object->SetProperty(var_50_string, (var_53_int + var_51_int));
}


void func_2343(int var_110_int)
{
	int var_112_int;
	@GetVariable("branch", var_112_int);
	if(var_112_int == 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0x936";
	}
	if(var_112_int == 1) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
}


void func_1836(bool var_34_bool, cvector var_35_cvector)
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


void func_1583(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1846(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_307(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_300_object, object var_301_object)
{
	var_0_object = var_301_object;
	var_1_object = var_300_object;
	var_3_string = false;
	if(1 != 0) {
		func_398(var_301_object, "Fear");
		var_0_object->SetMessage(518646); //@t
		var_0_object->ClearReplies(); //@t
		bool var_316_bool = false;
		bool var_317_bool;
		func_2295(var_1_object);
		if(var_317_bool != 0) {
			bool var_325_bool;
			func_2319(var_1_object);
			if(var_325_bool != 0)
				var_316_bool = true;
		}
		if(var_316_bool != 0)
			var_0_object->AddReply(518647, 19740, 19739); //@t
		bool var_334_bool = false;
		bool var_335_bool;
		func_2307(var_1_object);
		if(var_335_bool != 0) {
			bool var_341_bool;
			func_2331(var_1_object);
			if(var_341_bool != 0)
				var_334_bool = true;
		}
		if(var_334_bool != 0)
			var_0_object->AddReply(518651, 19744, 19743); //@t
		var_0_object->AddReply(518654, -1, 19746); //@t
		goto Label_368;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x137";
	}
Label_368:
	bool var_353_bool;
	func_2237(var_353_bool);
	if(var_353_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2085(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_397;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_397:
		return 0;

	}
	
}


void func_2101(string var_225_string, bool var_226_bool)
{
	bool var_232_bool; float var_233_float; float var_234_float;
	@lshHasAnimation(var_232_bool, var_225_string);
	if(var_232_bool != 0) {
		@lshGetAnimTimes(var_225_string, var_233_float, var_234_float);
		@lshPlayAnimation(var_233_float, var_234_float, var_226_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_225_string);
	}
	
}


void func_1846(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1836(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


// @pe
void func_2360(object var_44_object)
{
	var_45_bool = GlobalVars[1];
	if(!var_45_bool) { //@nz
		int var_47_int; object var_48_object;
		var_44_object = var_48_object;
		TaskCall(0);
		func_0(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_272_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_273_bool;
	func_2199(var_273_bool, 5);
	if(var_273_bool != 0) {
		int var_276_int; object var_277_object;
		var_44_object = var_277_object;
		TaskCall(2);
		func_226(var_278_object, var_276_int, var_277_object);
		TaskReturn();
		return 0;
	}
	bool var_363_bool;
	func_2199(var_363_bool, 6);
	if(var_363_bool != 0) {
		int var_365_int; object var_366_object;
		var_44_object = var_366_object;
		TaskCall(4);
		func_787(var_367_object, var_365_int, var_366_object);
		TaskReturn();
		return 0;
	}
	bool var_427_bool = false;
	bool var_428_bool;
	func_2199(var_428_bool, 12);
	if(var_428_bool != 0) {
		var_430_bool = GlobalVars[2];
		if(!var_430_bool) //@nz
			var_427_bool = true;
	}
	if(var_427_bool != 0) {
		int var_432_int; object var_433_object;
		var_44_object = var_433_object;
		TaskCall(6);
		func_1100(var_434_object, var_432_int, var_433_object);
		TaskReturn();
		var_491_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_492_int; object var_493_object;
	var_44_object = var_493_object;
	TaskCall(8);
	func_1359(var_494_object, var_492_int, var_493_object);
	TaskReturn();
}


void func_1598(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_1855(bool var_27_bool)
{
	bool var_29_bool;
	@IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
}


void func_1603(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1821(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_1860(bool var_58_bool, object var_59_object, float var_60_float)
{
	cvector var_71_cvector; bool var_78_bool;
	var_59_object->GetPosition(var_71_cvector);
	float var_70_float;
	var_59_object->GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	SetByIndex(var_71_cvector, 1) = (var_79_float + var_70_float);
	cvector var_72_cvector;
	@GetPosition(var_72_cvector);
	@GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (var_80_float + var_70_float);
	cvector var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_83_float = sqrt(var_73_cvector | var_73_cvector);
	var_73_cvector /= var_83_float;
	cvector var_74_cvector = -var_73_cvector;
	cvector var_85_cvector;
	func_2144(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_75_cvector = ((var_73_cvector * var_60_float) + (var_85_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_77_bool;
	@IsOverrideActive(var_77_bool);
	if(var_77_bool != 0)
		var_58_bool = false;
	@StopWorld();
	@CameraTransit((var_72_cvector + var_75_cvector), var_74_cvector, true);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	@Rotate(var_99_float, var_100_float);
	bool var_101_bool;
	func_2237(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_1923;
		@LookAsyncCamera("head");
	}
Label_1923:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


void func_2116(bool var_153_bool, string var_154_string)
{
	bool var_156_bool;
	bool var_157_bool;
	func_2237(var_157_bool);
	if(var_157_bool != 0) {
		@lshHasSpeech(var_156_bool, var_154_string);
		if(var_156_bool != 0) {
			@lshPlaySpeech(var_154_string);
			var_153_bool = true;
		}
	}
	var_153_bool = false;
}


void func_1100(object var_0_object, int var_432_int, object var_433_object)
{
	var_0_object = var_433_object;
	bool var_443_bool; object var_444_object;
	var_433_object = var_444_object;
	func_1860(var_443_bool, var_444_object, 70.0);
	if(!var_443_bool) { //@nz
		var_432_int = -2;
		return 8;
	}
	object var_439_object;
	@CreateDialog(var_439_object);
	int var_447_int;
	func_2231(var_447_int);
	var_439_object->SetNPCName(var_447_int);
	int var_448_int;
	func_2229(var_448_int);
	var_439_object->SetNPCDescription(var_448_int);
	string var_449_string;
	func_2233(var_449_string);
	var_439_object->SetPhoto(var_449_string);
	string var_450_string;
	func_2235(var_450_string);
	var_439_object->SetPhoto2(var_450_string);
	int var_451_int;
	func_2343(var_451_int);
	var_439_object->SetPlayerName(var_451_int);
	bool var_440_bool;
	@IsOverrideActive(var_440_bool);
	if(var_440_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	@DoDialog(var_439_object);
	bool var_453_bool; object var_454_object;
	object var_455_object;
	func_2138(var_455_object);
	var_455_object = var_454_object;
	func_1947(var_453_bool, var_454_object);
	object var_456_object; object var_457_object;
	var_433_object = var_456_object;
	var_439_object = var_457_object;
	TaskCall(7);
	func_1181(var_458_object, var_459_object, var_460_string, var_461_bool, var_456_object, var_457_object);
	TaskReturn();
	bool var_442_bool;
	var_439_object->IsDialogEnd(var_442_bool);
	
	for(;;) {
		var_489_bool = !var_442_bool; //@nz
		if(var_489_bool == 0) goto Label_1170;
		@sync();
		var_439_object->IsDialogEnd(var_442_bool);
	}
	
Label_1170:
	object var_490_object;
	var_433_object = var_490_object;
	func_1929();
	@StopDialog(var_439_object);
	var_439_object->GetReturnValue(-1);
	int var_441_int = var_432_int;
}
EMIT "Stack[-4] = 0";


void func_1359(object var_0_object, int var_492_int, object var_493_object)
{
	var_0_object = var_493_object;
	bool var_503_bool; object var_504_object;
	var_493_object = var_504_object;
	func_1860(var_503_bool, var_504_object, 70.0);
	if(!var_503_bool) { //@nz
		var_492_int = -2;
		return 8;
	}
	object var_499_object;
	@CreateDialog(var_499_object);
	int var_507_int;
	func_2231(var_507_int);
	var_499_object->SetNPCName(var_507_int);
	int var_508_int;
	func_2229(var_508_int);
	var_499_object->SetNPCDescription(var_508_int);
	string var_509_string;
	func_2233(var_509_string);
	var_499_object->SetPhoto(var_509_string);
	string var_510_string;
	func_2235(var_510_string);
	var_499_object->SetPhoto2(var_510_string);
	int var_511_int;
	func_2343(var_511_int);
	var_499_object->SetPlayerName(var_511_int);
	bool var_500_bool;
	@IsOverrideActive(var_500_bool);
	if(var_500_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	@DoDialog(var_499_object);
	bool var_513_bool; object var_514_object;
	object var_515_object;
	func_2138(var_515_object);
	var_515_object = var_514_object;
	func_1947(var_513_bool, var_514_object);
	object var_516_object; object var_517_object;
	var_493_object = var_516_object;
	var_499_object = var_517_object;
	TaskCall(9);
	func_1440(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object);
	TaskReturn();
	bool var_502_bool;
	var_499_object->IsDialogEnd(var_502_bool);
	
	for(;;) {
		var_546_bool = !var_502_bool; //@nz
		if(var_546_bool == 0) goto Label_1429;
		@sync();
		var_499_object->IsDialogEnd(var_502_bool);
	}
	
Label_1429:
	object var_547_object;
	var_493_object = var_547_object;
	func_1929();
	@StopDialog(var_499_object);
	var_499_object->GetReturnValue(-1);
	int var_501_int = var_492_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_214_object, object var_215_object)
{
	var_0_object = var_215_object;
	var_1_object = var_214_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_215_object, "Neutral");
		var_0_object->SetMessage(517997); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(517998, 29658, 19131); //@t
		var_0_object->AddReply(528292, 29658, 29657); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_245_bool;
	func_2237(var_245_bool);
	if(var_245_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2085(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_2131(void)
{
	bool var_29_bool;
	func_2237(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_1625(void)
{
	float var_551_float;
	@rand(var_551_float, 8, 16);
	@SetTimer(10, var_551_float);
}


void func_2138(object var_121_object)
{
	object var_123_object;
	@self(var_123_object);
	var_123_object = var_121_object;
}
EMIT "Stack[-1] = 0";


void func_2144(cvector var_85_cvector, cvector var_86_cvector)
{
	float var_89_float = sqrt(var_86_cvector | var_86_cvector);
	if(var_89_float < 0.000001)
		var_85_cvector = [0.0, 0.0, 0.0];
	var_85_cvector = var_86_cvector / var_89_float;
}


void func_1634(void)
{
	@KillTimer(10);
}


// @pe
void func_868(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_389_object, object var_390_object)
{
	var_0_object = var_390_object;
	var_3_string = false;
	if(1 != 0) {
		func_931(var_390_object, "Neutral");
		var_0_object->SetMessage(530857); //@t
		var_0_object->ClearReplies(); //@t
		bool var_405_bool;
		func_2283(var_389_object);
		if(var_405_bool != 0)
			var_0_object->AddReply(530859, 32176, 32175); //@t
		var_0_object->AddReply(530858, -1, 32174); //@t
		goto Label_901;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x368";
	}
Label_901:
	bool var_417_bool;
	func_2237(var_417_bool);
	if(var_417_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2085(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_930;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_930:
		return 0;

	}
	
}


void func_2154(int var_319_int, string var_320_string)
{
	int var_322_int;
	@GetVariable(var_320_string, var_322_int);
	var_322_int = var_319_int;
}


void func_2159(int var_58_int, int var_59_int)
{
	object var_61_object;
	@CreateIntVector(var_61_object);
	var_61_object->add(var_58_int);
	var_61_object->add(var_59_int);
	@SendWorldWndMessage(3, var_61_object);
}
EMIT "Stack[-1] = 0";


void func_2171(object var_45_object, int var_46_int)
{
	int var_48_int;
	object var_49_object;
	var_45_object = var_49_object;
	int var_51_int;
	func_1829(var_49_object, "money", var_51_int);
	if(var_51_int > 0) {
		@GetInvItemByName(var_48_int, "Money");
		int var_58_int; int var_59_int;
		var_48_int = var_58_int;
		var_46_int = var_59_int;
		func_2159(var_58_int, var_59_int);
	}
}


void func_1929(void)
{
	bool var_266_bool;
	@CameraSwitchToNormal(true);
	bool var_268_bool;
	func_2237(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		@HasAnimationTrack(var_266_bool, "head");
		if(var_266_bool == 0) goto Label_1946;
		@UnlookAsync("head");
	}
Label_1946:
	
}


// @pe
void func_139(object var_2_object, string var_221_string)
{
	bool var_222_bool;
	func_2237(var_222_bool);
	if(!var_222_bool) //@nz
		return 0;
	if(var_221_string == var_2_object)
		return 0;
	string var_225_string; bool var_226_bool;
	var_221_string = var_225_string;
	if(var_221_string == "")
		var_226_bool = false;
	else
		var_226_bool = true;
	func_2101(var_225_string, var_226_bool);
	var_2_object = var_221_string;
	
}


// @pe
void func_398(object var_2_object, string var_307_string)
{
	bool var_308_bool;
	func_2237(var_308_bool);
	if(!var_308_bool) //@nz
		return 0;
	if(var_307_string == var_2_object)
		return 0;
	string var_311_string; bool var_312_bool;
	var_307_string = var_311_string;
	if(var_307_string == "")
		var_312_bool = false;
	else
		var_312_bool = true;
	func_2101(var_311_string, var_312_bool);
	var_2_object = var_307_string;
	
}


void func_2190(int var_174_int)
{
	float var_176_float;
	@GetGameTime(var_176_float);
	var_174_int = 1 + (var_176_float / 24);
}


// @pe
void func_2199(bool var_273_bool, int var_274_int)
{
	int var_275_int;
	func_2190(var_275_int);
	var_273_bool = var_275_int == var_274_int;
}


void func_1947(bool var_119_bool, object var_120_object)
{
	int var_126_int; int var_127_int;
	@GetVariable("voice_common", var_126_int);
	if(var_126_int != 0) {
		bool var_130_bool; object var_131_object;
		var_120_object = var_131_object;
		func_2005(var_130_bool, var_131_object);
		if(!var_130_bool) { //@nz
			bool var_161_bool; object var_162_object;
			var_120_object = var_162_object;
			func_2042(var_161_bool, var_162_object);
			if(!var_161_bool) { //@nz
				var_119_bool = false;
				return 4;
			}
		}
		@irand(var_127_int, 2);
		if(var_127_int != 0)
			@SetVariable("voice_common", ((var_126_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_206_bool; object var_207_object;
		var_120_object = var_207_object;
		func_2042(var_206_bool, var_207_object);
		if(!var_206_bool) { //@nz
			bool var_209_bool; object var_210_object;
			var_120_object = var_210_object;
			func_2005(var_209_bool, var_210_object);
			if(!var_209_bool) { //@nz
				var_119_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2003;
	
Label_2003:
	var_119_bool = true;
	
}


void func_2205(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


// @pe
void func_1181(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_456_object, object var_457_object)
{
	var_0_object = var_457_object;
	var_1_object = var_456_object;
	var_3_string = false;
	if(1 != 0) {
		func_1244(var_457_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_1214;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4a1";
	}
Label_1214:
	bool var_481_bool;
	func_2237(var_481_bool);
	if(var_481_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2085(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1243;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1243:
		return 0;

	}
	
}


// @pe
void func_1440(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_516_object, object var_517_object)
{
	var_0_object = var_517_object;
	var_1_object = var_516_object;
	var_3_string = false;
	if(1 != 0) {
		func_1498(var_517_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1468;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5a4";
	}
Label_1468:
	bool var_538_bool;
	func_2237(var_538_bool);
	if(var_538_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2085(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1497;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1497:
		return 0;

	}
	
}


// @pe
void func_931(object var_2_object, string var_396_string)
{
	bool var_397_bool;
	func_2237(var_397_bool);
	if(!var_397_bool) //@nz
		return 0;
	if(var_396_string == var_2_object)
		return 0;
	string var_400_string; bool var_401_bool;
	var_396_string = var_400_string;
	if(var_396_string == "")
		var_401_bool = false;
	else
		var_401_bool = true;
	func_2101(var_400_string, var_401_bool);
	var_2_object = var_396_string;
	
}


void func_2212(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_2205(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_2229(int var_107_int)
{
	var_107_int = 515530;
}


void func_2231(int var_106_int)
{
	var_106_int = 502856;
}


void func_2233(string var_108_string)
{
	var_108_string = "ui/NPC_Anna.png";
}


void func_2235(string var_109_string)
{
	var_109_string = "ui/NPC_Anna_b.png";
}


void func_2237(bool var_101_bool)
{
	var_101_bool = true;
}


// @pe
void func_2239(void)
{
	@SetVariable("b5q01_1", 1);
}


// @pe
void func_2245(void)
{
	@SetVariable("b5q01_1", 1000);
}


// @pe
void func_2251(object var_42_object)
{
	@Trace("money10000 is given");
	object var_45_object;
	var_42_object = var_45_object;
	func_2171(var_45_object, 10000);
}


void func_1745(void)
{
	bool var_39_bool; int var_40_int; int var_41_int; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_1855(var_43_bool);
	if(!var_43_bool) //@nz
		return 12;
	int var_45_int;
	func_2212(var_45_int);
	int var_37_int;
	var_45_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_38_int < 5) {
			bool var_61_bool;
			func_1855(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			if(!var_37_int) { //@nz
				@Sleep(3, var_39_bool);
				if(!var_39_bool) { //@nz
				} else {
			} else {
			@irand(var_40_int, var_37_int);
			@irand(var_41_int, 5);
			if(var_41_int != 0)
				var_40_int = 0;
			string var_72_string; int var_73_int;
			var_40_int = var_73_int;
			func_2205(var_72_string, var_73_int);
			@PlayAnimation("all", var_72_string);
			@WaitForAnimEnd(var_42_bool);
			var_74_bool = !var_42_bool; //@nz
			if(var_74_bool == 0) goto Label_1800;
			goto Label_1811;
			}
				Label_1800:
					bool var_65_bool;
					func_1814(var_65_bool);
					var_66_bool = !var_65_bool; //@nz
					if(var_66_bool == 0) goto Label_1806;
			}
		}
	Label_1811:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1806:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


// @pe
void func_2261(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_2005(bool var_130_bool, object var_131_object)
{
	string var_137_string; bool var_139_bool; int var_140_int; string var_141_string;
	var_137_string = "c";
	int var_138_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_131_object->HasProperty((var_137_string + (var_138_int + 1)), var_139_bool);
			if(!var_139_bool) { //@nz
			} else {
				var_138_int += 1;
			}
		}
		if(!var_138_int) { //@nz
			var_130_bool = false;
			return 10;
		}
		var_140_int = 0;
		if(var_138_int > 1)
			@irand(var_140_int, var_138_int);
		var_131_object->GetProperty((var_137_string + (var_140_int + 1)), var_141_string);
		bool var_153_bool; string var_154_string;
		var_141_string = var_154_string;
		func_2116(var_153_bool, var_154_string);
		var_153_bool = var_130_bool;
		return 10;

	}
}


// @pe
void func_1498(object var_2_object, string var_523_string)
{
	bool var_524_bool;
	func_2237(var_524_bool);
	if(!var_524_bool) //@nz
		return 0;
	if(var_523_string == var_2_object)
		return 0;
	string var_527_string; bool var_528_bool;
	var_523_string = var_527_string;
	if(var_523_string == "")
		var_528_bool = false;
	else
		var_528_bool = true;
	func_2101(var_527_string, var_528_bool);
	var_2_object = var_523_string;
	
}


// @pe
void func_2267(void)
{
	@SetVariable("oob6Anna1", 1);
}


// @pe
void func_1244(object var_2_object, string var_463_string)
{
	bool var_464_bool;
	func_2237(var_464_bool);
	if(!var_464_bool) //@nz
		return 0;
	if(var_463_string == var_2_object)
		return 0;
	string var_467_string; bool var_468_bool;
	var_463_string = var_467_string;
	if(var_463_string == "")
		var_468_bool = false;
	else
		var_468_bool = true;
	func_2101(var_467_string, var_468_bool);
	var_2_object = var_463_string;
	
}


// @pe
void func_2273(object var_71_object)
{
	@Trace("money3000 is given");
	object var_74_object;
	var_71_object = var_74_object;
	func_2171(var_74_object, 3000);
}


void func_226(object var_0_object, int var_276_int, object var_277_object)
{
	var_0_object = var_277_object;
	bool var_287_bool; object var_288_object;
	var_277_object = var_288_object;
	func_1860(var_287_bool, var_288_object, 70.0);
	if(!var_287_bool) { //@nz
		var_276_int = -2;
		return 8;
	}
	object var_283_object;
	@CreateDialog(var_283_object);
	int var_291_int;
	func_2231(var_291_int);
	var_283_object->SetNPCName(var_291_int);
	int var_292_int;
	func_2229(var_292_int);
	var_283_object->SetNPCDescription(var_292_int);
	string var_293_string;
	func_2233(var_293_string);
	var_283_object->SetPhoto(var_293_string);
	string var_294_string;
	func_2235(var_294_string);
	var_283_object->SetPhoto2(var_294_string);
	int var_295_int;
	func_2343(var_295_int);
	var_283_object->SetPlayerName(var_295_int);
	bool var_284_bool;
	@IsOverrideActive(var_284_bool);
	if(var_284_bool != 0) {
		var_276_int = -2;
		return 8;
	}
	@DoDialog(var_283_object);
	bool var_297_bool; object var_298_object;
	object var_299_object;
	func_2138(var_299_object);
	var_299_object = var_298_object;
	func_1947(var_297_bool, var_298_object);
	object var_300_object; object var_301_object;
	var_277_object = var_300_object;
	var_283_object = var_301_object;
	TaskCall(3);
	func_307(var_302_object, var_303_object, var_304_string, var_305_bool, var_300_object, var_301_object);
	TaskReturn();
	bool var_286_bool;
	var_283_object->IsDialogEnd(var_286_bool);
	
	for(;;) {
		var_361_bool = !var_286_bool; //@nz
		if(var_361_bool == 0) goto Label_296;
		@sync();
		var_283_object->IsDialogEnd(var_286_bool);
	}
	
Label_296:
	object var_362_object;
	var_277_object = var_362_object;
	func_1929();
	@StopDialog(var_283_object);
	var_283_object->GetReturnValue(-1);
	int var_285_int = var_276_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2283(bool var_405_bool)
{
	int var_407_int;
	func_2154(var_407_int, "oob6Anna1");
	if(var_407_int == 0) {
		var_405_bool = true;
		return 0;
	}
	var_405_bool = false;
}


// @pe
void func_2295(bool var_317_bool)
{
	int var_319_int;
	func_2154(var_319_int, "b5q01TalkToVera");
	if(var_319_int == 1)
		var_317_bool = true;
	var_317_bool = false;
}


void func_2042(bool var_161_bool, object var_162_object)
{
	bool var_170_bool; int var_171_int; string var_172_string;
	int var_174_int;
	func_2190(var_174_int);
	string var_168_string = ("d" + var_174_int) + "m";
	int var_169_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_162_object->HasProperty((var_168_string + (var_169_int + 1)), var_170_bool);
			if(!var_170_bool) { //@nz
			} else {
				var_169_int += 1;
			}
		}
		if(!var_169_int) { //@nz
			var_161_bool = false;
			return 10;
		}
		var_171_int = 0;
		if(var_169_int > 1)
			@irand(var_171_int, var_169_int);
		var_162_object->GetProperty((var_168_string + (var_171_int + 1)), var_172_string);
		bool var_193_bool; string var_194_string;
		var_172_string = var_194_string;
		func_2116(var_193_bool, var_194_string);
		var_193_bool = var_161_bool;
		return 10;

	}
}


