// @GLOBALS: 0:object:,1:bool:,2:int:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		@lshStopAnimation();
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_67_bool == 26839) {
				func_161(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525483); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525484, 30758, 26840); //@t
				var_0_bool->AddReply(529303, -1, 30757); //@t
				return 0;
			}
			if(var_67_bool == 30758) {
				func_161(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(529304); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529305, -1, 30759); //@t
				var_0_bool->AddReply(542281, -1, 44626); //@t
				return 0;
			}
			var_3_object = true;
			bool var_107_bool;
			func_4764(var_107_bool);
			if(var_107_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb8";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27011) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_4782();
				object var_116_object = var_1_object;
				func_4766(var_0_bool);
			}
			if(var_68_cvector == 44725) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_bool;
				func_4782();
			}
			if(var_68_cvector == 27021) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_bool;
				func_4805();
				object var_174_object = var_1_object;
				func_4908(var_0_bool);
			}
			if(var_68_cvector == 44742) {
				object var_183_object; object var_184_object;
				var_183_object = var_1_object;
				var_184_object = var_0_bool;
				func_4805();
			}
			if(var_68_cvector == 27037) {
				object var_187_object; object var_188_object;
				var_187_object = var_1_object;
				var_188_object = var_0_bool;
				func_4833();
			}
			if(var_68_cvector == 27038) {
				object var_201_object; object var_202_object;
				var_201_object = var_1_object;
				var_202_object = var_0_bool;
				func_4833();
			}
			if(var_68_cvector == 44753) {
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_bool;
				func_4899();
			}
			if(var_68_cvector == 44754) {
				object var_219_object; object var_220_object;
				var_219_object = var_1_object;
				var_220_object = var_0_bool;
				func_4899();
			}
			if(var_68_cvector == 27943) {
				object var_223_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27004) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525681); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_246_bool;
				func_4929(var_1_object);
				if(var_246_bool != 0)
					var_0_bool->AddReply(525682, 44708, 27005); //@t
				bool var_257_bool;
				func_4941(var_1_object);
				if(var_257_bool != 0)
					var_0_bool->AddReply(525696, 30190, 27019); //@t
				bool var_266_bool;
				func_4953(var_1_object);
				if(var_266_bool != 0)
					var_0_bool->AddReply(525709, 27032, 27031); //@t
				var_0_bool->AddReply(526667, -1, 27943); //@t
				var_0_bool->AddReply(525689, -1, 27012); //@t
				var_0_bool->AddReply(528783, -1, 30195); //@t
				return 0;
			}
			if(var_67_bool == 27032) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(525710); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525711, 27034, 27033); //@t
				return 0;
			}
			if(var_67_bool == 27034) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(525712); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525713, 44727, 27035); //@t
				var_0_bool->AddReply(542369, 44727, 44735); //@t
				return 0;
			}
			if(var_67_bool == 44727) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(542361); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542362, 44729, 44728); //@t
				var_0_bool->AddReply(542374, 44743, 44741); //@t
				return 0;
			}
			if(var_67_bool == 44743) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(542376); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542377, 44746, 44744); //@t
				var_0_bool->AddReply(542378, 44751, 44745); //@t
				return 0;
			}
			if(var_67_bool == 44746) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(542379); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542380, 44748, 44747); //@t
				return 0;
			}
			if(var_67_bool == 44748) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542381); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542382, 44755, 44749); //@t
				var_0_bool->AddReply(542383, 44751, 44750); //@t
				return 0;
			}
			if(var_67_bool == 44751) {
				func_422(var_68_cvector, "Sly");
				var_0_bool->SetMessage(542384); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542385, -1, 44753); //@t
				var_0_bool->AddReply(542386, -1, 44754); //@t
				return 0;
			}
			if(var_67_bool == 44755) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542387); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542388, 44751, 44756); //@t
				return 0;
			}
			if(var_67_bool == 44729) {
				func_422(var_68_cvector, "Sly");
				var_0_bool->SetMessage(542363); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542364, 44731, 44730); //@t
				return 0;
			}
			if(var_67_bool == 44731) {
				func_422(var_68_cvector, "Sly");
				var_0_bool->SetMessage(542365); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542370, 44738, 44737); //@t
				var_0_bool->AddReply(542389, 44759, 44758); //@t
				return 0;
			}
			if(var_67_bool == 44759) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542390); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542391, 44738, 44760); //@t
				return 0;
			}
			if(var_67_bool == 44738) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542371); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542372, 44740, 44739); //@t
				var_0_bool->AddReply(542392, 44763, 44762); //@t
				return 0;
			}
			if(var_67_bool == 44763) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542393); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542399, 44773, 44772); //@t
				var_0_bool->AddReply(542397, 44740, 44769); //@t
				return 0;
			}
			if(var_67_bool == 44773) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542400); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542394, 27036, 44764); //@t
				return 0;
			}
			if(var_67_bool == 44740) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542373); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542366, 44733, 44732); //@t
				var_0_bool->AddReply(542398, 44773, 44771); //@t
				return 0;
			}
			if(var_67_bool == 44733) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542367); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542368, 27036, 44734); //@t
				var_0_bool->AddReply(542395, 27036, 44765); //@t
				return 0;
			}
			if(var_67_bool == 27036) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(525714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525715, -1, 27037); //@t
				var_0_bool->AddReply(525716, -1, 27038); //@t
				return 0;
			}
			if(var_67_bool == 30190) {
				func_422(var_68_cvector, "Sly");
				var_0_bool->SetMessage(528778); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541118, 43236, 43235); //@t
				var_0_bool->AddReply(528779, 30192, 30191); //@t
				return 0;
			}
			if(var_67_bool == 30192) {
				func_422(var_68_cvector, "Anger");
				var_0_bool->SetMessage(528780); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528781, 43241, 30193); //@t
				var_0_bool->AddReply(528782, 27020, 30194); //@t
				return 0;
			}
			if(var_67_bool == 43241) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(541122); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541123, 43243, 43242); //@t
				return 0;
			}
			if(var_67_bool == 43243) {
				func_422(var_68_cvector, "Sly");
				var_0_bool->SetMessage(541124); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541125, 27020, 43244); //@t
				return 0;
			}
			if(var_67_bool == 43236) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(541119); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541120, 27020, 43237); //@t
				return 0;
			}
			if(var_67_bool == 27020) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(525697); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528773, 43245, 30184); //@t
				var_0_bool->AddReply(541121, 43245, 43239); //@t
				return 0;
			}
			if(var_67_bool == 43245) {
				func_422(var_68_cvector, "Anger");
				var_0_bool->SetMessage(541126); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541127, 30185, 43246); //@t
				var_0_bool->AddReply(541128, 43249, 43248); //@t
				return 0;
			}
			if(var_67_bool == 43249) {
				func_422(var_68_cvector, "Sly");
				var_0_bool->SetMessage(541129); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541130, 30185, 43250); //@t
				return 0;
			}
			if(var_67_bool == 30185) {
				func_422(var_68_cvector, "Anger");
				var_0_bool->SetMessage(528774); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528775, 30187, 30186); //@t
				var_0_bool->AddReply(528777, 30187, 30188); //@t
				return 0;
			}
			if(var_67_bool == 30187) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(528776); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525698, -1, 27021); //@t
				var_0_bool->AddReply(542375, -1, 44742); //@t
				return 0;
			}
			if(var_67_bool == 44708) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542345); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542346, 44710, 44709); //@t
				var_0_bool->AddReply(542349, 44713, 44712); //@t
				return 0;
			}
			if(var_67_bool == 44713) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542350); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542351, 27010, 44714); //@t
				return 0;
			}
			if(var_67_bool == 44710) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(542347); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542348, 27006, 44711); //@t
				return 0;
			}
			if(var_67_bool == 27006) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(525683); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525684, 27008, 27007); //@t
				var_0_bool->AddReply(541117, 27008, 43233); //@t
				return 0;
			}
			if(var_67_bool == 27008) {
				func_422(var_68_cvector, "Fear");
				var_0_bool->SetMessage(525685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525686, 27010, 27009); //@t
				var_0_bool->AddReply(542352, 44716, 44715); //@t
				return 0;
			}
			if(var_67_bool == 44716) {
				func_422(var_68_cvector, "Sly");
				var_0_bool->SetMessage(542353); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542354, 44718, 44717); //@t
				return 0;
			}
			if(var_67_bool == 44718) {
				func_422(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542355); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542356, 27010, 44719); //@t
				var_0_bool->AddReply(542357, 27010, 44720); //@t
				return 0;
			}
			if(var_67_bool == 27010) {
				func_422(var_68_cvector, "Sly");
				var_0_bool->SetMessage(525687); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525688, -1, 27011); //@t
				var_0_bool->AddReply(542360, -1, 44725); //@t
				return 0;
			}
			var_3_object = true;
			bool var_595_bool;
			func_4764(var_595_bool);
			if(var_595_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1bd";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27933) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27932) {
				func_1487(var_68_cvector, "Fear");
				var_0_bool->SetMessage(526656); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526657, -1, 27933); //@t
				var_0_bool->AddReply(526658, -1, 27934); //@t
				var_0_bool->AddReply(542279, -1, 44624); //@t
				return 0;
			}
			var_3_object = true;
			bool var_105_bool;
			func_4764(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5e6";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27937) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27936) {
				func_1708(var_68_cvector, "Fear");
				var_0_bool->SetMessage(526660); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526661, -1, 27937); //@t
				var_0_bool->AddReply(526662, -1, 27938); //@t
				var_0_bool->AddReply(528771, -1, 30182); //@t
				return 0;
			}
			var_3_object = true;
			bool var_105_bool;
			func_4764(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6c3";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27941) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27940) {
				func_1929(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526664); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526665, -1, 27941); //@t
				var_0_bool->AddReply(526666, -1, 27942); //@t
				var_0_bool->AddReply(528772, -1, 30183); //@t
				return 0;
			}
			var_3_object = true;
			bool var_105_bool;
			func_4764(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7a0";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27946) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27945) {
				func_2150(var_68_cvector, "Fear");
				var_0_bool->SetMessage(526669); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526670, -1, 27946); //@t
				var_0_bool->AddReply(526671, -1, 27947); //@t
				var_0_bool->AddReply(528784, -1, 30196); //@t
				return 0;
			}
			var_3_object = true;
			bool var_105_bool;
			func_4764(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x87d";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27950) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27949) {
				func_2371(var_68_cvector, "Sly");
				var_0_bool->SetMessage(526673); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526674, -1, 27950); //@t
				var_0_bool->AddReply(526675, -1, 27951); //@t
				var_0_bool->AddReply(528785, -1, 30197); //@t
				return 0;
			}
			var_3_object = true;
			bool var_105_bool;
			func_4764(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x95a";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27954) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27953) {
				func_2587(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526677); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526678, -1, 27954); //@t
				var_0_bool->AddReply(526679, -1, 27955); //@t
				return 0;
			}
			var_3_object = true;
			bool var_102_bool;
			func_4764(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa32";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27958) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27957) {
				func_2803(var_68_cvector, "Fear");
				var_0_bool->SetMessage(526681); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526682, -1, 27958); //@t
				var_0_bool->AddReply(526683, -1, 27959); //@t
				var_0_bool->AddReply(528752, -1, 30178); //@t
				return 0;
			}
			var_3_object = true;
			bool var_105_bool;
			func_4764(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb0a";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27962) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27961) {
				func_3024(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526686, -1, 27962); //@t
				var_0_bool->AddReply(526687, -1, 27963); //@t
				var_0_bool->AddReply(529000, -1, 30437); //@t
				return 0;
			}
			var_3_object = true;
			bool var_105_bool;
			func_4764(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbe7";
	
	}

}


task task_21
{
}


