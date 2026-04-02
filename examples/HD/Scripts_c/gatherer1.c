task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, int var_19_int)
	{
		bool var_20_bool;
		func_1837(var_20_bool);
		if(var_20_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, int var_13_int, int var_14_int, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, int var_20_int)
	{
		if(1 != 0) {
			func_1490();
			if(var_20_int == 19266) {
				object var_25_object = var_1_object;
				func_1563(var_0_bool);
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_bool;
				func_1609();
			}
			if(var_20_int == 19269) {
				object var_48_object = var_1_object;
				func_1615(var_0_bool);
			}
			if(var_20_int == 19312) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_bool;
				func_1603();
			}
			if(var_19_bool == 19258) {
				bool var_59_bool = false;
				bool var_60_bool;
				func_1667(var_60_bool, var_1_object);
				if(!var_60_bool) { //@nz
					bool var_73_bool;
					func_1656(var_73_bool, var_1_object);
					if(!var_73_bool) //@nz
						var_59_bool = true;
				}
				if(var_59_bool != 0) {
					func_248(var_20_int, "Neutral");
					var_0_bool->SetMessage(518145); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518146, 19260, 19259); //@t
					var_0_bool->AddReply(529952, -1, 31336); //@t
					return 0;
				}
				bool var_107_bool = false;
				bool var_108_bool;
				func_1656(var_108_bool, var_1_object);
				if(var_108_bool != 0) {
					bool var_110_bool;
					func_1667(var_110_bool, var_1_object);
					if(!var_110_bool) //@nz
						var_107_bool = true;
				}
				if(var_107_bool != 0) {
					func_248(var_20_int, "Neutral");
					var_0_bool->SetMessage(518150); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518151, 19265, 19264); //@t
					return 0;
				}
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(518155); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518156, -1, 19269); //@t
				bool var_123_bool;
				func_1644(var_1_object);
				if(var_123_bool != 0)
					var_0_bool->AddReply(518199, 19313, 19312); //@t
				var_0_bool->AddReply(518157, -1, 19270); //@t
				return 0;
			}
			if(var_19_bool == 19313) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(518200); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534598, 36237, 36236); //@t
				var_0_bool->AddReply(518201, -1, 19314); //@t
				return 0;
			}
			if(var_19_bool == 36237) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(534599); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534600, -1, 36238); //@t
				var_0_bool->AddReply(534601, 36240, 36239); //@t
				return 0;
			}
			if(var_19_bool == 36240) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(534602); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534603, -1, 36241); //@t
				var_0_bool->AddReply(534604, -1, 36242); //@t
				return 0;
			}
			if(var_19_bool == 19265) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(518152); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518153, -1, 19266); //@t
				var_0_bool->AddReply(518154, -1, 19267); //@t
				return 0;
			}
			if(var_19_bool == 19260) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(518147); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529953, 31339, 31337); //@t
				var_0_bool->AddReply(529954, -1, 31338); //@t
				return 0;
			}
			if(var_19_bool == 31339) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(529955); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518148, -1, 19261); //@t
				var_0_bool->AddReply(518162, -1, 19275); //@t
				return 0;
			}
			var_3_object = true;
			bool var_197_bool;
			func_1837(var_197_bool);
			if(var_197_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10f";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, int var_13_int, int var_14_int, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, int var_20_int)
	{
		if(1 != 0) {
			func_1490();
			if(var_20_int == 26755) {
				object var_25_object; object var_26_object;
				var_25_object = var_1_object;
				var_26_object = var_0_bool;
				func_1578();
			}
			if(var_20_int == 40957) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_bool;
				func_1584();
			}
			if(var_20_int == 40958) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_bool;
				func_1584();
			}
			if(var_20_int == 40959) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_bool;
				func_1584();
			}
			if(var_20_int == 26757) {
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_bool;
				func_1584();
			}
			if(var_19_bool == 26753) {
				func_706(var_20_int, "Neutral");
				var_0_bool->SetMessage(525385); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_104_bool = false;
				bool var_105_bool;
				func_1620(var_1_object);
				if(var_105_bool != 0) {
					bool var_113_bool;
					func_1632(var_1_object);
					if(var_113_bool != 0)
						var_104_bool = true;
				}
				if(var_104_bool != 0)
					var_0_bool->AddReply(525387, 40946, 26755); //@t
				var_0_bool->AddReply(539023, -1, 40966); //@t
				var_0_bool->AddReply(539024, -1, 40967); //@t
				return 0;
			}
			if(var_19_bool == 40946) {
				func_706(var_20_int, "Neutral");
				var_0_bool->SetMessage(539004); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539005, 40948, 40947); //@t
				var_0_bool->AddReply(539022, 40948, 40964); //@t
				return 0;
			}
			if(var_19_bool == 40948) {
				func_706(var_20_int, "Neutral");
				var_0_bool->SetMessage(539006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539007, 40950, 40949); //@t
				return 0;
			}
			if(var_19_bool == 40950) {
				func_706(var_20_int, "Neutral");
				var_0_bool->SetMessage(539008); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539009, 40952, 40951); //@t
				var_0_bool->AddReply(539021, -1, 40963); //@t
				return 0;
			}
			if(var_19_bool == 40952) {
				func_706(var_20_int, "Neutral");
				var_0_bool->SetMessage(539010); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539011, 40954, 40953); //@t
				var_0_bool->AddReply(539018, 40961, 40960); //@t
				return 0;
			}
			if(var_19_bool == 40961) {
				func_706(var_20_int, "Neutral");
				var_0_bool->SetMessage(539019); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525389, -1, 26757); //@t
				return 0;
			}
			if(var_19_bool == 40954) {
				func_706(var_20_int, "Neutral");
				var_0_bool->SetMessage(539012); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539013, 40956, 40955); //@t
				var_0_bool->AddReply(539017, -1, 40959); //@t
				return 0;
			}
			if(var_19_bool == 40956) {
				func_706(var_20_int, "Neutral");
				var_0_bool->SetMessage(539014); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539015, -1, 40957); //@t
				var_0_bool->AddReply(539016, -1, 40958); //@t
				return 0;
			}
			var_3_object = true;
			bool var_192_bool;
			func_1837(var_192_bool);
			if(var_192_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2d9";
	
	}

}


