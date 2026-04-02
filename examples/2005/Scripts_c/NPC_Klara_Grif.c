// @GLOBALS: 0:object:,1:bool:,2:int:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		@lshStopAnimation();
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_67_bool == 26839) {
				func_174(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525483); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525484, 30758, 26840); //@t
				var_0_bool->AddReply(529303, -1, 30757); //@t
				return 0;
			}
			if(var_67_bool == 30758) {
				func_174(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(529304); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529305, -1, 30759); //@t
				return 0;
			}
			var_3_object = true;
			bool var_99_bool;
			func_4075(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27011) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_4093();
				object var_116_object = var_1_object;
				func_4077(var_0_bool);
			}
			if(var_68_cvector == 27021) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_bool;
				func_4116();
				object var_170_object = var_1_object;
				func_4210(var_0_bool);
			}
			if(var_68_cvector == 27037) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_bool;
				func_4144();
			}
			if(var_68_cvector == 27038) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_bool;
				func_4144();
			}
			if(var_68_cvector == 27943) {
				object var_197_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27004) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525681); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_215_bool;
				func_4231(var_1_object);
				if(var_215_bool != 0)
					var_0_bool->AddReply(525682, 27006, 27005); //@t
				bool var_226_bool;
				func_4243(var_1_object);
				if(var_226_bool != 0)
					var_0_bool->AddReply(525696, 30190, 27019); //@t
				bool var_235_bool;
				func_4255(var_1_object);
				if(var_235_bool != 0)
					var_0_bool->AddReply(525709, 27032, 27031); //@t
				var_0_bool->AddReply(526667, -1, 27943); //@t
				var_0_bool->AddReply(525689, -1, 27012); //@t
				var_0_bool->AddReply(528783, -1, 30195); //@t
				return 0;
			}
			if(var_67_bool == 27032) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525710); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525711, 27034, 27033); //@t
				return 0;
			}
			if(var_67_bool == 27034) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525712); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525713, 27036, 27035); //@t
				return 0;
			}
			if(var_67_bool == 27036) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525715, -1, 27037); //@t
				var_0_bool->AddReply(525716, -1, 27038); //@t
				return 0;
			}
			if(var_67_bool == 30190) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(528778); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528779, 30192, 30191); //@t
				return 0;
			}
			if(var_67_bool == 30192) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(528780); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528781, 27020, 30193); //@t
				var_0_bool->AddReply(528782, -1, 30194); //@t
				return 0;
			}
			if(var_67_bool == 27020) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525697); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528773, 30185, 30184); //@t
				return 0;
			}
			if(var_67_bool == 30185) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(528774); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528775, 30187, 30186); //@t
				var_0_bool->AddReply(528777, 30187, 30188); //@t
				return 0;
			}
			if(var_67_bool == 30187) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(528776); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525698, -1, 27021); //@t
				return 0;
			}
			if(var_67_bool == 27006) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525683); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525684, 27008, 27007); //@t
				return 0;
			}
			if(var_67_bool == 27008) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525686, 27010, 27009); //@t
				return 0;
			}
			if(var_67_bool == 27010) {
				func_430(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525687); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525688, -1, 27011); //@t
				return 0;
			}
			var_3_object = true;
			bool var_339_bool;
			func_4075(var_339_bool);
			if(var_339_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c5";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27933) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27932) {
				func_931(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526656); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526657, -1, 27933); //@t
				var_0_bool->AddReply(526658, -1, 27934); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_4075(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3ba";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27937) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27936) {
				func_1147(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526660); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526661, -1, 27937); //@t
				var_0_bool->AddReply(526662, -1, 27938); //@t
				var_0_bool->AddReply(528771, -1, 30182); //@t
				return 0;
			}
			var_3_object = true;
			bool var_100_bool;
			func_4075(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x492";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27941) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27940) {
				func_1368(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526664); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526665, -1, 27941); //@t
				var_0_bool->AddReply(526666, -1, 27942); //@t
				var_0_bool->AddReply(528772, -1, 30183); //@t
				return 0;
			}
			var_3_object = true;
			bool var_100_bool;
			func_4075(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x56f";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27946) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27945) {
				func_1589(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526669); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526670, -1, 27946); //@t
				var_0_bool->AddReply(526671, -1, 27947); //@t
				var_0_bool->AddReply(528784, -1, 30196); //@t
				return 0;
			}
			var_3_object = true;
			bool var_100_bool;
			func_4075(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x64c";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27950) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27949) {
				func_1810(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526673); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526674, -1, 27950); //@t
				var_0_bool->AddReply(526675, -1, 27951); //@t
				var_0_bool->AddReply(528785, -1, 30197); //@t
				return 0;
			}
			var_3_object = true;
			bool var_100_bool;
			func_4075(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x729";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27954) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27953) {
				func_2026(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526677); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526678, -1, 27954); //@t
				var_0_bool->AddReply(526679, -1, 27955); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_4075(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x801";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27958) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27957) {
				func_2242(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526681); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526682, -1, 27958); //@t
				var_0_bool->AddReply(526683, -1, 27959); //@t
				var_0_bool->AddReply(528752, -1, 30178); //@t
				return 0;
			}
			var_3_object = true;
			bool var_100_bool;
			func_4075(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8d9";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27962) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27961) {
				func_2463(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526686, -1, 27962); //@t
				var_0_bool->AddReply(526687, -1, 27963); //@t
				var_0_bool->AddReply(529000, -1, 30437); //@t
				return 0;
			}
			var_3_object = true;
			bool var_100_bool;
			func_4075(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b6";
	
	}

}


task task_22
{
}


task task_23
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 27966) {
				object var_73_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27965) {
				func_2679(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526689); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526690, -1, 27966); //@t
				var_0_bool->AddReply(526691, -1, 27967); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_4075(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa8e";
	
	}

}


task task_24
{
}


task task_25
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_68_cvector == 28640) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_4204();
			}
			if(var_68_cvector == 28655) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_4153();
			}
			if(var_68_cvector == 27970) {
				object var_164_object = var_1_object;
				func_4226(var_0_bool);
			}
			if(var_67_bool == 27969) {
				func_2909(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526693); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_182_bool = false;
				bool var_183_bool;
				func_4267(var_1_object);
				if(var_183_bool != 0) {
					bool var_191_bool;
					func_4279(var_1_object);
					if(var_191_bool != 0)
						var_182_bool = true;
				}
				if(var_182_bool != 0)
					var_0_bool->AddReply(527323, 28641, 28640); //@t
				var_0_bool->AddReply(526694, -1, 27970); //@t
				var_0_bool->AddReply(526695, -1, 27971); //@t
				return 0;
			}
			if(var_67_bool == 28641) {
				func_2909(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527324); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527325, 28644, 28642); //@t
				var_0_bool->AddReply(527326, 28645, 28643); //@t
				return 0;
			}
			if(var_67_bool == 28645) {
				func_2909(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527328); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527330, 28648, 28647); //@t
				return 0;
			}
			if(var_67_bool == 28644) {
				func_2909(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527327); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527329, 28648, 28646); //@t
				return 0;
			}
			if(var_67_bool == 28648) {
				func_2909(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527331); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527332, 28650, 28649); //@t
				return 0;
			}
			if(var_67_bool == 28650) {
				func_2909(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527333); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527334, 28652, 28651); //@t
				return 0;
			}
			if(var_67_bool == 28652) {
				func_2909(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527335); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527336, 28654, 28653); //@t
				return 0;
			}
			if(var_67_bool == 28654) {
				func_2909(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527337); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527338, -1, 28655); //@t
				return 0;
			}
			var_3_object = true;
			bool var_258_bool;
			func_4075(var_258_bool);
			if(var_258_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb74";
	
	}

}


task task_26
{
}


task task_27
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, int var_66_int, int var_67_int, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_3950();
			if(var_67_int == 41234) {
				func_3281(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(539291); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539292, -1, 41235); //@t
				return 0;
			}
			var_3_object = true;
			bool var_89_bool;
			func_4075(var_89_bool);
			if(var_89_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xce8";
	
	}

}


