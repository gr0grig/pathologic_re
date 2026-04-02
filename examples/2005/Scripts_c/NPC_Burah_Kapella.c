// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_52_cvector == 31688) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6488();
				object var_114_object = var_1_object;
				func_6738(var_0_object);
			}
			if(var_52_cvector == 31693) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_6488();
				object var_144_object = var_1_object;
				func_6738(var_0_object);
			}
			if(var_52_cvector == 31722) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_6519();
			}
			if(var_51_bool == 31679) {
				bool var_163_bool = false;
				bool var_164_bool = false;
				bool var_165_bool;
				func_6897(var_1_object);
				if(!var_165_bool) { //@nz
					bool var_174_bool;
					func_6933(var_1_object);
					if(!var_174_bool) //@nz
						var_164_bool = true;
				}
				if(var_164_bool != 0) {
					bool var_181_bool;
					func_6969(var_181_bool, var_1_object);
					if(var_181_bool != 0)
						var_163_bool = true;
				}
				if(var_163_bool != 0) {
					func_269(var_52_cvector, "Neutral");
					var_0_object->SetMessage(530291); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531185, -1, 32490); //@t
					var_0_object->AddReply(530292, -1, 31680); //@t
					return 0;
				}
				bool var_211_bool = false;
				bool var_212_bool;
				func_6909(var_1_object);
				if(var_212_bool != 0) {
					bool var_218_bool;
					func_6969(var_218_bool, var_1_object);
					if(var_218_bool != 0)
						var_211_bool = true;
				}
				if(var_211_bool != 0) {
					object var_220_object; object var_221_object;
					var_220_object = var_1_object;
					var_221_object = var_0_object;
					func_6482();
					func_269(var_52_cvector, "Neutral");
					var_0_object->SetMessage(530293); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531188, 32494, 32493); //@t
					var_0_object->AddReply(531193, 32496, 32498); //@t
					return 0;
				}
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530302); //@t
				var_0_object->ClearReplies(); //@t
				bool var_234_bool = false;
				bool var_235_bool;
				func_6921(var_1_object);
				if(var_235_bool != 0) {
					bool var_241_bool;
					func_6969(var_241_bool, var_1_object);
					if(var_241_bool != 0)
						var_234_bool = true;
				}
				if(var_234_bool != 0)
					var_0_object->AddReply(530303, 31692, 31691); //@t
				bool var_246_bool = false;
				bool var_247_bool;
				func_6945(var_1_object);
				if(var_247_bool != 0) {
					bool var_253_bool;
					func_6957(var_1_object);
					if(var_253_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_object->AddReply(530333, 31721, 31720); //@t
				var_0_object->AddReply(530306, -1, 31694); //@t
				return 0;
			}
			if(var_51_bool == 31721) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531186, 32492, 32491); //@t
				return 0;
			}
			if(var_51_bool == 32492) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530335, -1, 31722); //@t
				return 0;
			}
			if(var_51_bool == 31692) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530305, -1, 31693); //@t
				return 0;
			}
			if(var_51_bool == 32494) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531190, 32496, 32495); //@t
				var_0_object->AddReply(531192, 32500, 32497); //@t
				return 0;
			}
			if(var_51_bool == 32500) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531196, 32496, 32502); //@t
				var_0_object->AddReply(531195, -1, 32501); //@t
				return 0;
			}
			if(var_51_bool == 32496) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531191); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530294, 31683, 31682); //@t
				var_0_object->AddReply(531197, 31685, 32504); //@t
				return 0;
			}
			if(var_51_bool == 31683) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530296, 31685, 31684); //@t
				return 0;
			}
			if(var_51_bool == 31685) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530298, 31687, 31686); //@t
				var_0_object->AddReply(531198, 32507, 32506); //@t
				return 0;
			}
			if(var_51_bool == 32507) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531200, 31687, 32508); //@t
				var_0_object->AddReply(531201, -1, 32509); //@t
				return 0;
			}
			if(var_51_bool == 31687) {
				func_269(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530300, -1, 31688); //@t
				var_0_object->AddReply(530301, -1, 31689); //@t
				return 0;
			}
			var_3_string = true;
			bool var_353_bool;
			func_6353(var_353_bool);
			if(var_353_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x124";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_52_cvector == 32424) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6626();
			}
			if(var_52_cvector == 32430) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_6626();
			}
			if(var_52_cvector == 32449) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_6642();
			}
			if(var_51_bool == 32423) {
				bool var_124_bool;
				func_6991(var_1_object);
				if(var_124_bool != 0) {
					object var_132_object; object var_133_object;
					var_132_object = var_1_object;
					var_133_object = var_0_object;
					func_6620();
					func_878(var_52_cvector, "Neutral");
					var_0_object->SetMessage(531105); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531107, 32678, 32425); //@t
					var_0_object->AddReply(531353, 32678, 32685); //@t
					return 0;
				}
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531108); //@t
				var_0_object->ClearReplies(); //@t
				bool var_157_bool;
				func_7003(var_1_object);
				if(var_157_bool != 0)
					var_0_object->AddReply(531109, 32429, 32427); //@t
				bool var_166_bool;
				func_7015(var_1_object);
				if(var_166_bool != 0)
					var_0_object->AddReply(531129, 32448, 32447); //@t
				var_0_object->AddReply(531110, -1, 32428); //@t
				return 0;
			}
			if(var_51_bool == 32448) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531130); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531365, 32702, 32701); //@t
				return 0;
			}
			if(var_51_bool == 32702) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531367, 32704, 32703); //@t
				var_0_object->AddReply(531369, 32704, 32705); //@t
				return 0;
			}
			if(var_51_bool == 32704) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531131, -1, 32449); //@t
				return 0;
			}
			if(var_51_bool == 32429) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531112, -1, 32430); //@t
				return 0;
			}
			if(var_51_bool == 32678) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531347, 32680, 32679); //@t
				var_0_object->AddReply(531354, 32687, 32686); //@t
				return 0;
			}
			if(var_51_bool == 32687) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531356, 32680, 32688); //@t
				var_0_object->AddReply(531357, -1, 32689); //@t
				return 0;
			}
			if(var_51_bool == 32680) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531349, 32682, 32681); //@t
				var_0_object->AddReply(531358, 32692, 32691); //@t
				return 0;
			}
			if(var_51_bool == 32692) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531360, 32682, 32693); //@t
				return 0;
			}
			if(var_51_bool == 32682) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531350); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531351, 32684, 32683); //@t
				var_0_object->AddReply(531362, 32697, 32696); //@t
				return 0;
			}
			if(var_51_bool == 32697) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531364, 32684, 32698); //@t
				return 0;
			}
			if(var_51_bool == 32684) {
				func_878(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531352); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531106, -1, 32424); //@t
				var_0_object->AddReply(531361, -1, 32695); //@t
				return 0;
			}
			var_3_string = true;
			bool var_273_bool;
			func_6353(var_273_bool);
			if(var_273_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x385";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_52_cvector == 36934) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6700();
			}
			if(var_51_bool == 36933) {
				func_1383(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535258); //@t
				var_0_object->ClearReplies(); //@t
				bool var_76_bool;
				func_7063(var_1_object);
				if(var_76_bool != 0)
					var_0_object->AddReply(535259, 36983, 36934); //@t
				var_0_object->AddReply(535304, -1, 36982); //@t
				return 0;
			}
			if(var_51_bool == 36983) {
				func_1383(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535305); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535306, 36985, 36984); //@t
				var_0_object->AddReply(535318, 36998, 36997); //@t
				return 0;
			}
			if(var_51_bool == 36998) {
				func_1383(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535319); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535320, 36990, 36999); //@t
				var_0_object->AddReply(535321, 36985, 37001); //@t
				return 0;
			}
			if(var_51_bool == 36985) {
				func_1383(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535308, 36987, 36986); //@t
				return 0;
			}
			if(var_51_bool == 36987) {
				func_1383(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535311, 36990, 36989); //@t
				var_0_object->AddReply(535313, 36990, 36991); //@t
				return 0;
			}
			if(var_51_bool == 36990) {
				func_1383(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535310, 36994, 36988); //@t
				var_0_object->AddReply(535314, -1, 36993); //@t
				return 0;
			}
			if(var_51_bool == 36994) {
				func_1383(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535316, -1, 36995); //@t
				var_0_object->AddReply(535317, -1, 36996); //@t
				return 0;
			}
			var_3_string = true;
			bool var_147_bool;
			func_6353(var_147_bool);
			if(var_147_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x57e";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_52_cvector == 20654) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6420();
			}
			if(var_51_bool == 19384) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(518275); //@t
				var_0_object->ClearReplies(); //@t
				bool var_76_bool;
				func_7183(var_1_object);
				if(var_76_bool != 0)
					var_0_object->AddReply(519482, 20655, 20654); //@t
				var_0_object->AddReply(518276, -1, 19385); //@t
				return 0;
			}
			if(var_51_bool == 20655) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519484, 20662, 20656); //@t
				var_0_object->AddReply(519485, 20658, 20657); //@t
				return 0;
			}
			if(var_51_bool == 20658) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519487, 20660, 20659); //@t
				var_0_object->AddReply(527738, 29091, 29090); //@t
				return 0;
			}
			if(var_51_bool == 29091) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527740, 20660, 29092); //@t
				return 0;
			}
			if(var_51_bool == 20660) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519488); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519489, 20662, 20661); //@t
				return 0;
			}
			if(var_51_bool == 20662) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527741, 29096, 29094); //@t
				var_0_object->AddReply(527742, 29096, 29095); //@t
				return 0;
			}
			if(var_51_bool == 29096) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527744, 29098, 29097); //@t
				return 0;
			}
			if(var_51_bool == 29098) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527745); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519491, 20665, 20664); //@t
				return 0;
			}
			if(var_51_bool == 20665) {
				func_1737(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519493, -1, 20666); //@t
				return 0;
			}
			var_3_string = true;
			bool var_155_bool;
			func_6353(var_155_bool);
			if(var_155_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6e0";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_52_cvector == 19479) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6809();
			}
			if(var_52_cvector == 19482) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_6778();
				object var_126_object = var_1_object;
				func_6355(var_0_object);
			}
			if(var_52_cvector == 19486) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_6778();
				object var_156_object = var_1_object;
				func_6355(var_0_object);
			}
			if(var_52_cvector == 19489) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_6815();
				object var_173_object = var_1_object;
				func_6754(var_0_object);
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_6529();
			}
			if(var_52_cvector == 20330) {
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_6815();
			}
			if(var_52_cvector == 19492) {
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_6815();
				object var_206_object = var_1_object;
				func_6472(var_0_object);
				object var_211_object; object var_212_object;
				var_211_object = var_1_object;
				var_212_object = var_0_object;
				func_6529();
			}
			if(var_52_cvector == 20325) {
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_object;
				func_6815();
			}
			if(var_51_bool == 19478) {
				object var_219_object; object var_220_object;
				var_219_object = var_1_object;
				var_220_object = var_0_object;
				func_6571();
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(518365); //@t
				var_0_object->ClearReplies(); //@t
				bool var_236_bool;
				func_7087(var_1_object);
				if(var_236_bool != 0)
					var_0_object->AddReply(518366, 19481, 19479); //@t
				bool var_247_bool = false;
				bool var_248_bool;
				func_7087(var_1_object);
				if(!var_248_bool) { //@nz
					bool var_251_bool;
					func_7075(var_1_object);
					if(var_251_bool != 0)
						var_247_bool = true;
				}
				if(var_247_bool != 0)
					var_0_object->AddReply(518371, 19485, 19484); //@t
				bool var_260_bool = false;
				bool var_261_bool;
				func_7099(var_1_object);
				if(var_261_bool != 0) {
					bool var_267_bool;
					func_7111(var_1_object);
					if(var_267_bool != 0)
						var_260_bool = true;
				}
				if(var_260_bool != 0)
					var_0_object->AddReply(518374, 19488, 19487); //@t
				bool var_276_bool = false;
				bool var_277_bool;
				func_7099(var_1_object);
				if(var_277_bool != 0) {
					bool var_279_bool;
					func_7111(var_1_object);
					if(!var_279_bool) //@nz
						var_276_bool = true;
				}
				if(var_276_bool != 0)
					var_0_object->AddReply(518377, 19491, 19490); //@t
				var_0_object->AddReply(518367, -1, 19480); //@t
				return 0;
			}
			if(var_51_bool == 19491) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(518378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519177, 20319, 20318); //@t
				return 0;
			}
			if(var_51_bool == 20319) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519178); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519179, 20321, 20320); //@t
				return 0;
			}
			if(var_51_bool == 20321) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519181, 20323, 20322); //@t
				return 0;
			}
			if(var_51_bool == 20323) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518379, -1, 19492); //@t
				var_0_object->AddReply(519184, -1, 20325); //@t
				return 0;
			}
			if(var_51_bool == 19488) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(518375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519185, 20327, 20326); //@t
				return 0;
			}
			if(var_51_bool == 20327) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519187, 20329, 20328); //@t
				return 0;
			}
			if(var_51_bool == 20329) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518376, -1, 19489); //@t
				var_0_object->AddReply(519189, -1, 20330); //@t
				return 0;
			}
			if(var_51_bool == 19485) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(518372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518373, -1, 19486); //@t
				return 0;
			}
			if(var_51_bool == 19481) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(518368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519191, 20333, 20332); //@t
				var_0_object->AddReply(519193, 20335, 20334); //@t
				return 0;
			}
			if(var_51_bool == 20335) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519195, 20333, 20336); //@t
				var_0_object->AddReply(519196, -1, 20338); //@t
				return 0;
			}
			if(var_51_bool == 20333) {
				func_2181(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518369, -1, 19482); //@t
				var_0_object->AddReply(518370, -1, 19483); //@t
				return 0;
			}
			var_3_string = true;
			bool var_380_bool;
			func_6353(var_380_bool);
			if(var_380_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x89c";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_52_cvector == 21023) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6764();
				object var_95_object = var_1_object;
				func_6773(var_0_object);
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_6466();
			}
			if(var_52_cvector == 21024) {
				object var_104_object = var_1_object;
				func_6718(var_0_object);
			}
			if(var_52_cvector == 21026) {
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_6764();
				object var_148_object = var_1_object;
				func_6773(var_0_object);
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_6466();
			}
			if(var_52_cvector == 21029) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_6764();
				object var_156_object = var_1_object;
				func_6773(var_0_object);
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_6466();
			}
			if(var_52_cvector == 21030) {
				object var_162_object = var_1_object;
				func_6718(var_0_object);
			}
			if(var_52_cvector == 21032) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_6764();
				object var_168_object = var_1_object;
				func_6773(var_0_object);
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_6466();
			}
			if(var_52_cvector == 20978) {
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_6377();
			}
			if(var_52_cvector == 20984) {
				object var_180_object = var_1_object;
				func_6725(var_0_object);
			}
			if(var_52_cvector == 28372) {
				object var_187_object = var_1_object;
				func_6725(var_0_object);
			}
			if(var_52_cvector == 20990) {
				object var_191_object; object var_192_object;
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_6383();
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_object;
				func_6389();
			}
			if(var_52_cvector == 21002) {
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_6732();
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_object;
				func_6706();
			}
			if(var_52_cvector == 21003) {
				object var_257_object; object var_258_object;
				var_257_object = var_1_object;
				var_258_object = var_0_object;
				func_6732();
				object var_259_object; object var_260_object;
				var_259_object = var_1_object;
				var_260_object = var_0_object;
				func_6706();
			}
			if(var_52_cvector == 21004) {
				object var_263_object; object var_264_object;
				var_263_object = var_1_object;
				var_264_object = var_0_object;
				func_6732();
				object var_265_object; object var_266_object;
				var_265_object = var_1_object;
				var_266_object = var_0_object;
				func_6706();
			}
			if(var_52_cvector == 21662) {
				object var_269_object; object var_270_object;
				var_269_object = var_1_object;
				var_270_object = var_0_object;
				func_6414();
			}
			if(var_52_cvector == 21668) {
				object var_275_object; object var_276_object;
				var_275_object = var_1_object;
				var_276_object = var_0_object;
				func_6577();
				object var_291_object = var_1_object;
				func_6604(var_0_object);
			}
			if(var_52_cvector == 21672) {
				object var_319_object; object var_320_object;
				var_319_object = var_1_object;
				var_320_object = var_0_object;
				func_6577();
				object var_321_object = var_1_object;
				func_6604(var_0_object);
			}
			if(var_51_bool == 20972) {
				bool var_325_bool;
				func_7123(var_1_object);
				if(var_325_bool != 0) {
					func_2842(var_52_cvector, "Neutral");
					var_0_object->SetMessage(519812); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(519813, 20974, 20973); //@t
					var_0_object->AddReply(527076, 28374, 28373); //@t
					var_0_object->AddReply(519816, -1, 20976); //@t
					return 0;
				}
				bool var_353_bool;
				func_7135(var_1_object);
				if(var_353_bool != 0) {
					object var_359_object; object var_360_object;
					var_359_object = var_1_object;
					var_360_object = var_0_object;
					func_6371();
					func_2842(var_52_cvector, "Neutral");
					var_0_object->SetMessage(519851); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527084, 28383, 28382); //@t
					return 0;
				}
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519817); //@t
				var_0_object->ClearReplies(); //@t
				bool var_370_bool;
				func_7147(var_1_object);
				if(var_370_bool != 0)
					var_0_object->AddReply(519818, 20979, 20978); //@t
				bool var_379_bool;
				func_7159(var_1_object);
				if(var_379_bool != 0)
					var_0_object->AddReply(519830, 20991, 20990); //@t
				bool var_388_bool;
				func_7171(var_1_object);
				if(var_388_bool != 0)
					var_0_object->AddReply(520449, 21663, 21662); //@t
				var_0_object->AddReply(519850, -1, 21011); //@t
				return 0;
			}
			if(var_51_bool == 21663) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520451, 21665, 21664); //@t
				return 0;
			}
			if(var_51_bool == 21665) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520453, 21667, 21666); //@t
				var_0_object->AddReply(520458, -1, 21672); //@t
				return 0;
			}
			if(var_51_bool == 21667) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520455, -1, 21668); //@t
				return 0;
			}
			if(var_51_bool == 20991) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519832, 20993, 20992); //@t
				var_0_object->AddReply(519846, 21007, 21006); //@t
				return 0;
			}
			if(var_51_bool == 21007) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519848, 20999, 21008); //@t
				var_0_object->AddReply(519849, 20999, 21010); //@t
				return 0;
			}
			if(var_51_bool == 20993) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519834, 20995, 20994); //@t
				return 0;
			}
			if(var_51_bool == 20995) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519836, 20997, 20996); //@t
				return 0;
			}
			if(var_51_bool == 20997) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519838, 20999, 20998); //@t
				var_0_object->AddReply(519845, 20999, 21005); //@t
				return 0;
			}
			if(var_51_bool == 20999) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519839); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519840, 21001, 21000); //@t
				var_0_object->AddReply(519844, -1, 21004); //@t
				return 0;
			}
			if(var_51_bool == 21001) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519842, -1, 21002); //@t
				var_0_object->AddReply(519843, -1, 21003); //@t
				return 0;
			}
			if(var_51_bool == 20979) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519820, 20981, 20980); //@t
				return 0;
			}
			if(var_51_bool == 20981) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519822, 20983, 20982); //@t
				return 0;
			}
			if(var_51_bool == 20983) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519824, 20985, 20984); //@t
				var_0_object->AddReply(519829, -1, 20989); //@t
				return 0;
			}
			if(var_51_bool == 20985) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519826, 20987, 20986); //@t
				return 0;
			}
			if(var_51_bool == 20987) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519828, -1, 20988); //@t
				var_0_object->AddReply(527075, -1, 28372); //@t
				return 0;
			}
			if(var_51_bool == 28383) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527085); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527086, 28385, 28384); //@t
				return 0;
			}
			if(var_51_bool == 28385) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527088, 21014, 28386); //@t
				return 0;
			}
			if(var_51_bool == 21014) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519854, 21016, 21015); //@t
				var_0_object->AddReply(519871, 21016, 21033); //@t
				return 0;
			}
			if(var_51_bool == 21016) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519855); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519856, 21018, 21017); //@t
				return 0;
			}
			if(var_51_bool == 21018) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519858, 21020, 21019); //@t
				var_0_object->AddReply(527143, 28443, 28442); //@t
				return 0;
			}
			if(var_51_bool == 28443) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527144); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527145, 21020, 28444); //@t
				return 0;
			}
			if(var_51_bool == 21020) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519859); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519860, 21022, 21021); //@t
				var_0_object->AddReply(519866, 21028, 21027); //@t
				var_0_object->AddReply(519870, -1, 21032); //@t
				return 0;
			}
			if(var_51_bool == 21028) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519868, -1, 21029); //@t
				var_0_object->AddReply(519869, 21025, 21030); //@t
				return 0;
			}
			if(var_51_bool == 21022) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519861); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519862, -1, 21023); //@t
				var_0_object->AddReply(519863, 21025, 21024); //@t
				return 0;
			}
			if(var_51_bool == 21025) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519864); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519865, -1, 21026); //@t
				return 0;
			}
			if(var_51_bool == 28374) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527078, -1, 28375); //@t
				return 0;
			}
			if(var_51_bool == 20974) {
				func_2842(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519815, -1, 20975); //@t
				return 0;
			}
			var_3_string = true;
			bool var_631_bool;
			func_6353(var_631_bool);
			if(var_631_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb31";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_51_bool == 28309) {
				func_3879(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527024, 21951, 28310); //@t
				var_0_object->AddReply(527025, 21951, 28311); //@t
				return 0;
			}
			if(var_51_bool == 21951) {
				func_3879(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520740); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520741, 21953, 21952); //@t
				var_0_object->AddReply(520748, 21955, 21960); //@t
				return 0;
			}
			if(var_51_bool == 21953) {
				func_3879(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520742); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520743, 21955, 21954); //@t
				var_0_object->AddReply(520747, 21955, 21958); //@t
				return 0;
			}
			if(var_51_bool == 21955) {
				func_3879(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520745, -1, 21956); //@t
				var_0_object->AddReply(520746, -1, 21957); //@t
				return 0;
			}
			var_3_string = true;
			bool var_106_bool;
			func_6353(var_106_bool);
			if(var_106_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf3e";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_52_cvector == 22569) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6432();
			}
			if(var_52_cvector == 22571) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_6438();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_6732();
			}
			if(var_51_bool == 22566) {
				bool var_87_bool;
				func_6837(var_1_object);
				if(var_87_bool != 0) {
					object var_95_object; object var_96_object;
					var_95_object = var_1_object;
					var_96_object = var_0_object;
					func_6426();
					func_4195(var_52_cvector, "Neutral");
					var_0_object->SetMessage(521388); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521389, 25279, 22567); //@t
					var_0_object->AddReply(523995, 25286, 25285); //@t
					return 0;
				}
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(521390); //@t
				var_0_object->ClearReplies(); //@t
				bool var_120_bool = false;
				bool var_121_bool;
				func_6825(var_1_object);
				if(var_121_bool != 0) {
					bool var_127_bool;
					func_6849(var_1_object);
					if(var_127_bool != 0)
						var_120_bool = true;
				}
				if(var_120_bool != 0)
					var_0_object->AddReply(521391, 22570, 22569); //@t
				var_0_object->AddReply(521394, -1, 22572); //@t
				return 0;
			}
			if(var_51_bool == 22570) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(521392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521393, -1, 22571); //@t
				return 0;
			}
			if(var_51_bool == 25286) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(523996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523997, 25288, 25287); //@t
				return 0;
			}
			if(var_51_bool == 25288) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(523998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523999, 25279, 25289); //@t
				var_0_object->AddReply(524000, 25279, 25290); //@t
				return 0;
			}
			if(var_51_bool == 25279) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(523989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523990, 25281, 25280); //@t
				return 0;
			}
			if(var_51_bool == 25281) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(523991); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523992, 25283, 25282); //@t
				var_0_object->AddReply(524001, 25294, 25293); //@t
				return 0;
			}
			if(var_51_bool == 25294) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(524002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524003, 25283, 25295); //@t
				var_0_object->AddReply(524004, 25297, 25296); //@t
				return 0;
			}
			if(var_51_bool == 25297) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(524005); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530821, 32132, 32131); //@t
				return 0;
			}
			if(var_51_bool == 32132) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530822); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530823, 25283, 32133); //@t
				return 0;
			}
			if(var_51_bool == 25283) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(523993); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523994, 25299, 25284); //@t
				return 0;
			}
			if(var_51_bool == 25299) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(524006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524007, 25301, 25300); //@t
				return 0;
			}
			if(var_51_bool == 25301) {
				func_4195(var_52_cvector, "Neutral");
				var_0_object->SetMessage(524008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524009, -1, 25302); //@t
				var_0_object->AddReply(524010, -1, 25303); //@t
				var_0_object->AddReply(524011, -1, 25304); //@t
				return 0;
			}
			var_3_string = true;
			bool var_231_bool;
			func_6353(var_231_bool);
			if(var_231_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x107a";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_52_cvector == 32465) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6658();
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_6732();
			}
			if(var_52_cvector == 23102) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_6454();
			}
			if(var_52_cvector == 32866) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_6454();
			}
			if(var_52_cvector == 23651) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_6688();
			}
			if(var_52_cvector == 31814) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_6460();
			}
			if(var_52_cvector == 31818) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_6535();
				object var_156_object = var_1_object;
				func_6555(var_0_object);
			}
			if(var_52_cvector == 32469) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_6658();
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_6732();
			}
			if(var_51_bool == 32462) {
				bool var_190_bool;
				func_7027(var_1_object);
				if(var_190_bool != 0) {
					object var_198_object; object var_199_object;
					var_198_object = var_1_object;
					var_199_object = var_0_object;
					func_6652();
					object var_202_object; object var_203_object;
					var_202_object = var_1_object;
					var_203_object = var_0_object;
					func_6694();
					func_4775(var_52_cvector, "Neutral");
					var_0_object->SetMessage(531154); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531276, 32591, 32590); //@t
					return 0;
				}
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(521924); //@t
				var_0_object->ClearReplies(); //@t
				bool var_224_bool = false;
				bool var_225_bool;
				func_6861(var_1_object);
				if(var_225_bool != 0) {
					bool var_231_bool;
					func_6873(var_1_object);
					if(!var_231_bool) //@nz
						var_224_bool = true;
				}
				if(var_224_bool != 0)
					var_0_object->AddReply(521925, 23656, 23099); //@t
				bool var_241_bool;
				func_7051(var_1_object);
				if(var_241_bool != 0)
					var_0_object->AddReply(522478, 23652, 23651); //@t
				bool var_250_bool = false;
				bool var_251_bool;
				func_6979(var_1_object);
				if(var_251_bool != 0) {
					bool var_257_bool;
					func_6885(var_1_object);
					if(var_257_bool != 0)
						var_250_bool = true;
				}
				if(var_250_bool != 0)
					var_0_object->AddReply(530448, 31815, 31814); //@t
				bool var_266_bool;
				func_7039(var_1_object);
				if(var_266_bool != 0)
					var_0_object->AddReply(531159, 32468, 32467); //@t
				var_0_object->AddReply(521926, -1, 23100); //@t
				var_0_object->AddReply(531282, -1, 32597); //@t
				return 0;
			}
			if(var_51_bool == 32468) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531160); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531161, -1, 32469); //@t
				return 0;
			}
			if(var_51_bool == 31815) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530450, 31817, 31816); //@t
				var_0_object->AddReply(531283, 32601, 32598); //@t
				return 0;
			}
			if(var_51_bool == 32601) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531289, 32603, 32604); //@t
				return 0;
			}
			if(var_51_bool == 31817) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531287, 32603, 32602); //@t
				var_0_object->AddReply(531284, 32600, 32599); //@t
				return 0;
			}
			if(var_51_bool == 32600) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531290, 32603, 32606); //@t
				return 0;
			}
			if(var_51_bool == 32603) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530452, -1, 31818); //@t
				return 0;
			}
			if(var_51_bool == 23652) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522479); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522480, 23654, 23653); //@t
				return 0;
			}
			if(var_51_bool == 23654) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522481); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522482, -1, 23655); //@t
				return 0;
			}
			if(var_51_bool == 23656) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522484, 23658, 23657); //@t
				var_0_object->AddReply(522492, 23666, 23665); //@t
				return 0;
			}
			if(var_51_bool == 23666) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522494, 23658, 23667); //@t
				return 0;
			}
			if(var_51_bool == 23658) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522485); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522486, 23660, 23659); //@t
				var_0_object->AddReply(522495, 23670, 23669); //@t
				return 0;
			}
			if(var_51_bool == 23670) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522497, 23662, 23671); //@t
				return 0;
			}
			if(var_51_bool == 23660) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522488, 23662, 23661); //@t
				return 0;
			}
			if(var_51_bool == 23662) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522489); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522490, 23664, 23663); //@t
				var_0_object->AddReply(531512, -1, 32866); //@t
				return 0;
			}
			if(var_51_bool == 23664) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522491); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521928, -1, 23102); //@t
				return 0;
			}
			if(var_51_bool == 32591) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531278, 32593, 32592); //@t
				var_0_object->AddReply(531281, 32464, 32595); //@t
				return 0;
			}
			if(var_51_bool == 32593) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531279); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531155, 32464, 32463); //@t
				var_0_object->AddReply(531280, -1, 32594); //@t
				return 0;
			}
			if(var_51_bool == 32464) {
				func_4775(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531156); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531157, -1, 32465); //@t
				var_0_object->AddReply(531158, -1, 32466); //@t
				return 0;
			}
			var_3_string = true;
			bool var_431_bool;
			func_6353(var_431_bool);
			if(var_431_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x12be";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6155();
			if(var_51_int == 42560) {
				func_5502(var_52_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_6353(var_76_bool);
			if(var_76_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1595";
	
	}

}


maintask task_21
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
	{
		var_51_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_5573(var_50_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, int var_51_int)
	{
		if(var_51_int == 10) {
			func_5644();
			bool var_55_bool = false;
			bool var_56_bool;
			func_5899(var_56_bool);
			if(var_56_bool != 0) {
				bool var_59_bool;
				func_5613(var_59_bool);
				if(var_59_bool != 0)
					var_55_bool = true;
			}
			if(var_55_bool != 0) {
				bool var_76_bool;
				func_5593(var_76_bool);
				if(var_76_bool != 0) {
					bool var_95_bool; object var_96_object;
					object var_97_object;
					func_6162(var_97_object);
					var_97_object = var_96_object;
					func_6047(var_95_bool, var_96_object);
				}
			} else {
				func_5608(var_51_int);
				func_5635();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
	{
		func_5826();
		func_5644();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
		{
		@StopGroup0();
		func_5644();
		func_6127("Neutral");
		func_5635();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, bool var_51_bool)
	{
		if(var_51_bool != 0)
			func_5635();
		else
			func_6127("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, object var_51_object)
	{
		bool var_53_bool;
		@IsOverrideActive(var_53_bool);
		if(!var_53_bool) { //@nz
			disable OnUse;
			func_5826();
			bool var_55_bool; object var_56_object;
			var_51_object = var_56_object;
			func_5890(var_55_bool, var_56_object);
			enable OnUse;
			object var_69_object;
			var_51_object = var_69_object;
			func_7544(var_53_bool, var_69_object);
			func_6127("Neutral");
			func_5644();
			func_5635();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_56_bool;
	func_5899(var_56_bool);
	if(!var_56_bool) goto Label_0; //@nz
}


void func_6658(void)
{
	@SetVariable("b10q03", 1);
	object var_63_object;
	func_7403(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	float var_74_float;
	func_6293(var_74_float);
	var_60_object->AddMark("b10q03KapellaGotoMishka", "pt_map_mishka", 0, 531261, var_74_float);
	func_7206();
	func_7219();
	object var_108_object;
	func_6194(var_108_object, "quest_b10_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_7171(bool var_390_bool)
{
	int var_392_int;
	func_6189(var_392_int, "oob1Kapella4");
	if(var_392_int == 0) {
		var_390_bool = true;
		return 0;
	}
	var_390_bool = false;
}


void func_5635(void)
{
	float var_66_float;
	@rand(var_66_float, 8, 16);
	@SetTimer(10, var_66_float);
}


// @pe
void func_2054(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_497_object, object var_498_object)
{
	var_0_object = var_498_object;
	var_1_object = var_497_object;
	var_3_string = false;
	if(1 != 0) {
		object var_504_object; object var_505_object;
		var_504_object = var_1_object;
		var_505_object = var_0_object;
		func_6571();
		func_2181(var_498_object, "Neutral");
		var_0_object->SetMessage(518365); //@t
		var_0_object->ClearReplies(); //@t
		bool var_517_bool;
		func_7087(var_1_object);
		if(var_517_bool != 0)
			var_0_object->AddReply(518366, 19481, 19479); //@t
		bool var_526_bool = false;
		bool var_527_bool;
		func_7087(var_1_object);
		if(!var_527_bool) { //@nz
			bool var_530_bool;
			func_7075(var_1_object);
			if(var_530_bool != 0)
				var_526_bool = true;
		}
		if(var_526_bool != 0)
			var_0_object->AddReply(518371, 19485, 19484); //@t
		bool var_539_bool = false;
		bool var_540_bool;
		func_7099(var_1_object);
		if(var_540_bool != 0) {
			bool var_546_bool;
			func_7111(var_1_object);
			if(var_546_bool != 0)
				var_539_bool = true;
		}
		if(var_539_bool != 0)
			var_0_object->AddReply(518374, 19488, 19487); //@t
		bool var_555_bool = false;
		bool var_556_bool;
		func_7099(var_1_object);
		if(var_556_bool != 0) {
			bool var_558_bool;
			func_7111(var_1_object);
			if(!var_558_bool) //@nz
				var_555_bool = true;
		}
		if(var_555_bool != 0)
			var_0_object->AddReply(518377, 19491, 19490); //@t
		var_0_object->AddReply(518367, -1, 19480); //@t
		goto Label_2151;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x80a";
	}
Label_2151:
	bool var_567_bool;
	func_6353(var_567_bool);
	if(var_567_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6127(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2180;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2180:
		return 0;

	}
	
}


void func_6155(void)
{
	bool var_54_bool;
	func_6353(var_54_bool);
	if(var_54_bool != 0)
		@lshStopSpeech();
}


void func_5644(void)
{
	@KillTimer(10);
}


void func_13(object var_0_object, int var_668_int, object var_669_object)
{
	var_0_object = var_669_object;
	bool var_679_bool; object var_680_object;
	object var_681_object;
	func_6162(var_681_object);
	var_681_object = var_680_object;
	func_5989(var_679_bool, var_680_object);
	bool var_682_bool; object var_683_object;
	var_669_object = var_683_object;
	func_5904(var_682_bool, var_683_object, 70.0);
	if(!var_682_bool) { //@nz
		var_668_int = -2;
		return 8;
	}
	object var_675_object;
	@CreateDialog(var_675_object);
	int var_686_int;
	func_6347(var_686_int);
	var_675_object->SetNPCName(var_686_int);
	int var_687_int;
	func_6345(var_687_int);
	var_675_object->SetNPCDescription(var_687_int);
	string var_688_string;
	func_6349(var_688_string);
	var_675_object->SetPhoto(var_688_string);
	string var_689_string;
	func_6351(var_689_string);
	var_675_object->SetPhoto2(var_689_string);
	int var_690_int;
	func_7453(var_690_int);
	var_675_object->SetPlayerName(var_690_int);
	bool var_676_bool;
	@IsOverrideActive(var_676_bool);
	if(var_676_bool != 0) {
		var_668_int = -2;
		return 8;
	}
	@DoDialog(var_675_object);
	object var_692_object; object var_693_object;
	var_669_object = var_692_object;
	var_675_object = var_693_object;
	TaskCall(2);
	func_94(var_694_object, var_695_object, var_696_string, var_697_bool, var_692_object, var_693_object);
	TaskReturn();
	bool var_678_bool;
	var_675_object->IsDialogEnd(var_678_bool);
	
	for(;;) {
		var_803_bool = !var_678_bool; //@nz
		if(var_803_bool == 0) goto Label_83;
		@sync();
		var_675_object->IsDialogEnd(var_678_bool);
	}
	
Label_83:
	object var_804_object;
	var_669_object = var_804_object;
	func_5972();
	@StopDialog(var_675_object);
	var_675_object->GetReturnValue(-1);
	int var_677_int = var_668_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7183(bool var_449_bool)
{
	int var_451_int;
	func_6189(var_451_int, "oob2Kapella1");
	if(var_451_int == 0) {
		var_449_bool = true;
		return 0;
	}
	var_449_bool = false;
}


void func_6162(object var_85_object)
{
	object var_87_object;
	@self(var_87_object);
	var_87_object = var_85_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4628(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_831_object, object var_832_object)
{
	var_0_object = var_832_object;
	var_1_object = var_831_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_838_bool;
		func_7027(var_1_object);
		if(var_838_bool != 0) {
			object var_844_object; object var_845_object;
			var_844_object = var_1_object;
			var_845_object = var_0_object;
			func_6652();
			object var_848_object; object var_849_object;
			var_848_object = var_1_object;
			var_849_object = var_0_object;
			func_6694();
			func_4775(var_832_object, "Neutral");
			var_0_object->SetMessage(531154); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531276, 32591, 32590); //@t
		} else {
					func_4775(var_832_object, "Neutral");
					var_0_object->SetMessage(521924); //@t
					var_0_object->ClearReplies(); //@t
					bool var_874_bool = false;
					bool var_875_bool;
					func_6861(var_1_object);
					if(var_875_bool != 0) {
						bool var_881_bool;
						func_6873(var_1_object);
						if(!var_881_bool) //@nz
							var_874_bool = true;
					}
					if(var_874_bool != 0)
						var_0_object->AddReply(521925, 23656, 23099); //@t
					bool var_891_bool;
					func_7051(var_1_object);
					if(var_891_bool != 0)
						var_0_object->AddReply(522478, 23652, 23651); //@t
					bool var_900_bool = false;
					bool var_901_bool;
					func_6979(var_1_object);
					if(var_901_bool != 0) {
						bool var_907_bool;
						func_6885(var_1_object);
						if(var_907_bool != 0)
							var_900_bool = true;
					}
					if(var_900_bool != 0)
						var_0_object->AddReply(530448, 31815, 31814); //@t
					bool var_916_bool;
					func_7039(var_1_object);
					if(var_916_bool != 0)
						var_0_object->AddReply(531159, 32468, 32467); //@t
					var_0_object->AddReply(521926, -1, 23100); //@t
					var_0_object->AddReply(531282, -1, 32597); //@t
		}
	}
	for(;;) {
		bool var_864_bool;
		func_6353(var_864_bool);
		if(var_864_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6127(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4774;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4774:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1218";


void func_6168(cvector var_205_cvector, cvector var_206_cvector)
{
	float var_209_float = sqrt(var_206_cvector | var_206_cvector);
	if(var_209_float < 0.000001)
		var_205_cvector = [0.0, 0.0, 0.0];
	var_205_cvector = var_206_cvector / var_209_float;
}


// @pe
void func_7195(bool var_717_bool)
{
	int var_719_int;
	func_6307(var_719_int);
	if(var_719_int >= 18)
		var_717_bool = true;
	var_717_bool = false;
}


// @pe
void func_6688(void)
{
	@SetVariable("oob10Kapella3", 1);
}


// @pe
void func_6178(float var_135_float, float var_136_float, float var_137_float, float var_138_float)
{
	if(var_136_float < var_137_float) {
		var_137_float = var_135_float;
		return 0;
	}
	if(var_136_float > var_138_float) {
		var_138_float = var_135_float;
		return 0;
	}
	var_136_float = var_135_float;
}


// @pe
void func_6694(void)
{
	@SetVariable("b10KapellaVisit", 1);
}


void func_7206(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 594, 2, 531145);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_7375(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6700(void)
{
	@SetVariable("oob12Kapella1", 1);
}


void func_6189(int var_323_int, string var_324_string)
{
	int var_326_int;
	@GetVariable(var_324_string, var_326_int);
	var_326_int = var_323_int;
}


// @pe
void func_6706(void)
{
	int var_226_int;
	func_6189(var_226_int, "b1q01");
	if(var_226_int == 1)
		func_7271();
}


void func_6194(object var_108_object, string var_109_string)
{
	object var_112_object;
	@GetMainOutdoorScene(var_112_object);
	object var_113_object;
	@AddBlankActor(var_113_object, var_112_object, var_109_string, (var_109_string + ".bin"));
	var_113_object = var_108_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_7219(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 595, 2, 531146);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_7375(var_105_bool, var_106_object, 594);
}
EMIT "Stack[-1] = 0";


void func_1593(object var_0_object, int var_409_int, object var_410_object)
{
	var_0_object = var_410_object;
	bool var_420_bool; object var_421_object;
	object var_422_object;
	func_6162(var_422_object);
	var_422_object = var_421_object;
	func_5989(var_420_bool, var_421_object);
	bool var_423_bool; object var_424_object;
	var_410_object = var_424_object;
	func_5904(var_423_bool, var_424_object, 70.0);
	if(!var_423_bool) { //@nz
		var_409_int = -2;
		return 8;
	}
	object var_416_object;
	@CreateDialog(var_416_object);
	int var_427_int;
	func_6347(var_427_int);
	var_416_object->SetNPCName(var_427_int);
	int var_428_int;
	func_6345(var_428_int);
	var_416_object->SetNPCDescription(var_428_int);
	string var_429_string;
	func_6349(var_429_string);
	var_416_object->SetPhoto(var_429_string);
	string var_430_string;
	func_6351(var_430_string);
	var_416_object->SetPhoto2(var_430_string);
	int var_431_int;
	func_7453(var_431_int);
	var_416_object->SetPlayerName(var_431_int);
	bool var_417_bool;
	@IsOverrideActive(var_417_bool);
	if(var_417_bool != 0) {
		var_409_int = -2;
		return 8;
	}
	@DoDialog(var_416_object);
	object var_433_object; object var_434_object;
	var_410_object = var_433_object;
	var_416_object = var_434_object;
	TaskCall(8);
	func_1674(var_435_object, var_436_object, var_437_string, var_438_bool, var_433_object, var_434_object);
	TaskReturn();
	bool var_419_bool;
	var_416_object->IsDialogEnd(var_419_bool);
	
	for(;;) {
		var_469_bool = !var_419_bool; //@nz
		if(var_469_bool == 0) goto Label_1663;
		@sync();
		var_416_object->IsDialogEnd(var_419_bool);
	}
	
Label_1663:
	object var_470_object;
	var_410_object = var_470_object;
	func_5972();
	@StopDialog(var_416_object);
	var_416_object->GetReturnValue(-1);
	int var_418_int = var_409_int;
}
EMIT "Stack[-4] = 0";


void func_6205(int var_189_int, int var_190_int)
{
	object var_192_object;
	@CreateIntVector(var_192_object);
	var_192_object->add(var_189_int);
	var_192_object->add(var_190_int);
	@SendWorldWndMessage(3, var_192_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6718(object var_104_object)
{
	object var_107_object;
	var_104_object = var_107_object;
	bool var_106_bool;
	func_6236(var_106_bool, var_107_object, -0.02);
}


void func_2623(object var_0_object, int var_290_int, object var_291_object)
{
	var_0_object = var_291_object;
	bool var_301_bool; object var_302_object;
	object var_303_object;
	func_6162(var_303_object);
	var_303_object = var_302_object;
	func_5989(var_301_bool, var_302_object);
	bool var_304_bool; object var_305_object;
	var_291_object = var_305_object;
	func_5904(var_304_bool, var_305_object, 70.0);
	if(!var_304_bool) { //@nz
		var_290_int = -2;
		return 8;
	}
	object var_297_object;
	@CreateDialog(var_297_object);
	int var_308_int;
	func_6347(var_308_int);
	var_297_object->SetNPCName(var_308_int);
	int var_309_int;
	func_6345(var_309_int);
	var_297_object->SetNPCDescription(var_309_int);
	string var_310_string;
	func_6349(var_310_string);
	var_297_object->SetPhoto(var_310_string);
	string var_311_string;
	func_6351(var_311_string);
	var_297_object->SetPhoto2(var_311_string);
	int var_312_int;
	func_7453(var_312_int);
	var_297_object->SetPlayerName(var_312_int);
	bool var_298_bool;
	@IsOverrideActive(var_298_bool);
	if(var_298_bool != 0) {
		var_290_int = -2;
		return 8;
	}
	@DoDialog(var_297_object);
	object var_314_object; object var_315_object;
	var_291_object = var_314_object;
	var_297_object = var_315_object;
	TaskCall(12);
	func_2704(var_316_object, var_317_object, var_318_string, var_319_bool, var_314_object, var_315_object);
	TaskReturn();
	bool var_300_bool;
	var_297_object->IsDialogEnd(var_300_bool);
	
	for(;;) {
		var_402_bool = !var_300_bool; //@nz
		if(var_402_bool == 0) goto Label_2693;
		@sync();
		var_297_object->IsDialogEnd(var_300_bool);
	}
	
Label_2693:
	object var_403_object;
	var_291_object = var_403_object;
	func_5972();
	@StopDialog(var_297_object);
	var_297_object->GetReturnValue(-1);
	int var_299_int = var_290_int;
}
EMIT "Stack[-4] = 0";


void func_7232(void)
{
	object var_62_object;
	@CreateDiaryEntry(var_62_object, 598, 2, 531149);
	bool var_66_bool; object var_67_object;
	var_62_object = var_67_object;
	func_7375(var_66_bool, var_67_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6725(object var_180_object)
{
	object var_183_object;
	var_180_object = var_183_object;
	bool var_182_bool;
	func_6236(var_182_bool, var_183_object, 0.02);
}


void func_6217(object var_176_object, int var_177_int)
{
	int var_179_int;
	object var_180_object;
	var_176_object = var_180_object;
	int var_182_int;
	func_5873(var_180_object, "money", var_182_int);
	if(var_182_int > 0) {
		@GetInvItemByName(var_179_int, "Money");
		int var_189_int; int var_190_int;
		var_179_int = var_189_int;
		var_177_int = var_190_int;
		func_6205(var_189_int, var_190_int);
	}
}


// @pe
void func_6732(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_7245(void)
{
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 602, 2, 531153);
	bool var_113_bool; object var_114_object;
	var_109_object = var_114_object;
	func_7375(var_113_bool, var_114_object, 598);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6738(object var_115_object)
{
	object var_119_object;
	func_7403(var_119_object);
	object var_116_object;
	var_119_object = var_116_object;
	func_7420(var_116_object, "pt_map_spi4ka", (float)2);
	object var_139_object;
	func_7403(var_139_object);
	var_115_object->ShowMap(var_139_object);
}


void func_7258(void)
{
	object var_85_object;
	@CreateDiaryEntry(var_85_object, 599, 2, 531150);
	bool var_89_bool; object var_90_object;
	var_85_object = var_90_object;
	func_7375(var_89_bool, var_90_object, 598);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6236(bool var_106_bool, object var_107_object, float var_108_float)
{
	if(!var_107_object) { //@nz
		var_106_bool = false;
		return 0;
	}
	if(var_108_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_108_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_113_float;
		var_108_float = var_113_float;
		func_6271(var_113_float);
		bool var_117_bool; object var_118_object; float var_120_float;
		var_107_object = var_118_object;
		var_108_float = var_120_float;
		func_5851(var_117_bool, var_118_object, "reputation", var_120_float, (float)0, (float)1);
		var_106_bool = true;
		return 0;

	}
	
	var_106_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_692_object, object var_693_object)
{
	var_0_object = var_693_object;
	var_1_object = var_692_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_699_bool = false;
		bool var_700_bool = false;
		bool var_701_bool;
		func_6897(var_1_object);
		if(!var_701_bool) { //@nz
			bool var_708_bool;
			func_6933(var_1_object);
			if(!var_708_bool) //@nz
				var_700_bool = true;
		}
		if(var_700_bool != 0) {
			bool var_715_bool;
			func_6969(var_715_bool, var_1_object);
			if(var_715_bool != 0)
				var_699_bool = true;
		}
		if(var_699_bool != 0) {
			func_269(var_693_object, "Neutral");
			var_0_object->SetMessage(530291); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531185, -1, 32490); //@t
			var_0_object->AddReply(530292, -1, 31680); //@t
		} else {
					bool var_749_bool = false;
					bool var_750_bool;
					func_6909(var_1_object);
					if(var_750_bool != 0) {
						bool var_756_bool;
						func_6969(var_756_bool, var_1_object);
						if(var_756_bool != 0)
							var_749_bool = true;
					}
					if(var_749_bool == 0) goto Label_184;
					object var_758_object; object var_759_object;
					var_758_object = var_1_object;
					var_759_object = var_0_object;
					func_6482();
					func_269(var_693_object, "Neutral");
					var_0_object->SetMessage(530293); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531188, 32494, 32493); //@t
					var_0_object->AddReply(531193, 32496, 32498); //@t
		}
	}
Label_239:
	for(;;) {
		bool var_741_bool;
		func_6353(var_741_bool);
		if(var_741_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6127(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_268;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_268:
			return 0;

		}

	}
	
Label_184:
	func_269(var_693_object, "Neutral");
	var_0_object->SetMessage(530302); //@t
	var_0_object->ClearReplies(); //@t
	bool var_772_bool = false;
	bool var_773_bool;
	func_6921(var_1_object);
	if(var_773_bool != 0) {
		bool var_779_bool;
		func_6969(var_779_bool, var_1_object);
		if(var_779_bool != 0)
			var_772_bool = true;
	}
	if(var_772_bool != 0)
		var_0_object->AddReply(530303, 31692, 31691); //@t
	bool var_784_bool = false;
	bool var_785_bool;
	func_6945(var_1_object);
	if(var_785_bool != 0) {
		bool var_791_bool;
		func_6957(var_1_object);
		if(var_791_bool != 0)
			var_784_bool = true;
	}
	if(var_784_bool != 0)
		var_0_object->AddReply(530333, 31721, 31720); //@t
	var_0_object->AddReply(530306, -1, 31694); //@t
	goto Label_239;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_6754(object var_173_object)
{
	@Trace("money3000 is given");
	object var_176_object;
	var_173_object = var_176_object;
	func_6217(var_176_object, 3000);
}


// @pe
void func_4195(object var_2_object, string var_620_string)
{
	bool var_621_bool;
	func_6353(var_621_bool);
	if(!var_621_bool) //@nz
		return 0;
	if(var_620_string == var_2_object)
		return 0;
	string var_624_string; bool var_625_bool;
	var_620_string = var_624_string;
	if(var_620_string == "")
		var_625_bool = false;
	else
		var_625_bool = true;
	func_6134(var_624_string, var_625_bool);
	var_2_object = var_620_string;
	
}


void func_7271(void)
{
	object var_233_object;
	@CreateDiaryEntry(var_233_object, 717, 1, 538493);
	bool var_237_bool; object var_238_object;
	var_233_object = var_238_object;
	func_7375(var_237_bool, var_238_object, 242);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6764(void)
{
	@SetVariable("resque_list", 1);
	func_7540();
}


void func_7284(void)
{
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 227, 2, 519655);
	bool var_86_bool; object var_87_object;
	var_82_object = var_87_object;
	func_7375(var_86_bool, var_87_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6773(object var_96_object)
{
	var_96_object->SetReturnValue(2000);
}


void func_6778(void)
{
	object var_67_object;
	func_7403(var_67_object);
	object var_66_object;
	var_67_object = var_66_object;
	float var_78_float;
	func_6293(var_78_float);
	var_66_object->AddMark("b3q02KapellaGotoNotkin", "pt_map_notkin", 0, 519652, var_78_float);
	func_7284();
	func_7310();
	object var_112_object;
	func_6194(var_112_object, "quest_b3_02");
	bool var_120_bool;
	func_6281(var_120_bool, "quest_b3_02", "place_grabitel1");
}
EMIT "Stack[-1] = 0";


void func_5755(void)
{
	bool var_78_bool; int var_79_int; int var_80_int; bool var_81_bool;
	@WaitForAnimEnd();
	bool var_82_bool;
	func_5899(var_82_bool);
	if(!var_82_bool) //@nz
		return 12;
	int var_84_int;
	func_6328(var_84_int);
	int var_76_int;
	var_84_int = var_76_int;
	int var_77_int = 0;
	
	for(;;) {
		bool var_97_bool = false;
		if(var_77_int < 5) {
			bool var_100_bool;
			func_5899(var_100_bool);
			if(var_100_bool != 0)
				var_97_bool = true;
		}
		if(var_97_bool != 0) {
			if(!var_76_int) { //@nz
				@Sleep(3, var_78_bool);
				if(!var_78_bool) { //@nz
				} else {
			} else {
			@irand(var_79_int, var_76_int);
			@irand(var_80_int, 5);
			if(var_80_int != 0)
				var_79_int = 0;
			string var_111_string; int var_112_int;
			var_79_int = var_112_int;
			func_6321(var_111_string, var_112_int);
			@PlayAnimation("all", var_111_string);
			@WaitForAnimEnd(var_81_bool);
			var_113_bool = !var_81_bool; //@nz
			if(var_113_bool == 0) goto Label_5810;
			goto Label_5821;
			}
				Label_5810:
					bool var_104_bool;
					func_5824(var_104_bool);
					var_105_bool = !var_104_bool; //@nz
					if(var_105_bool == 0) goto Label_5816;
			}
		}
	Label_5821:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_5816:
		@ResetAAS();
		var_77_int += 1;
	}
	
}


void func_6271(float var_113_float)
{
	object var_115_object;
	@CreateFloatVector(var_115_object);
	var_115_object->add(var_113_float);
	@SendWorldWndMessage(16, var_115_object);
}
EMIT "Stack[-1] = 0";


void func_7297(void)
{
	object var_163_object;
	@CreateDiaryEntry(var_163_object, 233, 2, 519661);
	bool var_167_bool; object var_168_object;
	var_163_object = var_168_object;
	func_7375(var_167_bool, var_168_object, 227);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2181(object var_2_object, string var_508_string)
{
	bool var_509_bool;
	func_6353(var_509_bool);
	if(!var_509_bool) //@nz
		return 0;
	if(var_508_string == var_2_object)
		return 0;
	string var_512_string; bool var_513_bool;
	var_508_string = var_512_string;
	if(var_508_string == "")
		var_513_bool = false;
	else
		var_513_bool = true;
	func_6134(var_512_string, var_513_bool);
	var_2_object = var_508_string;
	
}


void func_6281(bool var_120_bool, string var_121_string, string var_122_string)
{
	object var_124_object;
	@FindActor(var_124_object, var_121_string);
	if(var_124_object == null)
		var_120_bool = false;
	@Trigger(var_124_object, var_122_string);
	var_120_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1674(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_433_object, object var_434_object)
{
	var_0_object = var_434_object;
	var_3_string = false;
	if(1 != 0) {
		func_1737(var_434_object, "Neutral");
		var_0_object->SetMessage(518275); //@t
		var_0_object->ClearReplies(); //@t
		bool var_449_bool;
		func_7183(var_433_object);
		if(var_449_bool != 0)
			var_0_object->AddReply(519482, 20655, 20654); //@t
		var_0_object->AddReply(518276, -1, 19385); //@t
		goto Label_1707;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x68e";
	}
Label_1707:
	bool var_461_bool;
	func_6353(var_461_bool);
	if(var_461_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6127(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1736;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1736:
		return 0;

	}
	
}


void func_7310(void)
{
	object var_105_object;
	@CreateDiaryEntry(var_105_object, 228, 2, 519656);
	bool var_109_bool; object var_110_object;
	var_105_object = var_110_object;
	func_7375(var_109_bool, var_110_object, 227);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2704(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_314_object, object var_315_object)
{
	var_0_object = var_315_object;
	var_1_object = var_314_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_321_bool;
		func_7123(var_1_object);
		if(var_321_bool != 0) {
			func_2842(var_315_object, "Neutral");
			var_0_object->SetMessage(519812); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(519813, 20974, 20973); //@t
			var_0_object->AddReply(527076, 28374, 28373); //@t
			var_0_object->AddReply(519816, -1, 20976); //@t
		} else {
					bool var_355_bool;
					func_7135(var_1_object);
					if(var_355_bool == 0) goto Label_2765;
					object var_361_object; object var_362_object;
					var_361_object = var_1_object;
					var_362_object = var_0_object;
					func_6371();
					func_2842(var_315_object, "Neutral");
					var_0_object->SetMessage(519851); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527084, 28383, 28382); //@t
		}
	}
Label_2812:
	for(;;) {
		bool var_347_bool;
		func_6353(var_347_bool);
		if(var_347_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6127(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2841;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2841:
			return 0;

		}

	}
	
Label_2765:
	func_2842(var_315_object, "Neutral");
	var_0_object->SetMessage(519817); //@t
	var_0_object->ClearReplies(); //@t
	bool var_372_bool;
	func_7147(var_1_object);
	if(var_372_bool != 0)
		var_0_object->AddReply(519818, 20979, 20978); //@t
	bool var_381_bool;
	func_7159(var_1_object);
	if(var_381_bool != 0)
		var_0_object->AddReply(519830, 20991, 20990); //@t
	bool var_390_bool;
	func_7171(var_1_object);
	if(var_390_bool != 0)
		var_0_object->AddReply(520449, 21663, 21662); //@t
	var_0_object->AddReply(519850, -1, 21011); //@t
	goto Label_2812;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xa94";


void func_6293(float var_74_float)
{
	float var_76_float;
	@GetGameTime(var_76_float);
	var_76_float = var_74_float;
}


// @pe
void func_6809(void)
{
	@SetVariable("oob3Kapella1", 1);
}


void func_6298(int var_138_int)
{
	float var_140_float;
	@GetGameTime(var_140_float);
	var_138_int = 1 + (var_140_float / 24);
}


void func_7323(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 532, 2, 530344);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_7375(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


void func_3740(object var_0_object, int var_72_int, object var_73_object)
{
	var_0_object = var_73_object;
	bool var_83_bool; object var_84_object;
	object var_85_object;
	func_6162(var_85_object);
	var_85_object = var_84_object;
	func_5989(var_83_bool, var_84_object);
	bool var_178_bool; object var_179_object;
	var_73_object = var_179_object;
	func_5904(var_178_bool, var_179_object, 70.0);
	if(!var_178_bool) { //@nz
		var_72_int = -2;
		return 8;
	}
	object var_79_object;
	@CreateDialog(var_79_object);
	int var_225_int;
	func_6347(var_225_int);
	var_79_object->SetNPCName(var_225_int);
	int var_226_int;
	func_6345(var_226_int);
	var_79_object->SetNPCDescription(var_226_int);
	string var_227_string;
	func_6349(var_227_string);
	var_79_object->SetPhoto(var_227_string);
	string var_228_string;
	func_6351(var_228_string);
	var_79_object->SetPhoto2(var_228_string);
	int var_229_int;
	func_7453(var_229_int);
	var_79_object->SetPlayerName(var_229_int);
	bool var_80_bool;
	@IsOverrideActive(var_80_bool);
	if(var_80_bool != 0) {
		var_72_int = -2;
		return 8;
	}
	@DoDialog(var_79_object);
	object var_238_object; object var_239_object;
	var_73_object = var_238_object;
	var_79_object = var_239_object;
	TaskCall(14);
	func_3821(var_240_object, var_241_object, var_242_string, var_243_bool, var_238_object, var_239_object);
	TaskReturn();
	bool var_82_bool;
	var_79_object->IsDialogEnd(var_82_bool);
	
	for(;;) {
		var_277_bool = !var_82_bool; //@nz
		if(var_277_bool == 0) goto Label_3810;
		@sync();
		var_79_object->IsDialogEnd(var_82_bool);
	}
	
Label_3810:
	object var_278_object;
	var_73_object = var_278_object;
	func_5972();
	@StopDialog(var_79_object);
	var_79_object->GetReturnValue(-1);
	int var_81_int = var_72_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6815(void)
{
	func_7297();
	bool var_170_bool;
	func_6281(var_170_bool, "quest_b3_02", "completed");
}


void func_6307(int var_719_int)
{
	float var_721_float;
	@GetGameTime(var_721_float);
	int var_722_int;
	var_721_float = var_722_int;
	var_719_int = var_722_int % 24;
}


// @pe
void func_4775(object var_2_object, string var_852_string)
{
	bool var_853_bool;
	func_6353(var_853_bool);
	if(!var_853_bool) //@nz
		return 0;
	if(var_852_string == var_2_object)
		return 0;
	string var_856_string; bool var_857_bool;
	var_852_string = var_856_string;
	if(var_852_string == "")
		var_857_bool = false;
	else
		var_857_bool = true;
	func_6134(var_856_string, var_857_bool);
	var_2_object = var_852_string;
	
}


void func_7336(void)
{
	object var_151_object;
	@CreateDiaryEntry(var_151_object, 541, 2, 530353);
	bool var_155_bool; object var_156_object;
	var_151_object = var_156_object;
	func_7375(var_155_bool, var_156_object, 532);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6825(bool var_646_bool)
{
	int var_648_int;
	func_6189(var_648_int, "b8q01");
	if(var_648_int == 2)
		var_646_bool = true;
	var_646_bool = false;
}


// @pe
void func_6315(bool var_286_bool, int var_287_int)
{
	int var_288_int;
	func_6298(var_288_int);
	var_286_bool = var_288_int == var_287_int;
}


void func_6321(string var_90_string, int var_91_int)
{
	string var_93_string = "idle";
	if(var_91_int != 0)
		var_93_string += var_91_int;
	var_93_string = var_90_string;
}


// @pe
void func_6837(bool var_610_bool)
{
	int var_612_int;
	func_6189(var_612_int, "oob8Kapella1");
	if(var_612_int == 0) {
		var_610_bool = true;
		return 0;
	}
	var_610_bool = false;
}


void func_7349(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 533, 2, 530345);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_7375(var_105_bool, var_106_object, 532);
}
EMIT "Stack[-1] = 0";


void func_694(object var_0_object, int var_935_int, object var_936_object)
{
	var_0_object = var_936_object;
	bool var_946_bool; object var_947_object;
	object var_948_object;
	func_6162(var_948_object);
	var_948_object = var_947_object;
	func_5989(var_946_bool, var_947_object);
	bool var_949_bool; object var_950_object;
	var_936_object = var_950_object;
	func_5904(var_949_bool, var_950_object, 70.0);
	if(!var_949_bool) { //@nz
		var_935_int = -2;
		return 8;
	}
	object var_942_object;
	@CreateDialog(var_942_object);
	int var_953_int;
	func_6347(var_953_int);
	var_942_object->SetNPCName(var_953_int);
	int var_954_int;
	func_6345(var_954_int);
	var_942_object->SetNPCDescription(var_954_int);
	string var_955_string;
	func_6349(var_955_string);
	var_942_object->SetPhoto(var_955_string);
	string var_956_string;
	func_6351(var_956_string);
	var_942_object->SetPhoto2(var_956_string);
	int var_957_int;
	func_7453(var_957_int);
	var_942_object->SetPlayerName(var_957_int);
	bool var_943_bool;
	@IsOverrideActive(var_943_bool);
	if(var_943_bool != 0) {
		var_935_int = -2;
		return 8;
	}
	@DoDialog(var_942_object);
	object var_959_object; object var_960_object;
	var_936_object = var_959_object;
	var_942_object = var_960_object;
	TaskCall(4);
	func_775(var_961_object, var_962_object, var_963_string, var_964_bool, var_959_object, var_960_object);
	TaskReturn();
	bool var_945_bool;
	var_942_object->IsDialogEnd(var_945_bool);
	
	for(;;) {
		var_1022_bool = !var_945_bool; //@nz
		if(var_1022_bool == 0) goto Label_764;
		@sync();
		var_942_object->IsDialogEnd(var_945_bool);
	}
	
Label_764:
	object var_1023_object;
	var_936_object = var_1023_object;
	func_5972();
	@StopDialog(var_942_object);
	var_942_object->GetReturnValue(-1);
	int var_944_int = var_935_int;
}
EMIT "Stack[-4] = 0";


void func_6328(int var_84_int)
{
	int var_87_int; bool var_88_bool;
	var_87_int = 0;
	
	for(;;) {
		string var_90_string; int var_91_int;
		var_87_int = var_91_int;
		func_6321(var_90_string, var_91_int);
		@HasAnimation(var_88_bool, "all", var_90_string);
		if(!var_88_bool) //@nz
			break;
		var_87_int += 1;
	}
	var_87_int = var_84_int;
}


// @pe
void func_6652(void)
{
	@SetVariable("oob10Kapella2", 1);
}


void func_5824(bool var_104_bool)
{
	var_104_bool = true;
}


// @pe
void func_6849(bool var_652_bool)
{
	int var_654_int;
	func_6189(var_654_int, "oob8Kapella2");
	if(var_654_int == 0) {
		var_652_bool = true;
		return 0;
	}
	var_652_bool = false;
}


void func_5826(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_7362(object var_91_object)
{
	object var_93_object;
	@GetDiaryRoot(var_93_object);
	if(!var_93_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_91_object = false;
	}
	var_93_object = var_91_object;
}
EMIT "Stack[-1] = 0";


void func_5831(float var_66_float, object var_67_object)
{
	cvector var_71_cvector;
	@GetPosition(var_71_cvector);
	cvector var_72_cvector;
	var_67_object->GetPosition(var_72_cvector);
	var_66_float = (var_72_cvector - var_71_cvector) | (var_72_cvector - var_71_cvector);
}


void func_6345(int var_226_int)
{
	var_226_int = 515538;
}


// @pe
void func_1737(object var_2_object, string var_440_string)
{
	bool var_441_bool;
	func_6353(var_441_bool);
	if(!var_441_bool) //@nz
		return 0;
	if(var_440_string == var_2_object)
		return 0;
	string var_444_string; bool var_445_bool;
	var_440_string = var_444_string;
	if(var_440_string == "")
		var_445_bool = false;
	else
		var_445_bool = true;
	func_6134(var_444_string, var_445_bool);
	var_2_object = var_440_string;
	
}


void func_6347(int var_225_int)
{
	var_225_int = 502863;
}


void func_6349(string var_227_string)
{
	var_227_string = "ui/NPC_Kapella.png";
}


// @pe
void func_6861(bool var_875_bool)
{
	int var_877_int;
	func_6189(var_877_int, "b10q01");
	if(var_877_int == 4)
		var_875_bool = true;
	var_875_bool = false;
}


void func_6351(string var_228_string)
{
	var_228_string = "ui/NPC_Kapella_b.png";
}


void func_5839(bool var_125_bool, object var_126_object, string var_127_string)
{
	var_132_bool = IsFuncExist(var_126_object, "HasProperty", 2);
	if(!var_132_bool) { //@nz
		var_125_bool = false;
		return 2;
	}
	bool var_129_bool;
	var_126_object->HasProperty(var_127_string, var_129_bool);
	var_129_bool = var_125_bool;
}


void func_6353(bool var_121_bool)
{
	var_121_bool = true;
}


void func_7375(bool var_82_bool, object var_83_object, int var_84_int)
{
	object var_91_object;
	func_7362(var_91_object);
	object var_88_object;
	var_91_object = var_88_object;
	object var_89_object;
	var_88_object->Find(var_84_int, var_89_object);
	if(!var_89_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_84_int);
		var_82_bool = false;
	}
	var_89_object->AddChild(var_83_object);
	@SendWorldWndMessage(7);
	int var_90_int;
	var_83_object->GetCategory(var_90_int);
	@SetDiarySection(var_90_int);
	var_82_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_6355(object var_127_object)
{
	object var_131_object;
	func_7403(var_131_object);
	object var_128_object;
	var_131_object = var_128_object;
	func_7420(var_128_object, "pt_map_notkin", (float)2);
	object var_151_object;
	func_7403(var_151_object);
	var_127_object->ShowMap(var_151_object);
}


void func_1239(object var_0_object, int var_1026_int, object var_1027_object)
{
	var_0_object = var_1027_object;
	bool var_1037_bool; object var_1038_object;
	object var_1039_object;
	func_6162(var_1039_object);
	var_1039_object = var_1038_object;
	func_5989(var_1037_bool, var_1038_object);
	bool var_1040_bool; object var_1041_object;
	var_1027_object = var_1041_object;
	func_5904(var_1040_bool, var_1041_object, 70.0);
	if(!var_1040_bool) { //@nz
		var_1026_int = -2;
		return 8;
	}
	object var_1033_object;
	@CreateDialog(var_1033_object);
	int var_1044_int;
	func_6347(var_1044_int);
	var_1033_object->SetNPCName(var_1044_int);
	int var_1045_int;
	func_6345(var_1045_int);
	var_1033_object->SetNPCDescription(var_1045_int);
	string var_1046_string;
	func_6349(var_1046_string);
	var_1033_object->SetPhoto(var_1046_string);
	string var_1047_string;
	func_6351(var_1047_string);
	var_1033_object->SetPhoto2(var_1047_string);
	int var_1048_int;
	func_7453(var_1048_int);
	var_1033_object->SetPlayerName(var_1048_int);
	bool var_1034_bool;
	@IsOverrideActive(var_1034_bool);
	if(var_1034_bool != 0) {
		var_1026_int = -2;
		return 8;
	}
	@DoDialog(var_1033_object);
	object var_1050_object; object var_1051_object;
	var_1027_object = var_1050_object;
	var_1033_object = var_1051_object;
	TaskCall(6);
	func_1320(var_1052_object, var_1053_object, var_1054_string, var_1055_bool, var_1050_object, var_1051_object);
	TaskReturn();
	bool var_1036_bool;
	var_1033_object->IsDialogEnd(var_1036_bool);
	
	for(;;) {
		var_1086_bool = !var_1036_bool; //@nz
		if(var_1086_bool == 0) goto Label_1309;
		@sync();
		var_1033_object->IsDialogEnd(var_1036_bool);
	}
	
Label_1309:
	object var_1087_object;
	var_1027_object = var_1087_object;
	func_5972();
	@StopDialog(var_1033_object);
	var_1033_object->GetReturnValue(-1);
	int var_1035_int = var_1026_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6873(bool var_881_bool)
{
	int var_883_int;
	func_6189(var_883_int, "b10q01TalkKapella");
	if(var_883_int == 1)
		var_881_bool = true;
	var_881_bool = false;
}


void func_5851(bool var_117_bool, object var_118_object, string var_119_string, float var_120_float, float var_121_float, float var_122_float)
{
	object var_126_object;
	var_118_object = var_126_object;
	string var_127_string;
	var_119_string = var_127_string;
	bool var_125_bool;
	func_5839(var_125_bool, var_126_object, var_127_string);
	if(!var_125_bool) //@nz
		var_117_bool = false;
	float var_124_float;
	var_118_object->GetProperty(var_119_string, var_124_float);
	float var_135_float; float var_137_float; float var_138_float;
	var_121_float = var_137_float;
	var_122_float = var_138_float;
	func_6178(var_135_float, (var_124_float + var_120_float), var_137_float, var_138_float);
	var_118_object->SetProperty(var_119_string, var_135_float);
	var_117_bool = true;
}


// @pe
void func_6371(void)
{
	@SetVariable("oob1Kapella1", 1);
}


// @pe
void func_6885(bool var_907_bool)
{
	int var_909_int;
	func_6189(var_909_int, "oob10Kapella1");
	if(var_909_int == 0) {
		var_907_bool = true;
		return 0;
	}
	var_907_bool = false;
}


// @pe
void func_6377(void)
{
	@SetVariable("oob1Kapella2", 1);
}


void func_7403(object var_63_object)
{
	object var_66_object; object var_67_object;
	@GetMainOutdoorScene(var_66_object);
	if(var_66_object == null) {
		@Trace("Can't find main outdoor scene");
		var_67_object = null;
		var_67_object = var_63_object;
	}
	var_66_object->GetMap(var_67_object);
	var_67_object = var_63_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3821(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_238_object, object var_239_object)
{
	var_0_object = var_239_object;
	var_1_object = var_238_object;
	var_3_string = false;
	if(1 != 0) {
		func_3879(var_239_object, "Neutral");
		var_0_object->SetMessage(527023); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(527024, 21951, 28310); //@t
		var_0_object->AddReply(527025, 21951, 28311); //@t
		goto Label_3849;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xef1";
	}
Label_3849:
	bool var_264_bool;
	func_6353(var_264_bool);
	if(var_264_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6127(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3878;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3878:
		return 0;

	}
	
}


// @pe
void func_6383(void)
{
	@SetVariable("oob1Kapella3", 1);
}


// @pe
void func_6897(bool var_701_bool)
{
	int var_703_int;
	func_6189(var_703_int, "b9q03AglajaTalk");
	if(var_703_int != 0) {
		var_701_bool = true;
		return 0;
	}
	var_701_bool = false;
}


void func_5873(object var_180_object, string var_181_string, int var_182_int)
{
	int var_184_int;
	var_180_object->GetProperty(var_181_string, var_184_int);
	var_180_object->SetProperty(var_181_string, (var_184_int + var_182_int));
}


void func_5363(object var_0_object, int var_1088_int, object var_1089_object)
{
	var_0_object = var_1089_object;
	bool var_1099_bool; object var_1100_object;
	object var_1101_object;
	func_6162(var_1101_object);
	var_1101_object = var_1100_object;
	func_5989(var_1099_bool, var_1100_object);
	bool var_1102_bool; object var_1103_object;
	var_1089_object = var_1103_object;
	func_5904(var_1102_bool, var_1103_object, 70.0);
	if(!var_1102_bool) { //@nz
		var_1088_int = -2;
		return 8;
	}
	object var_1095_object;
	@CreateDialog(var_1095_object);
	int var_1106_int;
	func_6347(var_1106_int);
	var_1095_object->SetNPCName(var_1106_int);
	int var_1107_int;
	func_6345(var_1107_int);
	var_1095_object->SetNPCDescription(var_1107_int);
	string var_1108_string;
	func_6349(var_1108_string);
	var_1095_object->SetPhoto(var_1108_string);
	string var_1109_string;
	func_6351(var_1109_string);
	var_1095_object->SetPhoto2(var_1109_string);
	int var_1110_int;
	func_7453(var_1110_int);
	var_1095_object->SetPlayerName(var_1110_int);
	bool var_1096_bool;
	@IsOverrideActive(var_1096_bool);
	if(var_1096_bool != 0) {
		var_1088_int = -2;
		return 8;
	}
	@DoDialog(var_1095_object);
	object var_1112_object; object var_1113_object;
	var_1089_object = var_1112_object;
	var_1095_object = var_1113_object;
	TaskCall(20);
	func_5444(var_1114_object, var_1115_object, var_1116_string, var_1117_bool, var_1112_object, var_1113_object);
	TaskReturn();
	bool var_1098_bool;
	var_1095_object->IsDialogEnd(var_1098_bool);
	
	for(;;) {
		var_1142_bool = !var_1098_bool; //@nz
		if(var_1142_bool == 0) goto Label_5433;
		@sync();
		var_1095_object->IsDialogEnd(var_1098_bool);
	}
	
Label_5433:
	object var_1143_object;
	var_1089_object = var_1143_object;
	func_5972();
	@StopDialog(var_1095_object);
	var_1095_object->GetReturnValue(-1);
	int var_1097_int = var_1088_int;
}
EMIT "Stack[-4] = 0";


void func_6389(void)
{
	object var_199_object;
	func_7403(var_199_object);
	object var_198_object;
	var_199_object = var_198_object;
	float var_210_float;
	func_6293(var_210_float);
	var_198_object->AddMark("b1KapellaGotoLaska", "pt_map_laska", 3, 520037, var_210_float);
	float var_217_float;
	func_6293(var_217_float);
	var_198_object->AddMark("b1KapellaGotoNotkin", "pt_map_notkin", 3, 520038, var_217_float);
}
EMIT "Stack[-1] = 0";


void func_5880(bool var_59_bool, cvector var_60_cvector)
{
	cvector var_64_cvector;
	@GetPosition(var_64_cvector);
	cvector var_65_cvector = var_60_cvector - var_64_cvector;
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = GetByIndex(var_65_cvector, 2);
	bool var_66_bool;
	@Rotate(var_67_float, var_68_float, var_66_bool);
	var_66_bool = var_59_bool;
}


void func_7420(object var_158_object, string var_159_string, float var_160_float)
{
	object var_168_object;
	@GetMainOutdoorScene(var_168_object);
	if(var_168_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_166_cvector;
	cvector var_167_cvector;
	bool var_169_bool;
	var_168_object->GetLocator(var_159_string, var_169_bool, var_166_cvector, var_167_cvector);
	if(!var_169_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_159_string) + " doesnt exist");
	var_168_object->GetMap(var_158_object);
	if(var_158_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_179_float = GetByIndex(var_166_cvector, 0);
	var_180_float = GetByIndex(var_166_cvector, 2);
	var_158_object->SetMapParams(var_179_float, var_180_float, var_160_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_6909(bool var_750_bool)
{
	int var_752_int;
	func_6189(var_752_int, "oob9Kapella1");
	if(var_752_int == 0) {
		var_750_bool = true;
		return 0;
	}
	var_750_bool = false;
}


void func_5890(bool var_55_bool, object var_56_object)
{
	cvector var_58_cvector;
	var_56_object->GetPosition(var_58_cvector);
	bool var_59_bool; cvector var_60_cvector;
	var_58_cvector = var_60_cvector;
	func_5880(var_59_bool, var_60_cvector);
	var_59_bool = var_55_bool;
}


// @pe
void func_775(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_959_object, object var_960_object)
{
	var_0_object = var_960_object;
	var_1_object = var_959_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_966_bool;
		func_6991(var_1_object);
		if(var_966_bool != 0) {
			object var_972_object; object var_973_object;
			var_972_object = var_1_object;
			var_973_object = var_0_object;
			func_6620();
			func_878(var_960_object, "Neutral");
			var_0_object->SetMessage(531105); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531107, 32678, 32425); //@t
			var_0_object->AddReply(531353, 32678, 32685); //@t
		} else {
					func_878(var_960_object, "Neutral");
					var_0_object->SetMessage(531108); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1001_bool;
					func_7003(var_1_object);
					if(var_1001_bool != 0)
						var_0_object->AddReply(531109, 32429, 32427); //@t
					bool var_1010_bool;
					func_7015(var_1_object);
					if(var_1010_bool != 0)
						var_0_object->AddReply(531129, 32448, 32447); //@t
					var_0_object->AddReply(531110, -1, 32428); //@t
		}
	}
	for(;;) {
		bool var_991_bool;
		func_6353(var_991_bool);
		if(var_991_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6127(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_877;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_877:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x30b";


// @pe
void func_6921(bool var_773_bool)
{
	int var_775_int;
	func_6189(var_775_int, "b9q03");
	if(var_775_int == 0) {
		var_773_bool = true;
		return 0;
	}
	var_773_bool = false;
}


void func_5899(bool var_52_bool)
{
	bool var_54_bool;
	@IsLoaded(var_54_bool);
	var_54_bool = var_52_bool;
}


// @pe
void func_269(object var_2_object, string var_726_string)
{
	bool var_727_bool;
	func_6353(var_727_bool);
	if(!var_727_bool) //@nz
		return 0;
	if(var_726_string == var_2_object)
		return 0;
	string var_730_string; bool var_731_bool;
	var_726_string = var_730_string;
	if(var_726_string == "")
		var_731_bool = false;
	else
		var_731_bool = true;
	func_6134(var_730_string, var_731_bool);
	var_2_object = var_726_string;
	
}


// @pe
void func_6414(void)
{
	@SetVariable("oob1Kapella4", 1);
}


void func_5904(bool var_178_bool, object var_179_object, float var_180_float)
{
	cvector var_191_cvector; bool var_198_bool;
	var_179_object->GetPosition(var_191_cvector);
	float var_190_float;
	var_179_object->GetEyesHeight(var_190_float);
	var_199_float = GetByIndex(var_191_cvector, 1);
	SetByIndex(var_191_cvector, 1) = (var_199_float + var_190_float);
	cvector var_192_cvector;
	@GetPosition(var_192_cvector);
	@GetEyesHeight(var_190_float);
	var_200_float = GetByIndex(var_192_cvector, 1);
	SetByIndex(var_192_cvector, 1) = (var_200_float + var_190_float);
	cvector var_193_cvector = var_191_cvector - var_192_cvector;
	var_201_float = GetByIndex(var_193_cvector, 1);
	SetByIndex(var_193_cvector, 1) = (float)0;
	var_203_float = sqrt(var_193_cvector | var_193_cvector);
	var_193_cvector /= var_203_float;
	cvector var_194_cvector = -var_193_cvector;
	cvector var_205_cvector;
	func_6168(var_205_cvector, (var_194_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_195_cvector = ((var_193_cvector * var_180_float) + (var_205_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_197_bool;
	@IsOverrideActive(var_197_bool);
	if(var_197_bool != 0)
		var_178_bool = false;
	@StopWorld();
	@CameraTransit((var_192_cvector + var_195_cvector), var_194_cvector);
	var_218_float = GetByIndex(var_195_cvector, 0);
	var_219_float = GetByIndex(var_195_cvector, 2);
	@Rotate(var_218_float, var_219_float);
	bool var_220_bool;
	func_6353(var_220_bool);
	if(var_220_bool != 0) {
	} else {
		@HasAnimationTrack(var_198_bool, "head");
		if(var_198_bool == 0) goto Label_5966;
		@LookAsyncCamera("head");
	}
Label_5966:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_178_bool = true;
	
}


// @pe
void func_6420(void)
{
	@SetVariable("oob2Kapella1", 1);
}


// @pe
void func_6933(bool var_708_bool)
{
	int var_710_int;
	func_6189(var_710_int, "b9q03BadInit");
	if(var_710_int != 0) {
		var_708_bool = true;
		return 0;
	}
	var_708_bool = false;
}


// @pe
void func_2842(object var_2_object, string var_329_string)
{
	bool var_330_bool;
	func_6353(var_330_bool);
	if(!var_330_bool) //@nz
		return 0;
	if(var_329_string == var_2_object)
		return 0;
	string var_333_string; bool var_334_bool;
	var_329_string = var_333_string;
	if(var_329_string == "")
		var_334_bool = false;
	else
		var_334_bool = true;
	func_6134(var_333_string, var_334_bool);
	var_2_object = var_329_string;
	
}


// @pe
void func_6426(void)
{
	@SetVariable("oob8Kapella1", 1);
}


void func_7453(int var_229_int)
{
	int var_231_int;
	@GetVariable("branch", var_231_int);
	if(var_231_int == 0) {
		var_229_int = 1;
		return 2;
	EMIT "GOTO 0x1d2c";
	}
	if(var_231_int == 1) {
		var_229_int = 2;
		return 2;
	}
	var_229_int = 3;
}


// @pe
void func_6432(void)
{
	@SetVariable("oob8Kapella2", 1);
}


// @pe
void func_6945(bool var_785_bool)
{
	int var_787_int;
	func_6189(var_787_int, "b9q03BonefiresCount");
	if(var_787_int == 4)
		var_785_bool = true;
	var_785_bool = false;
}


void func_6438(void)
{
	object var_67_object;
	func_7403(var_67_object);
	object var_66_object;
	var_67_object = var_66_object;
	float var_78_float;
	func_6293(var_78_float);
	var_66_object->AddMark("b8q01KapellaGotoKlara", "pt_map_mishka", 3, 521465, var_78_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3879(object var_2_object, string var_245_string)
{
	bool var_246_bool;
	func_6353(var_246_bool);
	if(!var_246_bool) //@nz
		return 0;
	if(var_245_string == var_2_object)
		return 0;
	string var_249_string; bool var_250_bool;
	var_245_string = var_249_string;
	if(var_245_string == "")
		var_250_bool = false;
	else
		var_250_bool = true;
	func_6134(var_249_string, var_250_bool);
	var_2_object = var_245_string;
	
}


// @pe
void func_1320(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1050_object, object var_1051_object)
{
	var_0_object = var_1051_object;
	var_3_string = false;
	if(1 != 0) {
		func_1383(var_1051_object, "Neutral");
		var_0_object->SetMessage(535258); //@t
		var_0_object->ClearReplies(); //@t
		bool var_1066_bool;
		func_7063(var_1050_object);
		if(var_1066_bool != 0)
			var_0_object->AddReply(535259, 36983, 36934); //@t
		var_0_object->AddReply(535304, -1, 36982); //@t
		goto Label_1353;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x52c";
	}
Label_1353:
	bool var_1078_bool;
	func_6353(var_1078_bool);
	if(var_1078_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6127(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1382;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1382:
		return 0;

	}
	
}


// @pe
void func_6957(bool var_791_bool)
{
	int var_793_int;
	func_6189(var_793_int, "b9q03");
	if(var_793_int == 1)
		var_791_bool = true;
	var_791_bool = false;
}


// @pe
void func_7470(object var_69_object, bool var_70_bool, int var_71_int)
{
	var_69_object->add(18);
	var_69_object->add(24);
	var_69_object->add(20);
	var_69_object->add(14);
	if(var_70_bool == false) {
		var_69_object->add(10);
		var_69_object->add(17);
		var_69_object->add(8);
	} else if(var_71_int != 1) {
		var_69_object->add(10);
	}
	
}


// @pe
void func_6454(void)
{
	@SetVariable("b10q01TalkKapella", 1);
}


// @pe
void func_6969(bool var_715_bool, object var_716_object)
{
	object var_718_object;
	var_716_object = var_718_object;
	func_7195(var_718_object);
	bool var_717_bool;
	if(var_717_bool != 0) {
		var_715_bool = true;
		return 0;
	}
	var_715_bool = false;
}


// @pe
void func_6460(void)
{
	@SetVariable("oob10Kapella1", 1);
}


// @pe
void func_6466(void)
{
	@SetVariable("b1ResqueList", 1);
}


// @pe
void func_6979(bool var_901_bool)
{
	int var_903_int;
	func_6189(var_903_int, "b10q04GirlGotoKapella");
	if(var_903_int != 0) {
		var_901_bool = true;
		return 0;
	}
	var_901_bool = false;
}


// @pe
void func_5444(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1112_object, object var_1113_object)
{
	var_0_object = var_1113_object;
	var_1_object = var_1112_object;
	var_3_string = false;
	if(1 != 0) {
		func_5502(var_1113_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_5472;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1548";
	}
Label_5472:
	bool var_1134_bool;
	func_6353(var_1134_bool);
	if(var_1134_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6127(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5501;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5501:
		return 0;

	}
	
}


// @pe
void func_6472(object var_206_object)
{
	@Trace("money1000 is given");
	object var_209_object;
	var_206_object = var_209_object;
	func_6217(var_209_object, 1000);
}


// @pe
void func_6991(bool var_966_bool)
{
	int var_968_int;
	func_6189(var_968_int, "oob11Kapella1");
	if(var_968_int == 0) {
		var_966_bool = true;
		return 0;
	}
	var_966_bool = false;
}


void func_7503(int var_85_int)
{
	int var_87_int;
	@GetVariable(("vol_" + var_85_int), var_87_int);
	@SetVariable(("vol_" + var_85_int), (var_87_int | 8));
}


// @pe
void func_6482(void)
{
	@SetVariable("oob9Kapella1", 1);
}


void func_5972(void)
{
	bool var_280_bool;
	@CameraSwitchToNormal();
	bool var_281_bool;
	func_6353(var_281_bool);
	if(var_281_bool != 0) {
	} else {
		@HasAnimationTrack(var_280_bool, "head");
		if(var_280_bool == 0) goto Label_5988;
		@UnlookAsync("head");
	}
Label_5988:
	
}


void func_6488(void)
{
	@SetVariable("b9q03", 1);
	object var_63_object;
	func_7403(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	float var_74_float;
	func_6293(var_74_float);
	var_60_object->AddMark("b9q03KapellaGotoSpi4ka", "pt_map_spi4ka", 0, 530307, var_74_float);
	func_7323();
	func_7349();
	bool var_108_bool;
	func_6281(var_108_bool, "quest_b9_03", "init_house_spi4ka");
}
EMIT "Stack[-1] = 0";


// @pe
void func_7003(bool var_1001_bool)
{
	int var_1003_int;
	func_6189(var_1003_int, "b11q02");
	if(var_1003_int == 0) {
		var_1001_bool = true;
		return 0;
	}
	var_1001_bool = false;
}


void func_7515(void)
{
	object var_65_object; int var_68_int;
	@CreateIntVector(var_65_object);
	object var_69_object;
	var_65_object = var_69_object;
	func_7470(var_69_object, false, -1);
	int var_66_int;
	var_65_object->size(var_66_int);
	int var_67_int = 0;
	
	while(var_67_int < var_66_int) {
		var_65_object->get(var_68_int, var_67_int);
		int var_85_int;
		var_68_int = var_85_int;
		func_7503(var_85_int);
		var_67_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_5989(bool var_83_bool, object var_84_object)
{
	int var_90_int; int var_91_int;
	@GetVariable("voice_common", var_90_int);
	if(var_90_int != 0) {
		bool var_94_bool; object var_95_object;
		var_84_object = var_95_object;
		func_6047(var_94_bool, var_95_object);
		if(!var_94_bool) { //@nz
			bool var_125_bool; object var_126_object;
			var_84_object = var_126_object;
			func_6084(var_125_bool, var_126_object);
			if(!var_125_bool) { //@nz
				var_83_bool = false;
				return 4;
			}
		}
		@irand(var_91_int, 2);
		if(var_91_int != 0)
			@SetVariable("voice_common", ((var_90_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_170_bool; object var_171_object;
		var_84_object = var_171_object;
		func_6084(var_170_bool, var_171_object);
		if(!var_170_bool) { //@nz
			bool var_173_bool; object var_174_object;
			var_84_object = var_174_object;
			func_6047(var_173_bool, var_174_object);
			if(!var_173_bool) { //@nz
				var_83_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_6045;
	
Label_6045:
	var_83_bool = true;
	
}


// @pe
void func_7015(bool var_1010_bool)
{
	int var_1012_int;
	func_6189(var_1012_int, "b11q02");
	if(var_1012_int == 4)
		var_1010_bool = true;
	var_1010_bool = false;
}


// @pe
void func_1383(object var_2_object, string var_1057_string)
{
	bool var_1058_bool;
	func_6353(var_1058_bool);
	if(!var_1058_bool) //@nz
		return 0;
	if(var_1057_string == var_2_object)
		return 0;
	string var_1061_string; bool var_1062_bool;
	var_1057_string = var_1061_string;
	if(var_1057_string == "")
		var_1062_bool = false;
	else
		var_1062_bool = true;
	func_6134(var_1061_string, var_1062_bool);
	var_2_object = var_1057_string;
	
}


// @pe
void func_878(object var_2_object, string var_976_string)
{
	bool var_977_bool;
	func_6353(var_977_bool);
	if(!var_977_bool) //@nz
		return 0;
	if(var_976_string == var_2_object)
		return 0;
	string var_980_string; bool var_981_bool;
	var_976_string = var_980_string;
	if(var_976_string == "")
		var_981_bool = false;
	else
		var_981_bool = true;
	func_6134(var_980_string, var_981_bool);
	var_2_object = var_976_string;
	
}


// @pe
void func_7027(bool var_838_bool)
{
	int var_840_int;
	func_6189(var_840_int, "oob10Kapella2");
	if(var_840_int == 0) {
		var_838_bool = true;
		return 0;
	}
	var_838_bool = false;
}


// @pe
void func_7540(void)
{
	func_7515();
}


// @pe
void func_6519(void)
{
	func_7336();
	bool var_158_bool;
	func_6281(var_158_bool, "quest_b9_03", "completed");
}


// @pe
void func_7544(object var_69_object, object var_292_object)
{
	var_70_bool = GlobalVars[1];
	if(!var_70_bool) { //@nz
		int var_72_int; object var_73_object;
		var_69_object = var_73_object;
		TaskCall(13);
		func_3740(var_74_object, var_72_int, var_73_object);
		TaskReturn();
		var_285_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_286_bool;
	func_6315(var_286_bool, 1);
	if(var_286_bool != 0) {
		int var_290_int; object var_291_object;
		var_69_object = var_291_object;
		TaskCall(11);
		func_2623(var_292_object, var_290_int, var_291_object);
		TaskReturn();
		if(2000 == var_292_object)
			@ShowWindow("people.xml", true);
		return 0;
	}
	bool var_407_bool;
	func_6315(var_407_bool, 2);
	if(var_407_bool != 0) {
		int var_409_int; object var_410_object;
		var_69_object = var_410_object;
		TaskCall(7);
		func_1593(var_411_object, var_409_int, var_410_object);
		TaskReturn();
		return 0;
	}
	bool var_471_bool;
	func_6315(var_471_bool, 3);
	if(var_471_bool != 0) {
		int var_473_int; object var_474_object;
		var_69_object = var_474_object;
		TaskCall(9);
		func_1973(var_475_object, var_473_int, var_474_object);
		TaskReturn();
		return 0;
	}
	bool var_577_bool;
	func_6315(var_577_bool, 8);
	if(var_577_bool != 0) {
		int var_579_int; object var_580_object;
		var_69_object = var_580_object;
		TaskCall(15);
		func_4012(var_581_object, var_579_int, var_580_object);
		TaskReturn();
		return 0;
	}
	bool var_666_bool;
	func_6315(var_666_bool, 9);
	if(var_666_bool != 0) {
		int var_668_int; object var_669_object;
		var_69_object = var_669_object;
		TaskCall(1);
		func_13(var_670_object, var_668_int, var_669_object);
		TaskReturn();
		return 0;
	}
	bool var_805_bool;
	func_6315(var_805_bool, 10);
	if(var_805_bool != 0) {
		int var_807_int; object var_808_object;
		var_69_object = var_808_object;
		TaskCall(17);
		func_4547(var_809_object, var_807_int, var_808_object);
		TaskReturn();
		return 0;
	}
	bool var_933_bool;
	func_6315(var_933_bool, 11);
	if(var_933_bool != 0) {
		int var_935_int; object var_936_object;
		var_69_object = var_936_object;
		TaskCall(3);
		func_694(var_937_object, var_935_int, var_936_object);
		TaskReturn();
		return 0;
	}
	bool var_1024_bool;
	func_6315(var_1024_bool, 12);
	if(var_1024_bool != 0) {
		int var_1026_int; object var_1027_object;
		var_69_object = var_1027_object;
		TaskCall(5);
		func_1239(var_1028_object, var_1026_int, var_1027_object);
		TaskReturn();
		return 0;
	}
	int var_1088_int; object var_1089_object;
	var_69_object = var_1089_object;
	TaskCall(19);
	func_5363(var_1090_object, var_1088_int, var_1089_object);
	TaskReturn();
}


// @pe
void func_5502(object var_2_object, string var_1119_string)
{
	bool var_1120_bool;
	func_6353(var_1120_bool);
	if(!var_1120_bool) //@nz
		return 0;
	if(var_1119_string == var_2_object)
		return 0;
	string var_1123_string; bool var_1124_bool;
	var_1119_string = var_1123_string;
	if(var_1119_string == "")
		var_1124_bool = false;
	else
		var_1124_bool = true;
	func_6134(var_1123_string, var_1124_bool);
	var_2_object = var_1119_string;
	
}


// @pe
void func_7039(bool var_916_bool)
{
	int var_918_int;
	func_6189(var_918_int, "b10q03");
	if(var_918_int == 0) {
		var_916_bool = true;
		return 0;
	}
	var_916_bool = false;
}


// @pe
void func_6529(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_6535(void)
{
	@SetVariable("b10q04KapellaGotoBlock", 1);
	object var_150_object;
	func_7403(var_150_object);
	object var_147_object;
	var_150_object = var_147_object;
	float var_155_float;
	func_6293(var_155_float);
	var_147_object->AddMark("b10q04KapellaGotoBlock", "pt_map_uprava_admin", 0, 530548, var_155_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7051(bool var_891_bool)
{
	int var_893_int;
	func_6189(var_893_int, "oob10Kapella3");
	if(var_893_int == 0) {
		var_891_bool = true;
		return 0;
	}
	var_891_bool = false;
}


// @pe
void func_7063(bool var_1066_bool)
{
	int var_1068_int;
	func_6189(var_1068_int, "oob12Kapella1");
	if(var_1068_int == 0) {
		var_1066_bool = true;
		return 0;
	}
	var_1066_bool = false;
}


// @pe
void func_6555(object var_157_object)
{
	object var_161_object;
	func_7403(var_161_object);
	object var_158_object;
	var_161_object = var_158_object;
	func_7420(var_158_object, "pt_map_uprava_admin", (float)2);
	object var_181_object;
	func_7403(var_181_object);
	var_157_object->ShowMap(var_181_object);
}


void func_6047(bool var_94_bool, object var_95_object)
{
	string var_101_string; bool var_103_bool; int var_104_int; string var_105_string;
	var_101_string = "c";
	int var_102_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_95_object->HasProperty((var_101_string + (var_102_int + 1)), var_103_bool);
			if(!var_103_bool) { //@nz
			} else {
				var_102_int += 1;
			}
		}
		if(!var_102_int) { //@nz
			var_94_bool = false;
			return 10;
		}
		var_104_int = 0;
		if(var_102_int > 1)
			@irand(var_104_int, var_102_int);
		var_95_object->GetProperty((var_101_string + (var_104_int + 1)), var_105_string);
		bool var_117_bool; string var_118_string;
		var_105_string = var_118_string;
		func_6140(var_117_bool, var_118_string);
		var_117_bool = var_94_bool;
		return 10;

	}
}


// @pe
void func_7075(bool var_530_bool)
{
	int var_532_int;
	func_6189(var_532_int, "b3q02");
	if(var_532_int == 0) {
		var_530_bool = true;
		return 0;
	}
	var_530_bool = false;
}


// @pe
void func_6571(void)
{
	@SetVariable("b3KapellaVisit", 1);
}


void func_4012(object var_0_object, int var_579_int, object var_580_object)
{
	var_0_object = var_580_object;
	bool var_590_bool; object var_591_object;
	object var_592_object;
	func_6162(var_592_object);
	var_592_object = var_591_object;
	func_5989(var_590_bool, var_591_object);
	bool var_593_bool; object var_594_object;
	var_580_object = var_594_object;
	func_5904(var_593_bool, var_594_object, 70.0);
	if(!var_593_bool) { //@nz
		var_579_int = -2;
		return 8;
	}
	object var_586_object;
	@CreateDialog(var_586_object);
	int var_597_int;
	func_6347(var_597_int);
	var_586_object->SetNPCName(var_597_int);
	int var_598_int;
	func_6345(var_598_int);
	var_586_object->SetNPCDescription(var_598_int);
	string var_599_string;
	func_6349(var_599_string);
	var_586_object->SetPhoto(var_599_string);
	string var_600_string;
	func_6351(var_600_string);
	var_586_object->SetPhoto2(var_600_string);
	int var_601_int;
	func_7453(var_601_int);
	var_586_object->SetPlayerName(var_601_int);
	bool var_587_bool;
	@IsOverrideActive(var_587_bool);
	if(var_587_bool != 0) {
		var_579_int = -2;
		return 8;
	}
	@DoDialog(var_586_object);
	object var_603_object; object var_604_object;
	var_580_object = var_603_object;
	var_586_object = var_604_object;
	TaskCall(16);
	func_4093(var_605_object, var_606_object, var_607_string, var_608_bool, var_603_object, var_604_object);
	TaskReturn();
	bool var_589_bool;
	var_586_object->IsDialogEnd(var_589_bool);
	
	for(;;) {
		var_664_bool = !var_589_bool; //@nz
		if(var_664_bool == 0) goto Label_4082;
		@sync();
		var_586_object->IsDialogEnd(var_589_bool);
	}
	
Label_4082:
	object var_665_object;
	var_580_object = var_665_object;
	func_5972();
	@StopDialog(var_586_object);
	var_586_object->GetReturnValue(-1);
	int var_588_int = var_579_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7087(bool var_517_bool)
{
	int var_519_int;
	func_6189(var_519_int, "oob3Kapella1");
	if(var_519_int == 0) {
		var_517_bool = true;
		return 0;
	}
	var_517_bool = false;
}


void func_6577(void)
{
	object var_278_object;
	int var_279_int;
	func_6189(var_279_int, "b1BurahHome");
	if(var_279_int == 0) {
		@SetVariable("b1BurahHome", 1);
		object var_285_object;
		func_7403(var_285_object);
		var_285_object = var_278_object;
		float var_290_float;
		func_6293(var_290_float);
		var_278_object->AddMark("b1BurahFatherHome", "pt_b1q05_patrol_house", 3, 530957, var_290_float);
		var_278_object = null;
	}
}


void func_1973(object var_0_object, int var_473_int, object var_474_object)
{
	var_0_object = var_474_object;
	bool var_484_bool; object var_485_object;
	object var_486_object;
	func_6162(var_486_object);
	var_486_object = var_485_object;
	func_5989(var_484_bool, var_485_object);
	bool var_487_bool; object var_488_object;
	var_474_object = var_488_object;
	func_5904(var_487_bool, var_488_object, 70.0);
	if(!var_487_bool) { //@nz
		var_473_int = -2;
		return 8;
	}
	object var_480_object;
	@CreateDialog(var_480_object);
	int var_491_int;
	func_6347(var_491_int);
	var_480_object->SetNPCName(var_491_int);
	int var_492_int;
	func_6345(var_492_int);
	var_480_object->SetNPCDescription(var_492_int);
	string var_493_string;
	func_6349(var_493_string);
	var_480_object->SetPhoto(var_493_string);
	string var_494_string;
	func_6351(var_494_string);
	var_480_object->SetPhoto2(var_494_string);
	int var_495_int;
	func_7453(var_495_int);
	var_480_object->SetPlayerName(var_495_int);
	bool var_481_bool;
	@IsOverrideActive(var_481_bool);
	if(var_481_bool != 0) {
		var_473_int = -2;
		return 8;
	}
	@DoDialog(var_480_object);
	object var_497_object; object var_498_object;
	var_474_object = var_497_object;
	var_480_object = var_498_object;
	TaskCall(10);
	func_2054(var_499_object, var_500_object, var_501_string, var_502_bool, var_497_object, var_498_object);
	TaskReturn();
	bool var_483_bool;
	var_480_object->IsDialogEnd(var_483_bool);
	
	for(;;) {
		var_575_bool = !var_483_bool; //@nz
		if(var_575_bool == 0) goto Label_2043;
		@sync();
		var_480_object->IsDialogEnd(var_483_bool);
	}
	
Label_2043:
	object var_576_object;
	var_474_object = var_576_object;
	func_5972();
	@StopDialog(var_480_object);
	var_480_object->GetReturnValue(-1);
	int var_482_int = var_473_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7099(bool var_540_bool)
{
	int var_542_int;
	func_6189(var_542_int, "b3q02");
	if(var_542_int == 5)
		var_540_bool = true;
	var_540_bool = false;
}


void func_4547(object var_0_object, int var_807_int, object var_808_object)
{
	var_0_object = var_808_object;
	bool var_818_bool; object var_819_object;
	object var_820_object;
	func_6162(var_820_object);
	var_820_object = var_819_object;
	func_5989(var_818_bool, var_819_object);
	bool var_821_bool; object var_822_object;
	var_808_object = var_822_object;
	func_5904(var_821_bool, var_822_object, 70.0);
	if(!var_821_bool) { //@nz
		var_807_int = -2;
		return 8;
	}
	object var_814_object;
	@CreateDialog(var_814_object);
	int var_825_int;
	func_6347(var_825_int);
	var_814_object->SetNPCName(var_825_int);
	int var_826_int;
	func_6345(var_826_int);
	var_814_object->SetNPCDescription(var_826_int);
	string var_827_string;
	func_6349(var_827_string);
	var_814_object->SetPhoto(var_827_string);
	string var_828_string;
	func_6351(var_828_string);
	var_814_object->SetPhoto2(var_828_string);
	int var_829_int;
	func_7453(var_829_int);
	var_814_object->SetPlayerName(var_829_int);
	bool var_815_bool;
	@IsOverrideActive(var_815_bool);
	if(var_815_bool != 0) {
		var_807_int = -2;
		return 8;
	}
	@DoDialog(var_814_object);
	object var_831_object; object var_832_object;
	var_808_object = var_831_object;
	var_814_object = var_832_object;
	TaskCall(18);
	func_4628(var_833_object, var_834_object, var_835_string, var_836_bool, var_831_object, var_832_object);
	TaskReturn();
	bool var_817_bool;
	var_814_object->IsDialogEnd(var_817_bool);
	
	for(;;) {
		var_931_bool = !var_817_bool; //@nz
		if(var_931_bool == 0) goto Label_4617;
		@sync();
		var_814_object->IsDialogEnd(var_817_bool);
	}
	
Label_4617:
	object var_932_object;
	var_808_object = var_932_object;
	func_5972();
	@StopDialog(var_814_object);
	var_814_object->GetReturnValue(-1);
	int var_816_int = var_807_int;
}
EMIT "Stack[-4] = 0";


void func_6084(bool var_125_bool, object var_126_object)
{
	bool var_134_bool; int var_135_int; string var_136_string;
	int var_138_int;
	func_6298(var_138_int);
	string var_132_string = ("d" + var_138_int) + "m";
	int var_133_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_126_object->HasProperty((var_132_string + (var_133_int + 1)), var_134_bool);
			if(!var_134_bool) { //@nz
			} else {
				var_133_int += 1;
			}
		}
		if(!var_133_int) { //@nz
			var_125_bool = false;
			return 10;
		}
		var_135_int = 0;
		if(var_133_int > 1)
			@irand(var_135_int, var_133_int);
		var_126_object->GetProperty((var_132_string + (var_135_int + 1)), var_136_string);
		bool var_157_bool; string var_158_string;
		var_136_string = var_158_string;
		func_6140(var_157_bool, var_158_string);
		var_157_bool = var_125_bool;
		return 10;

	}
}


void func_5573(object var_0_object)
{
	bool var_52_bool;
	func_5899(var_52_bool);
	if(!var_52_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_5701();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_5755();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_7111(bool var_546_bool)
{
	int var_548_int;
	func_6189(var_548_int, "b3q02Dead");
	if(var_548_int != 0) {
		var_546_bool = true;
		return 0;
	}
	var_546_bool = false;
}


// @pe
void func_6604(object var_292_object)
{
	object var_296_object;
	func_7403(var_296_object);
	object var_293_object;
	var_296_object = var_293_object;
	func_7420(var_293_object, "pt_b1q05_patrol_house", (float)2);
	object var_316_object;
	func_7403(var_316_object);
	var_292_object->ShowMap(var_316_object);
}


// @pe
void func_7123(bool var_321_bool)
{
	int var_323_int;
	func_6189(var_323_int, "b1q01");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


void func_5593(bool var_76_bool)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) //@nz
		var_76_bool = false;
	bool var_81_bool; object var_82_object;
	var_78_object = var_82_object;
	func_5890(var_81_bool, var_82_object);
	var_81_bool = var_76_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6620(void)
{
	@SetVariable("oob11Kapella1", 1);
}


// @pe
void func_7135(bool var_355_bool)
{
	int var_357_int;
	func_6189(var_357_int, "oob1Kapella1");
	if(var_357_int == 0) {
		var_355_bool = true;
		return 0;
	}
	var_355_bool = false;
}


// @pe
void func_6626(void)
{
	@SetVariable("b11q02", 1);
	func_7232();
	func_7258();
	object var_92_object;
	func_6194(var_92_object, "quest_b11_02");
}


void func_5608(object var_0_object)
{
	var_128_float = GetByIndex(var_0_object, 0);
	var_129_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_128_float, var_129_float);
}


// @pe
void func_7147(bool var_372_bool)
{
	int var_374_int;
	func_6189(var_374_int, "oob1Kapella2");
	if(var_374_int == 0) {
		var_372_bool = true;
		return 0;
	}
	var_372_bool = false;
}


void func_5613(bool var_59_bool)
{
	object var_62_object;
	@FindActor(var_62_object, "player");
	if(!var_62_object) { //@nz
		var_59_bool = false;
		return 4;
	}
	float var_66_float; object var_67_object;
	func_5831(var_66_float, var_67_object);
	if(var_66_float > 90000.0) {
		var_59_bool = false;
		return 4;
	}
	bool var_63_bool;
	@CanSee(var_63_bool, var_67_object);
	var_63_bool = var_59_bool;
}
EMIT "Stack[-2] = 0";


void func_6127(string var_59_string)
{
	float var_62_float; float var_63_float;
	@lshGetAnimTimes(var_59_string, var_62_float, var_63_float);
	@lshPlayAnimation(var_62_float, var_63_float, false);
}


// @pe
void func_6642(void)
{
	func_7245();
	bool var_116_bool;
	func_6281(var_116_bool, "quest_b11_02", "completed");
}


void func_6134(string var_249_string, bool var_250_bool)
{
	float var_255_float; float var_256_float;
	@lshGetAnimTimes(var_249_string, var_255_float, var_256_float);
	@lshPlayAnimation(var_255_float, var_256_float, var_250_bool);
}


// @pe
void func_7159(bool var_381_bool)
{
	int var_383_int;
	func_6189(var_383_int, "oob1Kapella3");
	if(var_383_int == 0) {
		var_381_bool = true;
		return 0;
	}
	var_381_bool = false;
}


void func_6140(bool var_117_bool, string var_118_string)
{
	bool var_120_bool;
	bool var_121_bool;
	func_6353(var_121_bool);
	if(var_121_bool != 0) {
		@lshHasSpeech(var_120_bool, var_118_string);
		if(var_120_bool != 0) {
			@lshPlaySpeech(var_118_string);
			var_117_bool = true;
		}
	}
	var_117_bool = false;
}


// @pe
void func_4093(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_603_object, object var_604_object)
{
	var_0_object = var_604_object;
	var_1_object = var_603_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_610_bool;
		func_6837(var_1_object);
		if(var_610_bool != 0) {
			object var_616_object; object var_617_object;
			var_616_object = var_1_object;
			var_617_object = var_0_object;
			func_6426();
			func_4195(var_604_object, "Neutral");
			var_0_object->SetMessage(521388); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(521389, 25279, 22567); //@t
			var_0_object->AddReply(523995, 25286, 25285); //@t
		} else {
					func_4195(var_604_object, "Neutral");
					var_0_object->SetMessage(521390); //@t
					var_0_object->ClearReplies(); //@t
					bool var_645_bool = false;
					bool var_646_bool;
					func_6825(var_1_object);
					if(var_646_bool != 0) {
						bool var_652_bool;
						func_6849(var_1_object);
						if(var_652_bool != 0)
							var_645_bool = true;
					}
					if(var_645_bool != 0)
						var_0_object->AddReply(521391, 22570, 22569); //@t
					var_0_object->AddReply(521394, -1, 22572); //@t
		}
	}
	for(;;) {
		bool var_635_bool;
		func_6353(var_635_bool);
		if(var_635_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6127(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4194;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4194:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1001";


