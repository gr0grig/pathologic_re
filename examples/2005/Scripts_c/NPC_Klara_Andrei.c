// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, cvector var_61_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, cvector var_62_cvector)
	{
		bool var_63_bool;
		func_3699(var_63_bool);
		if(var_63_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 26731) {
				object var_68_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_63_cvector == 26734) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_3701();
				object var_100_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_63_cvector == 26735) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_bool;
				func_3701();
			}
			if(var_62_bool == 26730) {
				func_202(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(525362); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525363, -1, 26731); //@t
				bool var_124_bool;
				func_3724(var_1_object);
				if(var_124_bool != 0)
					var_0_bool->AddReply(525364, 26733, 26732); //@t
				var_0_bool->AddReply(525368, -1, 26736); //@t
				return 0;
			}
			if(var_62_bool == 26733) {
				func_202(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(525365); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529141, 30588, 30587); //@t
				return 0;
			}
			if(var_62_bool == 30588) {
				func_202(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529142); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529143, 30590, 30589); //@t
				return 0;
			}
			if(var_62_bool == 30590) {
				func_202(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529144); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525366, -1, 26734); //@t
				var_0_bool->AddReply(525367, -1, 26735); //@t
				return 0;
			}
			var_3_object = true;
			bool var_162_bool;
			func_3699(var_162_bool);
			if(var_162_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe1";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_62_bool == 26818) {
				func_503(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(525462); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529295, 30750, 30749); //@t
				var_0_bool->AddReply(525463, -1, 26819); //@t
				return 0;
			}
			if(var_62_bool == 30750) {
				func_503(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529296); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529297, -1, 30751); //@t
				var_0_bool->AddReply(529298, -1, 30752); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_3699(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x20e";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 27214) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_bool;
				func_3710();
			}
			if(var_63_cvector == 43013) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_bool;
				func_3710();
			}
			if(var_63_cvector == 43010) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_bool;
				func_3710();
			}
			if(var_63_cvector == 43005) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_bool;
				func_3710();
			}
			if(var_63_cvector == 43002) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_bool;
				func_3710();
			}
			if(var_63_cvector == 43000) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_bool;
				func_3710();
			}
			if(var_63_cvector == 31148) {
				object var_117_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_62_bool == 27211) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(525919); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_135_bool;
				func_3736(var_1_object);
				if(var_135_bool != 0)
					var_0_bool->AddReply(525920, 42995, 27212); //@t
				var_0_bool->AddReply(529685, -1, 31148); //@t
				var_0_bool->AddReply(525923, -1, 27215); //@t
				var_0_bool->AddReply(529057, -1, 30499); //@t
				return 0;
			}
			if(var_62_bool == 42995) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(540917); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540918, 27213, 42996); //@t
				var_0_bool->AddReply(540919, 42998, 42997); //@t
				return 0;
			}
			if(var_62_bool == 42998) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(540920); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540921, 27213, 42999); //@t
				var_0_bool->AddReply(540922, -1, 43000); //@t
				return 0;
			}
			if(var_62_bool == 27213) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(525921); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529058, 30501, 30500); //@t
				var_0_bool->AddReply(529062, 30503, 30504); //@t
				return 0;
			}
			if(var_62_bool == 30501) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529059); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529060, 30503, 30502); //@t
				var_0_bool->AddReply(540923, -1, 43002); //@t
				return 0;
			}
			if(var_62_bool == 30503) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529061); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540924, 43004, 43003); //@t
				return 0;
			}
			if(var_62_bool == 43004) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(540925); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529063, 30507, 30506); //@t
				var_0_bool->AddReply(540926, -1, 43005); //@t
				return 0;
			}
			if(var_62_bool == 30507) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529064); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540927, 43007, 43006); //@t
				var_0_bool->AddReply(540931, -1, 43010); //@t
				return 0;
			}
			if(var_62_bool == 43007) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(540928); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540929, 43009, 43008); //@t
				var_0_bool->AddReply(540932, 43009, 43011); //@t
				return 0;
			}
			if(var_62_bool == 43009) {
				func_744(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(540930); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525922, -1, 27214); //@t
				var_0_bool->AddReply(540933, -1, 43013); //@t
				return 0;
			}
			var_3_object = true;
			bool var_242_bool;
			func_3699(var_242_bool);
			if(var_242_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2ff";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 31142) {
				object var_68_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_62_bool == 31141) {
				func_1220(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529678); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529679, -1, 31142); //@t
				var_0_bool->AddReply(529680, -1, 31143); //@t
				return 0;
			}
			var_3_object = true;
			bool var_92_bool;
			func_3699(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4db";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 31146) {
				object var_68_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_62_bool == 31145) {
				func_1431(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529682); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529683, -1, 31146); //@t
				var_0_bool->AddReply(529684, -1, 31147); //@t
				return 0;
			}
			var_3_object = true;
			bool var_92_bool;
			func_3699(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5ae";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 31151) {
				object var_68_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_62_bool == 31150) {
				func_1642(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529687); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529688, -1, 31151); //@t
				var_0_bool->AddReply(529689, -1, 31152); //@t
				return 0;
			}
			var_3_object = true;
			bool var_92_bool;
			func_3699(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x681";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 31155) {
				object var_68_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_62_bool == 31154) {
				func_1853(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529691); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529692, -1, 31155); //@t
				var_0_bool->AddReply(529693, -1, 31156); //@t
				return 0;
			}
			var_3_object = true;
			bool var_92_bool;
			func_3699(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x754";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 31159) {
				object var_68_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_62_bool == 31158) {
				func_2064(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529695); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529696, -1, 31159); //@t
				var_0_bool->AddReply(529697, -1, 31160); //@t
				return 0;
			}
			var_3_object = true;
			bool var_92_bool;
			func_3699(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x827";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 31163) {
				object var_68_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_62_bool == 31162) {
				func_2275(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529699); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529700, -1, 31163); //@t
				var_0_bool->AddReply(529701, -1, 31164); //@t
				return 0;
			}
			var_3_object = true;
			bool var_92_bool;
			func_3699(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8fa";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_63_cvector == 31167) {
				object var_68_object = var_1_object;
				func_3719(var_0_bool);
			}
			if(var_62_bool == 31166) {
				func_2486(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(529703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529704, -1, 31167); //@t
				var_0_bool->AddReply(529705, -1, 31168); //@t
				return 0;
			}
			var_3_object = true;
			bool var_92_bool;
			func_3699(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9cd";
	
	}

}


task task_22
{
}


task task_23
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_62_bool == 36906) {
				func_2702(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(535231); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535232, 36953, 36907); //@t
				var_0_bool->AddReply(535233, -1, 36908); //@t
				var_0_bool->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_62_bool == 36953) {
				func_2702(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(535277); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535278, 36957, 36954); //@t
				var_0_bool->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_62_bool == 36957) {
				func_2702(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(535281); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535282, -1, 36958); //@t
				var_0_bool->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_object = true;
			bool var_110_bool;
			func_3699(var_110_bool);
			if(var_110_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaa5";
	
	}

}


task task_24
{
}