maintask task_5
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int)
	{
		int var_19_int;
		func_1530(var_19_int);
		var_7_object = var_19_int;
		func_1760();
		func_1061(var_18_int, (float)300, (float)100);
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, object var_19_object)
	{
		int var_20_int; int var_21_int;
		func_1195(var_20_int, var_21_int);
		int var_25_int;
		func_1823(var_25_int);
		if(var_25_int == 1) {
			int var_31_int; object var_32_object;
			var_19_object = var_32_object;
			TaskCall(1);
			func_40(var_33_object, var_31_int, var_32_object);
			TaskReturn();
			var_33_object = var_21_int;
		} else {
				int var_262_int;
				func_1823(var_262_int);
				if(!(var_262_int == 2)) goto Label_1025;
				int var_265_int; object var_266_object;
				var_19_object = var_266_object;
				TaskCall(3);
				func_555(var_267_object, var_265_int, var_266_object);
				TaskReturn();
				var_267_object = var_21_int;
		}
		for(;;) {
			if(1000 == var_21_int) {
				bool var_222_bool; object var_223_object;
				var_19_object = var_223_object;
				func_1395(var_222_bool, var_223_object, 110.0);
				if(!var_222_bool) //@nz
					return 2;
				object var_253_object;
				var_19_object = var_253_object;
				TaskCall(0);
				func_0(var_253_object);
				TaskReturn();
				object var_260_object;
				var_19_object = var_260_object;
				func_1443();
			}
			return 2;

		}
	
	Label_1025:
	}

	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int)
	{
		int var_19_int;
		func_1530(var_19_int);
		if(var_7_object != var_19_int) {
			func_1760();
			int var_48_int;
			func_1530(var_48_int);
			var_7_object = var_48_int;
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, string var_19_string)
	{
		if(var_19_string == "cleanup")
			func_1079(var_19_string);
	}

	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int)
	{
		if(var_6_object != 0)
			func_1195(var_17_bool, var_18_int);
		bool var_23_bool = false;
		if(var_5_bool != 0) {
			bool var_25_bool;
			func_1128(var_25_bool);
			if(var_25_bool != 0)
				var_23_bool = true;
		}
		if(var_23_bool != 0) {
			object var_26_object;
			func_1497(var_26_object);
			@RemoveActor(var_26_object);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, int var_19_int)
	{
		if(var_19_int == 10) {
			bool var_22_bool;
			func_1157(var_17_bool, var_18_int, var_19_int, var_22_bool);
			if(var_22_bool != 0) {
				if(!var_2_object) { //@nz
					func_1479(var_4_string);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_255_bool;
		func_1837(var_255_bool);
		if(var_255_bool == 0) goto Label_15;
		func_1448("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_1539(string var_87_string, int var_88_int)
{
	string var_90_string = "idle";
	if(var_88_int != 0)
		var_90_string += var_88_int;
	var_90_string = var_87_string;
}


// @pe
void func_1667(bool var_111_bool, object var_112_object)
{
	object var_114_object;
	var_112_object = var_114_object;
	func_1677(var_114_object);
	bool var_113_bool;
	if(var_113_bool != 0) {
		var_111_bool = true;
		return 0;
	}
	var_111_bool = false;
}


void func_1157(bool var_0_bool, object var_1_object, string var_4_string, bool var_22_bool)
{
	if(var_4_string == null)
		var_22_bool = false;
	float var_26_float;
	func_1295(var_26_float, var_4_string);
	float var_24_float = sqrt(var_26_float);
	if(var_2_object != 0)
		var_24_float -= var_1_object;
	var_22_bool = var_24_float < var_0_bool;
}


void func_1288(bool var_106_bool)
{
	var_106_bool = true;
}


void func_1801(int var_32_int, string var_33_string)
{
	int var_35_int;
	@GetInvItemByName(var_35_int, var_33_string);
	var_35_int = var_32_int;
}


void func_1290(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1546(int var_81_int)
{
	int var_84_int; bool var_85_bool;
	var_84_int = 0;
	
	for(;;) {
		string var_87_string; int var_88_int;
		var_84_int = var_88_int;
		func_1539(var_87_string, var_88_int);
		@HasAnimation(var_85_bool, "all", var_87_string);
		if(!var_85_bool) //@nz
			break;
		var_84_int += 1;
	}
	var_84_int = var_81_int;
}


void func_1677(bool var_113_bool)
{
	int var_119_int;
	func_1530(var_119_int);
	int var_117_int;
	var_119_int = var_117_int;
	int var_118_int;
	@GetVariable(("Gatherer1_" + var_117_int), var_118_int);
	var_113_bool = var_118_int != 0;
}


void func_1806(int var_94_int)
{
	int var_96_int;
	@GetVariable("branch", var_96_int);
	if(var_96_int == 0) {
		var_94_int = 1;
		return 2;
	EMIT "GOTO 0x71d";
	}
	if(var_96_int == 1) {
		var_94_int = 2;
		return 2;
	}
	var_94_int = 3;
}


void func_1295(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


void func_1303(bool var_58_bool)
{
	bool var_60_bool;
	@IsLoaded(var_60_bool);
	var_60_bool = var_58_bool;
}


void func_1689(void)
{
	object var_50_object;
	@CreateDiaryEntry(var_50_object, 511, 2, 529710);
	bool var_54_bool; object var_55_object;
	var_50_object = var_55_object;
	func_1715(var_54_bool, var_55_object, 507);
}
EMIT "Stack[-1] = 0";


void func_1563(object var_25_object)
{
	int var_31_int;
	func_1530(var_31_int);
	int var_29_int;
	var_31_int = var_29_int;
	@SetVariable(("Gatherer1_" + var_29_int), 1);
	int var_30_int;
	var_25_object->RemoveItemByType(var_30_int, "blood", 1);
}


void func_1308(bool var_42_bool, object var_43_object, float var_44_float)
{
	cvector var_55_cvector; bool var_62_bool;
	var_43_object->GetPosition(var_55_cvector);
	float var_54_float;
	var_43_object->GetEyesHeight(var_54_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	SetByIndex(var_55_cvector, 1) = (var_63_float + var_54_float);
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	@GetEyesHeight(var_54_float);
	var_64_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_64_float + var_54_float);
	cvector var_57_cvector = var_55_cvector - var_56_cvector;
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (float)0;
	var_67_float = sqrt(var_57_cvector | var_57_cvector);
	var_57_cvector /= var_67_float;
	cvector var_58_cvector = -var_57_cvector;
	cvector var_69_cvector;
	func_1503(var_69_cvector, (var_58_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_59_cvector = ((var_57_cvector * var_44_float) + (var_69_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0)
		var_42_bool = false;
	@StopWorld();
	@CameraTransit((var_56_cvector + var_59_cvector), var_58_cvector, true);
	var_83_float = GetByIndex(var_59_cvector, 0);
	var_84_float = GetByIndex(var_59_cvector, 2);
	@Rotate(var_83_float, var_84_float);
	bool var_85_bool;
	func_1837(var_85_bool);
	if(var_85_bool != 0) {
	} else {
		@HasAnimationTrack(var_62_bool, "head");
		if(var_62_bool == 0) goto Label_1371;
		@LookAsyncCamera("head");
	}
Label_1371:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_42_bool = true;
	
}


void func_1823(int var_25_int)
{
	int var_27_int;
	@GetVariable("branch", var_27_int);
	var_27_int = var_25_int;
}


// @pe
void func_1443(void)
{
	@CameraSwitchToNormal(true);
}


void func_1829(int var_91_int)
{
	var_91_int = 521048;
}


void func_1061(object var_6_object, float var_47_float, float var_48_float)
{
	float var_49_float; bool var_50_bool; float var_51_float; bool var_52_bool;
	var_6_object = false;
	
	for(;;) {
		@rand(var_51_float, 3);
		@Sleep((var_51_float + 3), var_52_bool);
		var_6_object = true;
		float var_56_float; float var_57_float;
		var_47_float = var_56_float;
		func_1130(var_57_float, var_49_float, var_50_bool, var_51_float, var_52_bool, var_56_float, var_57_float);
		var_6_object = false;
	}
}
EMIT "Return(); Pop(4)";


void func_1831(int var_90_int)
{
	var_90_int = 521047;
}


void func_1448(string var_165_string)
{
	bool var_169_bool; float var_170_float; float var_171_float;
	@lshHasAnimation(var_169_bool, var_165_string);
	if(var_169_bool != 0) {
		@lshGetAnimTimes(var_165_string, var_170_float, var_171_float);
		@lshPlayAnimation(var_170_float, var_171_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_165_string);
	}
	
}


void func_1833(string var_92_string)
{
	var_92_string = "ui/NPC_Morlok.png";
}


// @pe
void func_1578(void)
{
	@SetVariable("ookGatherer1", 1);
}


void func_1835(string var_93_string)
{
	var_93_string = "ui/NPC_Morlok_b.png";
}


// @pe
void func_1195(object var_2_object, object var_3_object)
{
	func_1290();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_object = true;
}


void func_1837(bool var_85_bool)
{
	var_85_bool = false;
}


void func_40(bool var_0_bool, int var_31_int, object var_32_object)
{
	var_0_bool = var_32_object;
	bool var_42_bool; object var_43_object;
	var_32_object = var_43_object;
	func_1308(var_42_bool, var_43_object, 110.0);
	if(!var_42_bool) { //@nz
		var_31_int = -2;
		return 8;
	}
	object var_38_object;
	@CreateDialog(var_38_object);
	int var_90_int;
	func_1831(var_90_int);
	var_38_object->SetNPCName(var_90_int);
	int var_91_int;
	func_1829(var_91_int);
	var_38_object->SetNPCDescription(var_91_int);
	string var_92_string;
	func_1833(var_92_string);
	var_38_object->SetPhoto(var_92_string);
	string var_93_string;
	func_1835(var_93_string);
	var_38_object->SetPhoto2(var_93_string);
	int var_94_int;
	func_1806(var_94_int);
	var_38_object->SetPlayerName(var_94_int);
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	@DoDialog(var_38_object);
	object var_103_object; object var_104_object;
	var_32_object = var_103_object;
	var_38_object = var_104_object;
	TaskCall(2);
	func_114(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object);
	TaskReturn();
	bool var_41_bool;
	var_38_object->IsDialogEnd(var_41_bool);
	
	for(;;) {
		var_211_bool = !var_41_bool; //@nz
		if(var_211_bool == 0) goto Label_103;
		@sync();
		var_38_object->IsDialogEnd(var_41_bool);
	}
	
Label_103:
	object var_212_object;
	var_32_object = var_212_object;
	func_1377();
	@StopDialog(var_38_object);
	var_38_object->GetReturnValue(-1);
	int var_40_int = var_31_int;
}
EMIT "Stack[-4] = 0";


void func_555(bool var_0_bool, int var_265_int, object var_266_object)
{
	var_0_bool = var_266_object;
	bool var_276_bool; object var_277_object;
	var_266_object = var_277_object;
	func_1308(var_276_bool, var_277_object, 110.0);
	if(!var_276_bool) { //@nz
		var_265_int = -2;
		return 8;
	}
	object var_272_object;
	@CreateDialog(var_272_object);
	int var_280_int;
	func_1831(var_280_int);
	var_272_object->SetNPCName(var_280_int);
	int var_281_int;
	func_1829(var_281_int);
	var_272_object->SetNPCDescription(var_281_int);
	string var_282_string;
	func_1833(var_282_string);
	var_272_object->SetPhoto(var_282_string);
	string var_283_string;
	func_1835(var_283_string);
	var_272_object->SetPhoto2(var_283_string);
	int var_284_int;
	func_1806(var_284_int);
	var_272_object->SetPlayerName(var_284_int);
	bool var_273_bool;
	@IsOverrideActive(var_273_bool);
	if(var_273_bool != 0) {
		var_265_int = -2;
		return 8;
	}
	@DoDialog(var_272_object);
	object var_286_object; object var_287_object;
	var_266_object = var_286_object;
	var_272_object = var_287_object;
	TaskCall(4);
	func_629(var_288_object, var_289_object, var_290_string, var_291_bool, var_286_object, var_287_object);
	TaskReturn();
	bool var_275_bool;
	var_272_object->IsDialogEnd(var_275_bool);
	
	for(;;) {
		var_332_bool = !var_275_bool; //@nz
		if(var_332_bool == 0) goto Label_618;
		@sync();
		var_272_object->IsDialogEnd(var_275_bool);
	}
	
Label_618:
	object var_333_object;
	var_266_object = var_333_object;
	func_1377();
	@StopDialog(var_272_object);
	var_272_object->GetReturnValue(-1);
	int var_274_int = var_265_int;
}
EMIT "Stack[-4] = 0";


void func_1584(void)
{
	object var_35_object;
	func_1743(var_35_object);
	object var_34_object;
	var_35_object = var_34_object;
	float var_46_float;
	func_1525(var_46_float);
	var_34_object->AddMark("k2q04MorlokGotoAndrei", "pt_map_andrei", 0, 539378, var_46_float);
	func_1689();
}
EMIT "Stack[-1] = 0";


void func_1715(bool var_54_bool, object var_55_object, int var_56_int)
{
	object var_63_object;
	func_1702(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	object var_61_object;
	var_60_object->Find(var_56_int, var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_56_int);
		var_54_bool = false;
	}
	var_61_object->AddChild(var_55_object);
	@SendWorldWndMessage(7);
	int var_62_int;
	var_55_object->GetCategory(var_62_int);
	@SetDiarySection(var_62_int);
	var_54_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1079(bool var_5_bool)
{
	var_5_bool = true;
	bool var_22_bool = false;
	bool var_23_bool;
	func_1303(var_23_bool);
	if(!var_23_bool) { //@nz
		bool var_27_bool;
		func_1128(var_27_bool);
		if(var_27_bool != 0)
			var_22_bool = true;
	}
	if(var_22_bool != 0) {
		object var_28_object;
		func_1497(var_28_object);
		@RemoveActor(var_28_object);
	}
}


void func_1464(string var_143_string, bool var_144_bool)
{
	bool var_150_bool; float var_151_float; float var_152_float;
	@lshHasAnimation(var_150_bool, var_143_string);
	if(var_150_bool != 0) {
		@lshGetAnimTimes(var_143_string, var_151_float, var_152_float);
		@lshPlayAnimation(var_151_float, var_152_float, var_144_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_143_string);
	}
	
}


void func_1209(void)
{
	int var_74_int; int var_75_int; bool var_76_bool; float var_77_float; bool var_78_bool;
	@WaitForAnimEnd();
	bool var_79_bool;
	func_1303(var_79_bool);
	if(!var_79_bool) //@nz
		return 14;
	int var_81_int;
	func_1546(var_81_int);
	int var_72_int;
	var_81_int = var_72_int;
	int var_73_int = 0;
	
	for(;;) {
		bool var_94_bool = false;
		if(var_73_int < 5) {
			bool var_97_bool;
			func_1303(var_97_bool);
			if(var_97_bool != 0)
				var_94_bool = true;
		}
		if(var_94_bool != 0) {
			@irand(var_74_int, 3);
			if(var_74_int == 0) {
				if(var_72_int == 0) goto Label_1256;
				@irand(var_75_int, var_72_int);
				string var_103_string; int var_104_int;
				var_75_int = var_104_int;
				func_1539(var_103_string, var_104_int);
				@PlayAnimation("all", var_103_string);
				@WaitForAnimEnd(var_76_bool);
				if(!var_76_bool) { //@nz
				} else {
			} else {
			if(var_74_int == 1) {
				@rand(var_77_float, 4);
				@Sleep((var_77_float + 1), var_78_bool);
				if(!var_78_bool) { //@nz
					goto Label_1285;
				}
			} else if(var_73_int != 0) {
				goto Label_1285;
			}
			}
					bool var_106_bool;
					func_1288(var_106_bool);
					var_107_bool = !var_106_bool; //@nz
					if(var_107_bool == 0) goto Label_1280;
			}
		}
	Label_1285:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1280:
		@ResetAAS();
		var_73_int += 1;
	}
	
}


// @pe
void func_706(object var_2_object, string var_293_string)
{
	bool var_294_bool;
	func_1837(var_294_bool);
	if(!var_294_bool) //@nz
		return 0;
	if(var_293_string == var_2_object)
		return 0;
	string var_297_string; bool var_298_bool;
	var_293_string = var_297_string;
	if(var_293_string == "")
		var_298_bool = false;
	else
		var_298_bool = true;
	func_1464(var_297_string, var_298_bool);
	var_2_object = var_293_string;
	
}


// @pe
void func_1603(void)
{
	@SetVariable("oobSysGatherer1_1", 1);
}


void func_1479(object var_36_object)
{
	float var_39_float;
	var_36_object->GetEyesHeight(var_39_float);
	cvector var_40_cvector = [0.0, 0.0, 0.0];
	var_41_float = GetByIndex(var_40_cvector, 1);
	var_39_float = var_41_float;
	SetByIndex(var_40_cvector, 1) = var_41_float;
	@LookAsync(var_36_object, "head", var_40_cvector);
}


// @pe
void func_1609(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1615(object var_49_object)
{
	var_49_object->SetReturnValue(1000);
}


void func_1743(object var_35_object)
{
	object var_38_object; object var_39_object;
	@GetMainOutdoorScene(var_38_object);
	if(var_38_object == null) {
		@Trace("Can't find main outdoor scene");
		var_39_object = null;
		var_39_object = var_35_object;
	}
	var_38_object->GetMap(var_39_object);
	var_39_object = var_35_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1490(void)
{
	bool var_22_bool;
	func_1837(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1620(bool var_303_bool)
{
	int var_305_int;
	func_1513(var_305_int, "k2q04");
	if(var_305_int == 2)
		var_303_bool = true;
	var_303_bool = false;
}


void func_1497(object var_26_object)
{
	object var_28_object;
	@self(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_1503(cvector var_69_cvector, cvector var_70_cvector)
{
	float var_73_float = sqrt(var_70_cvector | var_70_cvector);
	if(var_73_float < 0.000001)
		var_69_cvector = [0.0, 0.0, 0.0];
	var_69_cvector = var_70_cvector / var_73_float;
}


// @pe
void func_1632(bool var_309_bool)
{
	int var_311_int;
	func_1513(var_311_int, "ookGatherer1");
	if(var_311_int == 0) {
		var_309_bool = true;
		return 0;
	}
	var_309_bool = false;
}


void func_1377(void)
{
	bool var_214_bool;
	@CameraSwitchToNormal(true);
	bool var_216_bool;
	func_1837(var_216_bool);
	if(var_216_bool != 0) {
	} else {
		@HasAnimationTrack(var_214_bool, "head");
		if(var_214_bool == 0) goto Label_1394;
		@UnlookAsync("head");
	}
Label_1394:
	
}


void func_1760(void)
{
	@ClearSubContainer(0);
	int var_28_int;
	@irand(var_28_int, 15);
	var_28_int += 5;
	int var_32_int;
	func_1801(var_32_int, "grass_black_tvir");
	bool var_27_bool;
	@AddItem(var_27_bool, var_32_int, 0, var_28_int);
	@irand(var_28_int, 15);
	var_28_int += 5;
	int var_39_int;
	func_1801(var_39_int, "grass_blood_tvir");
	@AddItem(var_27_bool, var_39_int, 0, var_28_int);
	@irand(var_28_int, 15);
	int var_44_int;
	func_1801(var_44_int, "grass_brown_tvir");
	@AddItem(var_27_bool, var_44_int, 0, (var_28_int + 5));
}


// @pe
void func_248(object var_2_object, string var_139_string)
{
	bool var_140_bool;
	func_1837(var_140_bool);
	if(!var_140_bool) //@nz
		return 0;
	if(var_139_string == var_2_object)
		return 0;
	string var_143_string; bool var_144_bool;
	var_139_string = var_143_string;
	if(var_139_string == "")
		var_144_bool = false;
	else
		var_144_bool = true;
	func_1464(var_143_string, var_144_bool);
	var_2_object = var_139_string;
	
}


void func_1128(bool var_25_bool)
{
	var_25_bool = true;
}


void func_1513(int var_199_int, string var_200_string)
{
	int var_202_int;
	@GetVariable(var_200_string, var_202_int);
	var_202_int = var_199_int;
}


// @pe
void func_1130(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, float var_56_float, float var_57_float)
{
	bool var_58_bool;
	func_1303(var_58_bool);
	if(!var_58_bool) //@nz
		return 0;
	@FindActor(var_4_string, "player");
	var_2_object = false;
	var_0_bool = var_56_float;
	var_1_object = var_57_float;
	@SetTimer(10, 1.0);
	func_1209();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1644(bool var_197_bool)
{
	int var_199_int;
	func_1513(var_199_int, "oobSysGatherer1_1");
	if(var_199_int == 0) {
		var_197_bool = true;
		return 0;
	}
	var_197_bool = false;
}


void func_1518(bool var_131_bool, object var_132_object, string var_133_string)
{
	int var_136_int;
	@GetInvItemByName(var_136_int, var_133_string);
	bool var_137_bool;
	var_132_object->HasItem(var_136_int, var_137_bool);
	var_137_bool = var_131_bool;
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_103_object, object var_104_object)
{
	var_0_bool = var_104_object;
	var_1_object = var_103_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_110_bool = false;
		bool var_111_bool;
		func_1667(var_111_bool, var_1_object);
		if(!var_111_bool) { //@nz
			bool var_129_bool;
			func_1656(var_129_bool, var_1_object);
			if(!var_129_bool) //@nz
				var_110_bool = true;
		}
		if(var_110_bool != 0) {
			func_248(var_104_object, "Neutral");
			var_0_bool->SetMessage(518145); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(518146, 19260, 19259); //@t
			var_0_bool->AddReply(529952, -1, 31336); //@t
		} else {
					bool var_181_bool = false;
					bool var_182_bool;
					func_1656(var_182_bool, var_1_object);
					if(var_182_bool != 0) {
						bool var_184_bool;
						func_1667(var_184_bool, var_1_object);
						if(!var_184_bool) //@nz
							var_181_bool = true;
					}
					if(var_181_bool == 0) goto Label_186;
					func_248(var_104_object, "Neutral");
					var_0_bool->SetMessage(518150); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518151, 19265, 19264); //@t
		}
	}
Label_218:
	for(;;) {
		bool var_163_bool;
		func_1837(var_163_bool);
		if(var_163_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1448(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_247;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_247:
			return 0;

		}

	}
	
Label_186:
	func_248(var_104_object, "Neutral");
	var_0_bool->SetMessage(518155); //@t
	var_0_bool->ClearReplies(); //@t
	var_0_bool->AddReply(518156, -1, 19269); //@t
	bool var_197_bool;
	func_1644(var_1_object);
	if(var_197_bool != 0)
		var_0_bool->AddReply(518199, 19313, 19312); //@t
	var_0_bool->AddReply(518157, -1, 19270); //@t
	goto Label_218;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


void func_1395(bool var_222_bool, object var_223_object, float var_224_float)
{
	cvector var_234_cvector;
	var_223_object->GetPosition(var_234_cvector);
	float var_233_float;
	var_223_object->GetEyesHeight(var_233_float);
	var_241_float = GetByIndex(var_234_cvector, 1);
	SetByIndex(var_234_cvector, 1) = (var_241_float + var_233_float);
	cvector var_235_cvector;
	@GetPosition(var_235_cvector);
	@GetEyesHeight(var_233_float);
	var_242_float = GetByIndex(var_235_cvector, 1);
	SetByIndex(var_235_cvector, 1) = (var_242_float + var_233_float);
	cvector var_236_cvector = var_234_cvector - var_235_cvector;
	var_243_float = GetByIndex(var_236_cvector, 1);
	SetByIndex(var_236_cvector, 1) = (float)0;
	var_245_float = sqrt(var_236_cvector | var_236_cvector);
	var_236_cvector /= var_245_float;
	cvector var_237_cvector = -var_236_cvector;
	cvector var_238_cvector = (var_236_cvector * var_224_float) - [0.0, 10.0, 0.0];
	bool var_240_bool;
	@IsOverrideActive(var_240_bool);
	if(var_240_bool != 0)
		var_222_bool = false;
	@StopWorld();
	@CameraTransit((var_235_cvector + var_238_cvector), var_237_cvector, true);
	var_250_float = GetByIndex(var_238_cvector, 0);
	var_251_float = GetByIndex(var_238_cvector, 2);
	@Rotate(var_250_float, var_251_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_222_bool = true;
}


void func_1702(object var_63_object)
{
	object var_65_object;
	@GetDiaryRoot(var_65_object);
	if(!var_65_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_63_object = false;
	}
	var_65_object = var_63_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_629(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_286_object, object var_287_object)
{
	var_0_bool = var_287_object;
	var_1_object = var_286_object;
	var_3_object = false;
	if(1 != 0) {
		func_706(var_287_object, "Neutral");
		var_0_bool->SetMessage(525385); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_302_bool = false;
		bool var_303_bool;
		func_1620(var_1_object);
		if(var_303_bool != 0) {
			bool var_309_bool;
			func_1632(var_1_object);
			if(var_309_bool != 0)
				var_302_bool = true;
		}
		if(var_302_bool != 0)
			var_0_bool->AddReply(525387, 40946, 26755); //@t
		var_0_bool->AddReply(539023, -1, 40966); //@t
		var_0_bool->AddReply(539024, -1, 40967); //@t
		goto Label_676;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x279";
	}
Label_676:
	bool var_324_bool;
	func_1837(var_324_bool);
	if(var_324_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1448(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_705;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_705:
		return 0;

	}
	
}


void func_1525(float var_46_float)
{
	float var_48_float;
	@GetGameTime(var_48_float);
	var_48_float = var_46_float;
}


// @pe
void func_1656(bool var_129_bool, object var_130_object)
{
	object var_132_object;
	var_130_object = var_132_object;
	bool var_131_bool;
	func_1518(var_131_bool, var_132_object, "blood");
	if(var_131_bool != 0) {
		var_129_bool = true;
		return 0;
	}
	var_129_bool = false;
}


void func_1530(int var_19_int)
{
	float var_21_float;
	@GetGameTime(var_21_float);
	var_19_int = 1 + (var_21_float / 24);
}


