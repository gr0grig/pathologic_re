// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		bool var_33_bool;
		func_2477(var_33_bool);
		if(var_33_bool != 0)
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2402();
			if(var_33_cvector == 26731) {
				object var_38_object = var_1_object;
				func_2497(var_0_bool);
			}
			if(var_33_cvector == 26734) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_bool;
				func_2479();
				object var_70_object = var_1_object;
				func_2497(var_0_bool);
			}
			if(var_33_cvector == 26735) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_bool;
				func_2479();
			}
			if(var_32_bool == 26730) {
				func_189(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(525362); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525363, -1, 26731); //@t
				bool var_99_bool;
				func_2502(var_1_object);
				if(var_99_bool != 0)
					var_0_bool->AddReply(525364, 26733, 26732); //@t
				var_0_bool->AddReply(525368, -1, 26736); //@t
				return 0;
			}
			if(var_32_bool == 26733) {
				func_189(var_33_cvector, "Smile");
				var_0_bool->SetMessage(525365); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529141, 30588, 30587); //@t
				return 0;
			}
			if(var_32_bool == 30588) {
				func_189(var_33_cvector, "Smile");
				var_0_bool->SetMessage(529142); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529143, 30590, 30589); //@t
				return 0;
			}
			if(var_32_bool == 30590) {
				func_189(var_33_cvector, "Untrust");
				var_0_bool->SetMessage(529144); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525366, -1, 26734); //@t
				var_0_bool->AddReply(525367, -1, 26735); //@t
				return 0;
			}
			var_3_object = true;
			bool var_137_bool;
			func_2477(var_137_bool);
			if(var_137_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2402();
			if(var_32_bool == 26818) {
				func_490(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(525462); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529295, 30750, 30749); //@t
				var_0_bool->AddReply(525463, -1, 26819); //@t
				return 0;
			}
			if(var_32_bool == 30750) {
				func_490(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(529296); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529297, -1, 30751); //@t
				var_0_bool->AddReply(529298, -1, 30752); //@t
				return 0;
			}
			var_3_object = true;
			bool var_72_bool;
			func_2477(var_72_bool);
			if(var_72_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x201";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2402();
			if(var_33_cvector == 27214) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_bool;
				func_2488();
			}
			if(var_33_cvector == 43013) {
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_bool;
				func_2488();
			}
			if(var_33_cvector == 43010) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_bool;
				func_2488();
			}
			if(var_33_cvector == 43005) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_bool;
				func_2488();
			}
			if(var_33_cvector == 43002) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_2488();
			}
			if(var_33_cvector == 43000) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_bool;
				func_2488();
			}
			if(var_33_cvector == 31148) {
				object var_87_object = var_1_object;
				func_2497(var_0_bool);
			}
			if(var_32_bool == 27211) {
				func_731(var_33_cvector, "Grin");
				var_0_bool->SetMessage(525919); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_110_bool;
				func_2514(var_1_object);
				if(var_110_bool != 0)
					var_0_bool->AddReply(525920, 42995, 27212); //@t
				var_0_bool->AddReply(529685, -1, 31148); //@t
				var_0_bool->AddReply(525923, -1, 27215); //@t
				var_0_bool->AddReply(529057, -1, 30499); //@t
				return 0;
			}
			if(var_32_bool == 42995) {
				func_731(var_33_cvector, "Untrust");
				var_0_bool->SetMessage(540917); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540918, 27213, 42996); //@t
				var_0_bool->AddReply(540919, 42998, 42997); //@t
				return 0;
			}
			if(var_32_bool == 42998) {
				func_731(var_33_cvector, "Smile");
				var_0_bool->SetMessage(540920); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540921, 30501, 42999); //@t
				var_0_bool->AddReply(540922, -1, 43000); //@t
				return 0;
			}
			if(var_32_bool == 27213) {
				func_731(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(525921); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529058, 30501, 30500); //@t
				var_0_bool->AddReply(529062, 30503, 30504); //@t
				return 0;
			}
			if(var_32_bool == 30501) {
				func_731(var_33_cvector, "Smile");
				var_0_bool->SetMessage(529059); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529060, 30503, 30502); //@t
				var_0_bool->AddReply(540923, -1, 43002); //@t
				return 0;
			}
			if(var_32_bool == 30503) {
				func_731(var_33_cvector, "Untrust");
				var_0_bool->SetMessage(529061); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540924, 43004, 43003); //@t
				return 0;
			}
			if(var_32_bool == 43004) {
				func_731(var_33_cvector, "Untrust");
				var_0_bool->SetMessage(540925); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529063, 30507, 30506); //@t
				var_0_bool->AddReply(540926, -1, 43005); //@t
				return 0;
			}
			if(var_32_bool == 30507) {
				func_731(var_33_cvector, "Smile");
				var_0_bool->SetMessage(529064); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540927, 43007, 43006); //@t
				var_0_bool->AddReply(540931, -1, 43010); //@t
				return 0;
			}
			if(var_32_bool == 43007) {
				func_731(var_33_cvector, "Untrust");
				var_0_bool->SetMessage(540928); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540929, 43009, 43008); //@t
				var_0_bool->AddReply(540932, 43009, 43011); //@t
				return 0;
			}
			if(var_32_bool == 43009) {
				func_731(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(540930); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525922, -1, 27214); //@t
				var_0_bool->AddReply(540933, -1, 43013); //@t
				return 0;
			}
			var_3_object = true;
			bool var_217_bool;
			func_2477(var_217_bool);
			if(var_217_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2f2";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2402();
			if(var_32_bool == 36906) {
				func_1212(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(535231); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535232, 36953, 36907); //@t
				var_0_bool->AddReply(535233, -1, 36908); //@t
				var_0_bool->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_32_bool == 36953) {
				func_1212(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(535277); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535278, 36957, 36954); //@t
				var_0_bool->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_32_bool == 36957) {
				func_1212(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(535281); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535282, -1, 36958); //@t
				var_0_bool->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_object = true;
			bool var_85_bool;
			func_2477(var_85_bool);
			if(var_85_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4d3";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2402();
			if(var_32_bool == 42554) {
				func_1466(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(540545); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540546, -1, 42555); //@t
				var_0_bool->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_object = true;
			bool var_62_bool;
			func_2477(var_62_bool);
			if(var_62_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5d1";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2402();
			if(var_33_cvector == 44406) {
				object var_38_object = var_1_object;
				func_2497(var_0_bool);
			}
			if(var_33_cvector == 44407) {
				object var_43_object = var_1_object;
				func_2497(var_0_bool);
			}
			if(var_32_int == 44401) {
				func_1674(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(542099); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542100, 44405, 44402); //@t
				var_0_bool->AddReply(542101, -1, 44403); //@t
				var_0_bool->AddReply(542102, -1, 44404); //@t
				return 0;
			}
			if(var_32_int == 44405) {
				func_1674(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(542103); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542104, -1, 44406); //@t
				var_0_bool->AddReply(542105, -1, 44407); //@t
				return 0;
			}
			var_3_object = true;
			bool var_84_bool;
			func_2477(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6a1";
	
	}

}


maintask task_13
{
	// @pe
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector)
	{
		func_1786(var_31_cvector);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector, int var_32_int)
	{
		if(var_32_int == 10) {
			func_1851();
			bool var_36_bool = false;
			bool var_37_bool;
			func_2065(var_37_bool);
			if(var_37_bool != 0) {
				bool var_40_bool;
				func_1820(var_40_bool);
				if(var_40_bool != 0)
					var_36_bool = true;
			}
			if(var_36_bool != 0) {
				bool var_57_bool;
				func_1800(var_57_bool);
				if(var_57_bool != 0) {
					bool var_76_bool; object var_77_object;
					object var_78_object;
					func_2409(var_78_object);
					var_78_object = var_77_object;
					func_2215(var_76_bool, var_77_object);
				}
			} else {
				func_1815(var_32_int);
				func_1842();
			}
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector)
	{
		func_2033();
		func_1851();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector)
	{
		@StopGroup0();
		func_1851();
		func_2356("Neutral");
		func_1842();
	}

	// @pe
	void OnLSHAnimationEnd(bool bCycled, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector, bool var_32_bool)
	{
		if(var_32_bool != 0)
			func_1842();
		else
			func_2356("Neutral");
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector, object var_32_object)
	{
		bool var_33_bool; bool var_34_bool;
		@IsOverrideActive(var_34_bool);
		if(!var_34_bool) { //@nz
			disable OnUse;
			func_2033();
			bool var_36_bool; object var_37_object;
			var_32_object = var_37_object;
			func_2056(var_36_bool, var_37_object);
			enable OnUse;
			object var_50_object;
			func_2654(var_50_object, var_33_bool, var_34_bool, var_50_object);
			func_2356("Neutral");
			func_1851();
			func_1842();
		}
	}

}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_427_bool;
		func_2477(var_427_bool);
		if(var_427_bool == 0) goto Label_15;
		func_2356("Neutral");
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


void func_2565(bool var_47_bool, object var_48_object, int var_49_int)
{
	object var_56_object;
	func_2552(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	object var_54_object;
	var_53_object->Find(var_49_int, var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_49_int);
		var_47_bool = false;
	}
	var_54_object->AddChild(var_48_object);
	@SendWorldWndMessage(7);
	int var_55_int;
	var_48_object->GetCategory(var_55_int);
	@SetDiarySection(var_55_int);
	var_47_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2056(bool var_36_bool, object var_37_object)
{
	cvector var_39_cvector;
	var_37_object->GetPosition(var_39_cvector);
	bool var_40_bool; cvector var_41_cvector;
	var_39_cvector = var_41_cvector;
	func_2046(var_40_bool, var_41_cvector);
	var_40_bool = var_36_bool;
}


void func_1800(bool var_57_bool)
{
	object var_59_object;
	@FindActor(var_59_object, "player");
	if(!var_59_object) //@nz
		var_57_bool = false;
	bool var_62_bool; object var_63_object;
	var_59_object = var_63_object;
	func_2056(var_62_bool, var_63_object);
	var_62_bool = var_57_bool;
}
EMIT "Stack[-1] = 0";


void func_2065(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_1530(bool var_0_bool, int var_533_int, object var_534_object)
{
	var_0_bool = var_534_object;
	bool var_544_bool; object var_545_object;
	var_534_object = var_545_object;
	func_2070(var_544_bool, var_545_object, 70.0);
	if(!var_544_bool) { //@nz
		var_533_int = -2;
		return 8;
	}
	object var_540_object;
	@CreateDialog(var_540_object);
	int var_548_int;
	func_2471(var_548_int);
	var_540_object->SetNPCName(var_548_int);
	int var_549_int;
	func_2469(var_549_int);
	var_540_object->SetNPCDescription(var_549_int);
	string var_550_string;
	func_2473(var_550_string);
	var_540_object->SetPhoto(var_550_string);
	string var_551_string;
	func_2475(var_551_string);
	var_540_object->SetPhoto2(var_551_string);
	int var_552_int;
	func_2637(var_552_int);
	var_540_object->SetPlayerName(var_552_int);
	bool var_541_bool;
	@IsOverrideActive(var_541_bool);
	if(var_541_bool != 0) {
		var_533_int = -2;
		return 8;
	}
	@DoDialog(var_540_object);
	bool var_554_bool; object var_555_object;
	object var_556_object;
	func_2409(var_556_object);
	var_556_object = var_555_object;
	func_2157(var_554_bool, var_555_object);
	object var_557_object; object var_558_object;
	var_534_object = var_557_object;
	var_540_object = var_558_object;
	TaskCall(12);
	func_1611(var_559_object, var_560_object, var_561_string, var_562_bool, var_557_object, var_558_object);
	TaskReturn();
	bool var_543_bool;
	var_540_object->IsDialogEnd(var_543_bool);
	
	for(;;) {
		var_590_bool = !var_543_bool; //@nz
		if(var_590_bool == 0) goto Label_1600;
		@sync();
		var_540_object->IsDialogEnd(var_543_bool);
	}
	
Label_1600:
	object var_591_object;
	var_534_object = var_591_object;
	func_2139();
	@StopDialog(var_540_object);
	var_540_object->GetReturnValue(-1);
	int var_542_int = var_533_int;
}
EMIT "Stack[-4] = 0";


void func_2070(bool var_109_bool, object var_110_object, float var_111_float)
{
	cvector var_122_cvector; bool var_129_bool;
	var_110_object->GetPosition(var_122_cvector);
	float var_121_float;
	var_110_object->GetEyesHeight(var_121_float);
	var_130_float = GetByIndex(var_122_cvector, 1);
	SetByIndex(var_122_cvector, 1) = (var_130_float + var_121_float);
	cvector var_123_cvector;
	@GetPosition(var_123_cvector);
	@GetEyesHeight(var_121_float);
	var_131_float = GetByIndex(var_123_cvector, 1);
	SetByIndex(var_123_cvector, 1) = (var_131_float + var_121_float);
	cvector var_124_cvector = var_122_cvector - var_123_cvector;
	var_132_float = GetByIndex(var_124_cvector, 1);
	SetByIndex(var_124_cvector, 1) = (float)0;
	var_134_float = sqrt(var_124_cvector | var_124_cvector);
	var_124_cvector /= var_134_float;
	cvector var_125_cvector = -var_124_cvector;
	cvector var_136_cvector;
	func_2415(var_136_cvector, (var_125_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_126_cvector = ((var_124_cvector * var_111_float) + (var_136_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_128_bool;
	@IsOverrideActive(var_128_bool);
	if(var_128_bool != 0)
		var_109_bool = false;
	@StopWorld();
	@CameraTransit((var_123_cvector + var_126_cvector), var_125_cvector, true);
	var_150_float = GetByIndex(var_126_cvector, 0);
	var_151_float = GetByIndex(var_126_cvector, 2);
	@Rotate(var_150_float, var_151_float);
	bool var_152_bool;
	func_2477(var_152_bool);
	if(var_152_bool != 0) {
	} else {
		@HasAnimationTrack(var_129_bool, "head");
		if(var_129_bool == 0) goto Label_2133;
		@LookAsyncCamera("head");
	}
Label_2133:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_109_bool = true;
	
}


void func_1815(bool var_0_bool)
{
	var_109_float = GetByIndex(var_0_bool, 0);
	var_110_float = GetByIndex(var_0_bool, 2);
	@RotateAsync(var_109_float, var_110_float);
}


void func_1820(bool var_40_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) { //@nz
		var_40_bool = false;
		return 4;
	}
	float var_47_float; object var_48_object;
	func_2038(var_47_float, var_48_object);
	if(var_47_float > 90000.0) {
		var_40_bool = false;
		return 4;
	}
	bool var_44_bool;
	@CanSee(var_44_bool, var_48_object);
	var_44_bool = var_40_bool;
}
EMIT "Stack[-2] = 0";


void func_2593(void)
{
	object var_74_object; int var_75_int; bool var_76_bool;
	@ClearSubContainer(0);
	int var_72_int;
	@irand(var_72_int, 8);
	int var_73_int = 0;
	
	while(var_73_int < (var_72_int + 2)) {
		@CreateInvItem(var_74_object);
		var_74_object->SetItemName("grass_combination");
		@irand(var_75_int, 50);
		var_75_int += 30;
		var_74_object->SetProperty("im_inc", (var_75_int / 100.0));
		@irand(var_75_int, 40);
		var_74_object->SetProperty("hl_inc", (-(var_75_int / 100.0)));
		@AddItem(var_76_bool, var_74_object, 0);
		var_74_object = null;
		var_73_int += 1;
	}
	
}


void func_40(bool var_0_bool, int var_324_int, object var_325_object)
{
	var_0_bool = var_325_object;
	bool var_335_bool; object var_336_object;
	var_325_object = var_336_object;
	func_2070(var_335_bool, var_336_object, 70.0);
	if(!var_335_bool) { //@nz
		var_324_int = -2;
		return 8;
	}
	object var_331_object;
	@CreateDialog(var_331_object);
	int var_339_int;
	func_2471(var_339_int);
	var_331_object->SetNPCName(var_339_int);
	int var_340_int;
	func_2469(var_340_int);
	var_331_object->SetNPCDescription(var_340_int);
	string var_341_string;
	func_2473(var_341_string);
	var_331_object->SetPhoto(var_341_string);
	string var_342_string;
	func_2475(var_342_string);
	var_331_object->SetPhoto2(var_342_string);
	int var_343_int;
	func_2637(var_343_int);
	var_331_object->SetPlayerName(var_343_int);
	bool var_332_bool;
	@IsOverrideActive(var_332_bool);
	if(var_332_bool != 0) {
		var_324_int = -2;
		return 8;
	}
	@DoDialog(var_331_object);
	bool var_345_bool; object var_346_object;
	object var_347_object;
	func_2409(var_347_object);
	var_347_object = var_346_object;
	func_2157(var_345_bool, var_346_object);
	object var_348_object; object var_349_object;
	var_325_object = var_348_object;
	var_331_object = var_349_object;
	TaskCall(2);
	func_121(var_350_object, var_351_object, var_352_string, var_353_bool, var_348_object, var_349_object);
	TaskReturn();
	bool var_334_bool;
	var_331_object->IsDialogEnd(var_334_bool);
	
	for(;;) {
		var_389_bool = !var_334_bool; //@nz
		if(var_389_bool == 0) goto Label_110;
		@sync();
		var_331_object->IsDialogEnd(var_334_bool);
	}
	
Label_110:
	object var_390_object;
	var_325_object = var_390_object;
	func_2139();
	@StopDialog(var_331_object);
	var_331_object->GetReturnValue(-1);
	int var_333_int = var_324_int;
}
EMIT "Stack[-4] = 0";


void func_1068(bool var_0_bool, int var_601_int, object var_602_object)
{
	var_0_bool = var_602_object;
	bool var_612_bool; object var_613_object;
	var_602_object = var_613_object;
	func_2070(var_612_bool, var_613_object, 70.0);
	if(!var_612_bool) { //@nz
		var_601_int = -2;
		return 8;
	}
	object var_608_object;
	@CreateDialog(var_608_object);
	int var_616_int;
	func_2471(var_616_int);
	var_608_object->SetNPCName(var_616_int);
	int var_617_int;
	func_2469(var_617_int);
	var_608_object->SetNPCDescription(var_617_int);
	string var_618_string;
	func_2473(var_618_string);
	var_608_object->SetPhoto(var_618_string);
	string var_619_string;
	func_2475(var_619_string);
	var_608_object->SetPhoto2(var_619_string);
	int var_620_int;
	func_2637(var_620_int);
	var_608_object->SetPlayerName(var_620_int);
	bool var_609_bool;
	@IsOverrideActive(var_609_bool);
	if(var_609_bool != 0) {
		var_601_int = -2;
		return 8;
	}
	@DoDialog(var_608_object);
	bool var_622_bool; object var_623_object;
	object var_624_object;
	func_2409(var_624_object);
	var_624_object = var_623_object;
	func_2157(var_622_bool, var_623_object);
	object var_625_object; object var_626_object;
	var_602_object = var_625_object;
	var_608_object = var_626_object;
	TaskCall(8);
	func_1149(var_627_object, var_628_object, var_629_string, var_630_bool, var_625_object, var_626_object);
	TaskReturn();
	bool var_611_bool;
	var_608_object->IsDialogEnd(var_611_bool);
	
	for(;;) {
		var_658_bool = !var_611_bool; //@nz
		if(var_658_bool == 0) goto Label_1138;
		@sync();
		var_608_object->IsDialogEnd(var_611_bool);
	}
	
Label_1138:
	object var_659_object;
	var_602_object = var_659_object;
	func_2139();
	@StopDialog(var_608_object);
	var_608_object->GetReturnValue(-1);
	int var_610_int = var_601_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2351(void)
{
	@CameraSwitchToNormal(true);
}


void func_1327(bool var_0_bool, int var_660_int, object var_661_object)
{
	var_0_bool = var_661_object;
	bool var_671_bool; object var_672_object;
	var_661_object = var_672_object;
	func_2070(var_671_bool, var_672_object, 70.0);
	if(!var_671_bool) { //@nz
		var_660_int = -2;
		return 8;
	}
	object var_667_object;
	@CreateDialog(var_667_object);
	int var_675_int;
	func_2471(var_675_int);
	var_667_object->SetNPCName(var_675_int);
	int var_676_int;
	func_2469(var_676_int);
	var_667_object->SetNPCDescription(var_676_int);
	string var_677_string;
	func_2473(var_677_string);
	var_667_object->SetPhoto(var_677_string);
	string var_678_string;
	func_2475(var_678_string);
	var_667_object->SetPhoto2(var_678_string);
	int var_679_int;
	func_2637(var_679_int);
	var_667_object->SetPlayerName(var_679_int);
	bool var_668_bool;
	@IsOverrideActive(var_668_bool);
	if(var_668_bool != 0) {
		var_660_int = -2;
		return 8;
	}
	@DoDialog(var_667_object);
	bool var_681_bool; object var_682_object;
	object var_683_object;
	func_2409(var_683_object);
	var_683_object = var_682_object;
	func_2157(var_681_bool, var_682_object);
	object var_684_object; object var_685_object;
	var_661_object = var_684_object;
	var_667_object = var_685_object;
	TaskCall(10);
	func_1408(var_686_object, var_687_object, var_688_string, var_689_bool, var_684_object, var_685_object);
	TaskReturn();
	bool var_670_bool;
	var_667_object->IsDialogEnd(var_670_bool);
	
	for(;;) {
		var_714_bool = !var_670_bool; //@nz
		if(var_714_bool == 0) goto Label_1397;
		@sync();
		var_667_object->IsDialogEnd(var_670_bool);
	}
	
Label_1397:
	object var_715_object;
	var_661_object = var_715_object;
	func_2139();
	@StopDialog(var_667_object);
	var_667_object->GetReturnValue(-1);
	int var_669_int = var_660_int;
}
EMIT "Stack[-4] = 0";


void func_1842(void)
{
	float var_719_float;
	@rand(var_719_float, 8, 16);
	@SetTimer(10, var_719_float);
}


void func_2356(string var_293_string)
{
	bool var_297_bool; float var_298_float; float var_299_float;
	@lshHasAnimation(var_297_bool, var_293_string);
	if(var_297_bool != 0) {
		@lshGetAnimTimes(var_293_string, var_298_float, var_299_float);
		@lshPlayAnimation(var_298_float, var_299_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_293_string);
	}
	
}


void func_1851(void)
{
	@KillTimer(10);
}


void func_577(bool var_0_bool, int var_437_int, object var_438_object)
{
	var_0_bool = var_438_object;
	bool var_448_bool; object var_449_object;
	var_438_object = var_449_object;
	func_2070(var_448_bool, var_449_object, 70.0);
	if(!var_448_bool) { //@nz
		var_437_int = -2;
		return 8;
	}
	object var_444_object;
	@CreateDialog(var_444_object);
	int var_452_int;
	func_2471(var_452_int);
	var_444_object->SetNPCName(var_452_int);
	int var_453_int;
	func_2469(var_453_int);
	var_444_object->SetNPCDescription(var_453_int);
	string var_454_string;
	func_2473(var_454_string);
	var_444_object->SetPhoto(var_454_string);
	string var_455_string;
	func_2475(var_455_string);
	var_444_object->SetPhoto2(var_455_string);
	int var_456_int;
	func_2637(var_456_int);
	var_444_object->SetPlayerName(var_456_int);
	bool var_445_bool;
	@IsOverrideActive(var_445_bool);
	if(var_445_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	@DoDialog(var_444_object);
	bool var_458_bool; object var_459_object;
	object var_460_object;
	func_2409(var_460_object);
	var_460_object = var_459_object;
	func_2157(var_458_bool, var_459_object);
	object var_461_object; object var_462_object;
	var_438_object = var_461_object;
	var_444_object = var_462_object;
	TaskCall(6);
	func_658(var_463_object, var_464_object, var_465_string, var_466_bool, var_461_object, var_462_object);
	TaskReturn();
	bool var_447_bool;
	var_444_object->IsDialogEnd(var_447_bool);
	
	for(;;) {
		var_503_bool = !var_447_bool; //@nz
		if(var_503_bool == 0) goto Label_647;
		@sync();
		var_444_object->IsDialogEnd(var_447_bool);
	}
	
Label_647:
	object var_504_object;
	var_438_object = var_504_object;
	func_2139();
	@StopDialog(var_444_object);
	var_444_object->GetReturnValue(-1);
	int var_446_int = var_437_int;
}
EMIT "Stack[-4] = 0";


void func_2372(string var_271_string, bool var_272_bool)
{
	bool var_278_bool; float var_279_float; float var_280_float;
	@lshHasAnimation(var_278_bool, var_271_string);
	if(var_278_bool != 0) {
		@lshGetAnimTimes(var_271_string, var_279_float, var_280_float);
		@lshPlayAnimation(var_279_float, var_280_float, var_272_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_271_string);
	}
	
}


// @pe
void func_1611(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_557_object, object var_558_object)
{
	var_0_bool = var_558_object;
	var_1_object = var_557_object;
	var_3_object = false;
	if(1 != 0) {
		func_1674(var_558_object, "Neutral");
		var_0_bool->SetMessage(542099); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(542100, 44405, 44402); //@t
		var_0_bool->AddReply(542101, -1, 44403); //@t
		var_0_bool->AddReply(542102, -1, 44404); //@t
		goto Label_1644;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x64f";
	}
Label_1644:
	bool var_582_bool;
	func_2477(var_582_bool);
	if(var_582_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2356(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1673;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1673:
		return 0;

	}
	
}


void func_2637(int var_161_int)
{
	int var_163_int;
	@GetVariable("branch", var_163_int);
	if(var_163_int == 0) {
		var_161_int = 1;
		return 2;
	EMIT "GOTO 0xa5c";
	}
	if(var_163_int == 1) {
		var_161_int = 2;
		return 2;
	}
	var_161_int = 3;
}


void func_2387(bool var_204_bool, string var_205_string)
{
	bool var_207_bool;
	bool var_208_bool;
	func_2477(var_208_bool);
	if(var_208_bool != 0) {
		@lshHasSpeech(var_207_bool, var_205_string);
		if(var_207_bool != 0) {
			@lshPlaySpeech(var_205_string);
			var_204_bool = true;
		}
	}
	var_204_bool = false;
}


void func_2139(void)
{
	bool var_312_bool;
	@CameraSwitchToNormal(true);
	bool var_314_bool;
	func_2477(var_314_bool);
	if(var_314_bool != 0) {
	} else {
		@HasAnimationTrack(var_312_bool, "head");
		if(var_312_bool == 0) goto Label_2156;
		@UnlookAsync("head");
	}
Label_2156:
	
}


void func_2654(object var_50_object, object var_326_object, object var_439_object, object var_535_object)
{
	int var_53_int;
	@GetVariable("tr_andrei", var_53_int);
	int var_56_int;
	func_2430(var_56_int);
	if(var_53_int != var_56_int) {
		func_2593();
		int var_95_int;
		func_2430(var_95_int);
		@SetVariable("tr_andrei", var_95_int);
	}
	int var_54_int;
	@GetVariable("mt_andrei", var_54_int);
	if(!var_54_int) { //@nz
		int var_98_int; object var_99_object;
		var_50_object = var_99_object;
		TaskCall(3);
		func_351(var_100_object, var_98_int, var_99_object);
		TaskReturn();
		@SetVariable("mt_andrei", 1);
	}
	bool var_320_bool;
	func_2439(var_320_bool, 2);
	if(var_320_bool != 0) {
		int var_324_int; object var_325_object;
		var_50_object = var_325_object;
		TaskCall(1);
		func_40(var_326_object, var_324_int, var_325_object);
		TaskReturn();
		if(1000 == var_326_object) {
			bool var_392_bool; object var_393_object;
			var_50_object = var_393_object;
			func_2295(var_392_bool, var_393_object);
			if(!var_392_bool) //@nz
				return 4;
			object var_425_object;
			var_50_object = var_425_object;
			TaskCall(0);
			func_0(var_425_object);
			TaskReturn();
			object var_432_object;
			var_50_object = var_432_object;
			func_2351();
		}
		return 4;
	}
	bool var_434_bool;
	func_2439(var_434_bool, 5);
	if(var_434_bool != 0) {
		int var_437_int; object var_438_object;
		var_50_object = var_438_object;
		TaskCall(5);
		func_577(var_439_object, var_437_int, var_438_object);
		TaskReturn();
		if(1000 == var_439_object) {
			bool var_506_bool; object var_507_object;
			var_50_object = var_507_object;
			func_2295(var_506_bool, var_507_object);
			if(!var_506_bool) //@nz
				return 4;
			object var_509_object;
			var_50_object = var_509_object;
			TaskCall(0);
			func_0(var_509_object);
			TaskReturn();
			object var_511_object;
			var_50_object = var_511_object;
			func_2351();
		}
		return 4;
	}
	bool var_512_bool = true;
	bool var_513_bool = true;
	bool var_514_bool = true;
	bool var_515_bool = true;
	bool var_516_bool = true;
	bool var_517_bool = true;
	bool var_518_bool;
	func_2439(var_518_bool, 3);
	if(var_518_bool != 1) {
		bool var_520_bool;
		func_2439(var_520_bool, 4);
		if(var_520_bool != 1)
			var_517_bool = false;
	}
	if(var_517_bool != 1) {
		bool var_522_bool;
		func_2439(var_522_bool, 6);
		if(var_522_bool != 1)
			var_516_bool = false;
	}
	if(var_516_bool != 1) {
		bool var_524_bool;
		func_2439(var_524_bool, 7);
		if(var_524_bool != 1)
			var_515_bool = false;
	}
	if(var_515_bool != 1) {
		bool var_526_bool;
		func_2439(var_526_bool, 8);
		if(var_526_bool != 1)
			var_514_bool = false;
	}
	if(var_514_bool != 1) {
		bool var_528_bool;
		func_2439(var_528_bool, 9);
		if(var_528_bool != 1)
			var_513_bool = false;
	}
	if(var_513_bool != 1) {
		bool var_530_bool;
		func_2439(var_530_bool, 10);
		if(var_530_bool != 1)
			var_512_bool = false;
	}
	if(var_512_bool != 0) {
		int var_533_int; object var_534_object;
		var_50_object = var_534_object;
		TaskCall(11);
		func_1530(var_535_object, var_533_int, var_534_object);
		TaskReturn();
		if(1000 == var_535_object) {
			bool var_593_bool; object var_594_object;
			var_50_object = var_594_object;
			func_2295(var_593_bool, var_594_object);
			if(!var_593_bool) //@nz
				return 4;
			object var_596_object;
			var_50_object = var_596_object;
			TaskCall(0);
			func_0(var_596_object);
			TaskReturn();
			object var_598_object;
			var_50_object = var_598_object;
			func_2351();
		}
		return 4;
	}
	bool var_599_bool;
	func_2439(var_599_bool, 12);
	if(var_599_bool != 0) {
		int var_601_int; object var_602_object;
		var_50_object = var_602_object;
		TaskCall(7);
		func_1068(var_603_object, var_601_int, var_602_object);
		TaskReturn();
		return 4;
	}
	int var_660_int; object var_661_object;
	var_50_object = var_661_object;
	TaskCall(9);
	func_1327(var_662_object, var_660_int, var_661_object);
	TaskReturn();
}


void func_351(bool var_0_bool, int var_98_int, object var_99_object)
{
	var_0_bool = var_99_object;
	bool var_109_bool; object var_110_object;
	var_99_object = var_110_object;
	func_2070(var_109_bool, var_110_object, 70.0);
	if(!var_109_bool) { //@nz
		var_98_int = -2;
		return 8;
	}
	object var_105_object;
	@CreateDialog(var_105_object);
	int var_157_int;
	func_2471(var_157_int);
	var_105_object->SetNPCName(var_157_int);
	int var_158_int;
	func_2469(var_158_int);
	var_105_object->SetNPCDescription(var_158_int);
	string var_159_string;
	func_2473(var_159_string);
	var_105_object->SetPhoto(var_159_string);
	string var_160_string;
	func_2475(var_160_string);
	var_105_object->SetPhoto2(var_160_string);
	int var_161_int;
	func_2637(var_161_int);
	var_105_object->SetPlayerName(var_161_int);
	bool var_106_bool;
	@IsOverrideActive(var_106_bool);
	if(var_106_bool != 0) {
		var_98_int = -2;
		return 8;
	}
	@DoDialog(var_105_object);
	bool var_170_bool; object var_171_object;
	object var_172_object;
	func_2409(var_172_object);
	var_172_object = var_171_object;
	func_2157(var_170_bool, var_171_object);
	object var_260_object; object var_261_object;
	var_99_object = var_260_object;
	var_105_object = var_261_object;
	TaskCall(4);
	func_432(var_262_object, var_263_object, var_264_string, var_265_bool, var_260_object, var_261_object);
	TaskReturn();
	bool var_108_bool;
	var_105_object->IsDialogEnd(var_108_bool);
	
	for(;;) {
		var_309_bool = !var_108_bool; //@nz
		if(var_309_bool == 0) goto Label_421;
		@sync();
		var_105_object->IsDialogEnd(var_108_bool);
	}
	
Label_421:
	object var_310_object;
	var_99_object = var_310_object;
	func_2139();
	@StopDialog(var_105_object);
	var_105_object->GetReturnValue(-1);
	int var_107_int = var_98_int;
}
EMIT "Stack[-4] = 0";


void func_2402(void)
{
	bool var_35_bool;
	func_2477(var_35_bool);
	if(var_35_bool != 0)
		@lshStopSpeech();
}


void func_2409(object var_172_object)
{
	object var_174_object;
	@self(var_174_object);
	var_174_object = var_172_object;
}
EMIT "Stack[-1] = 0";


void func_2157(bool var_170_bool, object var_171_object)
{
	int var_177_int; int var_178_int;
	@GetVariable("voice_common", var_177_int);
	if(var_177_int != 0) {
		bool var_181_bool; object var_182_object;
		var_171_object = var_182_object;
		func_2215(var_181_bool, var_182_object);
		if(!var_181_bool) { //@nz
			bool var_212_bool; object var_213_object;
			var_171_object = var_213_object;
			func_2252(var_212_bool, var_213_object);
			if(!var_212_bool) { //@nz
				var_170_bool = false;
				return 4;
			}
		}
		@irand(var_178_int, 2);
		if(var_178_int != 0)
			@SetVariable("voice_common", ((var_177_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_252_bool; object var_253_object;
		var_171_object = var_253_object;
		func_2252(var_252_bool, var_253_object);
		if(!var_252_bool) { //@nz
			bool var_255_bool; object var_256_object;
			var_171_object = var_256_object;
			func_2215(var_255_bool, var_256_object);
			if(!var_255_bool) { //@nz
				var_170_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2213;
	
Label_2213:
	var_170_bool = true;
	
}


void func_2415(cvector var_136_cvector, cvector var_137_cvector)
{
	float var_140_float = sqrt(var_137_cvector | var_137_cvector);
	if(var_140_float < 0.000001)
		var_136_cvector = [0.0, 0.0, 0.0];
	var_136_cvector = var_137_cvector / var_140_float;
}


// @pe
void func_121(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_348_object, object var_349_object)
{
	var_0_bool = var_349_object;
	var_3_object = false;
	if(1 != 0) {
		func_189(var_349_object, "Neutral");
		var_0_bool->SetMessage(525362); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(525363, -1, 26731); //@t
		bool var_367_bool;
		func_2502(var_348_object);
		if(var_367_bool != 0)
			var_0_bool->AddReply(525364, 26733, 26732); //@t
		var_0_bool->AddReply(525368, -1, 26736); //@t
		goto Label_159;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7d";
	}
Label_159:
	bool var_381_bool;
	func_2477(var_381_bool);
	if(var_381_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2356(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_188;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_188:
		return 0;

	}
	
}


void func_2425(int var_369_int, string var_370_string)
{
	int var_372_int;
	@GetVariable(var_370_string, var_372_int);
	var_372_int = var_369_int;
}


// @pe
void func_1149(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_625_object, object var_626_object)
{
	var_0_bool = var_626_object;
	var_1_object = var_625_object;
	var_3_object = false;
	if(1 != 0) {
		func_1212(var_626_object, "Neutral");
		var_0_bool->SetMessage(535231); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535232, 36953, 36907); //@t
		var_0_bool->AddReply(535233, -1, 36908); //@t
		var_0_bool->AddReply(535280, -1, 36956); //@t
		goto Label_1182;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x481";
	}
Label_1182:
	bool var_650_bool;
	func_2477(var_650_bool);
	if(var_650_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2356(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1211;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1211:
		return 0;

	}
	
}


void func_2430(int var_56_int)
{
	float var_58_float;
	@GetGameTime(var_58_float);
	var_56_int = 1 + (var_58_float / 24);
}


// @pe
void func_1408(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_684_object, object var_685_object)
{
	var_0_bool = var_685_object;
	var_1_object = var_684_object;
	var_3_object = false;
	if(1 != 0) {
		func_1466(var_685_object, "Neutral");
		var_0_bool->SetMessage(540545); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540546, -1, 42555); //@t
		var_0_bool->AddReply(540798, -1, 42847); //@t
		goto Label_1436;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x584";
	}
Label_1436:
	bool var_706_bool;
	func_2477(var_706_bool);
	if(var_706_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2356(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1465;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1465:
		return 0;

	}
	
}


// @pe
void func_2439(bool var_320_bool, int var_321_int)
{
	int var_322_int;
	func_2430(var_322_int);
	var_320_bool = var_322_int == var_321_int;
}


// @pe
void func_1674(object var_2_object, string var_564_string)
{
	bool var_565_bool;
	func_2477(var_565_bool);
	if(!var_565_bool) //@nz
		return 0;
	if(var_564_string == var_2_object)
		return 0;
	string var_568_string; bool var_569_bool;
	var_564_string = var_568_string;
	if(var_564_string == "")
		var_569_bool = false;
	else
		var_569_bool = true;
	func_2372(var_568_string, var_569_bool);
	var_2_object = var_564_string;
	
}


void func_2445(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


// @pe
void func_658(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_461_object, object var_462_object)
{
	var_0_bool = var_462_object;
	var_3_object = false;
	if(1 != 0) {
		func_731(var_462_object, "Grin");
		var_0_bool->SetMessage(525919); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_477_bool;
		func_2514(var_461_object);
		if(var_477_bool != 0)
			var_0_bool->AddReply(525920, 42995, 27212); //@t
		var_0_bool->AddReply(529685, -1, 31148); //@t
		var_0_bool->AddReply(525923, -1, 27215); //@t
		var_0_bool->AddReply(529057, -1, 30499); //@t
		goto Label_701;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x296";
	}
Label_701:
	bool var_495_bool;
	func_2477(var_495_bool);
	if(var_495_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2356(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_730;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_730:
		return 0;

	}
	
}


void func_2452(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_2445(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


void func_2469(int var_158_int)
{
	var_158_int = 515529;
}


void func_2471(int var_157_int)
{
	var_157_int = 502855;
}


void func_2215(bool var_181_bool, object var_182_object)
{
	string var_188_string; bool var_190_bool; int var_191_int; string var_192_string;
	var_188_string = "c";
	int var_189_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_182_object->HasProperty((var_188_string + (var_189_int + 1)), var_190_bool);
			if(!var_190_bool) { //@nz
			} else {
				var_189_int += 1;
			}
		}
		if(!var_189_int) { //@nz
			var_181_bool = false;
			return 10;
		}
		var_191_int = 0;
		if(var_189_int > 1)
			@irand(var_191_int, var_189_int);
		var_182_object->GetProperty((var_188_string + (var_191_int + 1)), var_192_string);
		bool var_204_bool; string var_205_string;
		var_192_string = var_205_string;
		func_2387(var_204_bool, var_205_string);
		var_204_bool = var_181_bool;
		return 10;

	}
}


void func_2473(string var_159_string)
{
	var_159_string = "ui/NPC_Andrei.png";
}


void func_1962(void)
{
	bool var_44_bool; int var_45_int; int var_46_int; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_2065(var_48_bool);
	if(!var_48_bool) //@nz
		return 12;
	int var_50_int;
	func_2452(var_50_int);
	int var_42_int;
	var_50_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_43_int < 5) {
			bool var_66_bool;
			func_2065(var_66_bool);
			if(var_66_bool != 0)
				var_63_bool = true;
		}
		if(var_63_bool != 0) {
			if(!var_42_int) { //@nz
				@Sleep(3, var_44_bool);
				if(!var_44_bool) { //@nz
				} else {
			} else {
			@irand(var_45_int, var_42_int);
			@irand(var_46_int, 5);
			if(var_46_int != 0)
				var_45_int = 0;
			string var_77_string; int var_78_int;
			var_45_int = var_78_int;
			func_2445(var_77_string, var_78_int);
			@PlayAnimation("all", var_77_string);
			@WaitForAnimEnd(var_47_bool);
			var_79_bool = !var_47_bool; //@nz
			if(var_79_bool == 0) goto Label_2017;
			goto Label_2028;
			}
				Label_2017:
					bool var_70_bool;
					func_2031(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_2023;
			}
		}
	Label_2028:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2023:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


void func_2475(string var_160_string)
{
	var_160_string = "ui/NPC_Andrei_b.png";
}


void func_2477(bool var_152_bool)
{
	var_152_bool = true;
}


// @pe
void func_2479(void)
{
	@SetVariable("k2q04", 3);
	func_2526();
}


// @pe
void func_432(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_260_object, object var_261_object)
{
	var_0_bool = var_261_object;
	var_1_object = var_260_object;
	var_3_object = false;
	if(1 != 0) {
		func_490(var_261_object, "Neutral");
		var_0_bool->SetMessage(525462); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529295, 30750, 30749); //@t
		var_0_bool->AddReply(525463, -1, 26819); //@t
		goto Label_460;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1b4";
	}
Label_460:
	bool var_291_bool;
	func_2477(var_291_bool);
	if(var_291_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2356(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_489;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_489:
		return 0;

	}
	
}


// @pe
void func_2488(void)
{
	@SetVariable("k5q02", 5);
	func_2539();
}


// @pe
void func_1466(object var_2_object, string var_691_string)
{
	bool var_692_bool;
	func_2477(var_692_bool);
	if(!var_692_bool) //@nz
		return 0;
	if(var_691_string == var_2_object)
		return 0;
	string var_695_string; bool var_696_bool;
	var_691_string = var_695_string;
	if(var_691_string == "")
		var_696_bool = false;
	else
		var_696_bool = true;
	func_2372(var_695_string, var_696_bool);
	var_2_object = var_691_string;
	
}


// @pe
void func_1212(object var_2_object, string var_632_string)
{
	bool var_633_bool;
	func_2477(var_633_bool);
	if(!var_633_bool) //@nz
		return 0;
	if(var_632_string == var_2_object)
		return 0;
	string var_636_string; bool var_637_bool;
	var_632_string = var_636_string;
	if(var_632_string == "")
		var_637_bool = false;
	else
		var_637_bool = true;
	func_2372(var_636_string, var_637_bool);
	var_2_object = var_632_string;
	
}


// @pe
void func_189(object var_2_object, string var_355_string)
{
	bool var_356_bool;
	func_2477(var_356_bool);
	if(!var_356_bool) //@nz
		return 0;
	if(var_355_string == var_2_object)
		return 0;
	string var_359_string; bool var_360_bool;
	var_355_string = var_359_string;
	if(var_355_string == "")
		var_360_bool = false;
	else
		var_360_bool = true;
	func_2372(var_359_string, var_360_bool);
	var_2_object = var_355_string;
	
}


// @pe
void func_2497(object var_39_object)
{
	var_39_object->SetReturnValue(1000);
}


// @pe
void func_2502(bool var_367_bool)
{
	int var_369_int;
	func_2425(var_369_int, "k2q04");
	if(var_369_int == 2)
		var_367_bool = true;
	var_367_bool = false;
}


void func_2252(bool var_212_bool, object var_213_object)
{
	bool var_221_bool; int var_222_int; string var_223_string;
	int var_225_int;
	func_2430(var_225_int);
	string var_219_string = ("d" + var_225_int) + "m";
	int var_220_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_213_object->HasProperty((var_219_string + (var_220_int + 1)), var_221_bool);
			if(!var_221_bool) { //@nz
			} else {
				var_220_int += 1;
			}
		}
		if(!var_220_int) { //@nz
			var_212_bool = false;
			return 10;
		}
		var_222_int = 0;
		if(var_220_int > 1)
			@irand(var_222_int, var_220_int);
		var_213_object->GetProperty((var_219_string + (var_222_int + 1)), var_223_string);
		bool var_239_bool; string var_240_string;
		var_223_string = var_240_string;
		func_2387(var_239_bool, var_240_string);
		var_239_bool = var_212_bool;
		return 10;

	}
}


// @pe
void func_2514(bool var_477_bool)
{
	int var_479_int;
	func_2425(var_479_int, "k5q02");
	if(var_479_int == 4)
		var_477_bool = true;
	var_477_bool = false;
}


// @pe
void func_731(object var_2_object, string var_468_string)
{
	bool var_469_bool;
	func_2477(var_469_bool);
	if(!var_469_bool) //@nz
		return 0;
	if(var_468_string == var_2_object)
		return 0;
	string var_472_string; bool var_473_bool;
	var_468_string = var_472_string;
	if(var_468_string == "")
		var_473_bool = false;
	else
		var_473_bool = true;
	func_2372(var_472_string, var_473_bool);
	var_2_object = var_468_string;
	
}


void func_2526(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 512, 2, 529711);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_2565(var_52_bool, var_53_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_490(object var_2_object, string var_267_string)
{
	bool var_268_bool;
	func_2477(var_268_bool);
	if(!var_268_bool) //@nz
		return 0;
	if(var_267_string == var_2_object)
		return 0;
	string var_271_string; bool var_272_bool;
	var_267_string = var_271_string;
	if(var_267_string == "")
		var_272_bool = false;
	else
		var_272_bool = true;
	func_2372(var_271_string, var_272_bool);
	var_2_object = var_267_string;
	
}


void func_2539(void)
{
	object var_43_object;
	@CreateDiaryEntry(var_43_object, 402, 2, 525940);
	bool var_47_bool; object var_48_object;
	var_43_object = var_48_object;
	func_2565(var_47_bool, var_48_object, 397);
}
EMIT "Stack[-1] = 0";


void func_2031(bool var_70_bool)
{
	var_70_bool = true;
}


void func_2033(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2038(float var_47_float, object var_48_object)
{
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	cvector var_53_cvector;
	var_48_object->GetPosition(var_53_cvector);
	var_47_float = (var_53_cvector - var_52_cvector) | (var_53_cvector - var_52_cvector);
}


// @pe
void func_2295(bool var_392_bool, object var_393_object)
{
	object var_395_object;
	var_393_object = var_395_object;
	bool var_394_bool;
	func_2303(var_394_bool, var_395_object, (float)70);
	var_394_bool = var_392_bool;
}


void func_2552(object var_56_object)
{
	object var_58_object;
	@GetDiaryRoot(var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_56_object = false;
	}
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_1786(bool var_0_bool)
{
	bool var_32_bool;
	func_2065(var_32_bool);
	if(!var_32_bool) //@nz
		@Hold();
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_1962();
	}
}
EMIT "Return(); Pop(0)";


void func_2046(bool var_40_bool, cvector var_41_cvector)
{
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector = var_41_cvector - var_45_cvector;
	var_48_float = GetByIndex(var_46_cvector, 0);
	var_49_float = GetByIndex(var_46_cvector, 2);
	bool var_47_bool;
	@Rotate(var_48_float, var_49_float, var_47_bool);
	var_47_bool = var_40_bool;
}


void func_2303(bool var_394_bool, object var_395_object, float var_396_float)
{
	cvector var_406_cvector;
	var_395_object->GetPosition(var_406_cvector);
	float var_405_float;
	var_395_object->GetEyesHeight(var_405_float);
	var_413_float = GetByIndex(var_406_cvector, 1);
	SetByIndex(var_406_cvector, 1) = (var_413_float + var_405_float);
	cvector var_407_cvector;
	@GetPosition(var_407_cvector);
	@GetEyesHeight(var_405_float);
	var_414_float = GetByIndex(var_407_cvector, 1);
	SetByIndex(var_407_cvector, 1) = (var_414_float + var_405_float);
	cvector var_408_cvector = var_406_cvector - var_407_cvector;
	var_415_float = GetByIndex(var_408_cvector, 1);
	SetByIndex(var_408_cvector, 1) = (float)0;
	var_417_float = sqrt(var_408_cvector | var_408_cvector);
	var_408_cvector /= var_417_float;
	cvector var_409_cvector = -var_408_cvector;
	cvector var_410_cvector = (var_408_cvector * var_396_float) - [0.0, 10.0, 0.0];
	bool var_412_bool;
	@IsOverrideActive(var_412_bool);
	if(var_412_bool != 0)
		var_394_bool = false;
	@StopWorld();
	@CameraTransit((var_407_cvector + var_410_cvector), var_409_cvector, true);
	var_422_float = GetByIndex(var_410_cvector, 0);
	var_423_float = GetByIndex(var_410_cvector, 2);
	@Rotate(var_422_float, var_423_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_394_bool = true;
}