maintask task_28
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		var_67_bool = GlobalVars[1];
		GlobalVars[1] = false;
		var_68_int = GlobalVars[2];
		GlobalVars[2] = -1;
		func_3350(var_66_cvector);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, int var_67_int)
	{
		if(var_67_int == 10) {
			func_3421();
			bool var_71_bool = false;
			bool var_72_bool;
			func_3635(var_72_bool);
			if(var_72_bool != 0) {
				bool var_75_bool;
				func_3390(var_75_bool);
				if(var_75_bool != 0)
					var_71_bool = true;
			}
			if(var_71_bool != 0) {
				bool var_92_bool;
				func_3370(var_92_bool);
				if(var_92_bool != 0) {
					bool var_111_bool; object var_112_object;
					object var_113_object;
					func_3985(var_113_object);
					var_113_object = var_112_object;
					func_3783(var_111_bool, var_112_object);
				}
			} else {
				func_3385(var_67_int);
				func_3412();
			}
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		func_3603();
		func_3421();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
		{
		@StopGroup0();
		func_3421();
		func_3922("Neutral");
		func_3412();
		}

	// @pe
	void OnLSHAnimationEnd(bool bCycled, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, bool var_67_bool)
	{
		if(var_67_bool != 0)
			func_3412();
		else
			func_3922("Neutral");
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, object var_67_object)
	{
		bool var_68_bool; bool var_69_bool;
		@IsOverrideActive(var_69_bool);
		if(!var_69_bool) { //@nz
			disable OnUse;
			func_3603();
			bool var_71_bool; object var_72_object;
			var_67_object = var_72_object;
			func_3626(var_71_bool, var_72_object);
			enable OnUse;
			object var_85_object;
			func_4702(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_85_object, var_68_bool, var_69_bool, var_85_object);
			func_3922("Neutral");
			func_3421();
			func_3412();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_73_bool;
	func_3635(var_73_bool);
	if(!var_73_bool) goto Label_0; //@nz
}


void func_256(bool var_0_bool, int var_646_int, object var_647_object)
{
	var_0_bool = var_647_object;
	bool var_657_bool; object var_658_object;
	object var_659_object;
	func_3985(var_659_object);
	var_659_object = var_658_object;
	func_3725(var_657_bool, var_658_object);
	bool var_660_bool; object var_661_object;
	var_647_object = var_661_object;
	func_3640(var_660_bool, var_661_object, 70.0);
	if(!var_660_bool) { //@nz
		var_646_int = -2;
		return 8;
	}
	object var_653_object;
	@CreateDialog(var_653_object);
	int var_664_int;
	func_4069(var_664_int);
	var_653_object->SetNPCName(var_664_int);
	int var_665_int;
	func_4067(var_665_int);
	var_653_object->SetNPCDescription(var_665_int);
	string var_666_string;
	func_4071(var_666_string);
	var_653_object->SetPhoto(var_666_string);
	string var_667_string;
	func_4073(var_667_string);
	var_653_object->SetPhoto2(var_667_string);
	int var_668_int;
	func_4660(var_668_int);
	var_653_object->SetPlayerName(var_668_int);
	bool var_654_bool;
	@IsOverrideActive(var_654_bool);
	if(var_654_bool != 0) {
		var_646_int = -2;
		return 8;
	}
	@DoDialog(var_653_object);
	object var_670_object; object var_671_object;
	var_647_object = var_670_object;
	var_653_object = var_671_object;
	TaskCall(5);
	func_337(var_672_object, var_673_object, var_674_string, var_675_bool, var_670_object, var_671_object);
	TaskReturn();
	bool var_656_bool;
	var_653_object->IsDialogEnd(var_656_bool);
	
	for(;;) {
		var_732_bool = !var_656_bool; //@nz
		if(var_732_bool == 0) goto Label_326;
		@sync();
		var_653_object->IsDialogEnd(var_656_bool);
	}
	
Label_326:
	object var_733_object;
	var_647_object = var_733_object;
	func_3708();
	@StopDialog(var_653_object);
	var_653_object->GetReturnValue(-1);
	int var_655_int = var_646_int;
}
EMIT "Stack[-4] = 0";


void func_4356(void)
{
	object var_90_object;
	@CreateDiaryEntry(var_90_object, 493, 1, 528060);
	bool var_94_bool; object var_95_object;
	var_90_object = var_95_object;
	func_4421(var_94_bool, var_95_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		func_3922("Neutral");
		@lshWaitForAnimEnd();
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


void func_2319(bool var_0_bool, int var_992_int, object var_993_object)
{
	var_0_bool = var_993_object;
	bool var_1003_bool; object var_1004_object;
	object var_1005_object;
	func_3985(var_1005_object);
	var_1005_object = var_1004_object;
	func_3725(var_1003_bool, var_1004_object);
	bool var_1006_bool; object var_1007_object;
	var_993_object = var_1007_object;
	func_3640(var_1006_bool, var_1007_object, 70.0);
	if(!var_1006_bool) { //@nz
		var_992_int = -2;
		return 8;
	}
	object var_999_object;
	@CreateDialog(var_999_object);
	int var_1010_int;
	func_4069(var_1010_int);
	var_999_object->SetNPCName(var_1010_int);
	int var_1011_int;
	func_4067(var_1011_int);
	var_999_object->SetNPCDescription(var_1011_int);
	string var_1012_string;
	func_4071(var_1012_string);
	var_999_object->SetPhoto(var_1012_string);
	string var_1013_string;
	func_4073(var_1013_string);
	var_999_object->SetPhoto2(var_1013_string);
	int var_1014_int;
	func_4660(var_1014_int);
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
	TaskCall(21);
	func_2400(var_1018_object, var_1019_object, var_1020_string, var_1021_bool, var_1016_object, var_1017_object);
	TaskReturn();
	bool var_1002_bool;
	var_999_object->IsDialogEnd(var_1002_bool);
	
	for(;;) {
		var_1049_bool = !var_1002_bool; //@nz
		if(var_1049_bool == 0) goto Label_2389;
		@sync();
		var_999_object->IsDialogEnd(var_1002_bool);
	}
	
Label_2389:
	object var_1050_object;
	var_993_object = var_1050_object;
	func_3708();
	@StopDialog(var_999_object);
	var_999_object->GetReturnValue(-1);
	int var_1001_int = var_992_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2832(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1141_object, object var_1142_object)
{
	var_0_bool = var_1142_object;
	var_1_object = var_1141_object;
	var_3_object = false;
	if(1 != 0) {
		func_2909(var_1142_object, "Neutral");
		var_0_bool->SetMessage(526693); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1157_bool = false;
		bool var_1158_bool;
		func_4267(var_1_object);
		if(var_1158_bool != 0) {
			bool var_1164_bool;
			func_4279(var_1_object);
			if(var_1164_bool != 0)
				var_1157_bool = true;
		}
		if(var_1157_bool != 0)
			var_0_bool->AddReply(527323, 28641, 28640); //@t
		var_0_bool->AddReply(526694, -1, 27970); //@t
		var_0_bool->AddReply(526695, -1, 27971); //@t
		goto Label_2879;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb14";
	}
Label_2879:
	bool var_1179_bool;
	func_4075(var_1179_bool);
	if(var_1179_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2908;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2908:
		return 0;

	}
	
}


void func_3601(bool var_121_bool)
{
	var_121_bool = true;
}


void func_4369(void)
{
	object var_184_object;
	@CreateDiaryEntry(var_184_object, 377, 1, 525734);
	bool var_188_bool; object var_189_object;
	var_184_object = var_189_object;
	func_4421(var_188_bool, var_189_object, 368);
}
EMIT "Stack[-1] = 0";


void func_3603(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4116(void)
{
	@SetVariable("k4q01", 4);
	object var_150_object;
	func_4449(var_150_object);
	object var_147_object;
	var_150_object = var_147_object;
	float var_155_float;
	func_4023(var_155_float);
	var_147_object->AddMark("k4q01GrifGotoBraga", "pt_map_warehouse_gangster", 1, 530231, var_155_float);
	func_4382();
	bool var_164_bool;
	func_4011(var_164_bool, "quest_k4_01", "init_volnica");
}
EMIT "Stack[-1] = 0";


// @pe
void func_1810(object var_2_object, string var_834_string)
{
	bool var_835_bool;
	func_4075(var_835_bool);
	if(!var_835_bool) //@nz
		return 0;
	if(var_834_string == var_2_object)
		return 0;
	string var_838_string; bool var_839_bool;
	var_834_string = var_838_string;
	if(var_834_string == "")
		var_839_bool = false;
	else
		var_839_bool = true;
	func_3929(var_838_string, var_839_bool);
	var_2_object = var_834_string;
	
}


void func_3350(bool var_0_bool)
{
	bool var_69_bool;
	func_3635(var_69_bool);
	if(!var_69_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_3478();
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_3532();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3863(bool var_478_bool, object var_479_object)
{
	object var_481_object;
	var_479_object = var_481_object;
	bool var_480_bool;
	func_3871(var_480_bool, var_481_object, (float)70);
	var_480_bool = var_478_bool;
}


void func_3608(float var_82_float, object var_83_object)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	cvector var_88_cvector;
	var_83_object->GetPosition(var_88_cvector);
	var_82_float = (var_88_cvector - var_87_cvector) | (var_88_cvector - var_87_cvector);
}


void func_792(bool var_0_bool, int var_420_int, object var_421_object)
{
	var_0_bool = var_421_object;
	bool var_431_bool; object var_432_object;
	object var_433_object;
	func_3985(var_433_object);
	var_433_object = var_432_object;
	func_3725(var_431_bool, var_432_object);
	bool var_434_bool; object var_435_object;
	var_421_object = var_435_object;
	func_3640(var_434_bool, var_435_object, 70.0);
	if(!var_434_bool) { //@nz
		var_420_int = -2;
		return 8;
	}
	object var_427_object;
	@CreateDialog(var_427_object);
	int var_438_int;
	func_4069(var_438_int);
	var_427_object->SetNPCName(var_438_int);
	int var_439_int;
	func_4067(var_439_int);
	var_427_object->SetNPCDescription(var_439_int);
	string var_440_string;
	func_4071(var_440_string);
	var_427_object->SetPhoto(var_440_string);
	string var_441_string;
	func_4073(var_441_string);
	var_427_object->SetPhoto2(var_441_string);
	int var_442_int;
	func_4660(var_442_int);
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
	TaskCall(7);
	func_873(var_446_object, var_447_object, var_448_string, var_449_bool, var_444_object, var_445_object);
	TaskReturn();
	bool var_430_bool;
	var_427_object->IsDialogEnd(var_430_bool);
	
	for(;;) {
		var_474_bool = !var_430_bool; //@nz
		if(var_474_bool == 0) goto Label_862;
		@sync();
		var_427_object->IsDialogEnd(var_430_bool);
	}
	
Label_862:
	object var_475_object;
	var_421_object = var_475_object;
	func_3708();
	@StopDialog(var_427_object);
	var_427_object->GetReturnValue(-1);
	int var_429_int = var_420_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1305(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_606_object, object var_607_object)
{
	var_0_bool = var_607_object;
	var_1_object = var_606_object;
	var_3_object = false;
	if(1 != 0) {
		func_1368(var_607_object, "Neutral");
		var_0_bool->SetMessage(526664); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526665, -1, 27941); //@t
		var_0_bool->AddReply(526666, -1, 27942); //@t
		var_0_bool->AddReply(528772, -1, 30183); //@t
		goto Label_1338;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x51d";
	}
Label_1338:
	bool var_631_bool;
	func_4075(var_631_bool);
	if(var_631_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1367;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1367:
		return 0;

	}
	
}


void func_4382(void)
{
	object var_157_object;
	@CreateDiaryEntry(var_157_object, 372, 1, 525729);
	bool var_161_bool; object var_162_object;
	var_157_object = var_162_object;
	func_4421(var_161_bool, var_162_object, 368);
}
EMIT "Stack[-1] = 0";


void func_3871(bool var_480_bool, object var_481_object, float var_482_float)
{
	cvector var_492_cvector;
	var_481_object->GetPosition(var_492_cvector);
	float var_491_float;
	var_481_object->GetEyesHeight(var_491_float);
	var_499_float = GetByIndex(var_492_cvector, 1);
	SetByIndex(var_492_cvector, 1) = (var_499_float + var_491_float);
	cvector var_493_cvector;
	@GetPosition(var_493_cvector);
	@GetEyesHeight(var_491_float);
	var_500_float = GetByIndex(var_493_cvector, 1);
	SetByIndex(var_493_cvector, 1) = (var_500_float + var_491_float);
	cvector var_494_cvector = var_492_cvector - var_493_cvector;
	var_501_float = GetByIndex(var_494_cvector, 1);
	SetByIndex(var_494_cvector, 1) = (float)0;
	var_503_float = sqrt(var_494_cvector | var_494_cvector);
	var_494_cvector /= var_503_float;
	cvector var_495_cvector = -var_494_cvector;
	cvector var_496_cvector = (var_494_cvector * var_482_float) - [0.0, 10.0, 0.0];
	bool var_498_bool;
	@IsOverrideActive(var_498_bool);
	if(var_498_bool != 0)
		var_480_bool = false;
	@StopWorld();
	@CameraTransit((var_493_cvector + var_496_cvector), var_495_cvector);
	var_507_float = GetByIndex(var_496_cvector, 0);
	var_508_float = GetByIndex(var_496_cvector, 2);
	@Rotate(var_507_float, var_508_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_480_bool = true;
}


void func_3616(bool var_75_bool, cvector var_76_cvector)
{
	cvector var_80_cvector;
	@GetPosition(var_80_cvector);
	cvector var_81_cvector = var_76_cvector - var_80_cvector;
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = GetByIndex(var_81_cvector, 2);
	bool var_82_bool;
	@Rotate(var_83_float, var_84_float, var_82_bool);
	var_82_bool = var_75_bool;
}


void func_35(bool var_0_bool, int var_207_int, object var_208_object)
{
	var_0_bool = var_208_object;
	bool var_218_bool; object var_219_object;
	object var_220_object;
	func_3985(var_220_object);
	var_220_object = var_219_object;
	func_3725(var_218_bool, var_219_object);
	bool var_308_bool; object var_309_object;
	var_208_object = var_309_object;
	func_3640(var_308_bool, var_309_object, 70.0);
	if(!var_308_bool) { //@nz
		var_207_int = -2;
		return 8;
	}
	object var_214_object;
	@CreateDialog(var_214_object);
	int var_355_int;
	func_4069(var_355_int);
	var_214_object->SetNPCName(var_355_int);
	int var_356_int;
	func_4067(var_356_int);
	var_214_object->SetNPCDescription(var_356_int);
	string var_357_string;
	func_4071(var_357_string);
	var_214_object->SetPhoto(var_357_string);
	string var_358_string;
	func_4073(var_358_string);
	var_214_object->SetPhoto2(var_358_string);
	int var_359_int;
	func_4660(var_359_int);
	var_214_object->SetPlayerName(var_359_int);
	bool var_215_bool;
	@IsOverrideActive(var_215_bool);
	if(var_215_bool != 0) {
		var_207_int = -2;
		return 8;
	}
	@DoDialog(var_214_object);
	object var_368_object; object var_369_object;
	var_208_object = var_368_object;
	var_214_object = var_369_object;
	TaskCall(3);
	func_116(var_370_object, var_371_object, var_372_string, var_373_bool, var_368_object, var_369_object);
	TaskReturn();
	bool var_217_bool;
	var_214_object->IsDialogEnd(var_217_bool);
	
	for(;;) {
		var_407_bool = !var_217_bool; //@nz
		if(var_407_bool == 0) goto Label_105;
		@sync();
		var_214_object->IsDialogEnd(var_217_bool);
	}
	
Label_105:
	object var_408_object;
	var_208_object = var_408_object;
	func_3708();
	@StopDialog(var_214_object);
	var_214_object->GetReturnValue(-1);
	int var_216_int = var_207_int;
}
EMIT "Stack[-4] = 0";


void func_3626(bool var_71_bool, object var_72_object)
{
	cvector var_74_cvector;
	var_72_object->GetPosition(var_74_cvector);
	bool var_75_bool; cvector var_76_cvector;
	var_74_cvector = var_76_cvector;
	func_3616(var_75_bool, var_76_cvector);
	var_75_bool = var_71_bool;
}


void func_3370(bool var_92_bool)
{
	object var_94_object;
	@FindActor(var_94_object, "player");
	if(!var_94_object) //@nz
		var_92_bool = false;
	bool var_97_bool; object var_98_object;
	var_94_object = var_98_object;
	func_3626(var_97_bool, var_98_object);
	var_97_bool = var_92_bool;
}
EMIT "Stack[-1] = 0";


void func_4395(void)
{
	object var_94_object;
	@CreateDiaryEntry(var_94_object, 370, 1, 525727);
	bool var_98_bool; object var_99_object;
	var_94_object = var_99_object;
	func_4421(var_98_bool, var_99_object, 368);
}
EMIT "Stack[-1] = 0";


void func_4655(int var_102_int, string var_103_string)
{
	int var_105_int;
	@GetInvItemByName(var_105_int, var_103_string);
	var_105_int = var_102_int;
}


// @pe
void func_4144(void)
{
	@SetVariable("k4q01", 6);
	func_4369();
}


void func_2098(bool var_0_bool, int var_928_int, object var_929_object)
{
	var_0_bool = var_929_object;
	bool var_939_bool; object var_940_object;
	object var_941_object;
	func_3985(var_941_object);
	var_941_object = var_940_object;
	func_3725(var_939_bool, var_940_object);
	bool var_942_bool; object var_943_object;
	var_929_object = var_943_object;
	func_3640(var_942_bool, var_943_object, 70.0);
	if(!var_942_bool) { //@nz
		var_928_int = -2;
		return 8;
	}
	object var_935_object;
	@CreateDialog(var_935_object);
	int var_946_int;
	func_4069(var_946_int);
	var_935_object->SetNPCName(var_946_int);
	int var_947_int;
	func_4067(var_947_int);
	var_935_object->SetNPCDescription(var_947_int);
	string var_948_string;
	func_4071(var_948_string);
	var_935_object->SetPhoto(var_948_string);
	string var_949_string;
	func_4073(var_949_string);
	var_935_object->SetPhoto2(var_949_string);
	int var_950_int;
	func_4660(var_950_int);
	var_935_object->SetPlayerName(var_950_int);
	bool var_936_bool;
	@IsOverrideActive(var_936_bool);
	if(var_936_bool != 0) {
		var_928_int = -2;
		return 8;
	}
	@DoDialog(var_935_object);
	object var_952_object; object var_953_object;
	var_929_object = var_952_object;
	var_935_object = var_953_object;
	TaskCall(19);
	func_2179(var_954_object, var_955_object, var_956_string, var_957_bool, var_952_object, var_953_object);
	TaskReturn();
	bool var_938_bool;
	var_935_object->IsDialogEnd(var_938_bool);
	
	for(;;) {
		var_985_bool = !var_938_bool; //@nz
		if(var_985_bool == 0) goto Label_2168;
		@sync();
		var_935_object->IsDialogEnd(var_938_bool);
	}
	
Label_2168:
	object var_986_object;
	var_929_object = var_986_object;
	func_3708();
	@StopDialog(var_935_object);
	var_935_object->GetReturnValue(-1);
	int var_937_int = var_928_int;
}
EMIT "Stack[-4] = 0";


void func_3635(bool var_69_bool)
{
	bool var_71_bool;
	@IsLoaded(var_71_bool);
	var_71_bool = var_69_bool;
}


void func_4660(int var_359_int)
{
	int var_361_int;
	@GetVariable("branch", var_361_int);
	if(var_361_int == 0) {
		var_359_int = 1;
		return 2;
	EMIT "GOTO 0x1243";
	}
	if(var_361_int == 1) {
		var_359_int = 2;
		return 2;
	}
	var_359_int = 3;
}


// @pe
void func_1589(object var_2_object, string var_770_string)
{
	bool var_771_bool;
	func_4075(var_771_bool);
	if(!var_771_bool) //@nz
		return 0;
	if(var_770_string == var_2_object)
		return 0;
	string var_774_string; bool var_775_bool;
	var_770_string = var_774_string;
	if(var_770_string == "")
		var_775_bool = false;
	else
		var_775_bool = true;
	func_3929(var_774_string, var_775_bool);
	var_2_object = var_770_string;
	
}


void func_3640(bool var_308_bool, object var_309_object, float var_310_float)
{
	cvector var_321_cvector; bool var_328_bool;
	var_309_object->GetPosition(var_321_cvector);
	float var_320_float;
	var_309_object->GetEyesHeight(var_320_float);
	var_329_float = GetByIndex(var_321_cvector, 1);
	SetByIndex(var_321_cvector, 1) = (var_329_float + var_320_float);
	cvector var_322_cvector;
	@GetPosition(var_322_cvector);
	@GetEyesHeight(var_320_float);
	var_330_float = GetByIndex(var_322_cvector, 1);
	SetByIndex(var_322_cvector, 1) = (var_330_float + var_320_float);
	cvector var_323_cvector = var_321_cvector - var_322_cvector;
	var_331_float = GetByIndex(var_323_cvector, 1);
	SetByIndex(var_323_cvector, 1) = (float)0;
	var_333_float = sqrt(var_323_cvector | var_323_cvector);
	var_323_cvector /= var_333_float;
	cvector var_324_cvector = -var_323_cvector;
	cvector var_335_cvector;
	func_3991(var_335_cvector, (var_324_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_325_cvector = ((var_323_cvector * var_310_float) + (var_335_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_327_bool;
	@IsOverrideActive(var_327_bool);
	if(var_327_bool != 0)
		var_308_bool = false;
	@StopWorld();
	@CameraTransit((var_322_cvector + var_325_cvector), var_324_cvector);
	var_348_float = GetByIndex(var_325_cvector, 0);
	var_349_float = GetByIndex(var_325_cvector, 2);
	@Rotate(var_348_float, var_349_float);
	bool var_350_bool;
	func_4075(var_350_bool);
	if(var_350_bool != 0) {
	} else {
		@HasAnimationTrack(var_328_bool, "head");
		if(var_328_bool == 0) goto Label_3702;
		@LookAsyncCamera("head");
	}
Label_3702:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_308_bool = true;
	
}


void func_4153(void)
{
	int var_82_int;
	@GetVariable("k11q01SoulCount", var_82_int);
	@SetVariable("k11q01SoulCount", (var_82_int + 1));
	if(var_82_int == 2) {
		func_4356();
	} else if(var_82_int == 3) {
			func_4343();
	}

	for(;;) {
		return 2;

	}
	
	if(var_82_int == 4) {
		func_4330();
	} else if(var_82_int == 5) {
		func_4317();
	} else if(var_82_int == 6) {
		func_4304();
	} else if(var_82_int == 7) {
		func_4291();
	}
}


void func_4408(object var_103_object)
{
	object var_105_object;
	@GetDiaryRoot(var_105_object);
	if(!var_105_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_103_object = false;
	}
	var_105_object = var_103_object;
}
EMIT "Stack[-1] = 0";


void func_3385(bool var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0);
	var_145_float = GetByIndex(var_0_bool, 2);
	@RotateAsync(var_144_float, var_145_float);
}


// @pe
void func_1084(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_542_object, object var_543_object)
{
	var_0_bool = var_543_object;
	var_1_object = var_542_object;
	var_3_object = false;
	if(1 != 0) {
		func_1147(var_543_object, "Neutral");
		var_0_bool->SetMessage(526660); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526661, -1, 27937); //@t
		var_0_bool->AddReply(526662, -1, 27938); //@t
		var_0_bool->AddReply(528771, -1, 30182); //@t
		goto Label_1117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x440";
	}
Label_1117:
	bool var_567_bool;
	func_4075(var_567_bool);
	if(var_567_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1146;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1146:
		return 0;

	}
	
}


// @pe
void func_2621(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1080_object, object var_1081_object)
{
	var_0_bool = var_1081_object;
	var_1_object = var_1080_object;
	var_3_object = false;
	if(1 != 0) {
		func_2679(var_1081_object, "Neutral");
		var_0_bool->SetMessage(526689); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526690, -1, 27966); //@t
		var_0_bool->AddReply(526691, -1, 27967); //@t
		goto Label_2649;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa41";
	}
Label_2649:
	bool var_1102_bool;
	func_4075(var_1102_bool);
	if(var_1102_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2678;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2678:
		return 0;

	}
	
}


void func_3390(bool var_75_bool)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) { //@nz
		var_75_bool = false;
		return 4;
	}
	float var_82_float; object var_83_object;
	func_3608(var_82_float, var_83_object);
	if(var_82_float > 90000.0) {
		var_75_bool = false;
		return 4;
	}
	bool var_79_bool;
	@CanSee(var_79_bool, var_83_object);
	var_79_bool = var_75_bool;
}
EMIT "Stack[-2] = 0";


void func_4677(int var_189_int)
{
	int var_191_int;
	@GetVariable("branch", var_191_int);
	var_191_int = var_189_int;
}


void func_4421(bool var_94_bool, object var_95_object, int var_96_int)
{
	object var_103_object;
	func_4408(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	object var_101_object;
	var_100_object->Find(var_96_int, var_101_object);
	if(!var_101_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_96_int);
		var_94_bool = false;
	}
	var_101_object->AddChild(var_95_object);
	@SendWorldWndMessage(7);
	int var_102_int;
	var_95_object->GetCategory(var_102_int);
	@SetDiarySection(var_102_int);
	var_94_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4683(object var_477_object)
{
	object var_479_object;
	var_477_object = var_479_object;
	bool var_478_bool;
	func_3863(var_478_bool, var_479_object);
	if(!var_478_bool) { //@nz
	}
	object var_510_object;
	var_477_object = var_510_object;
	TaskCall(1);
	func_13(var_510_object);
	TaskReturn();
	object var_514_object;
	var_477_object = var_514_object;
	func_3918();
}


void func_3147(bool var_0_bool, int var_1193_int, object var_1194_object)
{
	var_0_bool = var_1194_object;
	bool var_1204_bool; object var_1205_object;
	object var_1206_object;
	func_3985(var_1206_object);
	var_1206_object = var_1205_object;
	func_3725(var_1204_bool, var_1205_object);
	bool var_1207_bool; object var_1208_object;
	var_1194_object = var_1208_object;
	func_3640(var_1207_bool, var_1208_object, 70.0);
	if(!var_1207_bool) { //@nz
		var_1193_int = -2;
		return 8;
	}
	object var_1200_object;
	@CreateDialog(var_1200_object);
	int var_1211_int;
	func_4069(var_1211_int);
	var_1200_object->SetNPCName(var_1211_int);
	int var_1212_int;
	func_4067(var_1212_int);
	var_1200_object->SetNPCDescription(var_1212_int);
	string var_1213_string;
	func_4071(var_1213_string);
	var_1200_object->SetPhoto(var_1213_string);
	string var_1214_string;
	func_4073(var_1214_string);
	var_1200_object->SetPhoto2(var_1214_string);
	int var_1215_int;
	func_4660(var_1215_int);
	var_1200_object->SetPlayerName(var_1215_int);
	bool var_1201_bool;
	@IsOverrideActive(var_1201_bool);
	if(var_1201_bool != 0) {
		var_1193_int = -2;
		return 8;
	}
	@DoDialog(var_1200_object);
	object var_1217_object; object var_1218_object;
	var_1194_object = var_1217_object;
	var_1200_object = var_1218_object;
	TaskCall(27);
	func_3228(var_1219_object, var_1220_object, var_1221_string, var_1222_bool, var_1217_object, var_1218_object);
	TaskReturn();
	bool var_1203_bool;
	var_1200_object->IsDialogEnd(var_1203_bool);
	
	for(;;) {
		var_1244_bool = !var_1203_bool; //@nz
		if(var_1244_bool == 0) goto Label_3217;
		@sync();
		var_1200_object->IsDialogEnd(var_1203_bool);
	}
	
Label_3217:
	object var_1245_object;
	var_1194_object = var_1245_object;
	func_3708();
	@StopDialog(var_1200_object);
	var_1200_object->GetReturnValue(-1);
	int var_1202_int = var_1193_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3918(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_337(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_670_object, object var_671_object)
{
	var_0_bool = var_671_object;
	var_1_object = var_670_object;
	var_3_object = false;
	if(1 != 0) {
		func_430(var_671_object, "Neutral");
		var_0_bool->SetMessage(525681); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_686_bool;
		func_4231(var_1_object);
		if(var_686_bool != 0)
			var_0_bool->AddReply(525682, 27006, 27005); //@t
		bool var_697_bool;
		func_4243(var_1_object);
		if(var_697_bool != 0)
			var_0_bool->AddReply(525696, 30190, 27019); //@t
		bool var_706_bool;
		func_4255(var_1_object);
		if(var_706_bool != 0)
			var_0_bool->AddReply(525709, 27032, 27031); //@t
		var_0_bool->AddReply(526667, -1, 27943); //@t
		var_0_bool->AddReply(525689, -1, 27012); //@t
		var_0_bool->AddReply(528783, -1, 30195); //@t
		goto Label_400;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x155";
	}
Label_400:
	bool var_724_bool;
	func_4075(var_724_bool);
	if(var_724_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_429;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_429:
		return 0;

	}
	
}


void func_3922(string var_76_string)
{
	float var_79_float; float var_80_float;
	@lshGetAnimTimes(var_76_string, var_79_float, var_80_float);
	@lshPlayAnimation(var_79_float, var_80_float, false);
}


void func_3412(void)
{
	float var_83_float;
	@rand(var_83_float, 8, 16);
	@SetTimer(10, var_83_float);
}


// @pe
void func_1368(object var_2_object, string var_613_string)
{
	bool var_614_bool;
	func_4075(var_614_bool);
	if(!var_614_bool) //@nz
		return 0;
	if(var_613_string == var_2_object)
		return 0;
	string var_617_string; bool var_618_bool;
	var_613_string = var_617_string;
	if(var_613_string == "")
		var_618_bool = false;
	else
		var_618_bool = true;
	func_3929(var_617_string, var_618_bool);
	var_2_object = var_613_string;
	
}


void func_3929(string var_379_string, bool var_380_bool)
{
	float var_385_float; float var_386_float;
	@lshGetAnimTimes(var_379_string, var_385_float, var_386_float);
	@lshPlayAnimation(var_385_float, var_386_float, var_380_bool);
}


// @pe
void func_2909(object var_2_object, string var_1148_string)
{
	bool var_1149_bool;
	func_4075(var_1149_bool);
	if(!var_1149_bool) //@nz
		return 0;
	if(var_1148_string == var_2_object)
		return 0;
	string var_1152_string; bool var_1153_bool;
	var_1148_string = var_1152_string;
	if(var_1148_string == "")
		var_1153_bool = false;
	else
		var_1153_bool = true;
	func_3929(var_1152_string, var_1153_bool);
	var_2_object = var_1148_string;
	
}


// @pe
void func_4702(object var_85_object, object var_422_object, object var_520_object, object var_584_object, object var_648_object, object var_741_object, object var_805_object, object var_869_object, object var_930_object, object var_994_object, object var_1058_object, object var_1119_object)
{
	var_86_int = GlobalVars[2];
	int var_87_int;
	func_4028(var_87_int);
	if(var_86_int != var_87_int) {
		func_4499();
		var_203_int = GlobalVars[2];
		int var_204_int;
		func_4028(var_204_int);
		var_204_int = var_203_int;
		GlobalVars[2] = var_203_int;
	}
	var_205_bool = GlobalVars[1];
	if(!var_205_bool) { //@nz
		int var_207_int; object var_208_object;
		var_85_object = var_208_object;
		TaskCall(2);
		func_35(var_209_object, var_207_int, var_208_object);
		TaskReturn();
		var_415_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_416_bool;
	func_4037(var_416_bool, 1);
	if(var_416_bool != 0) {
		int var_420_int; object var_421_object;
		var_85_object = var_421_object;
		TaskCall(6);
		func_792(var_422_object, var_420_int, var_421_object);
		TaskReturn();
		if(1000 == var_422_object) {
			object var_477_object;
			var_85_object = var_477_object;
			func_4683(var_477_object);
		}
		return 0;
	}
	bool var_515_bool;
	func_4037(var_515_bool, 2);
	if(var_515_bool != 0) {
		int var_518_int; object var_519_object;
		var_85_object = var_519_object;
		TaskCall(8);
		func_1003(var_520_object, var_518_int, var_519_object);
		TaskReturn();
		if(1000 == var_520_object) {
			object var_578_object;
			var_85_object = var_578_object;
			func_4683(var_578_object);
		}
		return 0;
	}
	bool var_579_bool;
	func_4037(var_579_bool, 3);
	if(var_579_bool != 0) {
		int var_582_int; object var_583_object;
		var_85_object = var_583_object;
		TaskCall(10);
		func_1224(var_584_object, var_582_int, var_583_object);
		TaskReturn();
		if(1000 == var_584_object) {
			object var_642_object;
			var_85_object = var_642_object;
			func_4683(var_642_object);
		}
		return 0;
	}
	bool var_643_bool;
	func_4037(var_643_bool, 4);
	if(var_643_bool != 0) {
		int var_646_int; object var_647_object;
		var_85_object = var_647_object;
		TaskCall(4);
		func_256(var_648_object, var_646_int, var_647_object);
		TaskReturn();
		if(1000 == var_648_object) {
			object var_735_object;
			var_85_object = var_735_object;
			func_4683(var_735_object);
		}
		return 0;
	}
	bool var_736_bool;
	func_4037(var_736_bool, 5);
	if(var_736_bool != 0) {
		int var_739_int; object var_740_object;
		var_85_object = var_740_object;
		TaskCall(12);
		func_1445(var_741_object, var_739_int, var_740_object);
		TaskReturn();
		if(1000 == var_741_object) {
			object var_799_object;
			var_85_object = var_799_object;
			func_4683(var_799_object);
		}
		return 0;
	}
	bool var_800_bool;
	func_4037(var_800_bool, 6);
	if(var_800_bool != 0) {
		int var_803_int; object var_804_object;
		var_85_object = var_804_object;
		TaskCall(14);
		func_1666(var_805_object, var_803_int, var_804_object);
		TaskReturn();
		if(1000 == var_805_object) {
			object var_863_object;
			var_85_object = var_863_object;
			func_4683(var_863_object);
		}
		return 0;
	}
	bool var_864_bool;
	func_4037(var_864_bool, 7);
	if(var_864_bool != 0) {
		int var_867_int; object var_868_object;
		var_85_object = var_868_object;
		TaskCall(16);
		func_1887(var_869_object, var_867_int, var_868_object);
		TaskReturn();
		if(1000 == var_869_object) {
			object var_924_object;
			var_85_object = var_924_object;
			func_4683(var_924_object);
		}
		return 0;
	}
	bool var_925_bool;
	func_4037(var_925_bool, 8);
	if(var_925_bool != 0) {
		int var_928_int; object var_929_object;
		var_85_object = var_929_object;
		TaskCall(18);
		func_2098(var_930_object, var_928_int, var_929_object);
		TaskReturn();
		if(1000 == var_930_object) {
			object var_988_object;
			var_85_object = var_988_object;
			func_4683(var_988_object);
		}
		return 0;
	}
	bool var_989_bool;
	func_4037(var_989_bool, 9);
	if(var_989_bool != 0) {
		int var_992_int; object var_993_object;
		var_85_object = var_993_object;
		TaskCall(20);
		func_2319(var_994_object, var_992_int, var_993_object);
		TaskReturn();
		if(1000 == var_994_object) {
			object var_1052_object;
			var_85_object = var_1052_object;
			func_4683(var_1052_object);
		}
		return 0;
	}
	bool var_1053_bool;
	func_4037(var_1053_bool, 10);
	if(var_1053_bool != 0) {
		int var_1056_int; object var_1057_object;
		var_85_object = var_1057_object;
		TaskCall(22);
		func_2540(var_1058_object, var_1056_int, var_1057_object);
		TaskReturn();
		if(1000 == var_1058_object) {
			object var_1113_object;
			var_85_object = var_1113_object;
			func_4683(var_1113_object);
		}
		return 0;
	}
	bool var_1114_bool;
	func_4037(var_1114_bool, 11);
	if(var_1114_bool != 0) {
		int var_1117_int; object var_1118_object;
		var_85_object = var_1118_object;
		TaskCall(24);
		func_2751(var_1119_object, var_1117_int, var_1118_object);
		TaskReturn();
		if(1000 == var_1119_object) {
			object var_1190_object;
			var_85_object = var_1190_object;
			func_4683(var_1190_object);
		}
		return 0;
	}
	bool var_1191_bool;
	func_4037(var_1191_bool, 12);
	if(var_1191_bool != 0) {
		int var_1193_int; object var_1194_object;
		var_85_object = var_1194_object;
		TaskCall(26);
		func_3147(var_1195_object, var_1193_int, var_1194_object);
		TaskReturn();
		return 0;
	}
}


void func_3421(void)
{
	@KillTimer(10);
}


void func_3935(bool var_252_bool, string var_253_string)
{
	bool var_255_bool;
	bool var_256_bool;
	func_4075(var_256_bool);
	if(var_256_bool != 0) {
		@lshHasSpeech(var_255_bool, var_253_string);
		if(var_255_bool != 0) {
			@lshPlaySpeech(var_253_string);
			var_252_bool = true;
		}
	}
	var_252_bool = false;
}


// @pe
void func_2400(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1016_object, object var_1017_object)
{
	var_0_bool = var_1017_object;
	var_1_object = var_1016_object;
	var_3_object = false;
	if(1 != 0) {
		func_2463(var_1017_object, "Neutral");
		var_0_bool->SetMessage(526685); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526686, -1, 27962); //@t
		var_0_bool->AddReply(526687, -1, 27963); //@t
		var_0_bool->AddReply(529000, -1, 30437); //@t
		goto Label_2433;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x964";
	}
Label_2433:
	bool var_1041_bool;
	func_4075(var_1041_bool);
	if(var_1041_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2462;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2462:
		return 0;

	}
	
}


void func_4449(object var_79_object)
{
	object var_82_object; object var_83_object;
	@GetMainOutdoorScene(var_82_object);
	if(var_82_object == null) {
		@Trace("Can't find main outdoor scene");
		var_83_object = null;
		var_83_object = var_79_object;
	}
	var_82_object->GetMap(var_83_object);
	var_83_object = var_79_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1887(bool var_0_bool, int var_867_int, object var_868_object)
{
	var_0_bool = var_868_object;
	bool var_878_bool; object var_879_object;
	object var_880_object;
	func_3985(var_880_object);
	var_880_object = var_879_object;
	func_3725(var_878_bool, var_879_object);
	bool var_881_bool; object var_882_object;
	var_868_object = var_882_object;
	func_3640(var_881_bool, var_882_object, 70.0);
	if(!var_881_bool) { //@nz
		var_867_int = -2;
		return 8;
	}
	object var_874_object;
	@CreateDialog(var_874_object);
	int var_885_int;
	func_4069(var_885_int);
	var_874_object->SetNPCName(var_885_int);
	int var_886_int;
	func_4067(var_886_int);
	var_874_object->SetNPCDescription(var_886_int);
	string var_887_string;
	func_4071(var_887_string);
	var_874_object->SetPhoto(var_887_string);
	string var_888_string;
	func_4073(var_888_string);
	var_874_object->SetPhoto2(var_888_string);
	int var_889_int;
	func_4660(var_889_int);
	var_874_object->SetPlayerName(var_889_int);
	bool var_875_bool;
	@IsOverrideActive(var_875_bool);
	if(var_875_bool != 0) {
		var_867_int = -2;
		return 8;
	}
	@DoDialog(var_874_object);
	object var_891_object; object var_892_object;
	var_868_object = var_891_object;
	var_874_object = var_892_object;
	TaskCall(17);
	func_1968(var_893_object, var_894_object, var_895_string, var_896_bool, var_891_object, var_892_object);
	TaskReturn();
	bool var_877_bool;
	var_874_object->IsDialogEnd(var_877_bool);
	
	for(;;) {
		var_921_bool = !var_877_bool; //@nz
		if(var_921_bool == 0) goto Label_1957;
		@sync();
		var_874_object->IsDialogEnd(var_877_bool);
	}
	
Label_1957:
	object var_922_object;
	var_868_object = var_922_object;
	func_3708();
	@StopDialog(var_874_object);
	var_874_object->GetReturnValue(-1);
	int var_876_int = var_867_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_873(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_444_object, object var_445_object)
{
	var_0_bool = var_445_object;
	var_1_object = var_444_object;
	var_3_object = false;
	if(1 != 0) {
		func_931(var_445_object, "Neutral");
		var_0_bool->SetMessage(526656); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526657, -1, 27933); //@t
		var_0_bool->AddReply(526658, -1, 27934); //@t
		goto Label_901;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x36d";
	}
Label_901:
	bool var_466_bool;
	func_4075(var_466_bool);
	if(var_466_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_930;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_930:
		return 0;

	}
	
}


// @pe
void func_4204(void)
{
	@SetVariable("ook11Grif1", 1);
}


void func_3950(void)
{
	bool var_70_bool;
	func_4075(var_70_bool);
	if(var_70_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_4210(object var_171_object)
{
	object var_175_object;
	func_4449(var_175_object);
	object var_172_object;
	var_175_object = var_172_object;
	func_4466(var_172_object, "pt_map_warehouse_gangster", (float)2);
	object var_176_object;
	func_4449(var_176_object);
	var_171_object->ShowMap(var_176_object);
}


void func_4466(object var_118_object, string var_119_string, float var_120_float)
{
	object var_128_object;
	@GetMainOutdoorScene(var_128_object);
	if(var_128_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_126_cvector;
	cvector var_127_cvector;
	bool var_129_bool;
	var_128_object->GetLocator(var_119_string, var_129_bool, var_126_cvector, var_127_cvector);
	if(!var_129_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_119_string) + " doesnt exist");
	var_128_object->GetMap(var_118_object);
	if(var_118_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_139_float = GetByIndex(var_126_cvector, 0);
	var_140_float = GetByIndex(var_126_cvector, 2);
	var_118_object->SetMapParams(var_139_float, var_140_float, var_120_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_116(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_368_object, object var_369_object)
{
	var_0_bool = var_369_object;
	var_1_object = var_368_object;
	var_3_object = false;
	if(1 != 0) {
		func_174(var_369_object, "Neutral");
		var_0_bool->SetMessage(525483); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(525484, 30758, 26840); //@t
		var_0_bool->AddReply(529303, -1, 30757); //@t
		goto Label_144;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x78";
	}
Label_144:
	bool var_394_bool;
	func_4075(var_394_bool);
	if(var_394_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_173;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_173:
		return 0;

	}
	
}


void func_3957(string var_126_string, int var_127_int, int var_128_int)
{
	bool var_130_bool;
	int var_132_int;
	var_127_int = var_132_int;
	int var_133_int;
	var_128_int = var_133_int;
	bool var_131_bool;
	func_4001(var_131_bool, var_132_int, var_133_int);
	if(var_131_bool != 0)
		@AddItem(var_130_bool, var_126_string, 0);
}


// @pe
void func_2679(object var_2_object, string var_1087_string)
{
	bool var_1088_bool;
	func_4075(var_1088_bool);
	if(!var_1088_bool) //@nz
		return 0;
	if(var_1087_string == var_2_object)
		return 0;
	string var_1091_string; bool var_1092_bool;
	var_1087_string = var_1091_string;
	if(var_1087_string == "")
		var_1092_bool = false;
	else
		var_1092_bool = true;
	func_3929(var_1091_string, var_1092_bool);
	var_2_object = var_1087_string;
	
}


// @pe
void func_1147(object var_2_object, string var_549_string)
{
	bool var_550_bool;
	func_4075(var_550_bool);
	if(!var_550_bool) //@nz
		return 0;
	if(var_549_string == var_2_object)
		return 0;
	string var_553_string; bool var_554_bool;
	var_549_string = var_553_string;
	if(var_549_string == "")
		var_554_bool = false;
	else
		var_554_bool = true;
	func_3929(var_553_string, var_554_bool);
	var_2_object = var_549_string;
	
}


void func_3708(void)
{
	bool var_410_bool;
	@CameraSwitchToNormal();
	bool var_411_bool;
	func_4075(var_411_bool);
	if(var_411_bool != 0) {
	} else {
		@HasAnimationTrack(var_410_bool, "head");
		if(var_410_bool == 0) goto Label_3724;
		@UnlookAsync("head");
	}
Label_3724:
	
}


void func_3968(string var_137_string, int var_138_int, int var_139_int, int var_140_int, int var_141_int)
{
	int var_144_int; bool var_145_bool;
	int var_147_int;
	var_138_int = var_147_int;
	int var_148_int;
	var_139_int = var_148_int;
	bool var_146_bool;
	func_4001(var_146_bool, var_147_int, var_148_int);
	if(var_146_bool != 0) {
		@irand(var_144_int, ((var_141_int - var_140_int) + 1));
		@AddItem(var_145_bool, var_137_string, 0, (var_144_int + var_140_int));
	}
}


// @pe
void func_4226(object var_165_object)
{
	var_165_object->SetReturnValue(1000);
}


// @pe
void func_2179(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_952_object, object var_953_object)
{
	var_0_bool = var_953_object;
	var_1_object = var_952_object;
	var_3_object = false;
	if(1 != 0) {
		func_2242(var_953_object, "Neutral");
		var_0_bool->SetMessage(526681); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526682, -1, 27958); //@t
		var_0_bool->AddReply(526683, -1, 27959); //@t
		var_0_bool->AddReply(528752, -1, 30178); //@t
		goto Label_2212;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x887";
	}
Label_2212:
	bool var_977_bool;
	func_4075(var_977_bool);
	if(var_977_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2241;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2241:
		return 0;

	}
	
}


void func_1666(bool var_0_bool, int var_803_int, object var_804_object)
{
	var_0_bool = var_804_object;
	bool var_814_bool; object var_815_object;
	object var_816_object;
	func_3985(var_816_object);
	var_816_object = var_815_object;
	func_3725(var_814_bool, var_815_object);
	bool var_817_bool; object var_818_object;
	var_804_object = var_818_object;
	func_3640(var_817_bool, var_818_object, 70.0);
	if(!var_817_bool) { //@nz
		var_803_int = -2;
		return 8;
	}
	object var_810_object;
	@CreateDialog(var_810_object);
	int var_821_int;
	func_4069(var_821_int);
	var_810_object->SetNPCName(var_821_int);
	int var_822_int;
	func_4067(var_822_int);
	var_810_object->SetNPCDescription(var_822_int);
	string var_823_string;
	func_4071(var_823_string);
	var_810_object->SetPhoto(var_823_string);
	string var_824_string;
	func_4073(var_824_string);
	var_810_object->SetPhoto2(var_824_string);
	int var_825_int;
	func_4660(var_825_int);
	var_810_object->SetPlayerName(var_825_int);
	bool var_811_bool;
	@IsOverrideActive(var_811_bool);
	if(var_811_bool != 0) {
		var_803_int = -2;
		return 8;
	}
	@DoDialog(var_810_object);
	object var_827_object; object var_828_object;
	var_804_object = var_827_object;
	var_810_object = var_828_object;
	TaskCall(15);
	func_1747(var_829_object, var_830_object, var_831_string, var_832_bool, var_827_object, var_828_object);
	TaskReturn();
	bool var_813_bool;
	var_810_object->IsDialogEnd(var_813_bool);
	
	for(;;) {
		var_860_bool = !var_813_bool; //@nz
		if(var_860_bool == 0) goto Label_1736;
		@sync();
		var_810_object->IsDialogEnd(var_813_bool);
	}
	
Label_1736:
	object var_861_object;
	var_804_object = var_861_object;
	func_3708();
	@StopDialog(var_810_object);
	var_810_object->GetReturnValue(-1);
	int var_812_int = var_803_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4231(bool var_686_bool)
{
	int var_688_int;
	func_4006(var_688_int, "k4q01");
	if(var_688_int == 1)
		var_686_bool = true;
	var_686_bool = false;
}


void func_3725(bool var_218_bool, object var_219_object)
{
	int var_225_int; int var_226_int;
	@GetVariable("voice_common", var_225_int);
	if(var_225_int != 0) {
		bool var_229_bool; object var_230_object;
		var_219_object = var_230_object;
		func_3783(var_229_bool, var_230_object);
		if(!var_229_bool) { //@nz
			bool var_260_bool; object var_261_object;
			var_219_object = var_261_object;
			func_3820(var_260_bool, var_261_object);
			if(!var_260_bool) { //@nz
				var_218_bool = false;
				return 4;
			}
		}
		@irand(var_226_int, 2);
		if(var_226_int != 0)
			@SetVariable("voice_common", ((var_225_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_300_bool; object var_301_object;
		var_219_object = var_301_object;
		func_3820(var_300_bool, var_301_object);
		if(!var_300_bool) { //@nz
			bool var_303_bool; object var_304_object;
			var_219_object = var_304_object;
			func_3783(var_303_bool, var_304_object);
			if(!var_303_bool) { //@nz
				var_218_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3781;
	
Label_3781:
	var_218_bool = true;
	
}


void func_3985(object var_220_object)
{
	object var_222_object;
	@self(var_222_object);
	var_222_object = var_220_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4243(bool var_697_bool)
{
	int var_699_int;
	func_4006(var_699_int, "k4q01");
	if(var_699_int == 3)
		var_697_bool = true;
	var_697_bool = false;
}


void func_4499(void)
{
	@ClearSubContainer(0);
	int var_101_int;
	func_4028(var_101_int);
	int var_99_int;
	var_101_int = var_99_int;
	int var_102_int;
	func_4655(var_102_int, "Rifle");
	bool var_97_bool;
	@AddItem(var_97_bool, var_102_int, 0, 1);
	int var_108_int;
	func_4655(var_108_int, "Revolver");
	@AddItem(var_97_bool, var_108_int, 0, 1);
	int var_112_int;
	func_4655(var_112_int, "Knife");
	@AddItem(var_97_bool, var_112_int, 0, 1);
	if(var_99_int != 10) {
		int var_118_int;
		func_4655(var_118_int, "tvirin");
		@AddItem(var_97_bool, var_118_int, 0, 1);
	} else {
		int var_199_int;
		func_4655(var_199_int, "tvirin");
		@AddItem(var_97_bool, var_199_int, 0, 4);
	}
	int var_122_int;
	func_4655(var_122_int, "lockpick");
	@AddItem(var_97_bool, var_122_int, 0, 3);
	func_3957("Scalpel", 1, 2);
	func_3968("revolver_ammo", 1, 1, 5, 10);
	func_3968("rifle_ammo", 1, 1, 5, 20);
	int var_98_int;
	@irand(var_98_int, 100);
	if(var_98_int != 0) {
		int var_162_int;
		func_4655(var_162_int, "kerosene");
		@AddItem(var_97_bool, var_162_int, 0, var_98_int);
	}
	if(var_99_int >= 3) {
		int var_167_int;
		func_4655(var_167_int, "halfboot_repel");
		@AddItem(var_97_bool, var_167_int, 0, 1);
		int var_171_int;
		func_4655(var_171_int, "boot_repel");
		@AddItem(var_97_bool, var_171_int, 0, 1);
	}
	if(var_99_int >= 9) {
		int var_177_int;
		func_4655(var_177_int, "boot_army");
		@AddItem(var_97_bool, var_177_int, 0, 1);
		int var_181_int;
		func_4655(var_181_int, "balahon");
		@AddItem(var_97_bool, var_181_int, 0, 1);
		int var_185_int;
		func_4655(var_185_int, "glove_army");
		@AddItem(var_97_bool, var_185_int, 0, 1);
	}
	int var_189_int;
	func_4677(var_189_int);
	if(var_189_int == 0) {
		int var_195_int;
		func_4655(var_195_int, "Gun_danko");
		@AddItem(var_97_bool, var_195_int, 0, 1);
	}
	
}


void func_3991(cvector var_335_cvector, cvector var_336_cvector)
{
	float var_339_float = sqrt(var_336_cvector | var_336_cvector);
	if(var_339_float < 0.000001)
		var_335_cvector = [0.0, 0.0, 0.0];
	var_335_cvector = var_336_cvector / var_339_float;
}


// @pe
void func_3228(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1217_object, object var_1218_object)
{
	var_0_bool = var_1218_object;
	var_1_object = var_1217_object;
	var_3_object = false;
	if(1 != 0) {
		func_3281(var_1218_object, "Neutral");
		var_0_bool->SetMessage(539291); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(539292, -1, 41235); //@t
		goto Label_3251;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xca0";
	}
Label_3251:
	bool var_1236_bool;
	func_4075(var_1236_bool);
	if(var_1236_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3280;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3280:
		return 0;

	}
	
}


// @pe
void func_4255(bool var_706_bool)
{
	int var_708_int;
	func_4006(var_708_int, "k4q01");
	if(var_708_int == 5)
		var_706_bool = true;
	var_706_bool = false;
}


// @pe
void func_2463(object var_2_object, string var_1023_string)
{
	bool var_1024_bool;
	func_4075(var_1024_bool);
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
	func_3929(var_1027_string, var_1028_bool);
	var_2_object = var_1023_string;
	
}


void func_4001(bool var_131_bool, int var_132_int, int var_133_int)
{
	int var_135_int;
	@irand(var_135_int, var_133_int);
	var_131_bool = var_135_int < var_132_int;
}


// @pe
void func_931(object var_2_object, string var_451_string)
{
	bool var_452_bool;
	func_4075(var_452_bool);
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
	func_3929(var_455_string, var_456_bool);
	var_2_object = var_451_string;
	
}


void func_1445(bool var_0_bool, int var_739_int, object var_740_object)
{
	var_0_bool = var_740_object;
	bool var_750_bool; object var_751_object;
	object var_752_object;
	func_3985(var_752_object);
	var_752_object = var_751_object;
	func_3725(var_750_bool, var_751_object);
	bool var_753_bool; object var_754_object;
	var_740_object = var_754_object;
	func_3640(var_753_bool, var_754_object, 70.0);
	if(!var_753_bool) { //@nz
		var_739_int = -2;
		return 8;
	}
	object var_746_object;
	@CreateDialog(var_746_object);
	int var_757_int;
	func_4069(var_757_int);
	var_746_object->SetNPCName(var_757_int);
	int var_758_int;
	func_4067(var_758_int);
	var_746_object->SetNPCDescription(var_758_int);
	string var_759_string;
	func_4071(var_759_string);
	var_746_object->SetPhoto(var_759_string);
	string var_760_string;
	func_4073(var_760_string);
	var_746_object->SetPhoto2(var_760_string);
	int var_761_int;
	func_4660(var_761_int);
	var_746_object->SetPlayerName(var_761_int);
	bool var_747_bool;
	@IsOverrideActive(var_747_bool);
	if(var_747_bool != 0) {
		var_739_int = -2;
		return 8;
	}
	@DoDialog(var_746_object);
	object var_763_object; object var_764_object;
	var_740_object = var_763_object;
	var_746_object = var_764_object;
	TaskCall(13);
	func_1526(var_765_object, var_766_object, var_767_string, var_768_bool, var_763_object, var_764_object);
	TaskReturn();
	bool var_749_bool;
	var_746_object->IsDialogEnd(var_749_bool);
	
	for(;;) {
		var_796_bool = !var_749_bool; //@nz
		if(var_796_bool == 0) goto Label_1515;
		@sync();
		var_746_object->IsDialogEnd(var_749_bool);
	}
	
Label_1515:
	object var_797_object;
	var_740_object = var_797_object;
	func_3708();
	@StopDialog(var_746_object);
	var_746_object->GetReturnValue(-1);
	int var_748_int = var_739_int;
}
EMIT "Stack[-4] = 0";


void func_4006(int var_688_int, string var_689_string)
{
	int var_691_int;
	@GetVariable(var_689_string, var_691_int);
	var_691_int = var_688_int;
}


// @pe
void func_4267(bool var_1158_bool)
{
	int var_1160_int;
	func_4006(var_1160_int, "k11q01");
	if(var_1160_int == 9)
		var_1158_bool = true;
	var_1158_bool = false;
}


void func_4011(bool var_164_bool, string var_165_string, string var_166_string)
{
	object var_168_object;
	@FindActor(var_168_object, var_165_string);
	if(var_168_object == null)
		var_164_bool = false;
	@Trigger(var_168_object, var_166_string);
	var_164_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_174(object var_2_object, string var_375_string)
{
	bool var_376_bool;
	func_4075(var_376_bool);
	if(!var_376_bool) //@nz
		return 0;
	if(var_375_string == var_2_object)
		return 0;
	string var_379_string; bool var_380_bool;
	var_375_string = var_379_string;
	if(var_375_string == "")
		var_380_bool = false;
	else
		var_380_bool = true;
	func_3929(var_379_string, var_380_bool);
	var_2_object = var_375_string;
	
}


// @pe
void func_430(object var_2_object, string var_677_string)
{
	bool var_678_bool;
	func_4075(var_678_bool);
	if(!var_678_bool) //@nz
		return 0;
	if(var_677_string == var_2_object)
		return 0;
	string var_681_string; bool var_682_bool;
	var_677_string = var_681_string;
	if(var_677_string == "")
		var_682_bool = false;
	else
		var_682_bool = true;
	func_3929(var_681_string, var_682_bool);
	var_2_object = var_677_string;
	
}


// @pe
void func_1968(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_891_object, object var_892_object)
{
	var_0_bool = var_892_object;
	var_1_object = var_891_object;
	var_3_object = false;
	if(1 != 0) {
		func_2026(var_892_object, "Neutral");
		var_0_bool->SetMessage(526677); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526678, -1, 27954); //@t
		var_0_bool->AddReply(526679, -1, 27955); //@t
		goto Label_1996;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7b4";
	}
Label_1996:
	bool var_913_bool;
	func_4075(var_913_bool);
	if(var_913_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2025;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2025:
		return 0;

	}
	
}


// @pe
void func_4279(bool var_1164_bool)
{
	int var_1166_int;
	func_4006(var_1166_int, "ook11Grif1");
	if(var_1166_int == 0) {
		var_1164_bool = true;
		return 0;
	}
	var_1164_bool = false;
}


void func_4023(float var_90_float)
{
	float var_92_float;
	@GetGameTime(var_92_float);
	var_92_float = var_90_float;
}


void func_4028(int var_87_int)
{
	float var_89_float;
	@GetGameTime(var_89_float);
	var_87_int = 1 + (var_89_float / 24);
}


void func_2751(bool var_0_bool, int var_1117_int, object var_1118_object)
{
	var_0_bool = var_1118_object;
	bool var_1128_bool; object var_1129_object;
	object var_1130_object;
	func_3985(var_1130_object);
	var_1130_object = var_1129_object;
	func_3725(var_1128_bool, var_1129_object);
	bool var_1131_bool; object var_1132_object;
	var_1118_object = var_1132_object;
	func_3640(var_1131_bool, var_1132_object, 70.0);
	if(!var_1131_bool) { //@nz
		var_1117_int = -2;
		return 8;
	}
	object var_1124_object;
	@CreateDialog(var_1124_object);
	int var_1135_int;
	func_4069(var_1135_int);
	var_1124_object->SetNPCName(var_1135_int);
	int var_1136_int;
	func_4067(var_1136_int);
	var_1124_object->SetNPCDescription(var_1136_int);
	string var_1137_string;
	func_4071(var_1137_string);
	var_1124_object->SetPhoto(var_1137_string);
	string var_1138_string;
	func_4073(var_1138_string);
	var_1124_object->SetPhoto2(var_1138_string);
	int var_1139_int;
	func_4660(var_1139_int);
	var_1124_object->SetPlayerName(var_1139_int);
	bool var_1125_bool;
	@IsOverrideActive(var_1125_bool);
	if(var_1125_bool != 0) {
		var_1117_int = -2;
		return 8;
	}
	@DoDialog(var_1124_object);
	object var_1141_object; object var_1142_object;
	var_1118_object = var_1141_object;
	var_1124_object = var_1142_object;
	TaskCall(25);
	func_2832(var_1143_object, var_1144_object, var_1145_string, var_1146_bool, var_1141_object, var_1142_object);
	TaskReturn();
	bool var_1127_bool;
	var_1124_object->IsDialogEnd(var_1127_bool);
	
	for(;;) {
		var_1187_bool = !var_1127_bool; //@nz
		if(var_1187_bool == 0) goto Label_2821;
		@sync();
		var_1124_object->IsDialogEnd(var_1127_bool);
	}
	
Label_2821:
	object var_1188_object;
	var_1118_object = var_1188_object;
	func_3708();
	@StopDialog(var_1124_object);
	var_1124_object->GetReturnValue(-1);
	int var_1126_int = var_1117_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2242(object var_2_object, string var_959_string)
{
	bool var_960_bool;
	func_4075(var_960_bool);
	if(!var_960_bool) //@nz
		return 0;
	if(var_959_string == var_2_object)
		return 0;
	string var_963_string; bool var_964_bool;
	var_959_string = var_963_string;
	if(var_959_string == "")
		var_964_bool = false;
	else
		var_964_bool = true;
	func_3929(var_963_string, var_964_bool);
	var_2_object = var_959_string;
	
}


void func_4291(void)
{
	object var_155_object;
	@CreateDiaryEntry(var_155_object, 498, 1, 528065);
	bool var_159_bool; object var_160_object;
	var_155_object = var_160_object;
	func_4421(var_159_bool, var_160_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4037(bool var_416_bool, int var_417_int)
{
	int var_418_int;
	func_4028(var_418_int);
	var_416_bool = var_418_int == var_417_int;
}


void func_3783(bool var_229_bool, object var_230_object)
{
	string var_236_string; bool var_238_bool; int var_239_int; string var_240_string;
	var_236_string = "c";
	int var_237_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_230_object->HasProperty((var_236_string + (var_237_int + 1)), var_238_bool);
			if(!var_238_bool) { //@nz
			} else {
				var_237_int += 1;
			}
		}
		if(!var_237_int) { //@nz
			var_229_bool = false;
			return 10;
		}
		var_239_int = 0;
		if(var_237_int > 1)
			@irand(var_239_int, var_237_int);
		var_230_object->GetProperty((var_236_string + (var_239_int + 1)), var_240_string);
		bool var_252_bool; string var_253_string;
		var_240_string = var_253_string;
		func_3935(var_252_bool, var_253_string);
		var_252_bool = var_229_bool;
		return 10;

	}
}


void func_1224(bool var_0_bool, int var_582_int, object var_583_object)
{
	var_0_bool = var_583_object;
	bool var_593_bool; object var_594_object;
	object var_595_object;
	func_3985(var_595_object);
	var_595_object = var_594_object;
	func_3725(var_593_bool, var_594_object);
	bool var_596_bool; object var_597_object;
	var_583_object = var_597_object;
	func_3640(var_596_bool, var_597_object, 70.0);
	if(!var_596_bool) { //@nz
		var_582_int = -2;
		return 8;
	}
	object var_589_object;
	@CreateDialog(var_589_object);
	int var_600_int;
	func_4069(var_600_int);
	var_589_object->SetNPCName(var_600_int);
	int var_601_int;
	func_4067(var_601_int);
	var_589_object->SetNPCDescription(var_601_int);
	string var_602_string;
	func_4071(var_602_string);
	var_589_object->SetPhoto(var_602_string);
	string var_603_string;
	func_4073(var_603_string);
	var_589_object->SetPhoto2(var_603_string);
	int var_604_int;
	func_4660(var_604_int);
	var_589_object->SetPlayerName(var_604_int);
	bool var_590_bool;
	@IsOverrideActive(var_590_bool);
	if(var_590_bool != 0) {
		var_582_int = -2;
		return 8;
	}
	@DoDialog(var_589_object);
	object var_606_object; object var_607_object;
	var_583_object = var_606_object;
	var_589_object = var_607_object;
	TaskCall(11);
	func_1305(var_608_object, var_609_object, var_610_string, var_611_bool, var_606_object, var_607_object);
	TaskReturn();
	bool var_592_bool;
	var_589_object->IsDialogEnd(var_592_bool);
	
	for(;;) {
		var_639_bool = !var_592_bool; //@nz
		if(var_639_bool == 0) goto Label_1294;
		@sync();
		var_589_object->IsDialogEnd(var_592_bool);
	}
	
Label_1294:
	object var_640_object;
	var_583_object = var_640_object;
	func_3708();
	@StopDialog(var_589_object);
	var_589_object->GetReturnValue(-1);
	int var_591_int = var_582_int;
}
EMIT "Stack[-4] = 0";


void func_4043(string var_107_string, int var_108_int)
{
	string var_110_string = "idle";
	if(var_108_int != 0)
		var_110_string += var_108_int;
	var_110_string = var_107_string;
}


void func_3532(void)
{
	bool var_95_bool; int var_96_int; int var_97_int; bool var_98_bool;
	@WaitForAnimEnd();
	bool var_99_bool;
	func_3635(var_99_bool);
	if(!var_99_bool) //@nz
		return 12;
	int var_101_int;
	func_4050(var_101_int);
	int var_93_int;
	var_101_int = var_93_int;
	int var_94_int = 0;
	
	for(;;) {
		bool var_114_bool = false;
		if(var_94_int < 5) {
			bool var_117_bool;
			func_3635(var_117_bool);
			if(var_117_bool != 0)
				var_114_bool = true;
		}
		if(var_114_bool != 0) {
			if(!var_93_int) { //@nz
				@Sleep(3, var_95_bool);
				if(!var_95_bool) { //@nz
				} else {
			} else {
			@irand(var_96_int, var_93_int);
			@irand(var_97_int, 5);
			if(var_97_int != 0)
				var_96_int = 0;
			string var_128_string; int var_129_int;
			var_96_int = var_129_int;
			func_4043(var_128_string, var_129_int);
			@PlayAnimation("all", var_128_string);
			@WaitForAnimEnd(var_98_bool);
			var_130_bool = !var_98_bool; //@nz
			if(var_130_bool == 0) goto Label_3587;
			goto Label_3598;
			}
				Label_3587:
					bool var_121_bool;
					func_3601(var_121_bool);
					var_122_bool = !var_121_bool; //@nz
					if(var_122_bool == 0) goto Label_3593;
			}
		}
	Label_3598:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3593:
		@ResetAAS();
		var_94_int += 1;
	}
	
}


void func_4304(void)
{
	object var_145_object;
	@CreateDiaryEntry(var_145_object, 497, 1, 528064);
	bool var_149_bool; object var_150_object;
	var_145_object = var_150_object;
	func_4421(var_149_bool, var_150_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3281(object var_2_object, string var_1224_string)
{
	bool var_1225_bool;
	func_4075(var_1225_bool);
	if(!var_1225_bool) //@nz
		return 0;
	if(var_1224_string == var_2_object)
		return 0;
	string var_1228_string; bool var_1229_bool;
	var_1224_string = var_1228_string;
	if(var_1224_string == "")
		var_1229_bool = false;
	else
		var_1229_bool = true;
	func_3929(var_1228_string, var_1229_bool);
	var_2_object = var_1224_string;
	
}


void func_4050(int var_101_int)
{
	int var_104_int; bool var_105_bool;
	var_104_int = 0;
	
	for(;;) {
		string var_107_string; int var_108_int;
		var_104_int = var_108_int;
		func_4043(var_107_string, var_108_int);
		@HasAnimation(var_105_bool, "all", var_107_string);
		if(!var_105_bool) //@nz
			break;
		var_104_int += 1;
	}
	var_104_int = var_101_int;
}


// @pe
void func_1747(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_827_object, object var_828_object)
{
	var_0_bool = var_828_object;
	var_1_object = var_827_object;
	var_3_object = false;
	if(1 != 0) {
		func_1810(var_828_object, "Neutral");
		var_0_bool->SetMessage(526673); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526674, -1, 27950); //@t
		var_0_bool->AddReply(526675, -1, 27951); //@t
		var_0_bool->AddReply(528785, -1, 30197); //@t
		goto Label_1780;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6d7";
	}
Label_1780:
	bool var_852_bool;
	func_4075(var_852_bool);
	if(var_852_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1809;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1809:
		return 0;

	}
	
}


void func_4317(void)
{
	object var_135_object;
	@CreateDiaryEntry(var_135_object, 496, 1, 528063);
	bool var_139_bool; object var_140_object;
	var_135_object = var_140_object;
	func_4421(var_139_bool, var_140_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4067(int var_356_int)
{
	var_356_int = 515535;
}


void func_4069(int var_355_int)
{
	var_355_int = 502860;
}


void func_4071(string var_357_string)
{
	var_357_string = "ui/NPC_Grif.png";
}


void func_4073(string var_358_string)
{
	var_358_string = "ui/NPC_Grif_b.png";
}


void func_4330(void)
{
	object var_125_object;
	@CreateDiaryEntry(var_125_object, 495, 1, 528062);
	bool var_129_bool; object var_130_object;
	var_125_object = var_130_object;
	func_4421(var_129_bool, var_130_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2026(object var_2_object, string var_898_string)
{
	bool var_899_bool;
	func_4075(var_899_bool);
	if(!var_899_bool) //@nz
		return 0;
	if(var_898_string == var_2_object)
		return 0;
	string var_902_string; bool var_903_bool;
	var_898_string = var_902_string;
	if(var_898_string == "")
		var_903_bool = false;
	else
		var_903_bool = true;
	func_3929(var_902_string, var_903_bool);
	var_2_object = var_898_string;
	
}


void func_3820(bool var_260_bool, object var_261_object)
{
	bool var_269_bool; int var_270_int; string var_271_string;
	int var_273_int;
	func_4028(var_273_int);
	string var_267_string = ("d" + var_273_int) + "m";
	int var_268_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_261_object->HasProperty((var_267_string + (var_268_int + 1)), var_269_bool);
			if(!var_269_bool) { //@nz
			} else {
				var_268_int += 1;
			}
		}
		if(!var_268_int) { //@nz
			var_260_bool = false;
			return 10;
		}
		var_270_int = 0;
		if(var_268_int > 1)
			@irand(var_270_int, var_268_int);
		var_261_object->GetProperty((var_267_string + (var_270_int + 1)), var_271_string);
		bool var_287_bool; string var_288_string;
		var_271_string = var_288_string;
		func_3935(var_287_bool, var_288_string);
		var_287_bool = var_260_bool;
		return 10;

	}
}


void func_4075(bool var_256_bool)
{
	var_256_bool = true;
}


void func_1003(bool var_0_bool, int var_518_int, object var_519_object)
{
	var_0_bool = var_519_object;
	bool var_529_bool; object var_530_object;
	object var_531_object;
	func_3985(var_531_object);
	var_531_object = var_530_object;
	func_3725(var_529_bool, var_530_object);
	bool var_532_bool; object var_533_object;
	var_519_object = var_533_object;
	func_3640(var_532_bool, var_533_object, 70.0);
	if(!var_532_bool) { //@nz
		var_518_int = -2;
		return 8;
	}
	object var_525_object;
	@CreateDialog(var_525_object);
	int var_536_int;
	func_4069(var_536_int);
	var_525_object->SetNPCName(var_536_int);
	int var_537_int;
	func_4067(var_537_int);
	var_525_object->SetNPCDescription(var_537_int);
	string var_538_string;
	func_4071(var_538_string);
	var_525_object->SetPhoto(var_538_string);
	string var_539_string;
	func_4073(var_539_string);
	var_525_object->SetPhoto2(var_539_string);
	int var_540_int;
	func_4660(var_540_int);
	var_525_object->SetPlayerName(var_540_int);
	bool var_526_bool;
	@IsOverrideActive(var_526_bool);
	if(var_526_bool != 0) {
		var_518_int = -2;
		return 8;
	}
	@DoDialog(var_525_object);
	object var_542_object; object var_543_object;
	var_519_object = var_542_object;
	var_525_object = var_543_object;
	TaskCall(9);
	func_1084(var_544_object, var_545_object, var_546_string, var_547_bool, var_542_object, var_543_object);
	TaskReturn();
	bool var_528_bool;
	var_525_object->IsDialogEnd(var_528_bool);
	
	for(;;) {
		var_575_bool = !var_528_bool; //@nz
		if(var_575_bool == 0) goto Label_1073;
		@sync();
		var_525_object->IsDialogEnd(var_528_bool);
	}
	
Label_1073:
	object var_576_object;
	var_519_object = var_576_object;
	func_3708();
	@StopDialog(var_525_object);
	var_525_object->GetReturnValue(-1);
	int var_527_int = var_518_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4077(object var_117_object)
{
	object var_121_object;
	func_4449(var_121_object);
	object var_118_object;
	var_121_object = var_118_object;
	func_4466(var_118_object, "pt_map_notkin", (float)2);
	object var_141_object;
	func_4449(var_141_object);
	var_117_object->ShowMap(var_141_object);
}


void func_2540(bool var_0_bool, int var_1056_int, object var_1057_object)
{
	var_0_bool = var_1057_object;
	bool var_1067_bool; object var_1068_object;
	object var_1069_object;
	func_3985(var_1069_object);
	var_1069_object = var_1068_object;
	func_3725(var_1067_bool, var_1068_object);
	bool var_1070_bool; object var_1071_object;
	var_1057_object = var_1071_object;
	func_3640(var_1070_bool, var_1071_object, 70.0);
	if(!var_1070_bool) { //@nz
		var_1056_int = -2;
		return 8;
	}
	object var_1063_object;
	@CreateDialog(var_1063_object);
	int var_1074_int;
	func_4069(var_1074_int);
	var_1063_object->SetNPCName(var_1074_int);
	int var_1075_int;
	func_4067(var_1075_int);
	var_1063_object->SetNPCDescription(var_1075_int);
	string var_1076_string;
	func_4071(var_1076_string);
	var_1063_object->SetPhoto(var_1076_string);
	string var_1077_string;
	func_4073(var_1077_string);
	var_1063_object->SetPhoto2(var_1077_string);
	int var_1078_int;
	func_4660(var_1078_int);
	var_1063_object->SetPlayerName(var_1078_int);
	bool var_1064_bool;
	@IsOverrideActive(var_1064_bool);
	if(var_1064_bool != 0) {
		var_1056_int = -2;
		return 8;
	}
	@DoDialog(var_1063_object);
	object var_1080_object; object var_1081_object;
	var_1057_object = var_1080_object;
	var_1063_object = var_1081_object;
	TaskCall(23);
	func_2621(var_1082_object, var_1083_object, var_1084_string, var_1085_bool, var_1080_object, var_1081_object);
	TaskReturn();
	bool var_1066_bool;
	var_1063_object->IsDialogEnd(var_1066_bool);
	
	for(;;) {
		var_1110_bool = !var_1066_bool; //@nz
		if(var_1110_bool == 0) goto Label_2610;
		@sync();
		var_1063_object->IsDialogEnd(var_1066_bool);
	}
	
Label_2610:
	object var_1111_object;
	var_1057_object = var_1111_object;
	func_3708();
	@StopDialog(var_1063_object);
	var_1063_object->GetReturnValue(-1);
	int var_1065_int = var_1056_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1526(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_763_object, object var_764_object)
{
	var_0_bool = var_764_object;
	var_1_object = var_763_object;
	var_3_object = false;
	if(1 != 0) {
		func_1589(var_764_object, "Neutral");
		var_0_bool->SetMessage(526669); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526670, -1, 27946); //@t
		var_0_bool->AddReply(526671, -1, 27947); //@t
		var_0_bool->AddReply(528784, -1, 30196); //@t
		goto Label_1559;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5fa";
	}
Label_1559:
	bool var_788_bool;
	func_4075(var_788_bool);
	if(var_788_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3922(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1588;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1588:
		return 0;

	}
	
}


void func_4343(void)
{
	object var_115_object;
	@CreateDiaryEntry(var_115_object, 494, 1, 528061);
	bool var_119_bool; object var_120_object;
	var_115_object = var_120_object;
	func_4421(var_119_bool, var_120_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4093(void)
{
	@SetVariable("k4q01", 2);
	object var_79_object;
	func_4449(var_79_object);
	object var_76_object;
	var_79_object = var_76_object;
	float var_90_float;
	func_4023(var_90_float);
	var_76_object->AddMark("k4q01GrifGotoNotkin", "pt_map_notkin", 1, 515278, var_90_float);
	func_4395();
}
EMIT "Stack[-1] = 0";