task task_22
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 27966) {
				object var_73_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27965) {
				func_3240(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(526689); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526690, -1, 27966); //@t
				var_0_bool->AddReply(526691, -1, 27967); //@t
				return 0;
			}
			var_3_object = true;
			bool var_102_bool;
			func_4764(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcbf";
	
	}

}


task task_23
{
}


task task_24
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_68_cvector == 28640) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_4893();
			}
			if(var_68_cvector == 28655) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_4842();
			}
			if(var_68_cvector == 27970) {
				object var_163_object = var_1_object;
				func_4924(var_0_bool);
			}
			if(var_67_bool == 27969) {
				func_3470(var_68_cvector, "Sly");
				var_0_bool->SetMessage(526693); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_186_bool = false;
				bool var_187_bool;
				func_4965(var_1_object);
				if(var_187_bool != 0) {
					bool var_195_bool;
					func_4977(var_1_object);
					if(var_195_bool != 0)
						var_186_bool = true;
				}
				if(var_186_bool != 0)
					var_0_bool->AddReply(527323, 28641, 28640); //@t
				var_0_bool->AddReply(526694, -1, 27970); //@t
				var_0_bool->AddReply(526695, -1, 27971); //@t
				return 0;
			}
			if(var_67_bool == 28641) {
				func_3470(var_68_cvector, "Sly");
				var_0_bool->SetMessage(527324); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527325, 28644, 28642); //@t
				var_0_bool->AddReply(527326, 28645, 28643); //@t
				return 0;
			}
			if(var_67_bool == 28645) {
				func_3470(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527328); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527330, 28648, 28647); //@t
				return 0;
			}
			if(var_67_bool == 28644) {
				func_3470(var_68_cvector, "Sly");
				var_0_bool->SetMessage(527327); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527329, 28648, 28646); //@t
				return 0;
			}
			if(var_67_bool == 28648) {
				func_3470(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527331); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527332, 28650, 28649); //@t
				return 0;
			}
			if(var_67_bool == 28650) {
				func_3470(var_68_cvector, "Fear");
				var_0_bool->SetMessage(527333); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527334, 28652, 28651); //@t
				return 0;
			}
			if(var_67_bool == 28652) {
				func_3470(var_68_cvector, "Fear");
				var_0_bool->SetMessage(527335); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527336, 28654, 28653); //@t
				return 0;
			}
			if(var_67_bool == 28654) {
				func_3470(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527337); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527338, -1, 28655); //@t
				return 0;
			}
			var_3_object = true;
			bool var_262_bool;
			func_4764(var_262_bool);
			if(var_262_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xda5";
	
	}

}


task task_25
{
}


task task_26
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, int var_66_int, int var_67_int, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_4639();
			if(var_67_int == 41234) {
				func_3852(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(539291); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542571, 44971, 44970); //@t
				var_0_bool->AddReply(539292, -1, 41235); //@t
				var_0_bool->AddReply(542570, -1, 44969); //@t
				return 0;
			}
			if(var_67_int == 44971) {
				func_3852(var_68_cvector, "Fear");
				var_0_bool->SetMessage(542572); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542573, 44974, 44972); //@t
				var_0_bool->AddReply(542574, 44974, 44973); //@t
				return 0;
			}
			if(var_67_int == 44974) {
				func_3852(var_68_cvector, "Fear");
				var_0_bool->SetMessage(542575); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542576, 44978, 44976); //@t
				var_0_bool->AddReply(542577, -1, 44977); //@t
				return 0;
			}
			if(var_67_int == 44978) {
				func_3852(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542578); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542579, 44980, 44979); //@t
				var_0_bool->AddReply(542583, -1, 44983); //@t
				return 0;
			}
			if(var_67_int == 44980) {
				func_3852(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(542580); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542581, -1, 44981); //@t
				var_0_bool->AddReply(542582, -1, 44982); //@t
				return 0;
			}
			var_3_object = true;
			bool var_140_bool;
			func_4764(var_140_bool);
			if(var_140_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf23";
	
	}

}


maintask task_27
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		var_67_bool = GlobalVars[1];
		GlobalVars[1] = false;
		var_68_int = GlobalVars[2];
		GlobalVars[2] = -1;
		func_4023(var_66_cvector);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, int var_67_int)
	{
		if(var_67_int == 10) {
			func_4088();
			bool var_71_bool = false;
			bool var_72_bool;
			func_4302(var_72_bool);
			if(var_72_bool != 0) {
				bool var_75_bool;
				func_4057(var_75_bool);
				if(var_75_bool != 0)
					var_71_bool = true;
			}
			if(var_71_bool != 0) {
				bool var_92_bool;
				func_4037(var_92_bool);
				if(var_92_bool != 0) {
					bool var_111_bool; object var_112_object;
					object var_113_object;
					func_4674(var_113_object);
					var_113_object = var_112_object;
					func_4452(var_111_bool, var_112_object);
				}
			} else {
				func_4052(var_67_int);
				func_4079();
			}
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		func_4270();
		func_4088();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		@StopGroup0();
		func_4088();
		func_4593("Neutral");
		func_4079();
	}

	// @pe
	void OnLSHAnimationEnd(bool bCycled, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, bool var_67_bool)
	{
		if(var_67_bool != 0)
			func_4079();
		else
			func_4593("Neutral");
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, object var_67_object)
	{
		bool var_68_bool; bool var_69_bool;
		@IsOverrideActive(var_69_bool);
		if(!var_69_bool) { //@nz
			disable OnUse;
			func_4270();
			bool var_71_bool; object var_72_object;
			var_67_object = var_72_object;
			func_4293(var_71_bool, var_72_object);
			enable OnUse;
			object var_85_object;
			func_5426(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_85_object, var_68_bool, var_69_bool, var_85_object);
			func_4593("Neutral");
			func_4088();
			func_4079();
		}
	}

}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		func_4593("Neutral");
		@lshWaitForAnimEnd();
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


void func_4609(string var_388_string, bool var_389_bool)
{
	bool var_395_bool; float var_396_float; float var_397_float;
	@lshHasAnimation(var_395_bool, var_388_string);
	if(var_395_bool != 0) {
		@lshGetAnimTimes(var_388_string, var_396_float, var_397_float);
		@lshPlayAnimation(var_396_float, var_397_float, var_389_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_388_string);
	}
	
}


void func_5379(int var_104_int, string var_105_string)
{
	int var_107_int;
	@GetInvItemByName(var_107_int, var_105_string);
	var_107_int = var_104_int;
}


// @pe
void func_2308(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_852_object, object var_853_object)
{
	var_0_bool = var_853_object;
	var_1_object = var_852_object;
	var_3_object = false;
	if(1 != 0) {
		func_2371(var_853_object, "Sly");
		var_0_bool->SetMessage(526673); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526674, -1, 27950); //@t
		var_0_bool->AddReply(526675, -1, 27951); //@t
		var_0_bool->AddReply(528785, -1, 30197); //@t
		goto Label_2341;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x908";
	}
Label_2341:
	bool var_877_bool;
	func_4764(var_877_bool);
	if(var_877_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2370;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2370:
		return 0;

	}
	
}


void func_5384(int var_278_int)
{
	int var_280_int;
	@GetVariable("branch", var_280_int);
	if(var_280_int == 0) {
		var_278_int = 1;
		return 2;
	EMIT "GOTO 0x1517";
	}
	if(var_280_int == 1) {
		var_278_int = 2;
		return 2;
	}
	var_278_int = 3;
}


void func_5132(bool var_93_bool, object var_94_object, int var_95_int)
{
	object var_102_object;
	func_5119(var_102_object);
	object var_99_object;
	var_102_object = var_99_object;
	object var_100_object;
	var_99_object->Find(var_95_int, var_100_object);
	if(!var_100_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_95_int);
		var_93_bool = false;
	}
	var_100_object->AddChild(var_94_object);
	@SendWorldWndMessage(7);
	int var_101_int;
	var_94_object->GetCategory(var_101_int);
	@SetDiarySection(var_101_int);
	var_93_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_3852(object var_2_object, string var_1249_string)
{
	bool var_1250_bool;
	func_4764(var_1250_bool);
	if(!var_1250_bool) //@nz
		return 0;
	if(var_1249_string == var_2_object)
		return 0;
	string var_1253_string; bool var_1254_bool;
	var_1249_string = var_1253_string;
	if(var_1249_string == "")
		var_1254_bool = false;
	else
		var_1254_bool = true;
	func_4609(var_1253_string, var_1254_bool);
	var_2_object = var_1249_string;
	
}


void func_4624(bool var_321_bool, string var_322_string)
{
	bool var_324_bool;
	bool var_325_bool;
	func_4764(var_325_bool);
	if(var_325_bool != 0) {
		@lshHasSpeech(var_324_bool, var_322_string);
		if(var_324_bool != 0) {
			@lshPlaySpeech(var_322_string);
			var_321_bool = true;
		}
	}
	var_321_bool = false;
}


void func_22(bool var_0_bool, int var_215_int, object var_216_object)
{
	var_0_bool = var_216_object;
	bool var_226_bool; object var_227_object;
	var_216_object = var_227_object;
	func_4307(var_226_bool, var_227_object, 70.0);
	if(!var_226_bool) { //@nz
		var_215_int = -2;
		return 8;
	}
	object var_222_object;
	@CreateDialog(var_222_object);
	int var_274_int;
	func_4758(var_274_int);
	var_222_object->SetNPCName(var_274_int);
	int var_275_int;
	func_4756(var_275_int);
	var_222_object->SetNPCDescription(var_275_int);
	string var_276_string;
	func_4760(var_276_string);
	var_222_object->SetPhoto(var_276_string);
	string var_277_string;
	func_4762(var_277_string);
	var_222_object->SetPhoto2(var_277_string);
	int var_278_int;
	func_5384(var_278_int);
	var_222_object->SetPlayerName(var_278_int);
	bool var_223_bool;
	@IsOverrideActive(var_223_bool);
	if(var_223_bool != 0) {
		var_215_int = -2;
		return 8;
	}
	@DoDialog(var_222_object);
	bool var_287_bool; object var_288_object;
	object var_289_object;
	func_4674(var_289_object);
	var_289_object = var_288_object;
	func_4394(var_287_bool, var_288_object);
	object var_377_object; object var_378_object;
	var_216_object = var_377_object;
	var_222_object = var_378_object;
	TaskCall(2);
	func_103(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object);
	TaskReturn();
	bool var_225_bool;
	var_222_object->IsDialogEnd(var_225_bool);
	
	for(;;) {
		var_426_bool = !var_225_bool; //@nz
		if(var_426_bool == 0) goto Label_92;
		@sync();
		var_222_object->IsDialogEnd(var_225_bool);
	}
	
Label_92:
	object var_427_object;
	var_216_object = var_427_object;
	func_4376();
	@StopDialog(var_222_object);
	var_222_object->GetReturnValue(-1);
	int var_224_int = var_215_int;
}
EMIT "Stack[-4] = 0";


void func_4376(void)
{
	bool var_429_bool;
	@CameraSwitchToNormal(true);
	bool var_431_bool;
	func_4764(var_431_bool);
	if(var_431_bool != 0) {
	} else {
		@HasAnimationTrack(var_429_bool, "head");
		if(var_429_bool == 0) goto Label_4393;
		@UnlookAsync("head");
	}
Label_4393:
	
}


void func_5401(int var_191_int)
{
	int var_193_int;
	@GetVariable("branch", var_193_int);
	var_193_int = var_191_int;
}


// @pe
void func_2587(object var_2_object, string var_923_string)
{
	bool var_924_bool;
	func_4764(var_924_bool);
	if(!var_924_bool) //@nz
		return 0;
	if(var_923_string == var_2_object)
		return 0;
	string var_927_string; bool var_928_bool;
	var_923_string = var_927_string;
	if(var_923_string == "")
		var_928_bool = false;
	else
		var_928_bool = true;
	func_4609(var_927_string, var_928_bool);
	var_2_object = var_923_string;
	
}