task task_25
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, cvector var_63_cvector)
	{
		if(1 != 0) {
			func_3624();
			if(var_62_int == 42554) {
				func_2956(var_63_cvector, "Neutral");
				var_0_bool->SetMessage(540545); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540546, -1, 42555); //@t
				var_0_bool->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_object = true;
			bool var_87_bool;
			func_3699(var_87_bool);
			if(var_87_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xba3";
	
	}

}


maintask task_26
{
	// @pe
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, cvector var_61_cvector)
	{
		func_3024(var_61_cvector);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, cvector var_61_cvector, int var_62_int)
	{
		if(var_62_int == 10) {
			func_3095();
			bool var_66_bool = false;
			bool var_67_bool;
			func_3309(var_67_bool);
			if(var_67_bool != 0) {
				bool var_70_bool;
				func_3064(var_70_bool);
				if(var_70_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool != 0) {
				bool var_87_bool;
				func_3044(var_87_bool);
				if(var_87_bool != 0) {
					bool var_106_bool; object var_107_object;
					object var_108_object;
					func_3631(var_108_object);
					var_108_object = var_107_object;
					func_3457(var_106_bool, var_107_object);
				}
			} else {
				func_3059(var_62_int);
				func_3086();
			}
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, cvector var_61_cvector)
	{
		func_3277();
		func_3095();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, cvector var_61_cvector)
		{
		@StopGroup0();
		func_3095();
		func_3596("Neutral");
		func_3086();
		}

	// @pe
	void OnLSHAnimationEnd(bool bCycled, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, cvector var_61_cvector, bool var_62_bool)
	{
		if(var_62_bool != 0)
			func_3086();
		else
			func_3596("Neutral");
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, cvector var_61_cvector, object var_62_object)
	{
		bool var_63_bool; bool var_64_bool;
		@IsOverrideActive(var_64_bool);
		if(!var_64_bool) { //@nz
			disable OnUse;
			func_3277();
			bool var_66_bool; object var_67_object;
			var_62_object = var_67_object;
			func_3300(var_66_bool, var_67_object);
			enable OnUse;
			object var_80_object;
			func_3876(var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_cvector, var_80_object, var_63_bool, var_64_bool, var_80_object);
			func_3596("Neutral");
			func_3095();
			func_3086();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_66_bool;
	func_3309(var_66_bool);
	if(!var_66_bool) goto Label_0; //@nz
}


void func_2817(bool var_0_bool, int var_1051_int, object var_1052_object)
{
	var_0_bool = var_1052_object;
	bool var_1062_bool; object var_1063_object;
	object var_1064_object;
	func_3631(var_1064_object);
	var_1064_object = var_1063_object;
	func_3399(var_1062_bool, var_1063_object);
	bool var_1065_bool; object var_1066_object;
	var_1052_object = var_1066_object;
	func_3314(var_1065_bool, var_1066_object, 70.0);
	if(!var_1065_bool) { //@nz
		var_1051_int = -2;
		return 8;
	}
	object var_1058_object;
	@CreateDialog(var_1058_object);
	int var_1069_int;
	func_3693(var_1069_int);
	var_1058_object->SetNPCName(var_1069_int);
	int var_1070_int;
	func_3691(var_1070_int);
	var_1058_object->SetNPCDescription(var_1070_int);
	string var_1071_string;
	func_3695(var_1071_string);
	var_1058_object->SetPhoto(var_1071_string);
	string var_1072_string;
	func_3697(var_1072_string);
	var_1058_object->SetPhoto2(var_1072_string);
	int var_1073_int;
	func_3859(var_1073_int);
	var_1058_object->SetPlayerName(var_1073_int);
	bool var_1059_bool;
	@IsOverrideActive(var_1059_bool);
	if(var_1059_bool != 0) {
		var_1051_int = -2;
		return 8;
	}
	@DoDialog(var_1058_object);
	object var_1075_object; object var_1076_object;
	var_1052_object = var_1075_object;
	var_1058_object = var_1076_object;
	TaskCall(25);
	func_2898(var_1077_object, var_1078_object, var_1079_string, var_1080_bool, var_1075_object, var_1076_object);
	TaskReturn();
	bool var_1061_bool;
	var_1058_object->IsDialogEnd(var_1061_bool);
	
	for(;;) {
		var_1105_bool = !var_1061_bool; //@nz
		if(var_1105_bool == 0) goto Label_2887;
		@sync();
		var_1058_object->IsDialogEnd(var_1061_bool);
	}
	
Label_2887:
	object var_1106_object;
	var_1052_object = var_1106_object;
	func_3382();
	@StopDialog(var_1058_object);
	var_1058_object->GetReturnValue(-1);
	int var_1060_int = var_1051_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1795(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_753_object, object var_754_object)
{
	var_0_bool = var_754_object;
	var_1_object = var_753_object;
	var_3_object = false;
	if(1 != 0) {
		func_1853(var_754_object, "Neutral");
		var_0_bool->SetMessage(529691); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529692, -1, 31155); //@t
		var_0_bool->AddReply(529693, -1, 31156); //@t
		goto Label_1823;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x707";
	}
Label_1823:
	bool var_775_bool;
	func_3699(var_775_bool);
	if(var_775_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1852;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1852:
		return 0;

	}
	
}


// @pe
void func_3592(void)
{
	@CameraSwitchToNormal();
}


void func_3596(string var_69_string)
{
	float var_72_float; float var_73_float;
	@lshGetAnimTimes(var_69_string, var_72_float, var_73_float);
	@lshPlayAnimation(var_72_float, var_73_float, false);
}


// @pe
void func_13(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_444_bool;
		func_3699(var_444_bool);
		if(var_444_bool == 0) goto Label_28;
		func_3596("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_37:
	}
	if(false == 0) goto Label_37;
	return 0;
	
Label_28:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_3086(void)
{
	float var_76_float;
	@rand(var_76_float, 8, 16);
	@SetTimer(10, var_76_float);
}


void func_1292(bool var_0_bool, int var_519_int, object var_520_object)
{
	var_0_bool = var_520_object;
	bool var_530_bool; object var_531_object;
	object var_532_object;
	func_3631(var_532_object);
	var_532_object = var_531_object;
	func_3399(var_530_bool, var_531_object);
	bool var_533_bool; object var_534_object;
	var_520_object = var_534_object;
	func_3314(var_533_bool, var_534_object, 70.0);
	if(!var_533_bool) { //@nz
		var_519_int = -2;
		return 8;
	}
	object var_526_object;
	@CreateDialog(var_526_object);
	int var_537_int;
	func_3693(var_537_int);
	var_526_object->SetNPCName(var_537_int);
	int var_538_int;
	func_3691(var_538_int);
	var_526_object->SetNPCDescription(var_538_int);
	string var_539_string;
	func_3695(var_539_string);
	var_526_object->SetPhoto(var_539_string);
	string var_540_string;
	func_3697(var_540_string);
	var_526_object->SetPhoto2(var_540_string);
	int var_541_int;
	func_3859(var_541_int);
	var_526_object->SetPlayerName(var_541_int);
	bool var_527_bool;
	@IsOverrideActive(var_527_bool);
	if(var_527_bool != 0) {
		var_519_int = -2;
		return 8;
	}
	@DoDialog(var_526_object);
	object var_543_object; object var_544_object;
	var_520_object = var_543_object;
	var_526_object = var_544_object;
	TaskCall(11);
	func_1373(var_545_object, var_546_object, var_547_string, var_548_bool, var_543_object, var_544_object);
	TaskReturn();
	bool var_529_bool;
	var_526_object->IsDialogEnd(var_529_bool);
	
	for(;;) {
		var_573_bool = !var_529_bool; //@nz
		if(var_573_bool == 0) goto Label_1362;
		@sync();
		var_526_object->IsDialogEnd(var_529_bool);
	}
	
Label_1362:
	object var_574_object;
	var_520_object = var_574_object;
	func_3382();
	@StopDialog(var_526_object);
	var_526_object->GetReturnValue(-1);
	int var_528_int = var_519_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2064(object var_2_object, string var_826_string)
{
	bool var_827_bool;
	func_3699(var_827_bool);
	if(!var_827_bool) //@nz
		return 0;
	if(var_826_string == var_2_object)
		return 0;
	string var_830_string; bool var_831_bool;
	var_826_string = var_830_string;
	if(var_826_string == "")
		var_831_bool = false;
	else
		var_831_bool = true;
	func_3603(var_830_string, var_831_bool);
	var_2_object = var_826_string;
	
}


void func_3603(string var_300_string, bool var_301_bool)
{
	float var_306_float; float var_307_float;
	@lshGetAnimTimes(var_300_string, var_306_float, var_307_float);
	@lshPlayAnimation(var_306_float, var_307_float, var_301_bool);
}


void func_3859(int var_280_int)
{
	int var_282_int;
	@GetVariable("branch", var_282_int);
	if(var_282_int == 0) {
		var_280_int = 1;
		return 2;
	EMIT "GOTO 0xf22";
	}
	if(var_282_int == 1) {
		var_280_int = 2;
		return 2;
	}
	var_280_int = 3;
}


void func_3095(void)
{
	@KillTimer(10);
}


void func_3609(bool var_173_bool, string var_174_string)
{
	bool var_176_bool;
	bool var_177_bool;
	func_3699(var_177_bool);
	if(var_177_bool != 0) {
		@lshHasSpeech(var_176_bool, var_174_string);
		if(var_176_bool != 0) {
			@lshPlaySpeech(var_174_string);
			var_173_bool = true;
		}
	}
	var_173_bool = false;
}


void func_3876(object var_80_object, object var_344_object, object var_455_object, object var_521_object, object var_587_object, object var_665_object, object var_731_object, object var_797_object, object var_863_object, object var_929_object)
{
	int var_83_int;
	@GetVariable("tr_andrei", var_83_int);
	int var_86_int;
	func_3652(var_86_int);
	if(var_83_int != var_86_int) {
		func_3815();
		int var_125_int;
		func_3652(var_125_int);
		@SetVariable("tr_andrei", var_125_int);
	}
	int var_84_int;
	@GetVariable("mt_andrei", var_84_int);
	if(!var_84_int) { //@nz
		int var_128_int; object var_129_object;
		var_80_object = var_129_object;
		TaskCall(4);
		func_364(var_130_object, var_128_int, var_129_object);
		TaskReturn();
		@SetVariable("mt_andrei", 1);
	}
	bool var_338_bool;
	func_3661(var_338_bool, 2);
	if(var_338_bool != 0) {
		int var_342_int; object var_343_object;
		var_80_object = var_343_object;
		TaskCall(2);
		func_53(var_344_object, var_342_int, var_343_object);
		TaskReturn();
		if(1000 == var_344_object) {
			bool var_410_bool; object var_411_object;
			var_80_object = var_411_object;
			func_3537(var_410_bool, var_411_object);
			if(!var_410_bool) //@nz
				return 4;
			object var_442_object;
			var_80_object = var_442_object;
			TaskCall(1);
			func_13(var_442_object);
			TaskReturn();
			object var_449_object;
			var_80_object = var_449_object;
			func_3592();
		}
		return 4;
	}
	bool var_450_bool;
	func_3661(var_450_bool, 3);
	if(var_450_bool != 0) {
		int var_453_int; object var_454_object;
		var_80_object = var_454_object;
		TaskCall(8);
		func_1081(var_455_object, var_453_int, var_454_object);
		TaskReturn();
		if(1000 == var_455_object) {
			bool var_510_bool; object var_511_object;
			var_80_object = var_511_object;
			func_3537(var_510_bool, var_511_object);
			if(!var_510_bool) //@nz
				return 4;
			object var_513_object;
			var_80_object = var_513_object;
			TaskCall(1);
			func_13(var_513_object);
			TaskReturn();
			object var_515_object;
			var_80_object = var_515_object;
			func_3592();
		}
		return 4;
	}
	bool var_516_bool;
	func_3661(var_516_bool, 4);
	if(var_516_bool != 0) {
		int var_519_int; object var_520_object;
		var_80_object = var_520_object;
		TaskCall(10);
		func_1292(var_521_object, var_519_int, var_520_object);
		TaskReturn();
		if(1000 == var_521_object) {
			bool var_576_bool; object var_577_object;
			var_80_object = var_577_object;
			func_3537(var_576_bool, var_577_object);
			if(!var_576_bool) //@nz
				return 4;
			object var_579_object;
			var_80_object = var_579_object;
			TaskCall(1);
			func_13(var_579_object);
			TaskReturn();
			object var_581_object;
			var_80_object = var_581_object;
			func_3592();
		}
		return 4;
	}
	bool var_582_bool;
	func_3661(var_582_bool, 5);
	if(var_582_bool != 0) {
		int var_585_int; object var_586_object;
		var_80_object = var_586_object;
		TaskCall(6);
		func_590(var_587_object, var_585_int, var_586_object);
		TaskReturn();
		if(1000 == var_587_object) {
			bool var_654_bool; object var_655_object;
			var_80_object = var_655_object;
			func_3537(var_654_bool, var_655_object);
			if(!var_654_bool) //@nz
				return 4;
			object var_657_object;
			var_80_object = var_657_object;
			TaskCall(1);
			func_13(var_657_object);
			TaskReturn();
			object var_659_object;
			var_80_object = var_659_object;
			func_3592();
		}
		return 4;
	}
	bool var_660_bool;
	func_3661(var_660_bool, 6);
	if(var_660_bool != 0) {
		int var_663_int; object var_664_object;
		var_80_object = var_664_object;
		TaskCall(12);
		func_1503(var_665_object, var_663_int, var_664_object);
		TaskReturn();
		if(1000 == var_665_object) {
			bool var_720_bool; object var_721_object;
			var_80_object = var_721_object;
			func_3537(var_720_bool, var_721_object);
			if(!var_720_bool) //@nz
				return 4;
			object var_723_object;
			var_80_object = var_723_object;
			TaskCall(1);
			func_13(var_723_object);
			TaskReturn();
			object var_725_object;
			var_80_object = var_725_object;
			func_3592();
		}
		return 4;
	}
	bool var_726_bool;
	func_3661(var_726_bool, 7);
	if(var_726_bool != 0) {
		int var_729_int; object var_730_object;
		var_80_object = var_730_object;
		TaskCall(14);
		func_1714(var_731_object, var_729_int, var_730_object);
		TaskReturn();
		if(1000 == var_731_object) {
			bool var_786_bool; object var_787_object;
			var_80_object = var_787_object;
			func_3537(var_786_bool, var_787_object);
			if(!var_786_bool) //@nz
				return 4;
			object var_789_object;
			var_80_object = var_789_object;
			TaskCall(1);
			func_13(var_789_object);
			TaskReturn();
			object var_791_object;
			var_80_object = var_791_object;
			func_3592();
		}
		return 4;
	}
	bool var_792_bool;
	func_3661(var_792_bool, 8);
	if(var_792_bool != 0) {
		int var_795_int; object var_796_object;
		var_80_object = var_796_object;
		TaskCall(16);
		func_1925(var_797_object, var_795_int, var_796_object);
		TaskReturn();
		if(1000 == var_797_object) {
			bool var_852_bool; object var_853_object;
			var_80_object = var_853_object;
			func_3537(var_852_bool, var_853_object);
			if(!var_852_bool) //@nz
				return 4;
			object var_855_object;
			var_80_object = var_855_object;
			TaskCall(1);
			func_13(var_855_object);
			TaskReturn();
			object var_857_object;
			var_80_object = var_857_object;
			func_3592();
		}
		return 4;
	}
	bool var_858_bool;
	func_3661(var_858_bool, 9);
	if(var_858_bool != 0) {
		int var_861_int; object var_862_object;
		var_80_object = var_862_object;
		TaskCall(18);
		func_2136(var_863_object, var_861_int, var_862_object);
		TaskReturn();
		if(1000 == var_863_object) {
			bool var_918_bool; object var_919_object;
			var_80_object = var_919_object;
			func_3537(var_918_bool, var_919_object);
			if(!var_918_bool) //@nz
				return 4;
			object var_921_object;
			var_80_object = var_921_object;
			TaskCall(1);
			func_13(var_921_object);
			TaskReturn();
			object var_923_object;
			var_80_object = var_923_object;
			func_3592();
		}
		return 4;
	}
	bool var_924_bool;
	func_3661(var_924_bool, 10);
	if(var_924_bool != 0) {
		int var_927_int; object var_928_object;
		var_80_object = var_928_object;
		TaskCall(20);
		func_2347(var_929_object, var_927_int, var_928_object);
		TaskReturn();
		if(1000 == var_929_object) {
			bool var_984_bool; object var_985_object;
			var_80_object = var_985_object;
			func_3537(var_984_bool, var_985_object);
			if(!var_984_bool) //@nz
				return 4;
			object var_987_object;
			var_80_object = var_987_object;
			TaskCall(1);
			func_13(var_987_object);
			TaskReturn();
			object var_989_object;
			var_80_object = var_989_object;
			func_3592();
		}
		return 4;
	}
	bool var_990_bool;
	func_3661(var_990_bool, 12);
	if(var_990_bool != 0) {
		int var_992_int; object var_993_object;
		var_80_object = var_993_object;
		TaskCall(22);
		func_2558(var_994_object, var_992_int, var_993_object);
		TaskReturn();
		return 4;
	}
	int var_1051_int; object var_1052_object;
	var_80_object = var_1052_object;
	TaskCall(24);
	func_2817(var_1053_object, var_1051_int, var_1052_object);
	TaskReturn();
}


void func_3624(void)
{
	bool var_65_bool;
	func_3699(var_65_bool);
	if(var_65_bool != 0)
		@lshStopSpeech();
}


void func_2347(bool var_0_bool, int var_927_int, object var_928_object)
{
	var_0_bool = var_928_object;
	bool var_938_bool; object var_939_object;
	object var_940_object;
	func_3631(var_940_object);
	var_940_object = var_939_object;
	func_3399(var_938_bool, var_939_object);
	bool var_941_bool; object var_942_object;
	var_928_object = var_942_object;
	func_3314(var_941_bool, var_942_object, 70.0);
	if(!var_941_bool) { //@nz
		var_927_int = -2;
		return 8;
	}
	object var_934_object;
	@CreateDialog(var_934_object);
	int var_945_int;
	func_3693(var_945_int);
	var_934_object->SetNPCName(var_945_int);
	int var_946_int;
	func_3691(var_946_int);
	var_934_object->SetNPCDescription(var_946_int);
	string var_947_string;
	func_3695(var_947_string);
	var_934_object->SetPhoto(var_947_string);
	string var_948_string;
	func_3697(var_948_string);
	var_934_object->SetPhoto2(var_948_string);
	int var_949_int;
	func_3859(var_949_int);
	var_934_object->SetPlayerName(var_949_int);
	bool var_935_bool;
	@IsOverrideActive(var_935_bool);
	if(var_935_bool != 0) {
		var_927_int = -2;
		return 8;
	}
	@DoDialog(var_934_object);
	object var_951_object; object var_952_object;
	var_928_object = var_951_object;
	var_934_object = var_952_object;
	TaskCall(21);
	func_2428(var_953_object, var_954_object, var_955_string, var_956_bool, var_951_object, var_952_object);
	TaskReturn();
	bool var_937_bool;
	var_934_object->IsDialogEnd(var_937_bool);
	
	for(;;) {
		var_981_bool = !var_937_bool; //@nz
		if(var_981_bool == 0) goto Label_2417;
		@sync();
		var_934_object->IsDialogEnd(var_937_bool);
	}
	
Label_2417:
	object var_982_object;
	var_928_object = var_982_object;
	func_3382();
	@StopDialog(var_934_object);
	var_934_object->GetReturnValue(-1);
	int var_936_int = var_927_int;
}
EMIT "Stack[-4] = 0";


void func_3631(object var_141_object)
{
	object var_143_object;
	@self(var_143_object);
	var_143_object = var_141_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1584(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_687_object, object var_688_object)
{
	var_0_bool = var_688_object;
	var_1_object = var_687_object;
	var_3_object = false;
	if(1 != 0) {
		func_1642(var_688_object, "Neutral");
		var_0_bool->SetMessage(529687); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529688, -1, 31151); //@t
		var_0_bool->AddReply(529689, -1, 31152); //@t
		goto Label_1612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x634";
	}
Label_1612:
	bool var_709_bool;
	func_3699(var_709_bool);
	if(var_709_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1641;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1641:
		return 0;

	}
	
}


void func_3637(cvector var_256_cvector, cvector var_257_cvector)
{
	float var_260_float = sqrt(var_257_cvector | var_257_cvector);
	if(var_260_float < 0.000001)
		var_256_cvector = [0.0, 0.0, 0.0];
	var_256_cvector = var_257_cvector / var_260_float;
}


void func_53(bool var_0_bool, int var_342_int, object var_343_object)
{
	var_0_bool = var_343_object;
	bool var_353_bool; object var_354_object;
	object var_355_object;
	func_3631(var_355_object);
	var_355_object = var_354_object;
	func_3399(var_353_bool, var_354_object);
	bool var_356_bool; object var_357_object;
	var_343_object = var_357_object;
	func_3314(var_356_bool, var_357_object, 70.0);
	if(!var_356_bool) { //@nz
		var_342_int = -2;
		return 8;
	}
	object var_349_object;
	@CreateDialog(var_349_object);
	int var_360_int;
	func_3693(var_360_int);
	var_349_object->SetNPCName(var_360_int);
	int var_361_int;
	func_3691(var_361_int);
	var_349_object->SetNPCDescription(var_361_int);
	string var_362_string;
	func_3695(var_362_string);
	var_349_object->SetPhoto(var_362_string);
	string var_363_string;
	func_3697(var_363_string);
	var_349_object->SetPhoto2(var_363_string);
	int var_364_int;
	func_3859(var_364_int);
	var_349_object->SetPlayerName(var_364_int);
	bool var_350_bool;
	@IsOverrideActive(var_350_bool);
	if(var_350_bool != 0) {
		var_342_int = -2;
		return 8;
	}
	@DoDialog(var_349_object);
	object var_366_object; object var_367_object;
	var_343_object = var_366_object;
	var_349_object = var_367_object;
	TaskCall(3);
	func_134(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object);
	TaskReturn();
	bool var_352_bool;
	var_349_object->IsDialogEnd(var_352_bool);
	
	for(;;) {
		var_407_bool = !var_352_bool; //@nz
		if(var_407_bool == 0) goto Label_123;
		@sync();
		var_349_object->IsDialogEnd(var_352_bool);
	}
	
Label_123:
	object var_408_object;
	var_343_object = var_408_object;
	func_3382();
	@StopDialog(var_349_object);
	var_349_object->GetReturnValue(-1);
	int var_351_int = var_342_int;
}
EMIT "Stack[-4] = 0";


void func_3382(void)
{
	bool var_331_bool;
	@CameraSwitchToNormal();
	bool var_332_bool;
	func_3699(var_332_bool);
	if(var_332_bool != 0) {
	} else {
		@HasAnimationTrack(var_331_bool, "head");
		if(var_331_bool == 0) goto Label_3398;
		@UnlookAsync("head");
	}
Label_3398:
	
}


void func_1081(bool var_0_bool, int var_453_int, object var_454_object)
{
	var_0_bool = var_454_object;
	bool var_464_bool; object var_465_object;
	object var_466_object;
	func_3631(var_466_object);
	var_466_object = var_465_object;
	func_3399(var_464_bool, var_465_object);
	bool var_467_bool; object var_468_object;
	var_454_object = var_468_object;
	func_3314(var_467_bool, var_468_object, 70.0);
	if(!var_467_bool) { //@nz
		var_453_int = -2;
		return 8;
	}
	object var_460_object;
	@CreateDialog(var_460_object);
	int var_471_int;
	func_3693(var_471_int);
	var_460_object->SetNPCName(var_471_int);
	int var_472_int;
	func_3691(var_472_int);
	var_460_object->SetNPCDescription(var_472_int);
	string var_473_string;
	func_3695(var_473_string);
	var_460_object->SetPhoto(var_473_string);
	string var_474_string;
	func_3697(var_474_string);
	var_460_object->SetPhoto2(var_474_string);
	int var_475_int;
	func_3859(var_475_int);
	var_460_object->SetPlayerName(var_475_int);
	bool var_461_bool;
	@IsOverrideActive(var_461_bool);
	if(var_461_bool != 0) {
		var_453_int = -2;
		return 8;
	}
	@DoDialog(var_460_object);
	object var_477_object; object var_478_object;
	var_454_object = var_477_object;
	var_460_object = var_478_object;
	TaskCall(9);
	func_1162(var_479_object, var_480_object, var_481_string, var_482_bool, var_477_object, var_478_object);
	TaskReturn();
	bool var_463_bool;
	var_460_object->IsDialogEnd(var_463_bool);
	
	for(;;) {
		var_507_bool = !var_463_bool; //@nz
		if(var_507_bool == 0) goto Label_1151;
		@sync();
		var_460_object->IsDialogEnd(var_463_bool);
	}
	
Label_1151:
	object var_508_object;
	var_454_object = var_508_object;
	func_3382();
	@StopDialog(var_460_object);
	var_460_object->GetReturnValue(-1);
	int var_462_int = var_453_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1853(object var_2_object, string var_760_string)
{
	bool var_761_bool;
	func_3699(var_761_bool);
	if(!var_761_bool) //@nz
		return 0;
	if(var_760_string == var_2_object)
		return 0;
	string var_764_string; bool var_765_bool;
	var_760_string = var_764_string;
	if(var_760_string == "")
		var_765_bool = false;
	else
		var_765_bool = true;
	func_3603(var_764_string, var_765_bool);
	var_2_object = var_760_string;
	
}


void func_3647(int var_387_int, string var_388_string)
{
	int var_390_int;
	@GetVariable(var_388_string, var_390_int);
	var_390_int = var_387_int;
}


void func_3652(int var_86_int)
{
	float var_88_float;
	@GetGameTime(var_88_float);
	var_86_int = 1 + (var_88_float / 24);
}


void func_3399(bool var_139_bool, object var_140_object)
{
	int var_146_int; int var_147_int;
	@GetVariable("voice_common", var_146_int);
	if(var_146_int != 0) {
		bool var_150_bool; object var_151_object;
		var_140_object = var_151_object;
		func_3457(var_150_bool, var_151_object);
		if(!var_150_bool) { //@nz
			bool var_181_bool; object var_182_object;
			var_140_object = var_182_object;
			func_3494(var_181_bool, var_182_object);
			if(!var_181_bool) { //@nz
				var_139_bool = false;
				return 4;
			}
		}
		@irand(var_147_int, 2);
		if(var_147_int != 0)
			@SetVariable("voice_common", ((var_146_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_221_bool; object var_222_object;
		var_140_object = var_222_object;
		func_3494(var_221_bool, var_222_object);
		if(!var_221_bool) { //@nz
			bool var_224_bool; object var_225_object;
			var_140_object = var_225_object;
			func_3457(var_224_bool, var_225_object);
			if(!var_224_bool) { //@nz
				var_139_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3455;
	
Label_3455:
	var_139_bool = true;
	
}


// @pe
void func_3661(bool var_338_bool, int var_339_int)
{
	int var_340_int;
	func_3652(var_340_int);
	var_338_bool = var_340_int == var_339_int;
}


void func_590(bool var_0_bool, int var_585_int, object var_586_object)
{
	var_0_bool = var_586_object;
	bool var_596_bool; object var_597_object;
	object var_598_object;
	func_3631(var_598_object);
	var_598_object = var_597_object;
	func_3399(var_596_bool, var_597_object);
	bool var_599_bool; object var_600_object;
	var_586_object = var_600_object;
	func_3314(var_599_bool, var_600_object, 70.0);
	if(!var_599_bool) { //@nz
		var_585_int = -2;
		return 8;
	}
	object var_592_object;
	@CreateDialog(var_592_object);
	int var_603_int;
	func_3693(var_603_int);
	var_592_object->SetNPCName(var_603_int);
	int var_604_int;
	func_3691(var_604_int);
	var_592_object->SetNPCDescription(var_604_int);
	string var_605_string;
	func_3695(var_605_string);
	var_592_object->SetPhoto(var_605_string);
	string var_606_string;
	func_3697(var_606_string);
	var_592_object->SetPhoto2(var_606_string);
	int var_607_int;
	func_3859(var_607_int);
	var_592_object->SetPlayerName(var_607_int);
	bool var_593_bool;
	@IsOverrideActive(var_593_bool);
	if(var_593_bool != 0) {
		var_585_int = -2;
		return 8;
	}
	@DoDialog(var_592_object);
	object var_609_object; object var_610_object;
	var_586_object = var_609_object;
	var_592_object = var_610_object;
	TaskCall(7);
	func_671(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object);
	TaskReturn();
	bool var_595_bool;
	var_592_object->IsDialogEnd(var_595_bool);
	
	for(;;) {
		var_651_bool = !var_595_bool; //@nz
		if(var_651_bool == 0) goto Label_660;
		@sync();
		var_592_object->IsDialogEnd(var_595_bool);
	}
	
Label_660:
	object var_652_object;
	var_586_object = var_652_object;
	func_3382();
	@StopDialog(var_592_object);
	var_592_object->GetReturnValue(-1);
	int var_594_int = var_585_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2639(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1016_object, object var_1017_object)
{
	var_0_bool = var_1017_object;
	var_1_object = var_1016_object;
	var_3_object = false;
	if(1 != 0) {
		func_2702(var_1017_object, "Neutral");
		var_0_bool->SetMessage(535231); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535232, 36953, 36907); //@t
		var_0_bool->AddReply(535233, -1, 36908); //@t
		var_0_bool->AddReply(535280, -1, 36956); //@t
		goto Label_2672;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa53";
	}
Label_2672:
	bool var_1041_bool;
	func_3699(var_1041_bool);
	if(var_1041_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2701;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2701:
		return 0;

	}
	
}


// @pe
void func_2898(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1075_object, object var_1076_object)
{
	var_0_bool = var_1076_object;
	var_1_object = var_1075_object;
	var_3_object = false;
	if(1 != 0) {
		func_2956(var_1076_object, "Neutral");
		var_0_bool->SetMessage(540545); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540546, -1, 42555); //@t
		var_0_bool->AddReply(540798, -1, 42847); //@t
		goto Label_2926;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb56";
	}
Label_2926:
	bool var_1097_bool;
	func_3699(var_1097_bool);
	if(var_1097_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2955;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2955:
		return 0;

	}
	
}


void func_3667(string var_100_string, int var_101_int)
{
	string var_103_string = "idle";
	if(var_101_int != 0)
		var_103_string += var_101_int;
	var_103_string = var_100_string;
}


void func_2136(bool var_0_bool, int var_861_int, object var_862_object)
{
	var_0_bool = var_862_object;
	bool var_872_bool; object var_873_object;
	object var_874_object;
	func_3631(var_874_object);
	var_874_object = var_873_object;
	func_3399(var_872_bool, var_873_object);
	bool var_875_bool; object var_876_object;
	var_862_object = var_876_object;
	func_3314(var_875_bool, var_876_object, 70.0);
	if(!var_875_bool) { //@nz
		var_861_int = -2;
		return 8;
	}
	object var_868_object;
	@CreateDialog(var_868_object);
	int var_879_int;
	func_3693(var_879_int);
	var_868_object->SetNPCName(var_879_int);
	int var_880_int;
	func_3691(var_880_int);
	var_868_object->SetNPCDescription(var_880_int);
	string var_881_string;
	func_3695(var_881_string);
	var_868_object->SetPhoto(var_881_string);
	string var_882_string;
	func_3697(var_882_string);
	var_868_object->SetPhoto2(var_882_string);
	int var_883_int;
	func_3859(var_883_int);
	var_868_object->SetPlayerName(var_883_int);
	bool var_869_bool;
	@IsOverrideActive(var_869_bool);
	if(var_869_bool != 0) {
		var_861_int = -2;
		return 8;
	}
	@DoDialog(var_868_object);
	object var_885_object; object var_886_object;
	var_862_object = var_885_object;
	var_868_object = var_886_object;
	TaskCall(19);
	func_2217(var_887_object, var_888_object, var_889_string, var_890_bool, var_885_object, var_886_object);
	TaskReturn();
	bool var_871_bool;
	var_868_object->IsDialogEnd(var_871_bool);
	
	for(;;) {
		var_915_bool = !var_871_bool; //@nz
		if(var_915_bool == 0) goto Label_2206;
		@sync();
		var_868_object->IsDialogEnd(var_871_bool);
	}
	
Label_2206:
	object var_916_object;
	var_862_object = var_916_object;
	func_3382();
	@StopDialog(var_868_object);
	var_868_object->GetReturnValue(-1);
	int var_870_int = var_861_int;
}
EMIT "Stack[-4] = 0";


void func_3674(int var_94_int)
{
	int var_97_int; bool var_98_bool;
	var_97_int = 0;
	
	for(;;) {
		string var_100_string; int var_101_int;
		var_97_int = var_101_int;
		func_3667(var_100_string, var_101_int);
		@HasAnimation(var_98_bool, "all", var_100_string);
		if(!var_98_bool) //@nz
			break;
		var_97_int += 1;
	}
	var_97_int = var_94_int;
}


// @pe
void func_1373(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_543_object, object var_544_object)
{
	var_0_bool = var_544_object;
	var_1_object = var_543_object;
	var_3_object = false;
	if(1 != 0) {
		func_1431(var_544_object, "Neutral");
		var_0_bool->SetMessage(529682); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529683, -1, 31146); //@t
		var_0_bool->AddReply(529684, -1, 31147); //@t
		goto Label_1401;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x561";
	}
Label_1401:
	bool var_565_bool;
	func_3699(var_565_bool);
	if(var_565_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1430;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1430:
		return 0;

	}
	
}


// @pe
void func_1642(object var_2_object, string var_694_string)
{
	bool var_695_bool;
	func_3699(var_695_bool);
	if(!var_695_bool) //@nz
		return 0;
	if(var_694_string == var_2_object)
		return 0;
	string var_698_string; bool var_699_bool;
	var_694_string = var_698_string;
	if(var_694_string == "")
		var_699_bool = false;
	else
		var_699_bool = true;
	func_3603(var_698_string, var_699_bool);
	var_2_object = var_694_string;
	
}


void func_3691(int var_277_int)
{
	var_277_int = 515529;
}


void func_364(bool var_0_bool, int var_128_int, object var_129_object)
{
	var_0_bool = var_129_object;
	bool var_139_bool; object var_140_object;
	object var_141_object;
	func_3631(var_141_object);
	var_141_object = var_140_object;
	func_3399(var_139_bool, var_140_object);
	bool var_229_bool; object var_230_object;
	var_129_object = var_230_object;
	func_3314(var_229_bool, var_230_object, 70.0);
	if(!var_229_bool) { //@nz
		var_128_int = -2;
		return 8;
	}
	object var_135_object;
	@CreateDialog(var_135_object);
	int var_276_int;
	func_3693(var_276_int);
	var_135_object->SetNPCName(var_276_int);
	int var_277_int;
	func_3691(var_277_int);
	var_135_object->SetNPCDescription(var_277_int);
	string var_278_string;
	func_3695(var_278_string);
	var_135_object->SetPhoto(var_278_string);
	string var_279_string;
	func_3697(var_279_string);
	var_135_object->SetPhoto2(var_279_string);
	int var_280_int;
	func_3859(var_280_int);
	var_135_object->SetPlayerName(var_280_int);
	bool var_136_bool;
	@IsOverrideActive(var_136_bool);
	if(var_136_bool != 0) {
		var_128_int = -2;
		return 8;
	}
	@DoDialog(var_135_object);
	object var_289_object; object var_290_object;
	var_129_object = var_289_object;
	var_135_object = var_290_object;
	TaskCall(5);
	func_445(var_291_object, var_292_object, var_293_string, var_294_bool, var_289_object, var_290_object);
	TaskReturn();
	bool var_138_bool;
	var_135_object->IsDialogEnd(var_138_bool);
	
	for(;;) {
		var_328_bool = !var_138_bool; //@nz
		if(var_328_bool == 0) goto Label_434;
		@sync();
		var_135_object->IsDialogEnd(var_138_bool);
	}
	
Label_434:
	object var_329_object;
	var_129_object = var_329_object;
	func_3382();
	@StopDialog(var_135_object);
	var_135_object->GetReturnValue(-1);
	int var_137_int = var_128_int;
}
EMIT "Stack[-4] = 0";


void func_3693(int var_276_int)
{
	var_276_int = 502855;
}


void func_3695(string var_278_string)
{
	var_278_string = "ui/NPC_Andrei.png";
}


void func_3697(string var_279_string)
{
	var_279_string = "ui/NPC_Andrei_b.png";
}


void func_3699(bool var_177_bool)
{
	var_177_bool = true;
}


// @pe
void func_3701(void)
{
	@SetVariable("k2q04", 3);
	func_3748();
}


// @pe
void func_2428(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_951_object, object var_952_object)
{
	var_0_bool = var_952_object;
	var_1_object = var_951_object;
	var_3_object = false;
	if(1 != 0) {
		func_2486(var_952_object, "Neutral");
		var_0_bool->SetMessage(529703); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529704, -1, 31167); //@t
		var_0_bool->AddReply(529705, -1, 31168); //@t
		goto Label_2456;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x980";
	}
Label_2456:
	bool var_973_bool;
	func_3699(var_973_bool);
	if(var_973_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2485;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2485:
		return 0;

	}
	
}


// @pe
void func_3710(void)
{
	@SetVariable("k5q02", 5);
	func_3761();
}


void func_3457(bool var_150_bool, object var_151_object)
{
	string var_157_string; bool var_159_bool; int var_160_int; string var_161_string;
	var_157_string = "c";
	int var_158_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_151_object->HasProperty((var_157_string + (var_158_int + 1)), var_159_bool);
			if(!var_159_bool) { //@nz
			} else {
				var_158_int += 1;
			}
		}
		if(!var_158_int) { //@nz
			var_150_bool = false;
			return 10;
		}
		var_160_int = 0;
		if(var_158_int > 1)
			@irand(var_160_int, var_158_int);
		var_151_object->GetProperty((var_157_string + (var_160_int + 1)), var_161_string);
		bool var_173_bool; string var_174_string;
		var_161_string = var_174_string;
		func_3609(var_173_bool, var_174_string);
		var_173_bool = var_150_bool;
		return 10;

	}
}


void func_1925(bool var_0_bool, int var_795_int, object var_796_object)
{
	var_0_bool = var_796_object;
	bool var_806_bool; object var_807_object;
	object var_808_object;
	func_3631(var_808_object);
	var_808_object = var_807_object;
	func_3399(var_806_bool, var_807_object);
	bool var_809_bool; object var_810_object;
	var_796_object = var_810_object;
	func_3314(var_809_bool, var_810_object, 70.0);
	if(!var_809_bool) { //@nz
		var_795_int = -2;
		return 8;
	}
	object var_802_object;
	@CreateDialog(var_802_object);
	int var_813_int;
	func_3693(var_813_int);
	var_802_object->SetNPCName(var_813_int);
	int var_814_int;
	func_3691(var_814_int);
	var_802_object->SetNPCDescription(var_814_int);
	string var_815_string;
	func_3695(var_815_string);
	var_802_object->SetPhoto(var_815_string);
	string var_816_string;
	func_3697(var_816_string);
	var_802_object->SetPhoto2(var_816_string);
	int var_817_int;
	func_3859(var_817_int);
	var_802_object->SetPlayerName(var_817_int);
	bool var_803_bool;
	@IsOverrideActive(var_803_bool);
	if(var_803_bool != 0) {
		var_795_int = -2;
		return 8;
	}
	@DoDialog(var_802_object);
	object var_819_object; object var_820_object;
	var_796_object = var_819_object;
	var_802_object = var_820_object;
	TaskCall(17);
	func_2006(var_821_object, var_822_object, var_823_string, var_824_bool, var_819_object, var_820_object);
	TaskReturn();
	bool var_805_bool;
	var_802_object->IsDialogEnd(var_805_bool);
	
	for(;;) {
		var_849_bool = !var_805_bool; //@nz
		if(var_849_bool == 0) goto Label_1995;
		@sync();
		var_802_object->IsDialogEnd(var_805_bool);
	}
	
Label_1995:
	object var_850_object;
	var_796_object = var_850_object;
	func_3382();
	@StopDialog(var_802_object);
	var_802_object->GetReturnValue(-1);
	int var_804_int = var_795_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_134(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_366_object, object var_367_object)
{
	var_0_bool = var_367_object;
	var_3_object = false;
	if(1 != 0) {
		func_202(var_367_object, "Neutral");
		var_0_bool->SetMessage(525362); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(525363, -1, 26731); //@t
		bool var_385_bool;
		func_3724(var_366_object);
		if(var_385_bool != 0)
			var_0_bool->AddReply(525364, 26733, 26732); //@t
		var_0_bool->AddReply(525368, -1, 26736); //@t
		goto Label_172;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a";
	}
Label_172:
	bool var_399_bool;
	func_3699(var_399_bool);
	if(var_399_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_201;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_201:
		return 0;

	}
	
}


// @pe
void func_3719(object var_69_object)
{
	var_69_object->SetReturnValue(1000);
}


void func_3206(void)
{
	bool var_88_bool; int var_89_int; int var_90_int; bool var_91_bool;
	@WaitForAnimEnd();
	bool var_92_bool;
	func_3309(var_92_bool);
	if(!var_92_bool) //@nz
		return 12;
	int var_94_int;
	func_3674(var_94_int);
	int var_86_int;
	var_94_int = var_86_int;
	int var_87_int = 0;
	
	for(;;) {
		bool var_107_bool = false;
		if(var_87_int < 5) {
			bool var_110_bool;
			func_3309(var_110_bool);
			if(var_110_bool != 0)
				var_107_bool = true;
		}
		if(var_107_bool != 0) {
			if(!var_86_int) { //@nz
				@Sleep(3, var_88_bool);
				if(!var_88_bool) { //@nz
				} else {
			} else {
			@irand(var_89_int, var_86_int);
			@irand(var_90_int, 5);
			if(var_90_int != 0)
				var_89_int = 0;
			string var_121_string; int var_122_int;
			var_89_int = var_122_int;
			func_3667(var_121_string, var_122_int);
			@PlayAnimation("all", var_121_string);
			@WaitForAnimEnd(var_91_bool);
			var_123_bool = !var_91_bool; //@nz
			if(var_123_bool == 0) goto Label_3261;
			goto Label_3272;
			}
				Label_3261:
					bool var_114_bool;
					func_3275(var_114_bool);
					var_115_bool = !var_114_bool; //@nz
					if(var_115_bool == 0) goto Label_3267;
			}
		}
	Label_3272:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3267:
		@ResetAAS();
		var_87_int += 1;
	}
	
}


// @pe
void func_1162(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_477_object, object var_478_object)
{
	var_0_bool = var_478_object;
	var_1_object = var_477_object;
	var_3_object = false;
	if(1 != 0) {
		func_1220(var_478_object, "Neutral");
		var_0_bool->SetMessage(529678); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529679, -1, 31142); //@t
		var_0_bool->AddReply(529680, -1, 31143); //@t
		goto Label_1190;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x48e";
	}
Label_1190:
	bool var_499_bool;
	func_3699(var_499_bool);
	if(var_499_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1219;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1219:
		return 0;

	}
	
}


// @pe
void func_3724(bool var_385_bool)
{
	int var_387_int;
	func_3647(var_387_int, "k2q04");
	if(var_387_int == 2)
		var_385_bool = true;
	var_385_bool = false;
}


// @pe
void func_2956(object var_2_object, string var_1082_string)
{
	bool var_1083_bool;
	func_3699(var_1083_bool);
	if(!var_1083_bool) //@nz
		return 0;
	if(var_1082_string == var_2_object)
		return 0;
	string var_1086_string; bool var_1087_bool;
	var_1082_string = var_1086_string;
	if(var_1082_string == "")
		var_1087_bool = false;
	else
		var_1087_bool = true;
	func_3603(var_1086_string, var_1087_bool);
	var_2_object = var_1082_string;
	
}


// @pe
void func_2702(object var_2_object, string var_1023_string)
{
	bool var_1024_bool;
	func_3699(var_1024_bool);
	if(!var_1024_bool) //@nz
		return 0;
	if(var_1023_string == var_2_object)
		return 0;
	string var_1027_string; bool var_1028_bool;
	var_1023_string = var_1027_string;
	if(var_1023_string == "")
		var_1028_bool = false;
	else
		var_1028_bool = true;
	func_3603(var_1027_string, var_1028_bool);
	var_2_object = var_1023_string;
	
}


// @pe
void func_1431(object var_2_object, string var_550_string)
{
	bool var_551_bool;
	func_3699(var_551_bool);
	if(!var_551_bool) //@nz
		return 0;
	if(var_550_string == var_2_object)
		return 0;
	string var_554_string; bool var_555_bool;
	var_550_string = var_554_string;
	if(var_550_string == "")
		var_555_bool = false;
	else
		var_555_bool = true;
	func_3603(var_554_string, var_555_bool);
	var_2_object = var_550_string;
	
}


// @pe
void func_3736(bool var_625_bool)
{
	int var_627_int;
	func_3647(var_627_int, "k5q02");
	if(var_627_int == 4)
		var_625_bool = true;
	var_625_bool = false;
}


// @pe
void func_671(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_609_object, object var_610_object)
{
	var_0_bool = var_610_object;
	var_3_object = false;
	if(1 != 0) {
		func_744(var_610_object, "Neutral");
		var_0_bool->SetMessage(525919); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_625_bool;
		func_3736(var_609_object);
		if(var_625_bool != 0)
			var_0_bool->AddReply(525920, 42995, 27212); //@t
		var_0_bool->AddReply(529685, -1, 31148); //@t
		var_0_bool->AddReply(525923, -1, 27215); //@t
		var_0_bool->AddReply(529057, -1, 30499); //@t
		goto Label_714;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2a3";
	}
Label_714:
	bool var_643_bool;
	func_3699(var_643_bool);
	if(var_643_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_743;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_743:
		return 0;

	}
	
}


void func_3748(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 512, 2, 529711);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_3787(var_82_bool, var_83_object, 507);
}
EMIT "Stack[-1] = 0";


void func_3494(bool var_181_bool, object var_182_object)
{
	bool var_190_bool; int var_191_int; string var_192_string;
	int var_194_int;
	func_3652(var_194_int);
	string var_188_string = ("d" + var_194_int) + "m";
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
		bool var_208_bool; string var_209_string;
		var_192_string = var_209_string;
		func_3609(var_208_bool, var_209_string);
		var_208_bool = var_181_bool;
		return 10;

	}
}


// @pe
void func_2217(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_885_object, object var_886_object)
{
	var_0_bool = var_886_object;
	var_1_object = var_885_object;
	var_3_object = false;
	if(1 != 0) {
		func_2275(var_886_object, "Neutral");
		var_0_bool->SetMessage(529699); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529700, -1, 31163); //@t
		var_0_bool->AddReply(529701, -1, 31164); //@t
		goto Label_2245;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8ad";
	}
Label_2245:
	bool var_907_bool;
	func_3699(var_907_bool);
	if(var_907_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2274;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2274:
		return 0;

	}
	
}


void func_3761(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 402, 2, 525940);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_3787(var_77_bool, var_78_object, 397);
}
EMIT "Stack[-1] = 0";


void func_1714(bool var_0_bool, int var_729_int, object var_730_object)
{
	var_0_bool = var_730_object;
	bool var_740_bool; object var_741_object;
	object var_742_object;
	func_3631(var_742_object);
	var_742_object = var_741_object;
	func_3399(var_740_bool, var_741_object);
	bool var_743_bool; object var_744_object;
	var_730_object = var_744_object;
	func_3314(var_743_bool, var_744_object, 70.0);
	if(!var_743_bool) { //@nz
		var_729_int = -2;
		return 8;
	}
	object var_736_object;
	@CreateDialog(var_736_object);
	int var_747_int;
	func_3693(var_747_int);
	var_736_object->SetNPCName(var_747_int);
	int var_748_int;
	func_3691(var_748_int);
	var_736_object->SetNPCDescription(var_748_int);
	string var_749_string;
	func_3695(var_749_string);
	var_736_object->SetPhoto(var_749_string);
	string var_750_string;
	func_3697(var_750_string);
	var_736_object->SetPhoto2(var_750_string);
	int var_751_int;
	func_3859(var_751_int);
	var_736_object->SetPlayerName(var_751_int);
	bool var_737_bool;
	@IsOverrideActive(var_737_bool);
	if(var_737_bool != 0) {
		var_729_int = -2;
		return 8;
	}
	@DoDialog(var_736_object);
	object var_753_object; object var_754_object;
	var_730_object = var_753_object;
	var_736_object = var_754_object;
	TaskCall(15);
	func_1795(var_755_object, var_756_object, var_757_string, var_758_bool, var_753_object, var_754_object);
	TaskReturn();
	bool var_739_bool;
	var_736_object->IsDialogEnd(var_739_bool);
	
	for(;;) {
		var_783_bool = !var_739_bool; //@nz
		if(var_783_bool == 0) goto Label_1784;
		@sync();
		var_736_object->IsDialogEnd(var_739_bool);
	}
	
Label_1784:
	object var_784_object;
	var_730_object = var_784_object;
	func_3382();
	@StopDialog(var_736_object);
	var_736_object->GetReturnValue(-1);
	int var_738_int = var_729_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2486(object var_2_object, string var_958_string)
{
	bool var_959_bool;
	func_3699(var_959_bool);
	if(!var_959_bool) //@nz
		return 0;
	if(var_958_string == var_2_object)
		return 0;
	string var_962_string; bool var_963_bool;
	var_958_string = var_962_string;
	if(var_958_string == "")
		var_963_bool = false;
	else
		var_963_bool = true;
	func_3603(var_962_string, var_963_bool);
	var_2_object = var_958_string;
	
}


// @pe
void func_445(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_289_object, object var_290_object)
{
	var_0_bool = var_290_object;
	var_1_object = var_289_object;
	var_3_object = false;
	if(1 != 0) {
		func_503(var_290_object, "Neutral");
		var_0_bool->SetMessage(525462); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529295, 30750, 30749); //@t
		var_0_bool->AddReply(525463, -1, 26819); //@t
		goto Label_473;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1c1";
	}
Label_473:
	bool var_315_bool;
	func_3699(var_315_bool);
	if(var_315_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_502;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_502:
		return 0;

	}
	
}


void func_3774(object var_86_object)
{
	object var_88_object;
	@GetDiaryRoot(var_88_object);
	if(!var_88_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_86_object = false;
	}
	var_88_object = var_86_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1220(object var_2_object, string var_484_string)
{
	bool var_485_bool;
	func_3699(var_485_bool);
	if(!var_485_bool) //@nz
		return 0;
	if(var_484_string == var_2_object)
		return 0;
	string var_488_string; bool var_489_bool;
	var_484_string = var_488_string;
	if(var_484_string == "")
		var_489_bool = false;
	else
		var_489_bool = true;
	func_3603(var_488_string, var_489_bool);
	var_2_object = var_484_string;
	
}


// @pe
void func_202(object var_2_object, string var_373_string)
{
	bool var_374_bool;
	func_3699(var_374_bool);
	if(!var_374_bool) //@nz
		return 0;
	if(var_373_string == var_2_object)
		return 0;
	string var_377_string; bool var_378_bool;
	var_373_string = var_377_string;
	if(var_373_string == "")
		var_378_bool = false;
	else
		var_378_bool = true;
	func_3603(var_377_string, var_378_bool);
	var_2_object = var_373_string;
	
}


void func_3275(bool var_114_bool)
{
	var_114_bool = true;
}


void func_3787(bool var_77_bool, object var_78_object, int var_79_int)
{
	object var_86_object;
	func_3774(var_86_object);
	object var_83_object;
	var_86_object = var_83_object;
	object var_84_object;
	var_83_object->Find(var_79_int, var_84_object);
	if(!var_84_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_79_int);
		var_77_bool = false;
	}
	var_84_object->AddChild(var_78_object);
	@SendWorldWndMessage(7);
	int var_85_int;
	var_78_object->GetCategory(var_85_int);
	@SetDiarySection(var_85_int);
	var_77_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_3277(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3024(bool var_0_bool)
{
	bool var_62_bool;
	func_3309(var_62_bool);
	if(!var_62_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_3152();
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_3206();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3537(bool var_410_bool, object var_411_object)
{
	object var_413_object;
	var_411_object = var_413_object;
	bool var_412_bool;
	func_3545(var_412_bool, var_413_object, (float)70);
	var_412_bool = var_410_bool;
}


void func_3282(float var_77_float, object var_78_object)
{
	cvector var_82_cvector;
	@GetPosition(var_82_cvector);
	cvector var_83_cvector;
	var_78_object->GetPosition(var_83_cvector);
	var_77_float = (var_83_cvector - var_82_cvector) | (var_83_cvector - var_82_cvector);
}


// @pe
void func_2006(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_819_object, object var_820_object)
{
	var_0_bool = var_820_object;
	var_1_object = var_819_object;
	var_3_object = false;
	if(1 != 0) {
		func_2064(var_820_object, "Neutral");
		var_0_bool->SetMessage(529695); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(529696, -1, 31159); //@t
		var_0_bool->AddReply(529697, -1, 31160); //@t
		goto Label_2034;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7da";
	}
Label_2034:
	bool var_841_bool;
	func_3699(var_841_bool);
	if(var_841_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2063;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2063:
		return 0;

	}
	
}


void func_3545(bool var_412_bool, object var_413_object, float var_414_float)
{
	cvector var_424_cvector;
	var_413_object->GetPosition(var_424_cvector);
	float var_423_float;
	var_413_object->GetEyesHeight(var_423_float);
	var_431_float = GetByIndex(var_424_cvector, 1);
	SetByIndex(var_424_cvector, 1) = (var_431_float + var_423_float);
	cvector var_425_cvector;
	@GetPosition(var_425_cvector);
	@GetEyesHeight(var_423_float);
	var_432_float = GetByIndex(var_425_cvector, 1);
	SetByIndex(var_425_cvector, 1) = (var_432_float + var_423_float);
	cvector var_426_cvector = var_424_cvector - var_425_cvector;
	var_433_float = GetByIndex(var_426_cvector, 1);
	SetByIndex(var_426_cvector, 1) = (float)0;
	var_435_float = sqrt(var_426_cvector | var_426_cvector);
	var_426_cvector /= var_435_float;
	cvector var_427_cvector = -var_426_cvector;
	cvector var_428_cvector = (var_426_cvector * var_414_float) - [0.0, 10.0, 0.0];
	bool var_430_bool;
	@IsOverrideActive(var_430_bool);
	if(var_430_bool != 0)
		var_412_bool = false;
	@StopWorld();
	@CameraTransit((var_425_cvector + var_428_cvector), var_427_cvector);
	var_439_float = GetByIndex(var_428_cvector, 0);
	var_440_float = GetByIndex(var_428_cvector, 2);
	@Rotate(var_439_float, var_440_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_412_bool = true;
}


void func_3290(bool var_70_bool, cvector var_71_cvector)
{
	cvector var_75_cvector;
	@GetPosition(var_75_cvector);
	cvector var_76_cvector = var_71_cvector - var_75_cvector;
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_76_cvector, 2);
	bool var_77_bool;
	@Rotate(var_78_float, var_79_float, var_77_bool);
	var_77_bool = var_70_bool;
}


void func_1503(bool var_0_bool, int var_663_int, object var_664_object)
{
	var_0_bool = var_664_object;
	bool var_674_bool; object var_675_object;
	object var_676_object;
	func_3631(var_676_object);
	var_676_object = var_675_object;
	func_3399(var_674_bool, var_675_object);
	bool var_677_bool; object var_678_object;
	var_664_object = var_678_object;
	func_3314(var_677_bool, var_678_object, 70.0);
	if(!var_677_bool) { //@nz
		var_663_int = -2;
		return 8;
	}
	object var_670_object;
	@CreateDialog(var_670_object);
	int var_681_int;
	func_3693(var_681_int);
	var_670_object->SetNPCName(var_681_int);
	int var_682_int;
	func_3691(var_682_int);
	var_670_object->SetNPCDescription(var_682_int);
	string var_683_string;
	func_3695(var_683_string);
	var_670_object->SetPhoto(var_683_string);
	string var_684_string;
	func_3697(var_684_string);
	var_670_object->SetPhoto2(var_684_string);
	int var_685_int;
	func_3859(var_685_int);
	var_670_object->SetPlayerName(var_685_int);
	bool var_671_bool;
	@IsOverrideActive(var_671_bool);
	if(var_671_bool != 0) {
		var_663_int = -2;
		return 8;
	}
	@DoDialog(var_670_object);
	object var_687_object; object var_688_object;
	var_664_object = var_687_object;
	var_670_object = var_688_object;
	TaskCall(13);
	func_1584(var_689_object, var_690_object, var_691_string, var_692_bool, var_687_object, var_688_object);
	TaskReturn();
	bool var_673_bool;
	var_670_object->IsDialogEnd(var_673_bool);
	
	for(;;) {
		var_717_bool = !var_673_bool; //@nz
		if(var_717_bool == 0) goto Label_1573;
		@sync();
		var_670_object->IsDialogEnd(var_673_bool);
	}
	
Label_1573:
	object var_718_object;
	var_664_object = var_718_object;
	func_3382();
	@StopDialog(var_670_object);
	var_670_object->GetReturnValue(-1);
	int var_672_int = var_663_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2275(object var_2_object, string var_892_string)
{
	bool var_893_bool;
	func_3699(var_893_bool);
	if(!var_893_bool) //@nz
		return 0;
	if(var_892_string == var_2_object)
		return 0;
	string var_896_string; bool var_897_bool;
	var_892_string = var_896_string;
	if(var_892_string == "")
		var_897_bool = false;
	else
		var_897_bool = true;
	func_3603(var_896_string, var_897_bool);
	var_2_object = var_892_string;
	
}


void func_3300(bool var_66_bool, object var_67_object)
{
	cvector var_69_cvector;
	var_67_object->GetPosition(var_69_cvector);
	bool var_70_bool; cvector var_71_cvector;
	var_69_cvector = var_71_cvector;
	func_3290(var_70_bool, var_71_cvector);
	var_70_bool = var_66_bool;
}


void func_3044(bool var_87_bool)
{
	object var_89_object;
	@FindActor(var_89_object, "player");
	if(!var_89_object) //@nz
		var_87_bool = false;
	bool var_92_bool; object var_93_object;
	var_89_object = var_93_object;
	func_3300(var_92_bool, var_93_object);
	var_92_bool = var_87_bool;
}
EMIT "Stack[-1] = 0";


void func_3815(void)
{
	object var_104_object; int var_105_int; bool var_106_bool;
	@ClearSubContainer(0);
	int var_102_int;
	@irand(var_102_int, 8);
	int var_103_int = 0;
	
	while(var_103_int < (var_102_int + 2)) {
		@CreateInvItem(var_104_object);
		var_104_object->SetItemName("grass_combination");
		@irand(var_105_int, 50);
		var_105_int += 30;
		var_104_object->SetProperty("im_inc", (var_105_int / 100.0));
		@irand(var_105_int, 40);
		var_104_object->SetProperty("hl_inc", (-(var_105_int / 100.0)));
		@AddItem(var_106_bool, var_104_object, 0);
		var_104_object = null;
		var_103_int += 1;
	}
	
}


// @pe
void func_744(object var_2_object, string var_616_string)
{
	bool var_617_bool;
	func_3699(var_617_bool);
	if(!var_617_bool) //@nz
		return 0;
	if(var_616_string == var_2_object)
		return 0;
	string var_620_string; bool var_621_bool;
	var_616_string = var_620_string;
	if(var_616_string == "")
		var_621_bool = false;
	else
		var_621_bool = true;
	func_3603(var_620_string, var_621_bool);
	var_2_object = var_616_string;
	
}


void func_3309(bool var_62_bool)
{
	bool var_64_bool;
	@IsLoaded(var_64_bool);
	var_64_bool = var_62_bool;
}


void func_3314(bool var_229_bool, object var_230_object, float var_231_float)
{
	cvector var_242_cvector; bool var_249_bool;
	var_230_object->GetPosition(var_242_cvector);
	float var_241_float;
	var_230_object->GetEyesHeight(var_241_float);
	var_250_float = GetByIndex(var_242_cvector, 1);
	SetByIndex(var_242_cvector, 1) = (var_250_float + var_241_float);
	cvector var_243_cvector;
	@GetPosition(var_243_cvector);
	@GetEyesHeight(var_241_float);
	var_251_float = GetByIndex(var_243_cvector, 1);
	SetByIndex(var_243_cvector, 1) = (var_251_float + var_241_float);
	cvector var_244_cvector = var_242_cvector - var_243_cvector;
	var_252_float = GetByIndex(var_244_cvector, 1);
	SetByIndex(var_244_cvector, 1) = (float)0;
	var_254_float = sqrt(var_244_cvector | var_244_cvector);
	var_244_cvector /= var_254_float;
	cvector var_245_cvector = -var_244_cvector;
	cvector var_256_cvector;
	func_3637(var_256_cvector, (var_245_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_246_cvector = ((var_244_cvector * var_231_float) + (var_256_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_248_bool;
	@IsOverrideActive(var_248_bool);
	if(var_248_bool != 0)
		var_229_bool = false;
	@StopWorld();
	@CameraTransit((var_243_cvector + var_246_cvector), var_245_cvector);
	var_269_float = GetByIndex(var_246_cvector, 0);
	var_270_float = GetByIndex(var_246_cvector, 2);
	@Rotate(var_269_float, var_270_float);
	bool var_271_bool;
	func_3699(var_271_bool);
	if(var_271_bool != 0) {
	} else {
		@HasAnimationTrack(var_249_bool, "head");
		if(var_249_bool == 0) goto Label_3376;
		@LookAsyncCamera("head");
	}
Label_3376:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_229_bool = true;
	
}


void func_3059(bool var_0_bool)
{
	var_139_float = GetByIndex(var_0_bool, 0);
	var_140_float = GetByIndex(var_0_bool, 2);
	@RotateAsync(var_139_float, var_140_float);
}


// @pe
void func_503(object var_2_object, string var_296_string)
{
	bool var_297_bool;
	func_3699(var_297_bool);
	if(!var_297_bool) //@nz
		return 0;
	if(var_296_string == var_2_object)
		return 0;
	string var_300_string; bool var_301_bool;
	var_296_string = var_300_string;
	if(var_296_string == "")
		var_301_bool = false;
	else
		var_301_bool = true;
	func_3603(var_300_string, var_301_bool);
	var_2_object = var_296_string;
	
}


void func_3064(bool var_70_bool)
{
	object var_73_object;
	@FindActor(var_73_object, "player");
	if(!var_73_object) { //@nz
		var_70_bool = false;
		return 4;
	}
	float var_77_float; object var_78_object;
	func_3282(var_77_float, var_78_object);
	if(var_77_float > 90000.0) {
		var_70_bool = false;
		return 4;
	}
	bool var_74_bool;
	@CanSee(var_74_bool, var_78_object);
	var_74_bool = var_70_bool;
}
EMIT "Stack[-2] = 0";


void func_2558(bool var_0_bool, int var_992_int, object var_993_object)
{
	var_0_bool = var_993_object;
	bool var_1003_bool; object var_1004_object;
	object var_1005_object;
	func_3631(var_1005_object);
	var_1005_object = var_1004_object;
	func_3399(var_1003_bool, var_1004_object);
	bool var_1006_bool; object var_1007_object;
	var_993_object = var_1007_object;
	func_3314(var_1006_bool, var_1007_object, 70.0);
	if(!var_1006_bool) { //@nz
		var_992_int = -2;
		return 8;
	}
	object var_999_object;
	@CreateDialog(var_999_object);
	int var_1010_int;
	func_3693(var_1010_int);
	var_999_object->SetNPCName(var_1010_int);
	int var_1011_int;
	func_3691(var_1011_int);
	var_999_object->SetNPCDescription(var_1011_int);
	string var_1012_string;
	func_3695(var_1012_string);
	var_999_object->SetPhoto(var_1012_string);
	string var_1013_string;
	func_3697(var_1013_string);
	var_999_object->SetPhoto2(var_1013_string);
	int var_1014_int;
	func_3859(var_1014_int);
	var_999_object->SetPlayerName(var_1014_int);
	bool var_1000_bool;
	@IsOverrideActive(var_1000_bool);
	if(var_1000_bool != 0) {
		var_992_int = -2;
		return 8;
	}
	@DoDialog(var_999_object);
	object var_1016_object; object var_1017_object;
	var_993_object = var_1016_object;
	var_999_object = var_1017_object;
	TaskCall(23);
	func_2639(var_1018_object, var_1019_object, var_1020_string, var_1021_bool, var_1016_object, var_1017_object);
	TaskReturn();
	bool var_1002_bool;
	var_999_object->IsDialogEnd(var_1002_bool);
	
	for(;;) {
		var_1049_bool = !var_1002_bool; //@nz
		if(var_1049_bool == 0) goto Label_2628;
		@sync();
		var_999_object->IsDialogEnd(var_1002_bool);
	}
	
Label_2628:
	object var_1050_object;
	var_993_object = var_1050_object;
	func_3382();
	@StopDialog(var_999_object);
	var_999_object->GetReturnValue(-1);
	int var_1001_int = var_992_int;
}
EMIT "Stack[-4] = 0";


