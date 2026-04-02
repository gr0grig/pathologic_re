task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object, bool var_17_bool, int var_18_int)
	{
		bool var_19_bool;
		func_1828(var_19_bool);
		if(var_19_bool != 0)
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, int var_13_int, int var_14_int, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(1 != 0) {
			func_1481();
			if(var_19_int == 26755) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_bool;
				func_1569();
			}
			if(var_19_int == 40957) {
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_bool;
				func_1575();
			}
			if(var_19_int == 40958) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_1575();
			}
			if(var_19_int == 40959) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_1575();
			}
			if(var_19_int == 26757) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_bool;
				func_1575();
			}
			if(var_18_bool == 26753) {
				func_191(var_19_int, "Neutral");
				var_0_bool->SetMessage(525385); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_98_bool = false;
				bool var_99_bool;
				func_1611(var_1_object);
				if(var_99_bool != 0) {
					bool var_107_bool;
					func_1623(var_1_object);
					if(var_107_bool != 0)
						var_98_bool = true;
				}
				if(var_98_bool != 0)
					var_0_bool->AddReply(525387, 40946, 26755); //@t
				var_0_bool->AddReply(539023, -1, 40966); //@t
				var_0_bool->AddReply(539024, -1, 40967); //@t
				return 0;
			}
			if(var_18_bool == 40946) {
				func_191(var_19_int, "Neutral");
				var_0_bool->SetMessage(539004); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539005, 40948, 40947); //@t
				var_0_bool->AddReply(539022, 40948, 40964); //@t
				return 0;
			}
			if(var_18_bool == 40948) {
				func_191(var_19_int, "Neutral");
				var_0_bool->SetMessage(539006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539007, 40950, 40949); //@t
				return 0;
			}
			if(var_18_bool == 40950) {
				func_191(var_19_int, "Neutral");
				var_0_bool->SetMessage(539008); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539009, 40952, 40951); //@t
				var_0_bool->AddReply(539021, -1, 40963); //@t
				return 0;
			}
			if(var_18_bool == 40952) {
				func_191(var_19_int, "Neutral");
				var_0_bool->SetMessage(539010); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539011, 40954, 40953); //@t
				var_0_bool->AddReply(539018, 40961, 40960); //@t
				return 0;
			}
			if(var_18_bool == 40961) {
				func_191(var_19_int, "Neutral");
				var_0_bool->SetMessage(539019); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525389, -1, 26757); //@t
				return 0;
			}
			if(var_18_bool == 40954) {
				func_191(var_19_int, "Neutral");
				var_0_bool->SetMessage(539012); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539013, 40956, 40955); //@t
				var_0_bool->AddReply(539017, -1, 40959); //@t
				return 0;
			}
			if(var_18_bool == 40956) {
				func_191(var_19_int, "Neutral");
				var_0_bool->SetMessage(539014); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539015, -1, 40957); //@t
				var_0_bool->AddReply(539016, -1, 40958); //@t
				return 0;
			}
			var_3_object = true;
			bool var_186_bool;
			func_1828(var_186_bool);
			if(var_186_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd6";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, int var_13_int, int var_14_int, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(1 != 0) {
			func_1481();
			if(var_19_int == 19266) {
				object var_24_object = var_1_object;
				func_1554(var_0_bool);
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_bool;
				func_1600();
			}
			if(var_19_int == 19269) {
				object var_47_object = var_1_object;
				func_1606(var_0_bool);
			}
			if(var_19_int == 19312) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_bool;
				func_1594();
			}
			if(var_18_bool == 19258) {
				bool var_58_bool = false;
				bool var_59_bool;
				func_1658(var_59_bool, var_1_object);
				if(!var_59_bool) { //@nz
					bool var_72_bool;
					func_1647(var_72_bool, var_1_object);
					if(!var_72_bool) //@nz
						var_58_bool = true;
				}
				if(var_58_bool != 0) {
					func_673(var_19_int, "Neutral");
					var_0_bool->SetMessage(518145); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518146, 19260, 19259); //@t
					var_0_bool->AddReply(529952, -1, 31336); //@t
					return 0;
				}
				bool var_101_bool = false;
				bool var_102_bool;
				func_1647(var_102_bool, var_1_object);
				if(var_102_bool != 0) {
					bool var_104_bool;
					func_1658(var_104_bool, var_1_object);
					if(!var_104_bool) //@nz
						var_101_bool = true;
				}
				if(var_101_bool != 0) {
					func_673(var_19_int, "Neutral");
					var_0_bool->SetMessage(518150); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518151, 19265, 19264); //@t
					return 0;
				}
				func_673(var_19_int, "Neutral");
				var_0_bool->SetMessage(518155); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518156, -1, 19269); //@t
				bool var_117_bool;
				func_1635(var_1_object);
				if(var_117_bool != 0)
					var_0_bool->AddReply(518199, 19313, 19312); //@t
				var_0_bool->AddReply(518157, -1, 19270); //@t
				return 0;
			}
			if(var_18_bool == 19313) {
				func_673(var_19_int, "Neutral");
				var_0_bool->SetMessage(518200); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534598, 36237, 36236); //@t
				var_0_bool->AddReply(518201, -1, 19314); //@t
				return 0;
			}
			if(var_18_bool == 36237) {
				func_673(var_19_int, "Neutral");
				var_0_bool->SetMessage(534599); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534600, -1, 36238); //@t
				var_0_bool->AddReply(534601, 36240, 36239); //@t
				return 0;
			}
			if(var_18_bool == 36240) {
				func_673(var_19_int, "Neutral");
				var_0_bool->SetMessage(534602); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534603, -1, 36241); //@t
				var_0_bool->AddReply(534604, -1, 36242); //@t
				return 0;
			}
			if(var_18_bool == 19265) {
				func_673(var_19_int, "Neutral");
				var_0_bool->SetMessage(518152); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518153, -1, 19266); //@t
				var_0_bool->AddReply(518154, -1, 19267); //@t
				return 0;
			}
			if(var_18_bool == 19260) {
				func_673(var_19_int, "Neutral");
				var_0_bool->SetMessage(518147); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529953, 31339, 31337); //@t
				var_0_bool->AddReply(529954, -1, 31338); //@t
				return 0;
			}
			if(var_18_bool == 31339) {
				func_673(var_19_int, "Neutral");
				var_0_bool->SetMessage(529955); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518148, -1, 19261); //@t
				var_0_bool->AddReply(518162, -1, 19275); //@t
				return 0;
			}
			var_3_object = true;
			bool var_191_bool;
			func_1828(var_191_bool);
			if(var_191_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2b8";
	
	}

}