void func_1564(bool var_0_bool, int var_543_int, object var_544_object)
{
	var_0_bool = var_544_object;
	bool var_554_bool; object var_555_object;
	var_544_object = var_555_object;
	func_4307(var_554_bool, var_555_object, 70.0);
	if(!var_554_bool) { //@nz
		var_543_int = -2;
		return 8;
	}
	object var_550_object;
	@CreateDialog(var_550_object);
	int var_558_int;
	func_4758(var_558_int);
	var_550_object->SetNPCName(var_558_int);
	int var_559_int;
	func_4756(var_559_int);
	var_550_object->SetNPCDescription(var_559_int);
	string var_560_string;
	func_4760(var_560_string);
	var_550_object->SetPhoto(var_560_string);
	string var_561_string;
	func_4762(var_561_string);
	var_550_object->SetPhoto2(var_561_string);
	int var_562_int;
	func_5384(var_562_int);
	var_550_object->SetPlayerName(var_562_int);
	bool var_551_bool;
	@IsOverrideActive(var_551_bool);
	if(var_551_bool != 0) {
		var_543_int = -2;
		return 8;
	}
	@DoDialog(var_550_object);
	bool var_564_bool; object var_565_object;
	object var_566_object;
	func_4674(var_566_object);
	var_566_object = var_565_object;
	func_4394(var_564_bool, var_565_object);
	object var_567_object; object var_568_object;
	var_544_object = var_567_object;
	var_550_object = var_568_object;
	TaskCall(8);
	func_1645(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object);
	TaskReturn();
	bool var_553_bool;
	var_550_object->IsDialogEnd(var_553_bool);
	
	for(;;) {
		var_600_bool = !var_553_bool; //@nz
		if(var_600_bool == 0) goto Label_1634;
		@sync();
		var_550_object->IsDialogEnd(var_553_bool);
	}
	
Label_1634:
	object var_601_object;
	var_544_object = var_601_object;
	func_4376();
	@StopDialog(var_550_object);
	var_550_object->GetReturnValue(-1);
	int var_552_int = var_543_int;
}
EMIT "Stack[-4] = 0";


void func_3101(bool var_0_bool, int var_1081_int, object var_1082_object)
{
	var_0_bool = var_1082_object;
	bool var_1092_bool; object var_1093_object;
	var_1082_object = var_1093_object;
	func_4307(var_1092_bool, var_1093_object, 70.0);
	if(!var_1092_bool) { //@nz
		var_1081_int = -2;
		return 8;
	}
	object var_1088_object;
	@CreateDialog(var_1088_object);
	int var_1096_int;
	func_4758(var_1096_int);
	var_1088_object->SetNPCName(var_1096_int);
	int var_1097_int;
	func_4756(var_1097_int);
	var_1088_object->SetNPCDescription(var_1097_int);
	string var_1098_string;
	func_4760(var_1098_string);
	var_1088_object->SetPhoto(var_1098_string);
	string var_1099_string;
	func_4762(var_1099_string);
	var_1088_object->SetPhoto2(var_1099_string);
	int var_1100_int;
	func_5384(var_1100_int);
	var_1088_object->SetPlayerName(var_1100_int);
	bool var_1089_bool;
	@IsOverrideActive(var_1089_bool);
	if(var_1089_bool != 0) {
		var_1081_int = -2;
		return 8;
	}
	@DoDialog(var_1088_object);
	bool var_1102_bool; object var_1103_object;
	object var_1104_object;
	func_4674(var_1104_object);
	var_1104_object = var_1103_object;
	func_4394(var_1102_bool, var_1103_object);
	object var_1105_object; object var_1106_object;
	var_1082_object = var_1105_object;
	var_1088_object = var_1106_object;
	TaskCall(22);
	func_3182(var_1107_object, var_1108_object, var_1109_string, var_1110_bool, var_1105_object, var_1106_object);
	TaskReturn();
	bool var_1091_bool;
	var_1088_object->IsDialogEnd(var_1091_bool);
	
	for(;;) {
		var_1135_bool = !var_1091_bool; //@nz
		if(var_1135_bool == 0) goto Label_3171;
		@sync();
		var_1088_object->IsDialogEnd(var_1091_bool);
	}
	
Label_3171:
	object var_1136_object;
	var_1082_object = var_1136_object;
	func_4376();
	@StopDialog(var_1088_object);
	var_1088_object->GetReturnValue(-1);
	int var_1090_int = var_1081_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4893(void)
{
	@SetVariable("ook11Grif1", 1);
}


void func_4639(void)
{
	bool var_70_bool;
	func_4764(var_70_bool);
	if(var_70_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5407(object var_500_object)
{
	object var_502_object;
	var_500_object = var_502_object;
	bool var_501_bool;
	func_4532(var_501_bool, var_502_object);
	if(!var_501_bool) //@nz
		return 0;
	object var_534_object;
	var_500_object = var_534_object;
	TaskCall(0);
	func_0(var_534_object);
	TaskReturn();
	object var_538_object;
	var_500_object = var_538_object;
	func_4588();
}


// @pe
void func_4899(void)
{
	@SetVariable("k4q01", -1);
	func_5067();
}


void func_4646(string var_128_string, int var_129_int, int var_130_int)
{
	bool var_132_bool;
	int var_134_int;
	var_129_int = var_134_int;
	int var_135_int;
	var_130_int = var_135_int;
	bool var_133_bool;
	func_4690(var_133_bool, var_134_int, var_135_int);
	if(var_133_bool != 0)
		@AddItem(var_132_bool, var_128_string, 0);
}


// @pe
void func_2087(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_788_object, object var_789_object)
{
	var_0_bool = var_789_object;
	var_1_object = var_788_object;
	var_3_object = false;
	if(1 != 0) {
		func_2150(var_789_object, "Fear");
		var_0_bool->SetMessage(526669); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526670, -1, 27946); //@t
		var_0_bool->AddReply(526671, -1, 27947); //@t
		var_0_bool->AddReply(528784, -1, 30196); //@t
		goto Label_2120;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x82b";
	}
Label_2120:
	bool var_813_bool;
	func_4764(var_813_bool);
	if(var_813_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2149;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2149:
		return 0;

	}
	
}


void func_5160(object var_79_object)
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


void func_4394(bool var_287_bool, object var_288_object)
{
	int var_294_int; int var_295_int;
	@GetVariable("voice_common", var_294_int);
	if(var_294_int != 0) {
		bool var_298_bool; object var_299_object;
		var_288_object = var_299_object;
		func_4452(var_298_bool, var_299_object);
		if(!var_298_bool) { //@nz
			bool var_329_bool; object var_330_object;
			var_288_object = var_330_object;
			func_4489(var_329_bool, var_330_object);
			if(!var_329_bool) { //@nz
				var_287_bool = false;
				return 4;
			}
		}
		@irand(var_295_int, 2);
		if(var_295_int != 0)
			@SetVariable("voice_common", ((var_294_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_369_bool; object var_370_object;
		var_288_object = var_370_object;
		func_4489(var_369_bool, var_370_object);
		if(!var_369_bool) { //@nz
			bool var_372_bool; object var_373_object;
			var_288_object = var_373_object;
			func_4452(var_372_bool, var_373_object);
			if(!var_372_bool) { //@nz
				var_287_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4450;
	
Label_4450:
	var_287_bool = true;
	
}


// @pe
void func_4908(object var_175_object)
{
	object var_179_object;
	func_5160(var_179_object);
	object var_176_object;
	var_179_object = var_176_object;
	func_5177(var_176_object, "pt_map_warehouse_gangster", (float)2);
	object var_180_object;
	func_5160(var_180_object);
	var_175_object->ShowMap(var_180_object);
}


void func_4657(string var_139_string, int var_140_int, int var_141_int, int var_142_int, int var_143_int)
{
	int var_146_int; bool var_147_bool;
	int var_149_int;
	var_140_int = var_149_int;
	int var_150_int;
	var_141_int = var_150_int;
	bool var_148_bool;
	func_4690(var_148_bool, var_149_int, var_150_int);
	if(var_148_bool != 0) {
		@irand(var_146_int, ((var_143_int - var_142_int) + 1));
		@AddItem(var_147_bool, var_139_string, 0, (var_146_int + var_142_int));
	}
}


// @pe
void func_5426(object var_85_object, object var_442_object, object var_545_object, object var_609_object, object var_673_object, object var_766_object, object var_830_object, object var_894_object, object var_955_object, object var_1019_object, object var_1083_object, object var_1144_object)
{
	var_86_int = GlobalVars[2];
	int var_87_int;
	func_4717(var_87_int);
	if(var_86_int != var_87_int) {
		func_5210();
		var_211_int = GlobalVars[2];
		int var_212_int;
		func_4717(var_212_int);
		var_212_int = var_211_int;
		GlobalVars[2] = var_211_int;
	}
	var_213_bool = GlobalVars[1];
	if(!var_213_bool) { //@nz
		int var_215_int; object var_216_object;
		var_85_object = var_216_object;
		TaskCall(1);
		func_22(var_217_object, var_215_int, var_216_object);
		TaskReturn();
		var_435_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_436_bool;
	func_4726(var_436_bool, 1);
	if(var_436_bool != 0) {
		int var_440_int; object var_441_object;
		var_85_object = var_441_object;
		TaskCall(5);
		func_1343(var_442_object, var_440_int, var_441_object);
		TaskReturn();
		if(1000 == var_442_object) {
			object var_500_object;
			var_85_object = var_500_object;
			func_5407(var_500_object);
		}
		return 0;
	}
	bool var_540_bool;
	func_4726(var_540_bool, 2);
	if(var_540_bool != 0) {
		int var_543_int; object var_544_object;
		var_85_object = var_544_object;
		TaskCall(7);
		func_1564(var_545_object, var_543_int, var_544_object);
		TaskReturn();
		if(1000 == var_545_object) {
			object var_603_object;
			var_85_object = var_603_object;
			func_5407(var_603_object);
		}
		return 0;
	}
	bool var_604_bool;
	func_4726(var_604_bool, 3);
	if(var_604_bool != 0) {
		int var_607_int; object var_608_object;
		var_85_object = var_608_object;
		TaskCall(9);
		func_1785(var_609_object, var_607_int, var_608_object);
		TaskReturn();
		if(1000 == var_609_object) {
			object var_667_object;
			var_85_object = var_667_object;
			func_5407(var_667_object);
		}
		return 0;
	}
	bool var_668_bool;
	func_4726(var_668_bool, 4);
	if(var_668_bool != 0) {
		int var_671_int; object var_672_object;
		var_85_object = var_672_object;
		TaskCall(3);
		func_248(var_673_object, var_671_int, var_672_object);
		TaskReturn();
		if(1000 == var_673_object) {
			object var_760_object;
			var_85_object = var_760_object;
			func_5407(var_760_object);
		}
		return 0;
	}
	bool var_761_bool;
	func_4726(var_761_bool, 5);
	if(var_761_bool != 0) {
		int var_764_int; object var_765_object;
		var_85_object = var_765_object;
		TaskCall(11);
		func_2006(var_766_object, var_764_int, var_765_object);
		TaskReturn();
		if(1000 == var_766_object) {
			object var_824_object;
			var_85_object = var_824_object;
			func_5407(var_824_object);
		}
		return 0;
	}
	bool var_825_bool;
	func_4726(var_825_bool, 6);
	if(var_825_bool != 0) {
		int var_828_int; object var_829_object;
		var_85_object = var_829_object;
		TaskCall(13);
		func_2227(var_830_object, var_828_int, var_829_object);
		TaskReturn();
		if(1000 == var_830_object) {
			object var_888_object;
			var_85_object = var_888_object;
			func_5407(var_888_object);
		}
		return 0;
	}
	bool var_889_bool;
	func_4726(var_889_bool, 7);
	if(var_889_bool != 0) {
		int var_892_int; object var_893_object;
		var_85_object = var_893_object;
		TaskCall(15);
		func_2448(var_894_object, var_892_int, var_893_object);
		TaskReturn();
		if(1000 == var_894_object) {
			object var_949_object;
			var_85_object = var_949_object;
			func_5407(var_949_object);
		}
		return 0;
	}
	bool var_950_bool;
	func_4726(var_950_bool, 8);
	if(var_950_bool != 0) {
		int var_953_int; object var_954_object;
		var_85_object = var_954_object;
		TaskCall(17);
		func_2659(var_955_object, var_953_int, var_954_object);
		TaskReturn();
		if(1000 == var_955_object) {
			object var_1013_object;
			var_85_object = var_1013_object;
			func_5407(var_1013_object);
		}
		return 0;
	}
	bool var_1014_bool;
	func_4726(var_1014_bool, 9);
	if(var_1014_bool != 0) {
		int var_1017_int; object var_1018_object;
		var_85_object = var_1018_object;
		TaskCall(19);
		func_2880(var_1019_object, var_1017_int, var_1018_object);
		TaskReturn();
		if(1000 == var_1019_object) {
			object var_1077_object;
			var_85_object = var_1077_object;
			func_5407(var_1077_object);
		}
		return 0;
	}
	bool var_1078_bool;
	func_4726(var_1078_bool, 10);
	if(var_1078_bool != 0) {
		int var_1081_int; object var_1082_object;
		var_85_object = var_1082_object;
		TaskCall(21);
		func_3101(var_1083_object, var_1081_int, var_1082_object);
		TaskReturn();
		if(1000 == var_1083_object) {
			object var_1138_object;
			var_85_object = var_1138_object;
			func_5407(var_1138_object);
		}
		return 0;
	}
	bool var_1139_bool;
	func_4726(var_1139_bool, 11);
	if(var_1139_bool != 0) {
		int var_1142_int; object var_1143_object;
		var_85_object = var_1143_object;
		TaskCall(23);
		func_3312(var_1144_object, var_1142_int, var_1143_object);
		TaskReturn();
		if(1000 == var_1144_object) {
			object var_1215_object;
			var_85_object = var_1215_object;
			func_5407(var_1215_object);
		}
		return 0;
	}
	bool var_1216_bool;
	func_4726(var_1216_bool, 12);
	if(var_1216_bool != 0) {
		int var_1218_int; object var_1219_object;
		var_85_object = var_1219_object;
		TaskCall(25);
		func_3708(var_1220_object, var_1218_int, var_1219_object);
		TaskReturn();
		return 0;
	}
}


void func_5177(object var_118_object, string var_119_string, float var_120_float)
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
void func_4924(object var_164_object)
{
	var_164_object->SetReturnValue(1000);
}


void func_1343(bool var_0_bool, int var_440_int, object var_441_object)
{
	var_0_bool = var_441_object;
	bool var_451_bool; object var_452_object;
	var_441_object = var_452_object;
	func_4307(var_451_bool, var_452_object, 70.0);
	if(!var_451_bool) { //@nz
		var_440_int = -2;
		return 8;
	}
	object var_447_object;
	@CreateDialog(var_447_object);
	int var_455_int;
	func_4758(var_455_int);
	var_447_object->SetNPCName(var_455_int);
	int var_456_int;
	func_4756(var_456_int);
	var_447_object->SetNPCDescription(var_456_int);
	string var_457_string;
	func_4760(var_457_string);
	var_447_object->SetPhoto(var_457_string);
	string var_458_string;
	func_4762(var_458_string);
	var_447_object->SetPhoto2(var_458_string);
	int var_459_int;
	func_5384(var_459_int);
	var_447_object->SetPlayerName(var_459_int);
	bool var_448_bool;
	@IsOverrideActive(var_448_bool);
	if(var_448_bool != 0) {
		var_440_int = -2;
		return 8;
	}
	@DoDialog(var_447_object);
	bool var_461_bool; object var_462_object;
	object var_463_object;
	func_4674(var_463_object);
	var_463_object = var_462_object;
	func_4394(var_461_bool, var_462_object);
	object var_464_object; object var_465_object;
	var_441_object = var_464_object;
	var_447_object = var_465_object;
	TaskCall(6);
	func_1424(var_466_object, var_467_object, var_468_string, var_469_bool, var_464_object, var_465_object);
	TaskReturn();
	bool var_450_bool;
	var_447_object->IsDialogEnd(var_450_bool);
	
	for(;;) {
		var_497_bool = !var_450_bool; //@nz
		if(var_497_bool == 0) goto Label_1413;
		@sync();
		var_447_object->IsDialogEnd(var_450_bool);
	}
	
Label_1413:
	object var_498_object;
	var_441_object = var_498_object;
	func_4376();
	@StopDialog(var_447_object);
	var_447_object->GetReturnValue(-1);
	int var_449_int = var_440_int;
}
EMIT "Stack[-4] = 0";


void func_2880(bool var_0_bool, int var_1017_int, object var_1018_object)
{
	var_0_bool = var_1018_object;
	bool var_1028_bool; object var_1029_object;
	var_1018_object = var_1029_object;
	func_4307(var_1028_bool, var_1029_object, 70.0);
	if(!var_1028_bool) { //@nz
		var_1017_int = -2;
		return 8;
	}
	object var_1024_object;
	@CreateDialog(var_1024_object);
	int var_1032_int;
	func_4758(var_1032_int);
	var_1024_object->SetNPCName(var_1032_int);
	int var_1033_int;
	func_4756(var_1033_int);
	var_1024_object->SetNPCDescription(var_1033_int);
	string var_1034_string;
	func_4760(var_1034_string);
	var_1024_object->SetPhoto(var_1034_string);
	string var_1035_string;
	func_4762(var_1035_string);
	var_1024_object->SetPhoto2(var_1035_string);
	int var_1036_int;
	func_5384(var_1036_int);
	var_1024_object->SetPlayerName(var_1036_int);
	bool var_1025_bool;
	@IsOverrideActive(var_1025_bool);
	if(var_1025_bool != 0) {
		var_1017_int = -2;
		return 8;
	}
	@DoDialog(var_1024_object);
	bool var_1038_bool; object var_1039_object;
	object var_1040_object;
	func_4674(var_1040_object);
	var_1040_object = var_1039_object;
	func_4394(var_1038_bool, var_1039_object);
	object var_1041_object; object var_1042_object;
	var_1018_object = var_1041_object;
	var_1024_object = var_1042_object;
	TaskCall(20);
	func_2961(var_1043_object, var_1044_object, var_1045_string, var_1046_bool, var_1041_object, var_1042_object);
	TaskReturn();
	bool var_1027_bool;
	var_1024_object->IsDialogEnd(var_1027_bool);
	
	for(;;) {
		var_1074_bool = !var_1027_bool; //@nz
		if(var_1074_bool == 0) goto Label_2950;
		@sync();
		var_1024_object->IsDialogEnd(var_1027_bool);
	}
	
Label_2950:
	object var_1075_object;
	var_1018_object = var_1075_object;
	func_4376();
	@StopDialog(var_1024_object);
	var_1024_object->GetReturnValue(-1);
	int var_1026_int = var_1017_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4929(bool var_711_bool)
{
	int var_713_int;
	func_4695(var_713_int, "k4q01");
	if(var_713_int == 1)
		var_711_bool = true;
	var_711_bool = false;
}


void func_4674(object var_289_object)
{
	object var_291_object;
	@self(var_291_object);
	var_291_object = var_289_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3393(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1166_object, object var_1167_object)
{
	var_0_bool = var_1167_object;
	var_1_object = var_1166_object;
	var_3_object = false;
	if(1 != 0) {
		func_3470(var_1167_object, "Sly");
		var_0_bool->SetMessage(526693); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1182_bool = false;
		bool var_1183_bool;
		func_4965(var_1_object);
		if(var_1183_bool != 0) {
			bool var_1189_bool;
			func_4977(var_1_object);
			if(var_1189_bool != 0)
				var_1182_bool = true;
		}
		if(var_1182_bool != 0)
			var_0_bool->AddReply(527323, 28641, 28640); //@t
		var_0_bool->AddReply(526694, -1, 27970); //@t
		var_0_bool->AddReply(526695, -1, 27971); //@t
		goto Label_3440;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd45";
	}
Label_3440:
	bool var_1204_bool;
	func_4764(var_1204_bool);
	if(var_1204_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3469;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3469:
		return 0;

	}
	
}


// @pe
void func_2371(object var_2_object, string var_859_string)
{
	bool var_860_bool;
	func_4764(var_860_bool);
	if(!var_860_bool) //@nz
		return 0;
	if(var_859_string == var_2_object)
		return 0;
	string var_863_string; bool var_864_bool;
	var_859_string = var_863_string;
	if(var_859_string == "")
		var_864_bool = false;
	else
		var_864_bool = true;
	func_4609(var_863_string, var_864_bool);
	var_2_object = var_859_string;
	
}


void func_4680(cvector var_253_cvector, cvector var_254_cvector)
{
	float var_257_float = sqrt(var_254_cvector | var_254_cvector);
	if(var_257_float < 0.000001)
		var_253_cvector = [0.0, 0.0, 0.0];
	var_253_cvector = var_254_cvector / var_257_float;
}


// @pe
void func_329(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_695_object, object var_696_object)
{
	var_0_bool = var_696_object;
	var_1_object = var_695_object;
	var_3_object = false;
	if(1 != 0) {
		func_422(var_696_object, "Neutral");
		var_0_bool->SetMessage(525681); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_711_bool;
		func_4929(var_1_object);
		if(var_711_bool != 0)
			var_0_bool->AddReply(525682, 44708, 27005); //@t
		bool var_722_bool;
		func_4941(var_1_object);
		if(var_722_bool != 0)
			var_0_bool->AddReply(525696, 30190, 27019); //@t
		bool var_731_bool;
		func_4953(var_1_object);
		if(var_731_bool != 0)
			var_0_bool->AddReply(525709, 27032, 27031); //@t
		var_0_bool->AddReply(526667, -1, 27943); //@t
		var_0_bool->AddReply(525689, -1, 27012); //@t
		var_0_bool->AddReply(528783, -1, 30195); //@t
		goto Label_392;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14d";
	}
Label_392:
	bool var_749_bool;
	func_4764(var_749_bool);
	if(var_749_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_421;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_421:
		return 0;

	}
	
}


// @pe
void func_1866(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_631_object, object var_632_object)
{
	var_0_bool = var_632_object;
	var_1_object = var_631_object;
	var_3_object = false;
	if(1 != 0) {
		func_1929(var_632_object, "Neutral");
		var_0_bool->SetMessage(526664); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526665, -1, 27941); //@t
		var_0_bool->AddReply(526666, -1, 27942); //@t
		var_0_bool->AddReply(528772, -1, 30183); //@t
		goto Label_1899;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74e";
	}
Label_1899:
	bool var_656_bool;
	func_4764(var_656_bool);
	if(var_656_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1928;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1928:
		return 0;

	}
	
}


// @pe
void func_4941(bool var_722_bool)
{
	int var_724_int;
	func_4695(var_724_int, "k4q01");
	if(var_724_int == 3)
		var_722_bool = true;
	var_722_bool = false;
}


void func_4690(bool var_133_bool, int var_134_int, int var_135_int)
{
	int var_137_int;
	@irand(var_137_int, var_135_int);
	var_133_bool = var_137_int < var_134_int;
}


void func_4695(int var_713_int, string var_714_string)
{
	int var_716_int;
	@GetVariable(var_714_string, var_716_int);
	var_716_int = var_713_int;
}


void func_4088(void)
{
	@KillTimer(10);
}


// @pe
void func_4953(bool var_731_bool)
{
	int var_733_int;
	func_4695(var_733_int, "k4q01");
	if(var_733_int == 5)
		var_731_bool = true;
	var_731_bool = false;
}


void func_5210(void)
{
	@ClearSubContainer(0);
	int var_103_int;
	func_4717(var_103_int);
	int var_100_int;
	var_103_int = var_100_int;
	int var_104_int;
	func_5379(var_104_int, "Rifle");
	bool var_98_bool;
	@AddItem(var_98_bool, var_104_int, 0, 1);
	int var_110_int;
	func_5379(var_110_int, "Revolver");
	@AddItem(var_98_bool, var_110_int, 0, 1);
	int var_114_int;
	func_5379(var_114_int, "Knife");
	@AddItem(var_98_bool, var_114_int, 0, 1);
	if(var_100_int != 10) {
		int var_120_int;
		func_5379(var_120_int, "tvirin");
		@AddItem(var_98_bool, var_120_int, 0, 1);
	} else {
			int var_207_int;
			func_5379(var_207_int, "tvirin");
			@AddItem(var_98_bool, var_207_int, 0, 4);
	}
	int var_124_int;
	func_5379(var_124_int, "lockpick");
	@AddItem(var_98_bool, var_124_int, 0, 3);
	func_4646("Scalpel", 1, 2);
	func_4657("revolver_ammo", 1, 1, 5, 10);
	func_4657("rifle_ammo", 1, 1, 5, 20);
	int var_99_int;
	@irand(var_99_int, 100);
	if(var_99_int != 0) {
		int var_164_int;
		func_5379(var_164_int, "kerosene");
		@AddItem(var_98_bool, var_164_int, 0, var_99_int);
	}
	if(var_100_int >= 3) {
		int var_169_int;
		func_5379(var_169_int, "halfboot_repel");
		@AddItem(var_98_bool, var_169_int, 0, 1);
		int var_173_int;
		func_5379(var_173_int, "boot_repel");
		@AddItem(var_98_bool, var_173_int, 0, 1);
	}
	if(var_100_int >= 9) {
		int var_179_int;
		func_5379(var_179_int, "boot_army");
		@AddItem(var_98_bool, var_179_int, 0, 1);
		int var_183_int;
		func_5379(var_183_int, "balahon");
		@AddItem(var_98_bool, var_183_int, 0, 1);
		int var_187_int;
		func_5379(var_187_int, "glove_army");
		@AddItem(var_98_bool, var_187_int, 0, 1);
	}
	int var_191_int;
	func_5401(var_191_int);
	int var_101_int;
	var_191_int = var_101_int;
	if(var_101_int == 0) {
		int var_197_int;
		func_5379(var_197_int, "Gun_danko");
		@AddItem(var_98_bool, var_197_int, 0, 1);
	} else if(var_101_int == 2) {
		int var_203_int;
		func_5379(var_203_int, "Gun");
		@AddItem(var_98_bool, var_203_int, 0, 1);

	}
	
}


void func_4700(bool var_168_bool, string var_169_string, string var_170_string)
{
	object var_172_object;
	@FindActor(var_172_object, var_169_string);
	if(var_172_object == null)
		var_168_bool = false;
	@Trigger(var_172_object, var_170_string);
	var_168_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2659(bool var_0_bool, int var_953_int, object var_954_object)
{
	var_0_bool = var_954_object;
	bool var_964_bool; object var_965_object;
	var_954_object = var_965_object;
	func_4307(var_964_bool, var_965_object, 70.0);
	if(!var_964_bool) { //@nz
		var_953_int = -2;
		return 8;
	}
	object var_960_object;
	@CreateDialog(var_960_object);
	int var_968_int;
	func_4758(var_968_int);
	var_960_object->SetNPCName(var_968_int);
	int var_969_int;
	func_4756(var_969_int);
	var_960_object->SetNPCDescription(var_969_int);
	string var_970_string;
	func_4760(var_970_string);
	var_960_object->SetPhoto(var_970_string);
	string var_971_string;
	func_4762(var_971_string);
	var_960_object->SetPhoto2(var_971_string);
	int var_972_int;
	func_5384(var_972_int);
	var_960_object->SetPlayerName(var_972_int);
	bool var_961_bool;
	@IsOverrideActive(var_961_bool);
	if(var_961_bool != 0) {
		var_953_int = -2;
		return 8;
	}
	@DoDialog(var_960_object);
	bool var_974_bool; object var_975_object;
	object var_976_object;
	func_4674(var_976_object);
	var_976_object = var_975_object;
	func_4394(var_974_bool, var_975_object);
	object var_977_object; object var_978_object;
	var_954_object = var_977_object;
	var_960_object = var_978_object;
	TaskCall(18);
	func_2740(var_979_object, var_980_object, var_981_string, var_982_bool, var_977_object, var_978_object);
	TaskReturn();
	bool var_963_bool;
	var_960_object->IsDialogEnd(var_963_bool);
	
	for(;;) {
		var_1010_bool = !var_963_bool; //@nz
		if(var_1010_bool == 0) goto Label_2729;
		@sync();
		var_960_object->IsDialogEnd(var_963_bool);
	}
	
Label_2729:
	object var_1011_object;
	var_954_object = var_1011_object;
	func_4376();
	@StopDialog(var_960_object);
	var_960_object->GetReturnValue(-1);
	int var_962_int = var_953_int;
}
EMIT "Stack[-4] = 0";


void func_4452(bool var_298_bool, object var_299_object)
{
	string var_305_string; bool var_307_bool; int var_308_int; string var_309_string;
	var_305_string = "c";
	int var_306_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_299_object->HasProperty((var_305_string + (var_306_int + 1)), var_307_bool);
			if(!var_307_bool) { //@nz
			} else {
				var_306_int += 1;
			}
		}
		if(!var_306_int) { //@nz
			var_298_bool = false;
			return 10;
		}
		var_308_int = 0;
		if(var_306_int > 1)
			@irand(var_308_int, var_306_int);
		var_299_object->GetProperty((var_305_string + (var_308_int + 1)), var_309_string);
		bool var_321_bool; string var_322_string;
		var_309_string = var_322_string;
		func_4624(var_321_bool, var_322_string);
		var_321_bool = var_298_bool;
		return 10;

	}
}


// @pe
void func_4965(bool var_1183_bool)
{
	int var_1185_int;
	func_4695(var_1185_int, "k11q01");
	if(var_1185_int == 9)
		var_1183_bool = true;
	var_1183_bool = false;
}


// @pe
void func_2150(object var_2_object, string var_795_string)
{
	bool var_796_bool;
	func_4764(var_796_bool);
	if(!var_796_bool) //@nz
		return 0;
	if(var_795_string == var_2_object)
		return 0;
	string var_799_string; bool var_800_bool;
	var_795_string = var_799_string;
	if(var_795_string == "")
		var_800_bool = false;
	else
		var_800_bool = true;
	func_4609(var_799_string, var_800_bool);
	var_2_object = var_795_string;
	
}


// @pe
void func_103(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_377_object, object var_378_object)
{
	var_0_bool = var_378_object;
	var_1_object = var_377_object;
	var_3_object = false;
	if(1 != 0) {
		func_161(var_378_object, "Neutral");
		var_0_bool->SetMessage(525483); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(525484, 30758, 26840); //@t
		var_0_bool->AddReply(529303, -1, 30757); //@t
		goto Label_131;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6b";
	}
Label_131:
	bool var_408_bool;
	func_4764(var_408_bool);
	if(var_408_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_160;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_160:
		return 0;

	}
	
}


void func_4199(void)
{
	bool var_81_bool; int var_82_int; int var_83_int; bool var_84_bool;
	@WaitForAnimEnd();
	bool var_85_bool;
	func_4302(var_85_bool);
	if(!var_85_bool) //@nz
		return 12;
	int var_87_int;
	func_4739(var_87_int);
	int var_79_int;
	var_87_int = var_79_int;
	int var_80_int = 0;
	
	for(;;) {
		bool var_100_bool = false;
		if(var_80_int < 5) {
			bool var_103_bool;
			func_4302(var_103_bool);
			if(var_103_bool != 0)
				var_100_bool = true;
		}
		if(var_100_bool != 0) {
			if(!var_79_int) { //@nz
				@Sleep(3, var_81_bool);
				if(!var_81_bool) { //@nz
				} else {
			} else {
			@irand(var_82_int, var_79_int);
			@irand(var_83_int, 5);
			if(var_83_int != 0)
				var_82_int = 0;
			string var_114_string; int var_115_int;
			var_82_int = var_115_int;
			func_4732(var_114_string, var_115_int);
			@PlayAnimation("all", var_114_string);
			@WaitForAnimEnd(var_84_bool);
			var_116_bool = !var_84_bool; //@nz
			if(var_116_bool == 0) goto Label_4254;
			goto Label_4265;
			}
				Label_4254:
					bool var_107_bool;
					func_4268(var_107_bool);
					var_108_bool = !var_107_bool; //@nz
					if(var_108_bool == 0) goto Label_4260;
			}
		}
	Label_4265:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4260:
		@ResetAAS();
		var_80_int += 1;
	}
	
}


void func_4712(float var_90_float)
{
	float var_92_float;
	@GetGameTime(var_92_float);
	var_92_float = var_90_float;
}


// @pe
void func_1645(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_567_object, object var_568_object)
{
	var_0_bool = var_568_object;
	var_1_object = var_567_object;
	var_3_object = false;
	if(1 != 0) {
		func_1708(var_568_object, "Fear");
		var_0_bool->SetMessage(526660); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526661, -1, 27937); //@t
		var_0_bool->AddReply(526662, -1, 27938); //@t
		var_0_bool->AddReply(528771, -1, 30182); //@t
		goto Label_1678;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x671";
	}
Label_1678:
	bool var_592_bool;
	func_4764(var_592_bool);
	if(var_592_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1707;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1707:
		return 0;

	}
	
}


// @pe
void func_3182(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1105_object, object var_1106_object)
{
	var_0_bool = var_1106_object;
	var_1_object = var_1105_object;
	var_3_object = false;
	if(1 != 0) {
		func_3240(var_1106_object, "Neutral");
		var_0_bool->SetMessage(526689); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526690, -1, 27966); //@t
		var_0_bool->AddReply(526691, -1, 27967); //@t
		goto Label_3210;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc72";
	}
Label_3210:
	bool var_1127_bool;
	func_4764(var_1127_bool);
	if(var_1127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3239;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3239:
		return 0;

	}
	
}


void func_4717(int var_87_int)
{
	float var_89_float;
	@GetGameTime(var_89_float);
	var_87_int = 1 + (var_89_float / 24);
}


// @pe
void func_4977(bool var_1189_bool)
{
	int var_1191_int;
	func_4695(var_1191_int, "ook11Grif1");
	if(var_1191_int == 0) {
		var_1189_bool = true;
		return 0;
	}
	var_1189_bool = false;
}


// @pe
void func_4726(bool var_436_bool, int var_437_int)
{
	int var_438_int;
	func_4717(var_438_int);
	var_436_bool = var_438_int == var_437_int;
}


void func_3708(bool var_0_bool, int var_1218_int, object var_1219_object)
{
	var_0_bool = var_1219_object;
	bool var_1229_bool; object var_1230_object;
	var_1219_object = var_1230_object;
	func_4307(var_1229_bool, var_1230_object, 70.0);
	if(!var_1229_bool) { //@nz
		var_1218_int = -2;
		return 8;
	}
	object var_1225_object;
	@CreateDialog(var_1225_object);
	int var_1233_int;
	func_4758(var_1233_int);
	var_1225_object->SetNPCName(var_1233_int);
	int var_1234_int;
	func_4756(var_1234_int);
	var_1225_object->SetNPCDescription(var_1234_int);
	string var_1235_string;
	func_4760(var_1235_string);
	var_1225_object->SetPhoto(var_1235_string);
	string var_1236_string;
	func_4762(var_1236_string);
	var_1225_object->SetPhoto2(var_1236_string);
	int var_1237_int;
	func_5384(var_1237_int);
	var_1225_object->SetPlayerName(var_1237_int);
	bool var_1226_bool;
	@IsOverrideActive(var_1226_bool);
	if(var_1226_bool != 0) {
		var_1218_int = -2;
		return 8;
	}
	@DoDialog(var_1225_object);
	bool var_1239_bool; object var_1240_object;
	object var_1241_object;
	func_4674(var_1241_object);
	var_1241_object = var_1240_object;
	func_4394(var_1239_bool, var_1240_object);
	object var_1242_object; object var_1243_object;
	var_1219_object = var_1242_object;
	var_1225_object = var_1243_object;
	TaskCall(26);
	func_3789(var_1244_object, var_1245_object, var_1246_string, var_1247_bool, var_1242_object, var_1243_object);
	TaskReturn();
	bool var_1228_bool;
	var_1225_object->IsDialogEnd(var_1228_bool);
	
	for(;;) {
		var_1275_bool = !var_1228_bool; //@nz
		if(var_1275_bool == 0) goto Label_3778;
		@sync();
		var_1225_object->IsDialogEnd(var_1228_bool);
	}
	
Label_3778:
	object var_1276_object;
	var_1219_object = var_1276_object;
	func_4376();
	@StopDialog(var_1225_object);
	var_1225_object->GetReturnValue(-1);
	int var_1227_int = var_1218_int;
}
EMIT "Stack[-4] = 0";


void func_4732(string var_93_string, int var_94_int)
{
	string var_96_string = "idle";
	if(var_94_int != 0)
		var_96_string += var_94_int;
	var_96_string = var_93_string;
}


void func_4989(void)
{
	object var_154_object;
	@CreateDiaryEntry(var_154_object, 498, 1, 528065);
	bool var_158_bool; object var_159_object;
	var_154_object = var_159_object;
	func_5132(var_158_bool, var_159_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4739(int var_87_int)
{
	int var_90_int; bool var_91_bool;
	var_90_int = 0;
	
	for(;;) {
		string var_93_string; int var_94_int;
		var_90_int = var_94_int;
		func_4732(var_93_string, var_94_int);
		@HasAnimation(var_91_bool, "all", var_93_string);
		if(!var_91_bool) //@nz
			break;
		var_90_int += 1;
	}
	var_90_int = var_87_int;
}


// @pe
void func_1929(object var_2_object, string var_638_string)
{
	bool var_639_bool;
	func_4764(var_639_bool);
	if(!var_639_bool) //@nz
		return 0;
	if(var_638_string == var_2_object)
		return 0;
	string var_642_string; bool var_643_bool;
	var_638_string = var_642_string;
	if(var_638_string == "")
		var_643_bool = false;
	else
		var_643_bool = true;
	func_4609(var_642_string, var_643_bool);
	var_2_object = var_638_string;
	
}


void func_4489(bool var_329_bool, object var_330_object)
{
	bool var_338_bool; int var_339_int; string var_340_string;
	int var_342_int;
	func_4717(var_342_int);
	string var_336_string = ("d" + var_342_int) + "m";
	int var_337_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_330_object->HasProperty((var_336_string + (var_337_int + 1)), var_338_bool);
			if(!var_338_bool) { //@nz
			} else {
				var_337_int += 1;
			}
		}
		if(!var_337_int) { //@nz
			var_329_bool = false;
			return 10;
		}
		var_339_int = 0;
		if(var_337_int > 1)
			@irand(var_339_int, var_337_int);
		var_330_object->GetProperty((var_336_string + (var_339_int + 1)), var_340_string);
		bool var_356_bool; string var_357_string;
		var_340_string = var_357_string;
		func_4624(var_356_bool, var_357_string);
		var_356_bool = var_329_bool;
		return 10;

	}
}


void func_5002(void)
{
	object var_144_object;
	@CreateDiaryEntry(var_144_object, 497, 1, 528064);
	bool var_148_bool; object var_149_object;
	var_144_object = var_149_object;
	func_5132(var_148_bool, var_149_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3470(object var_2_object, string var_1173_string)
{
	bool var_1174_bool;
	func_4764(var_1174_bool);
	if(!var_1174_bool) //@nz
		return 0;
	if(var_1173_string == var_2_object)
		return 0;
	string var_1177_string; bool var_1178_bool;
	var_1173_string = var_1177_string;
	if(var_1173_string == "")
		var_1178_bool = false;
	else
		var_1178_bool = true;
	func_4609(var_1177_string, var_1178_bool);
	var_2_object = var_1173_string;
	
}


// @pe
void func_1424(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_464_object, object var_465_object)
{
	var_0_bool = var_465_object;
	var_1_object = var_464_object;
	var_3_object = false;
	if(1 != 0) {
		func_1487(var_465_object, "Fear");
		var_0_bool->SetMessage(526656); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526657, -1, 27933); //@t
		var_0_bool->AddReply(526658, -1, 27934); //@t
		var_0_bool->AddReply(542279, -1, 44624); //@t
		goto Label_1457;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x594";
	}
Label_1457:
	bool var_489_bool;
	func_4764(var_489_bool);
	if(var_489_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1486;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1486:
		return 0;

	}
	
}


// @pe
void func_2961(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1041_object, object var_1042_object)
{
	var_0_bool = var_1042_object;
	var_1_object = var_1041_object;
	var_3_object = false;
	if(1 != 0) {
		func_3024(var_1042_object, "Neutral");
		var_0_bool->SetMessage(526685); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526686, -1, 27962); //@t
		var_0_bool->AddReply(526687, -1, 27963); //@t
		var_0_bool->AddReply(529000, -1, 30437); //@t
		goto Label_2994;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb95";
	}
Label_2994:
	bool var_1066_bool;
	func_4764(var_1066_bool);
	if(var_1066_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3023;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3023:
		return 0;

	}
	
}


void func_2448(bool var_0_bool, int var_892_int, object var_893_object)
{
	var_0_bool = var_893_object;
	bool var_903_bool; object var_904_object;
	var_893_object = var_904_object;
	func_4307(var_903_bool, var_904_object, 70.0);
	if(!var_903_bool) { //@nz
		var_892_int = -2;
		return 8;
	}
	object var_899_object;
	@CreateDialog(var_899_object);
	int var_907_int;
	func_4758(var_907_int);
	var_899_object->SetNPCName(var_907_int);
	int var_908_int;
	func_4756(var_908_int);
	var_899_object->SetNPCDescription(var_908_int);
	string var_909_string;
	func_4760(var_909_string);
	var_899_object->SetPhoto(var_909_string);
	string var_910_string;
	func_4762(var_910_string);
	var_899_object->SetPhoto2(var_910_string);
	int var_911_int;
	func_5384(var_911_int);
	var_899_object->SetPlayerName(var_911_int);
	bool var_900_bool;
	@IsOverrideActive(var_900_bool);
	if(var_900_bool != 0) {
		var_892_int = -2;
		return 8;
	}
	@DoDialog(var_899_object);
	bool var_913_bool; object var_914_object;
	object var_915_object;
	func_4674(var_915_object);
	var_915_object = var_914_object;
	func_4394(var_913_bool, var_914_object);
	object var_916_object; object var_917_object;
	var_893_object = var_916_object;
	var_899_object = var_917_object;
	TaskCall(16);
	func_2529(var_918_object, var_919_object, var_920_string, var_921_bool, var_916_object, var_917_object);
	TaskReturn();
	bool var_902_bool;
	var_899_object->IsDialogEnd(var_902_bool);
	
	for(;;) {
		var_946_bool = !var_902_bool; //@nz
		if(var_946_bool == 0) goto Label_2518;
		@sync();
		var_899_object->IsDialogEnd(var_902_bool);
	}
	
Label_2518:
	object var_947_object;
	var_893_object = var_947_object;
	func_4376();
	@StopDialog(var_899_object);
	var_899_object->GetReturnValue(-1);
	int var_901_int = var_892_int;
}
EMIT "Stack[-4] = 0";


void func_4756(int var_275_int)
{
	var_275_int = 515535;
}


void func_4758(int var_274_int)
{
	var_274_int = 502860;
}


void func_5015(void)
{
	object var_134_object;
	@CreateDiaryEntry(var_134_object, 496, 1, 528063);
	bool var_138_bool; object var_139_object;
	var_134_object = var_139_object;
	func_5132(var_138_bool, var_139_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4760(string var_276_string)
{
	var_276_string = "ui/NPC_Grif.png";
}


void func_4762(string var_277_string)
{
	var_277_string = "ui/NPC_Grif_b.png";
}


void func_4764(bool var_269_bool)
{
	var_269_bool = true;
}


// @pe
void func_4766(object var_117_object)
{
	object var_121_object;
	func_5160(var_121_object);
	object var_118_object;
	var_121_object = var_118_object;
	func_5177(var_118_object, "pt_map_notkin", (float)2);
	object var_141_object;
	func_5160(var_141_object);
	var_117_object->ShowMap(var_141_object);
}


// @pe
void func_161(object var_2_object, string var_384_string)
{
	bool var_385_bool;
	func_4764(var_385_bool);
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
	func_4609(var_388_string, var_389_bool);
	var_2_object = var_384_string;
	
}


void func_5028(void)
{
	object var_124_object;
	@CreateDiaryEntry(var_124_object, 495, 1, 528062);
	bool var_128_bool; object var_129_object;
	var_124_object = var_129_object;
	func_5132(var_128_bool, var_129_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_422(object var_2_object, string var_702_string)
{
	bool var_703_bool;
	func_4764(var_703_bool);
	if(!var_703_bool) //@nz
		return 0;
	if(var_702_string == var_2_object)
		return 0;
	string var_706_string; bool var_707_bool;
	var_702_string = var_706_string;
	if(var_702_string == "")
		var_707_bool = false;
	else
		var_707_bool = true;
	func_4609(var_706_string, var_707_bool);
	var_2_object = var_702_string;
	
}


// @pe
void func_3240(object var_2_object, string var_1112_string)
{
	bool var_1113_bool;
	func_4764(var_1113_bool);
	if(!var_1113_bool) //@nz
		return 0;
	if(var_1112_string == var_2_object)
		return 0;
	string var_1116_string; bool var_1117_bool;
	var_1112_string = var_1116_string;
	if(var_1112_string == "")
		var_1117_bool = false;
	else
		var_1117_bool = true;
	func_4609(var_1116_string, var_1117_bool);
	var_2_object = var_1112_string;
	
}


// @pe
void func_1708(object var_2_object, string var_574_string)
{
	bool var_575_bool;
	func_4764(var_575_bool);
	if(!var_575_bool) //@nz
		return 0;
	if(var_574_string == var_2_object)
		return 0;
	string var_578_string; bool var_579_bool;
	var_574_string = var_578_string;
	if(var_574_string == "")
		var_579_bool = false;
	else
		var_579_bool = true;
	func_4609(var_578_string, var_579_bool);
	var_2_object = var_574_string;
	
}


void func_4268(bool var_107_bool)
{
	var_107_bool = true;
}


void func_4782(void)
{
	@SetVariable("k4q01", 2);
	object var_79_object;
	func_5160(var_79_object);
	object var_76_object;
	var_79_object = var_76_object;
	float var_90_float;
	func_4712(var_90_float);
	var_76_object->AddMark("k4q01GrifGotoNotkin", "pt_map_notkin", 1, 515278, var_90_float);
	func_5106();
}
EMIT "Stack[-1] = 0";


void func_4270(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_5041(void)
{
	object var_114_object;
	@CreateDiaryEntry(var_114_object, 494, 1, 528061);
	bool var_118_bool; object var_119_object;
	var_114_object = var_119_object;
	func_5132(var_118_bool, var_119_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4275(float var_82_float, object var_83_object)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	cvector var_88_cvector;
	var_83_object->GetPosition(var_88_cvector);
	var_82_float = (var_88_cvector - var_87_cvector) | (var_88_cvector - var_87_cvector);
}


// @pe
void func_2740(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_977_object, object var_978_object)
{
	var_0_bool = var_978_object;
	var_1_object = var_977_object;
	var_3_object = false;
	if(1 != 0) {
		func_2803(var_978_object, "Fear");
		var_0_bool->SetMessage(526681); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526682, -1, 27958); //@t
		var_0_bool->AddReply(526683, -1, 27959); //@t
		var_0_bool->AddReply(528752, -1, 30178); //@t
		goto Label_2773;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xab8";
	}
Label_2773:
	bool var_1002_bool;
	func_4764(var_1002_bool);
	if(var_1002_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2802;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2802:
		return 0;

	}
	
}


void func_2227(bool var_0_bool, int var_828_int, object var_829_object)
{
	var_0_bool = var_829_object;
	bool var_839_bool; object var_840_object;
	var_829_object = var_840_object;
	func_4307(var_839_bool, var_840_object, 70.0);
	if(!var_839_bool) { //@nz
		var_828_int = -2;
		return 8;
	}
	object var_835_object;
	@CreateDialog(var_835_object);
	int var_843_int;
	func_4758(var_843_int);
	var_835_object->SetNPCName(var_843_int);
	int var_844_int;
	func_4756(var_844_int);
	var_835_object->SetNPCDescription(var_844_int);
	string var_845_string;
	func_4760(var_845_string);
	var_835_object->SetPhoto(var_845_string);
	string var_846_string;
	func_4762(var_846_string);
	var_835_object->SetPhoto2(var_846_string);
	int var_847_int;
	func_5384(var_847_int);
	var_835_object->SetPlayerName(var_847_int);
	bool var_836_bool;
	@IsOverrideActive(var_836_bool);
	if(var_836_bool != 0) {
		var_828_int = -2;
		return 8;
	}
	@DoDialog(var_835_object);
	bool var_849_bool; object var_850_object;
	object var_851_object;
	func_4674(var_851_object);
	var_851_object = var_850_object;
	func_4394(var_849_bool, var_850_object);
	object var_852_object; object var_853_object;
	var_829_object = var_852_object;
	var_835_object = var_853_object;
	TaskCall(14);
	func_2308(var_854_object, var_855_object, var_856_string, var_857_bool, var_852_object, var_853_object);
	TaskReturn();
	bool var_838_bool;
	var_835_object->IsDialogEnd(var_838_bool);
	
	for(;;) {
		var_885_bool = !var_838_bool; //@nz
		if(var_885_bool == 0) goto Label_2297;
		@sync();
		var_835_object->IsDialogEnd(var_838_bool);
	}
	
Label_2297:
	object var_886_object;
	var_829_object = var_886_object;
	func_4376();
	@StopDialog(var_835_object);
	var_835_object->GetReturnValue(-1);
	int var_837_int = var_828_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4532(bool var_501_bool, object var_502_object)
{
	object var_504_object;
	var_502_object = var_504_object;
	bool var_503_bool;
	func_4540(var_503_bool, var_504_object, (float)70);
	var_503_bool = var_501_bool;
}


void func_4023(bool var_0_bool)
{
	bool var_69_bool;
	func_4302(var_69_bool);
	if(!var_69_bool) //@nz
		@Hold();
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_4199();
	}
}
EMIT "Return(); Pop(0)";


void func_4283(bool var_75_bool, cvector var_76_cvector)
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


void func_4540(bool var_503_bool, object var_504_object, float var_505_float)
{
	cvector var_515_cvector;
	var_504_object->GetPosition(var_515_cvector);
	float var_514_float;
	var_504_object->GetEyesHeight(var_514_float);
	var_522_float = GetByIndex(var_515_cvector, 1);
	SetByIndex(var_515_cvector, 1) = (var_522_float + var_514_float);
	cvector var_516_cvector;
	@GetPosition(var_516_cvector);
	@GetEyesHeight(var_514_float);
	var_523_float = GetByIndex(var_516_cvector, 1);
	SetByIndex(var_516_cvector, 1) = (var_523_float + var_514_float);
	cvector var_517_cvector = var_515_cvector - var_516_cvector;
	var_524_float = GetByIndex(var_517_cvector, 1);
	SetByIndex(var_517_cvector, 1) = (float)0;
	var_526_float = sqrt(var_517_cvector | var_517_cvector);
	var_517_cvector /= var_526_float;
	cvector var_518_cvector = -var_517_cvector;
	cvector var_519_cvector = (var_517_cvector * var_505_float) - [0.0, 10.0, 0.0];
	bool var_521_bool;
	@IsOverrideActive(var_521_bool);
	if(var_521_bool != 0)
		var_503_bool = false;
	@StopWorld();
	@CameraTransit((var_516_cvector + var_519_cvector), var_518_cvector, true);
	var_531_float = GetByIndex(var_519_cvector, 0);
	var_532_float = GetByIndex(var_519_cvector, 2);
	@Rotate(var_531_float, var_532_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_503_bool = true;
}


void func_5054(void)
{
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 493, 1, 528060);
	bool var_93_bool; object var_94_object;
	var_89_object = var_94_object;
	func_5132(var_93_bool, var_94_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4805(void)
{
	@SetVariable("k4q01", 4);
	object var_154_object;
	func_5160(var_154_object);
	object var_151_object;
	var_154_object = var_151_object;
	float var_159_float;
	func_4712(var_159_float);
	var_151_object->AddMark("k4q01GrifGotoBraga", "pt_map_warehouse_gangster", 1, 530231, var_159_float);
	func_5093();
	bool var_168_bool;
	func_4700(var_168_bool, "quest_k4_01", "init_volnica");
}
EMIT "Stack[-1] = 0";


void func_4293(bool var_71_bool, object var_72_object)
{
	cvector var_74_cvector;
	var_72_object->GetPosition(var_74_cvector);
	bool var_75_bool; cvector var_76_cvector;
	var_74_cvector = var_76_cvector;
	func_4283(var_75_bool, var_76_cvector);
	var_75_bool = var_71_bool;
}


void func_4037(bool var_92_bool)
{
	object var_94_object;
	@FindActor(var_94_object, "player");
	if(!var_94_object) //@nz
		var_92_bool = false;
	bool var_97_bool; object var_98_object;
	var_94_object = var_98_object;
	func_4293(var_97_bool, var_98_object);
	var_97_bool = var_92_bool;
}
EMIT "Stack[-1] = 0";


void func_5067(void)
{
	object var_210_object;
	@CreateDiaryEntry(var_210_object, 786, 1, 542494);
	bool var_214_bool; object var_215_object;
	var_210_object = var_215_object;
	func_5132(var_214_bool, var_215_object, 368);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3789(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1242_object, object var_1243_object)
{
	var_0_bool = var_1243_object;
	var_1_object = var_1242_object;
	var_3_object = false;
	if(1 != 0) {
		func_3852(var_1243_object, "Neutral");
		var_0_bool->SetMessage(539291); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(542571, 44971, 44970); //@t
		var_0_bool->AddReply(539292, -1, 41235); //@t
		var_0_bool->AddReply(542570, -1, 44969); //@t
		goto Label_3822;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xed1";
	}
Label_3822:
	bool var_1267_bool;
	func_4764(var_1267_bool);
	if(var_1267_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3851;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3851:
		return 0;

	}
	
}


void func_4302(bool var_69_bool)
{
	bool var_71_bool;
	@IsLoaded(var_71_bool);
	var_71_bool = var_69_bool;
}


// @pe
void func_1487(object var_2_object, string var_471_string)
{
	bool var_472_bool;
	func_4764(var_472_bool);
	if(!var_472_bool) //@nz
		return 0;
	if(var_471_string == var_2_object)
		return 0;
	string var_475_string; bool var_476_bool;
	var_471_string = var_475_string;
	if(var_471_string == "")
		var_476_bool = false;
	else
		var_476_bool = true;
	func_4609(var_475_string, var_476_bool);
	var_2_object = var_471_string;
	
}


// @pe
void func_3024(object var_2_object, string var_1048_string)
{
	bool var_1049_bool;
	func_4764(var_1049_bool);
	if(!var_1049_bool) //@nz
		return 0;
	if(var_1048_string == var_2_object)
		return 0;
	string var_1052_string; bool var_1053_bool;
	var_1048_string = var_1052_string;
	if(var_1048_string == "")
		var_1053_bool = false;
	else
		var_1053_bool = true;
	func_4609(var_1052_string, var_1053_bool);
	var_2_object = var_1048_string;
	
}


void func_4307(bool var_226_bool, object var_227_object, float var_228_float)
{
	cvector var_239_cvector; bool var_246_bool;
	var_227_object->GetPosition(var_239_cvector);
	float var_238_float;
	var_227_object->GetEyesHeight(var_238_float);
	var_247_float = GetByIndex(var_239_cvector, 1);
	SetByIndex(var_239_cvector, 1) = (var_247_float + var_238_float);
	cvector var_240_cvector;
	@GetPosition(var_240_cvector);
	@GetEyesHeight(var_238_float);
	var_248_float = GetByIndex(var_240_cvector, 1);
	SetByIndex(var_240_cvector, 1) = (var_248_float + var_238_float);
	cvector var_241_cvector = var_239_cvector - var_240_cvector;
	var_249_float = GetByIndex(var_241_cvector, 1);
	SetByIndex(var_241_cvector, 1) = (float)0;
	var_251_float = sqrt(var_241_cvector | var_241_cvector);
	var_241_cvector /= var_251_float;
	cvector var_242_cvector = -var_241_cvector;
	cvector var_253_cvector;
	func_4680(var_253_cvector, (var_242_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_243_cvector = ((var_241_cvector * var_228_float) + (var_253_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_245_bool;
	@IsOverrideActive(var_245_bool);
	if(var_245_bool != 0)
		var_226_bool = false;
	@StopWorld();
	@CameraTransit((var_240_cvector + var_243_cvector), var_242_cvector, true);
	var_267_float = GetByIndex(var_243_cvector, 0);
	var_268_float = GetByIndex(var_243_cvector, 2);
	@Rotate(var_267_float, var_268_float);
	bool var_269_bool;
	func_4764(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		@HasAnimationTrack(var_246_bool, "head");
		if(var_246_bool == 0) goto Label_4370;
		@LookAsyncCamera("head");
	}
Label_4370:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_226_bool = true;
	
}


void func_4052(bool var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0);
	var_145_float = GetByIndex(var_0_bool, 2);
	@RotateAsync(var_144_float, var_145_float);
}


void func_2006(bool var_0_bool, int var_764_int, object var_765_object)
{
	var_0_bool = var_765_object;
	bool var_775_bool; object var_776_object;
	var_765_object = var_776_object;
	func_4307(var_775_bool, var_776_object, 70.0);
	if(!var_775_bool) { //@nz
		var_764_int = -2;
		return 8;
	}
	object var_771_object;
	@CreateDialog(var_771_object);
	int var_779_int;
	func_4758(var_779_int);
	var_771_object->SetNPCName(var_779_int);
	int var_780_int;
	func_4756(var_780_int);
	var_771_object->SetNPCDescription(var_780_int);
	string var_781_string;
	func_4760(var_781_string);
	var_771_object->SetPhoto(var_781_string);
	string var_782_string;
	func_4762(var_782_string);
	var_771_object->SetPhoto2(var_782_string);
	int var_783_int;
	func_5384(var_783_int);
	var_771_object->SetPlayerName(var_783_int);
	bool var_772_bool;
	@IsOverrideActive(var_772_bool);
	if(var_772_bool != 0) {
		var_764_int = -2;
		return 8;
	}
	@DoDialog(var_771_object);
	bool var_785_bool; object var_786_object;
	object var_787_object;
	func_4674(var_787_object);
	var_787_object = var_786_object;
	func_4394(var_785_bool, var_786_object);
	object var_788_object; object var_789_object;
	var_765_object = var_788_object;
	var_771_object = var_789_object;
	TaskCall(12);
	func_2087(var_790_object, var_791_object, var_792_string, var_793_bool, var_788_object, var_789_object);
	TaskReturn();
	bool var_774_bool;
	var_771_object->IsDialogEnd(var_774_bool);
	
	for(;;) {
		var_821_bool = !var_774_bool; //@nz
		if(var_821_bool == 0) goto Label_2076;
		@sync();
		var_771_object->IsDialogEnd(var_774_bool);
	}
	
Label_2076:
	object var_822_object;
	var_765_object = var_822_object;
	func_4376();
	@StopDialog(var_771_object);
	var_771_object->GetReturnValue(-1);
	int var_773_int = var_764_int;
}
EMIT "Stack[-4] = 0";


void func_5080(void)
{
	object var_192_object;
	@CreateDiaryEntry(var_192_object, 377, 1, 525734);
	bool var_196_bool; object var_197_object;
	var_192_object = var_197_object;
	func_5132(var_196_bool, var_197_object, 368);
}
EMIT "Stack[-1] = 0";


void func_4057(bool var_75_bool)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) { //@nz
		var_75_bool = false;
		return 4;
	}
	float var_82_float; object var_83_object;
	func_4275(var_82_float, var_83_object);
	if(var_82_float > 90000.0) {
		var_75_bool = false;
		return 4;
	}
	bool var_79_bool;
	@CanSee(var_79_bool, var_83_object);
	var_79_bool = var_75_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_4833(void)
{
	@SetVariable("k4q01", 6);
	func_5080();
}


// @pe
void func_2529(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_916_object, object var_917_object)
{
	var_0_bool = var_917_object;
	var_1_object = var_916_object;
	var_3_object = false;
	if(1 != 0) {
		func_2587(var_917_object, "Neutral");
		var_0_bool->SetMessage(526677); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(526678, -1, 27954); //@t
		var_0_bool->AddReply(526679, -1, 27955); //@t
		goto Label_2557;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9e5";
	}
Label_2557:
	bool var_938_bool;
	func_4764(var_938_bool);
	if(var_938_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4593(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2586;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2586:
		return 0;

	}
	
}


void func_5093(void)
{
	object var_161_object;
	@CreateDiaryEntry(var_161_object, 372, 1, 525729);
	bool var_165_bool; object var_166_object;
	var_161_object = var_166_object;
	func_5132(var_165_bool, var_166_object, 368);
}
EMIT "Stack[-1] = 0";


void func_4842(void)
{
	int var_82_int;
	@GetVariable("k11q01SoulCount", var_82_int);
	var_82_int += 1;
	@SetVariable("k11q01SoulCount", var_82_int);
	if(var_82_int == 2) {
		func_5054();
	} else if(var_82_int == 3) {
			func_5041();
	}

	for(;;) {
		return 2;

	}
	
	if(var_82_int == 4) {
		func_5028();
	} else if(var_82_int == 5) {
		func_5015();
	} else if(var_82_int == 6) {
		func_5002();
	} else if(var_82_int == 7) {
		func_4989();
	}
}


// @pe
void func_4588(void)
{
	@CameraSwitchToNormal(true);
}


void func_4079(void)
{
	float var_1280_float;
	@rand(var_1280_float, 8, 16);
	@SetTimer(10, var_1280_float);
}


void func_3312(bool var_0_bool, int var_1142_int, object var_1143_object)
{
	var_0_bool = var_1143_object;
	bool var_1153_bool; object var_1154_object;
	var_1143_object = var_1154_object;
	func_4307(var_1153_bool, var_1154_object, 70.0);
	if(!var_1153_bool) { //@nz
		var_1142_int = -2;
		return 8;
	}
	object var_1149_object;
	@CreateDialog(var_1149_object);
	int var_1157_int;
	func_4758(var_1157_int);
	var_1149_object->SetNPCName(var_1157_int);
	int var_1158_int;
	func_4756(var_1158_int);
	var_1149_object->SetNPCDescription(var_1158_int);
	string var_1159_string;
	func_4760(var_1159_string);
	var_1149_object->SetPhoto(var_1159_string);
	string var_1160_string;
	func_4762(var_1160_string);
	var_1149_object->SetPhoto2(var_1160_string);
	int var_1161_int;
	func_5384(var_1161_int);
	var_1149_object->SetPlayerName(var_1161_int);
	bool var_1150_bool;
	@IsOverrideActive(var_1150_bool);
	if(var_1150_bool != 0) {
		var_1142_int = -2;
		return 8;
	}
	@DoDialog(var_1149_object);
	bool var_1163_bool; object var_1164_object;
	object var_1165_object;
	func_4674(var_1165_object);
	var_1165_object = var_1164_object;
	func_4394(var_1163_bool, var_1164_object);
	object var_1166_object; object var_1167_object;
	var_1143_object = var_1166_object;
	var_1149_object = var_1167_object;
	TaskCall(24);
	func_3393(var_1168_object, var_1169_object, var_1170_string, var_1171_bool, var_1166_object, var_1167_object);
	TaskReturn();
	bool var_1152_bool;
	var_1149_object->IsDialogEnd(var_1152_bool);
	
	for(;;) {
		var_1212_bool = !var_1152_bool; //@nz
		if(var_1212_bool == 0) goto Label_3382;
		@sync();
		var_1149_object->IsDialogEnd(var_1152_bool);
	}
	
Label_3382:
	object var_1213_object;
	var_1143_object = var_1213_object;
	func_4376();
	@StopDialog(var_1149_object);
	var_1149_object->GetReturnValue(-1);
	int var_1151_int = var_1142_int;
}
EMIT "Stack[-4] = 0";


void func_4593(string var_410_string)
{
	bool var_414_bool; float var_415_float; float var_416_float;
	@lshHasAnimation(var_414_bool, var_410_string);
	if(var_414_bool != 0) {
		@lshGetAnimTimes(var_410_string, var_415_float, var_416_float);
		@lshPlayAnimation(var_415_float, var_416_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_410_string);
	}
	
}


void func_5106(void)
{
	object var_94_object;
	@CreateDiaryEntry(var_94_object, 370, 1, 525727);
	bool var_98_bool; object var_99_object;
	var_94_object = var_99_object;
	func_5132(var_98_bool, var_99_object, 368);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2803(object var_2_object, string var_984_string)
{
	bool var_985_bool;
	func_4764(var_985_bool);
	if(!var_985_bool) //@nz
		return 0;
	if(var_984_string == var_2_object)
		return 0;
	string var_988_string; bool var_989_bool;
	var_984_string = var_988_string;
	if(var_984_string == "")
		var_989_bool = false;
	else
		var_989_bool = true;
	func_4609(var_988_string, var_989_bool);
	var_2_object = var_984_string;
	
}


void func_248(bool var_0_bool, int var_671_int, object var_672_object)
{
	var_0_bool = var_672_object;
	bool var_682_bool; object var_683_object;
	var_672_object = var_683_object;
	func_4307(var_682_bool, var_683_object, 70.0);
	if(!var_682_bool) { //@nz
		var_671_int = -2;
		return 8;
	}
	object var_678_object;
	@CreateDialog(var_678_object);
	int var_686_int;
	func_4758(var_686_int);
	var_678_object->SetNPCName(var_686_int);
	int var_687_int;
	func_4756(var_687_int);
	var_678_object->SetNPCDescription(var_687_int);
	string var_688_string;
	func_4760(var_688_string);
	var_678_object->SetPhoto(var_688_string);
	string var_689_string;
	func_4762(var_689_string);
	var_678_object->SetPhoto2(var_689_string);
	int var_690_int;
	func_5384(var_690_int);
	var_678_object->SetPlayerName(var_690_int);
	bool var_679_bool;
	@IsOverrideActive(var_679_bool);
	if(var_679_bool != 0) {
		var_671_int = -2;
		return 8;
	}
	@DoDialog(var_678_object);
	bool var_692_bool; object var_693_object;
	object var_694_object;
	func_4674(var_694_object);
	var_694_object = var_693_object;
	func_4394(var_692_bool, var_693_object);
	object var_695_object; object var_696_object;
	var_672_object = var_695_object;
	var_678_object = var_696_object;
	TaskCall(4);
	func_329(var_697_object, var_698_object, var_699_string, var_700_bool, var_695_object, var_696_object);
	TaskReturn();
	bool var_681_bool;
	var_678_object->IsDialogEnd(var_681_bool);
	
	for(;;) {
		var_757_bool = !var_681_bool; //@nz
		if(var_757_bool == 0) goto Label_318;
		@sync();
		var_678_object->IsDialogEnd(var_681_bool);
	}
	
Label_318:
	object var_758_object;
	var_672_object = var_758_object;
	func_4376();
	@StopDialog(var_678_object);
	var_678_object->GetReturnValue(-1);
	int var_680_int = var_671_int;
}
EMIT "Stack[-4] = 0";


void func_1785(bool var_0_bool, int var_607_int, object var_608_object)
{
	var_0_bool = var_608_object;
	bool var_618_bool; object var_619_object;
	var_608_object = var_619_object;
	func_4307(var_618_bool, var_619_object, 70.0);
	if(!var_618_bool) { //@nz
		var_607_int = -2;
		return 8;
	}
	object var_614_object;
	@CreateDialog(var_614_object);
	int var_622_int;
	func_4758(var_622_int);
	var_614_object->SetNPCName(var_622_int);
	int var_623_int;
	func_4756(var_623_int);
	var_614_object->SetNPCDescription(var_623_int);
	string var_624_string;
	func_4760(var_624_string);
	var_614_object->SetPhoto(var_624_string);
	string var_625_string;
	func_4762(var_625_string);
	var_614_object->SetPhoto2(var_625_string);
	int var_626_int;
	func_5384(var_626_int);
	var_614_object->SetPlayerName(var_626_int);
	bool var_615_bool;
	@IsOverrideActive(var_615_bool);
	if(var_615_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	@DoDialog(var_614_object);
	bool var_628_bool; object var_629_object;
	object var_630_object;
	func_4674(var_630_object);
	var_630_object = var_629_object;
	func_4394(var_628_bool, var_629_object);
	object var_631_object; object var_632_object;
	var_608_object = var_631_object;
	var_614_object = var_632_object;
	TaskCall(10);
	func_1866(var_633_object, var_634_object, var_635_string, var_636_bool, var_631_object, var_632_object);
	TaskReturn();
	bool var_617_bool;
	var_614_object->IsDialogEnd(var_617_bool);
	
	for(;;) {
		var_664_bool = !var_617_bool; //@nz
		if(var_664_bool == 0) goto Label_1855;
		@sync();
		var_614_object->IsDialogEnd(var_617_bool);
	}
	
Label_1855:
	object var_665_object;
	var_608_object = var_665_object;
	func_4376();
	@StopDialog(var_614_object);
	var_614_object->GetReturnValue(-1);
	int var_616_int = var_607_int;
}
EMIT "Stack[-4] = 0";


void func_5119(object var_102_object)
{
	object var_104_object;
	@GetDiaryRoot(var_104_object);
	if(!var_104_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_102_object = false;
	}
	var_104_object = var_102_object;
}
EMIT "Stack[-1] = 0";