maintask task_5
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int)
	{
		int var_18_int;
		func_1521(var_18_int);
		var_6_object = var_18_int;
		func_1751();
		func_1064((float)300, (float)100);
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, object var_18_object)
	{
		int var_19_int; int var_20_int;
		func_1208(var_19_int, var_20_int);
		int var_24_int;
		func_1814(var_24_int);
		if(var_24_int == 1) {
			int var_30_int; object var_31_object;
			var_18_object = var_31_object;
			TaskCall(3);
			func_465(var_32_object, var_30_int, var_31_object);
			TaskReturn();
			var_32_object = var_20_int;
		} else {
				int var_247_int;
				func_1814(var_247_int);
				if(!(var_247_int == 2)) goto Label_1025;
				int var_250_int; object var_251_object;
				var_18_object = var_251_object;
				TaskCall(1);
				func_40(var_252_object, var_250_int, var_251_object);
				TaskReturn();
				var_252_object = var_20_int;
		}
		for(;;) {
			if(1000 == var_20_int) {
				bool var_209_bool; object var_210_object;
				var_18_object = var_210_object;
				func_1406(var_209_bool, var_210_object, 110.0);
				if(!var_209_bool) //@nz
					return 2;
				object var_239_object;
				var_18_object = var_239_object;
				TaskCall(0);
				func_0(var_239_object);
				TaskReturn();
				object var_246_object;
				var_18_object = var_246_object;
				func_1453();
			}
			return 2;

		}
	
	Label_1025:
	}

	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int)
	{
		int var_18_int;
		func_1521(var_18_int);
		if(var_6_object != var_18_int) {
			func_1751();
			int var_47_int;
			func_1521(var_47_int);
			var_6_object = var_47_int;
		}
		func_1117();
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, string var_18_string)
	{
		if(var_18_string == "cleanup")
			func_1089(var_18_string);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int)
	{
		func_1208(var_16_bool, var_17_int);
		bool var_21_bool = false;
		if(var_5_bool != 0) {
			bool var_23_bool;
			func_1141(var_23_bool);
			if(var_23_bool != 0)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			object var_24_object;
			func_1488(var_24_object);
			@RemoveActor(var_24_object);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, int var_18_int)
	{
		if(var_18_int == 10) {
			bool var_21_bool;
			func_1170(var_16_bool, var_17_int, var_18_int, var_21_bool);
			if(var_21_bool != 0) {
				if(!var_2_object) { //@nz
					func_1470(var_4_string);
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
		bool var_241_bool;
		func_1828(var_241_bool);
		if(var_241_bool == 0) goto Label_15;
		func_1457("Neutral");
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


void func_1537(int var_80_int)
{
	int var_83_int; bool var_84_bool;
	var_83_int = 0;
	
	for(;;) {
		string var_86_string; int var_87_int;
		var_83_int = var_87_int;
		func_1530(var_86_string, var_87_int);
		@HasAnimation(var_84_bool, "all", var_86_string);
		if(!var_84_bool) //@nz
			break;
		var_83_int += 1;
	}
	var_83_int = var_80_int;
}


void func_1792(int var_31_int, string var_32_string)
{
	int var_34_int;
	@GetInvItemByName(var_34_int, var_32_string);
	var_34_int = var_31_int;
}


void func_1668(bool var_111_bool)
{
	int var_117_int;
	func_1521(var_117_int);
	int var_115_int;
	var_117_int = var_115_int;
	int var_116_int;
	@GetVariable(("Gatherer1_" + var_115_int), var_116_int);
	var_111_bool = var_116_int != 0;
}


void func_1797(int var_92_int)
{
	int var_94_int;
	@GetVariable("branch", var_94_int);
	if(var_94_int == 0) {
		var_92_int = 1;
		return 2;
	EMIT "GOTO 0x714";
	}
	if(var_94_int == 1) {
		var_92_int = 2;
		return 2;
	}
	var_92_int = 3;
}


void func_1680(void)
{
	object var_49_object;
	@CreateDiaryEntry(var_49_object, 511, 2, 529710);
	bool var_53_bool; object var_54_object;
	var_49_object = var_54_object;
	func_1706(var_53_bool, var_54_object, 507);
}
EMIT "Stack[-1] = 0";


void func_1554(object var_24_object)
{
	int var_30_int;
	func_1521(var_30_int);
	int var_28_int;
	var_30_int = var_28_int;
	@SetVariable(("Gatherer1_" + var_28_int), 1);
	int var_29_int;
	var_24_object->RemoveItemByType(var_29_int, "blood", 1);
}


void func_1170(bool var_0_bool, object var_1_object, string var_4_string, bool var_21_bool)
{
	if(var_4_string == null)
		var_21_bool = false;
	float var_25_float;
	func_1308(var_25_float, var_4_string);
	float var_23_float = sqrt(var_25_float);
	if(var_2_object != 0)
		var_23_float -= var_1_object;
	var_21_bool = var_23_float < var_0_bool;
}


void func_1301(bool var_105_bool)
{
	var_105_bool = true;
}


void func_1814(int var_24_int)
{
	int var_26_int;
	@GetVariable("branch", var_26_int);
	var_26_int = var_24_int;
}


void func_1303(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1658(bool var_109_bool, object var_110_object)
{
	object var_112_object;
	var_110_object = var_112_object;
	func_1668(var_112_object);
	bool var_111_bool;
	if(var_111_bool != 0) {
		var_109_bool = true;
		return 0;
	}
	var_109_bool = false;
}


// @pe
void func_539(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_101_object, object var_102_object)
{
	var_0_bool = var_102_object;
	var_1_object = var_101_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_108_bool = false;
		bool var_109_bool;
		func_1658(var_109_bool, var_1_object);
		if(!var_109_bool) { //@nz
			bool var_127_bool;
			func_1647(var_127_bool, var_1_object);
			if(!var_127_bool) //@nz
				var_108_bool = true;
		}
		if(var_108_bool != 0) {
			func_673(var_102_object, "Neutral");
			var_0_bool->SetMessage(518145); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(518146, 19260, 19259); //@t
			var_0_bool->AddReply(529952, -1, 31336); //@t
		} else {
					bool var_169_bool = false;
					bool var_170_bool;
					func_1647(var_170_bool, var_1_object);
					if(var_170_bool != 0) {
						bool var_172_bool;
						func_1658(var_172_bool, var_1_object);
						if(!var_172_bool) //@nz
							var_169_bool = true;
					}
					if(var_169_bool == 0) goto Label_611;
					func_673(var_102_object, "Neutral");
					var_0_bool->SetMessage(518150); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518151, 19265, 19264); //@t
		}
	}
Label_643:
	for(;;) {
		bool var_156_bool;
		func_1828(var_156_bool);
		if(var_156_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1457(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_672;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_672:
			return 0;

		}

	}
	
Label_611:
	func_673(var_102_object, "Neutral");
	var_0_bool->SetMessage(518155); //@t
	var_0_bool->ClearReplies(); //@t
	var_0_bool->AddReply(518156, -1, 19269); //@t
	bool var_185_bool;
	func_1635(var_1_object);
	if(var_185_bool != 0)
		var_0_bool->AddReply(518199, 19313, 19312); //@t
	var_0_bool->AddReply(518157, -1, 19270); //@t
	goto Label_643;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x21f";


void func_1308(float var_25_float, object var_26_object)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_26_object->GetPosition(var_31_cvector);
	var_25_float = (var_31_cvector - var_30_cvector) | (var_31_cvector - var_30_cvector);
}


void func_1820(int var_89_int)
{
	var_89_int = 521048;
}


void func_1693(object var_62_object)
{
	object var_64_object;
	@GetDiaryRoot(var_64_object);
	if(!var_64_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_62_object = false;
	}
	var_64_object = var_62_object;
}
EMIT "Stack[-1] = 0";


void func_1822(int var_88_int)
{
	var_88_int = 521047;
}


void func_1824(string var_90_string)
{
	var_90_string = "ui/NPC_Citizen2.png";
}


// @pe
void func_1569(void)
{
	@SetVariable("ookGatherer1", 1);
}


void func_1826(string var_91_string)
{
	var_91_string = "ui/NPC_Citizen2_b.png";
}


// @pe
void func_673(object var_2_object, string var_137_string)
{
	bool var_138_bool;
	func_1828(var_138_bool);
	if(!var_138_bool) //@nz
		return 0;
	if(var_137_string == var_2_object)
		return 0;
	string var_141_string; bool var_142_bool;
	var_137_string = var_141_string;
	if(var_137_string == "")
		var_142_bool = false;
	else
		var_142_bool = true;
	func_1464(var_141_string, var_142_bool);
	var_2_object = var_137_string;
	
}


void func_1828(bool var_83_bool)
{
	var_83_bool = false;
}


void func_1316(bool var_50_bool)
{
	bool var_52_bool;
	@IsLoaded(var_52_bool);
	var_52_bool = var_50_bool;
}


void func_1575(void)
{
	object var_34_object;
	func_1734(var_34_object);
	object var_33_object;
	var_34_object = var_33_object;
	float var_45_float;
	func_1516(var_45_float);
	var_33_object->AddMark("k2q04MorlokGotoAndrei", "pt_map_andrei", 0, 539378, var_45_float);
	func_1680();
}
EMIT "Stack[-1] = 0";


void func_1064(float var_46_float, float var_47_float)
{
	
Label_1065:
	for(;;) {
		bool var_50_bool;
		func_1316(var_50_bool);
		var_53_bool = !var_50_bool; //@nz
		if(var_53_bool == 0) goto Label_1073;
		@Hold();
	}
	
Label_1073:
	float var_49_float;
	@rand(var_49_float, 3);
	@Sleep(var_49_float + 3);
	float var_57_float; float var_58_float;
	float var_48_float;
	func_1143(var_17_int, var_57_float, var_58_float, var_48_float, var_49_float, var_57_float, var_58_float);
	@sync();
	goto Label_1065;
}
EMIT "Return(); Pop(2)";


void func_1321(bool var_41_bool, object var_42_object, float var_43_float)
{
	cvector var_54_cvector; bool var_61_bool;
	var_42_object->GetPosition(var_54_cvector);
	float var_53_float;
	var_42_object->GetEyesHeight(var_53_float);
	var_62_float = GetByIndex(var_54_cvector, 1);
	SetByIndex(var_54_cvector, 1) = (var_62_float + var_53_float);
	cvector var_55_cvector;
	@GetPosition(var_55_cvector);
	@GetEyesHeight(var_53_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	SetByIndex(var_55_cvector, 1) = (var_63_float + var_53_float);
	cvector var_56_cvector = var_54_cvector - var_55_cvector;
	var_64_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (float)0;
	var_66_float = sqrt(var_56_cvector | var_56_cvector);
	var_56_cvector /= var_66_float;
	cvector var_57_cvector = -var_56_cvector;
	cvector var_68_cvector;
	func_1494(var_68_cvector, (var_57_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_58_cvector = ((var_56_cvector * var_43_float) + (var_68_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_60_bool;
	@IsOverrideActive(var_60_bool);
	if(var_60_bool != 0)
		var_41_bool = false;
	@StopWorld();
	@CameraTransit((var_55_cvector + var_58_cvector), var_57_cvector);
	var_81_float = GetByIndex(var_58_cvector, 0);
	var_82_float = GetByIndex(var_58_cvector, 2);
	@Rotate(var_81_float, var_82_float);
	bool var_83_bool;
	func_1828(var_83_bool);
	if(var_83_bool != 0) {
	} else {
		@HasAnimationTrack(var_61_bool, "head");
		if(var_61_bool == 0) goto Label_1383;
		@LookAsyncCamera("head");
	}
Label_1383:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_41_bool = true;
	
}


void func_40(bool var_0_bool, int var_250_int, object var_251_object)
{
	var_0_bool = var_251_object;
	bool var_261_bool; object var_262_object;
	var_251_object = var_262_object;
	func_1321(var_261_bool, var_262_object, 110.0);
	if(!var_261_bool) { //@nz
		var_250_int = -2;
		return 8;
	}
	object var_257_object;
	@CreateDialog(var_257_object);
	int var_265_int;
	func_1822(var_265_int);
	var_257_object->SetNPCName(var_265_int);
	int var_266_int;
	func_1820(var_266_int);
	var_257_object->SetNPCDescription(var_266_int);
	string var_267_string;
	func_1824(var_267_string);
	var_257_object->SetPhoto(var_267_string);
	string var_268_string;
	func_1826(var_268_string);
	var_257_object->SetPhoto2(var_268_string);
	int var_269_int;
	func_1797(var_269_int);
	var_257_object->SetPlayerName(var_269_int);
	bool var_258_bool;
	@IsOverrideActive(var_258_bool);
	if(var_258_bool != 0) {
		var_250_int = -2;
		return 8;
	}
	@DoDialog(var_257_object);
	object var_271_object; object var_272_object;
	var_251_object = var_271_object;
	var_257_object = var_272_object;
	TaskCall(2);
	func_114(var_273_object, var_274_object, var_275_string, var_276_bool, var_271_object, var_272_object);
	TaskReturn();
	bool var_260_bool;
	var_257_object->IsDialogEnd(var_260_bool);
	
	for(;;) {
		var_317_bool = !var_260_bool; //@nz
		if(var_317_bool == 0) goto Label_103;
		@sync();
		var_257_object->IsDialogEnd(var_260_bool);
	}
	
Label_103:
	object var_318_object;
	var_251_object = var_318_object;
	func_1389();
	@StopDialog(var_257_object);
	var_257_object->GetReturnValue(-1);
	int var_259_int = var_250_int;
}
EMIT "Stack[-4] = 0";


void func_1706(bool var_53_bool, object var_54_object, int var_55_int)
{
	object var_62_object;
	func_1693(var_62_object);
	object var_59_object;
	var_62_object = var_59_object;
	object var_60_object;
	var_59_object->Find(var_55_int, var_60_object);
	if(!var_60_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_55_int);
		var_53_bool = false;
	}
	var_60_object->AddChild(var_54_object);
	@SendWorldWndMessage(7);
	int var_61_int;
	var_54_object->GetCategory(var_61_int);
	@SetDiarySection(var_61_int);
	var_53_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1453(void)
{
	@CameraSwitchToNormal();
}


void func_1457(string var_158_string)
{
	float var_161_float; float var_162_float;
	@lshGetAnimTimes(var_158_string, var_161_float, var_162_float);
	@lshPlayAnimation(var_161_float, var_162_float, false);
}


void func_1464(string var_141_string, bool var_142_bool)
{
	float var_147_float; float var_148_float;
	@lshGetAnimTimes(var_141_string, var_147_float, var_148_float);
	@lshPlayAnimation(var_147_float, var_148_float, var_142_bool);
}


// @pe
void func_1208(object var_2_object, object var_3_object)
{
	func_1303();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_object = true;
}


// @pe
void func_1594(void)
{
	@SetVariable("oobSysGatherer1_1", 1);
}


void func_1470(object var_35_object)
{
	float var_38_float;
	var_35_object->GetEyesHeight(var_38_float);
	cvector var_39_cvector = [0.0, 0.0, 0.0];
	var_40_float = GetByIndex(var_39_cvector, 1);
	var_38_float = var_40_float;
	SetByIndex(var_39_cvector, 1) = var_40_float;
	@LookAsync(var_35_object, "head", var_39_cvector);
}


// @pe
void func_191(object var_2_object, string var_278_string)
{
	bool var_279_bool;
	func_1828(var_279_bool);
	if(!var_279_bool) //@nz
		return 0;
	if(var_278_string == var_2_object)
		return 0;
	string var_282_string; bool var_283_bool;
	var_278_string = var_282_string;
	if(var_278_string == "")
		var_283_bool = false;
	else
		var_283_bool = true;
	func_1464(var_282_string, var_283_bool);
	var_2_object = var_278_string;
	
}


// @pe
void func_1600(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1089(bool var_5_bool)
{
	var_5_bool = true;
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	bool var_23_bool = false;
	if(!var_22_bool) { //@nz
		bool var_25_bool;
		func_1141(var_25_bool);
		if(var_25_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		object var_26_object;
		func_1488(var_26_object);
		@RemoveActor(var_26_object);
	}
}


// @pe
void func_1606(object var_48_object)
{
	var_48_object->SetReturnValue(1000);
}


void func_1222(void)
{
	int var_73_int; int var_74_int; bool var_75_bool; float var_76_float; bool var_77_bool;
	@WaitForAnimEnd();
	bool var_78_bool;
	func_1316(var_78_bool);
	if(!var_78_bool) //@nz
		return 14;
	int var_80_int;
	func_1537(var_80_int);
	int var_71_int;
	var_80_int = var_71_int;
	int var_72_int = 0;
	
	for(;;) {
		bool var_93_bool = false;
		if(var_72_int < 5) {
			bool var_96_bool;
			func_1316(var_96_bool);
			if(var_96_bool != 0)
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			@irand(var_73_int, 3);
			if(var_73_int == 0) {
				if(var_71_int == 0) goto Label_1269;
				@irand(var_74_int, var_71_int);
				string var_102_string; int var_103_int;
				var_74_int = var_103_int;
				func_1530(var_102_string, var_103_int);
				@PlayAnimation("all", var_102_string);
				@WaitForAnimEnd(var_75_bool);
				if(!var_75_bool) { //@nz
				} else {
			} else {
			if(var_73_int == 1) {
				@rand(var_76_float, 4);
				@Sleep((var_76_float + 1), var_77_bool);
				if(!var_77_bool) { //@nz
					goto Label_1298;
				}
			} else if(var_72_int != 0) {
				goto Label_1298;
			}
			}
					bool var_105_bool;
					func_1301(var_105_bool);
					var_106_bool = !var_105_bool; //@nz
					if(var_106_bool == 0) goto Label_1293;
			}
		}
	Label_1298:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1293:
		@ResetAAS();
		var_72_int += 1;
	}
	
}


void func_1734(object var_34_object)
{
	object var_37_object; object var_38_object;
	@GetMainOutdoorScene(var_37_object);
	if(var_37_object == null) {
		@Trace("Can't find main outdoor scene");
		var_38_object = null;
		var_38_object = var_34_object;
	}
	var_37_object->GetMap(var_38_object);
	var_38_object = var_34_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1481(void)
{
	bool var_21_bool;
	func_1828(var_21_bool);
	if(var_21_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1611(bool var_288_bool)
{
	int var_290_int;
	func_1504(var_290_int, "k2q04");
	if(var_290_int == 2)
		var_288_bool = true;
	var_288_bool = false;
}


void func_1488(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_465(bool var_0_bool, int var_30_int, object var_31_object)
{
	var_0_bool = var_31_object;
	bool var_41_bool; object var_42_object;
	var_31_object = var_42_object;
	func_1321(var_41_bool, var_42_object, 110.0);
	if(!var_41_bool) { //@nz
		var_30_int = -2;
		return 8;
	}
	object var_37_object;
	@CreateDialog(var_37_object);
	int var_88_int;
	func_1822(var_88_int);
	var_37_object->SetNPCName(var_88_int);
	int var_89_int;
	func_1820(var_89_int);
	var_37_object->SetNPCDescription(var_89_int);
	string var_90_string;
	func_1824(var_90_string);
	var_37_object->SetPhoto(var_90_string);
	string var_91_string;
	func_1826(var_91_string);
	var_37_object->SetPhoto2(var_91_string);
	int var_92_int;
	func_1797(var_92_int);
	var_37_object->SetPlayerName(var_92_int);
	bool var_38_bool;
	@IsOverrideActive(var_38_bool);
	if(var_38_bool != 0) {
		var_30_int = -2;
		return 8;
	}
	@DoDialog(var_37_object);
	object var_101_object; object var_102_object;
	var_31_object = var_101_object;
	var_37_object = var_102_object;
	TaskCall(4);
	func_539(var_103_object, var_104_object, var_105_string, var_106_bool, var_101_object, var_102_object);
	TaskReturn();
	bool var_40_bool;
	var_37_object->IsDialogEnd(var_40_bool);
	
	for(;;) {
		var_199_bool = !var_40_bool; //@nz
		if(var_199_bool == 0) goto Label_528;
		@sync();
		var_37_object->IsDialogEnd(var_40_bool);
	}
	
Label_528:
	object var_200_object;
	var_31_object = var_200_object;
	func_1389();
	@StopDialog(var_37_object);
	var_37_object->GetReturnValue(-1);
	int var_39_int = var_30_int;
}
EMIT "Stack[-4] = 0";


void func_1494(cvector var_68_cvector, cvector var_69_cvector)
{
	float var_72_float = sqrt(var_69_cvector | var_69_cvector);
	if(var_72_float < 0.000001)
		var_68_cvector = [0.0, 0.0, 0.0];
	var_68_cvector = var_69_cvector / var_72_float;
}


// @pe
void func_1623(bool var_294_bool)
{
	int var_296_int;
	func_1504(var_296_int, "ookGatherer1");
	if(var_296_int == 0) {
		var_294_bool = true;
		return 0;
	}
	var_294_bool = false;
}


void func_1751(void)
{
	@ClearSubContainer(0);
	int var_27_int;
	@irand(var_27_int, 15);
	var_27_int += 5;
	int var_31_int;
	func_1792(var_31_int, "grass_black_tvir");
	bool var_26_bool;
	@AddItem(var_26_bool, var_31_int, 0, var_27_int);
	@irand(var_27_int, 15);
	var_27_int += 5;
	int var_38_int;
	func_1792(var_38_int, "grass_blood_tvir");
	@AddItem(var_26_bool, var_38_int, 0, var_27_int);
	@irand(var_27_int, 15);
	int var_43_int;
	func_1792(var_43_int, "grass_brown_tvir");
	@AddItem(var_26_bool, var_43_int, 0, (var_27_int + 5));
}


void func_1117(void)
{
	@StopGroup0();
	@sync();
}


void func_1504(int var_187_int, string var_188_string)
{
	int var_190_int;
	@GetVariable(var_188_string, var_190_int);
	var_190_int = var_187_int;
}


// @pe
void func_1635(bool var_185_bool)
{
	int var_187_int;
	func_1504(var_187_int, "oobSysGatherer1_1");
	if(var_187_int == 0) {
		var_185_bool = true;
		return 0;
	}
	var_185_bool = false;
}


void func_1509(bool var_129_bool, object var_130_object, string var_131_string)
{
	int var_134_int;
	@GetInvItemByName(var_134_int, var_131_string);
	bool var_135_bool;
	var_130_object->HasItem(var_134_int, var_135_bool);
	var_135_bool = var_129_bool;
}


void func_1516(float var_45_float)
{
	float var_47_float;
	@GetGameTime(var_47_float);
	var_47_float = var_45_float;
}


void func_1389(void)
{
	bool var_202_bool;
	@CameraSwitchToNormal();
	bool var_203_bool;
	func_1828(var_203_bool);
	if(var_203_bool != 0) {
	} else {
		@HasAnimationTrack(var_202_bool, "head");
		if(var_202_bool == 0) goto Label_1405;
		@UnlookAsync("head");
	}
Label_1405:
	
}


// @pe
void func_1647(bool var_127_bool, object var_128_object)
{
	object var_130_object;
	var_128_object = var_130_object;
	bool var_129_bool;
	func_1509(var_129_bool, var_130_object, "blood");
	if(var_129_bool != 0) {
		var_127_bool = true;
		return 0;
	}
	var_127_bool = false;
}


void func_1521(int var_18_int)
{
	float var_20_float;
	@GetGameTime(var_20_float);
	var_18_int = 1 + (var_20_float / 24);
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_271_object, object var_272_object)
{
	var_0_bool = var_272_object;
	var_1_object = var_271_object;
	var_3_object = false;
	if(1 != 0) {
		func_191(var_272_object, "Neutral");
		var_0_bool->SetMessage(525385); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_287_bool = false;
		bool var_288_bool;
		func_1611(var_1_object);
		if(var_288_bool != 0) {
			bool var_294_bool;
			func_1623(var_1_object);
			if(var_294_bool != 0)
				var_287_bool = true;
		}
		if(var_287_bool != 0)
			var_0_bool->AddReply(525387, 40946, 26755); //@t
		var_0_bool->AddReply(539023, -1, 40966); //@t
		var_0_bool->AddReply(539024, -1, 40967); //@t
		goto Label_161;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_161:
	bool var_309_bool;
	func_1828(var_309_bool);
	if(var_309_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1457(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_190;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_190:
		return 0;

	}
	
}


void func_1141(bool var_23_bool)
{
	var_23_bool = true;
}


// @pe
void func_1143(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, float var_57_float, float var_58_float)
{
	bool var_59_bool;
	func_1316(var_59_bool);
	if(!var_59_bool) //@nz
		return 0;
	@FindActor(var_4_string, "player");
	var_2_object = false;
	var_0_bool = var_57_float;
	var_1_object = var_58_float;
	@SetTimer(10, 1.0);
	func_1222();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1530(string var_86_string, int var_87_int)
{
	string var_89_string = "idle";
	if(var_87_int != 0)
		var_89_string += var_87_int;
	var_89_string = var_86_string;
}


void func_1406(bool var_209_bool, object var_210_object, float var_211_float)
{
	cvector var_221_cvector;
	var_210_object->GetPosition(var_221_cvector);
	float var_220_float;
	var_210_object->GetEyesHeight(var_220_float);
	var_228_float = GetByIndex(var_221_cvector, 1);
	SetByIndex(var_221_cvector, 1) = (var_228_float + var_220_float);
	cvector var_222_cvector;
	@GetPosition(var_222_cvector);
	@GetEyesHeight(var_220_float);
	var_229_float = GetByIndex(var_222_cvector, 1);
	SetByIndex(var_222_cvector, 1) = (var_229_float + var_220_float);
	cvector var_223_cvector = var_221_cvector - var_222_cvector;
	var_230_float = GetByIndex(var_223_cvector, 1);
	SetByIndex(var_223_cvector, 1) = (float)0;
	var_232_float = sqrt(var_223_cvector | var_223_cvector);
	var_223_cvector /= var_232_float;
	cvector var_224_cvector = -var_223_cvector;
	cvector var_225_cvector = (var_223_cvector * var_211_float) - [0.0, 10.0, 0.0];
	bool var_227_bool;
	@IsOverrideActive(var_227_bool);
	if(var_227_bool != 0)
		var_209_bool = false;
	@StopWorld();
	@CameraTransit((var_222_cvector + var_225_cvector), var_224_cvector);
	var_236_float = GetByIndex(var_225_cvector, 0);
	var_237_float = GetByIndex(var_225_cvector, 2);
	@Rotate(var_236_float, var_237_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_209_bool = true;
}


