// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, bool var_70_bool, cvector var_71_cvector, cvector var_72_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_73_cvector == 1779) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_9123();
				func_157(var_74_cvector, "Neutral");
				var_0_object->SetMessage(501575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(501576, 1782, 1780); //@t
				var_0_object->AddReply(501577, 1782, 1781); //@t
				return 0;
			}
			if(var_73_cvector == 1782) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_9394();
				func_157(var_74_cvector, "Neutral");
				var_0_object->SetMessage(501578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(501580, 1785, 1784); //@t
				var_0_object->AddReply(501579, -1, 1783); //@t
				return 0;
			}
			if(var_73_cvector == 1785) {
				func_157(var_74_cvector, "Neutral");
				var_0_object->SetMessage(501581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(501582, -1, 1786); //@t
				var_0_object->AddReply(501583, -1, 1787); //@t
				return 0;
			}
			var_3_string = true;
			bool var_131_bool;
			func_8923(var_131_bool);
			if(var_131_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 13819) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_9300();
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_9294();
			}
			if(var_74_cvector == 13848) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_9300();
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_9294();
			}
			if(var_73_cvector == 13254) {
				bool var_160_bool;
				func_9795(var_1_object);
				if(var_160_bool != 0) {
					object var_168_object; object var_169_object;
					var_168_object = var_1_object;
					var_169_object = var_0_object;
					func_9400();
					func_441(var_74_cvector, "Surprise");
					var_0_object->SetMessage(512036); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540874, 42939, 42937); //@t
					var_0_object->AddReply(540878, 42939, 42941); //@t
					return 0;
				}
				func_441(var_74_cvector, "Neutral");
				var_0_object->SetMessage(513016); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513017, -1, 14223); //@t
				return 0;
			}
			if(var_73_cvector == 42939) {
				func_441(var_74_cvector, "Surprise");
				var_0_object->SetMessage(540876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540877, 42938, 42940); //@t
				var_0_object->AddReply(540879, 42938, 42943); //@t
				return 0;
			}
			if(var_73_cvector == 42938) {
				func_441(var_74_cvector, "Fear");
				var_0_object->SetMessage(540875); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540870, 42934, 42933); //@t
				var_0_object->AddReply(512640, 13821, 13820); //@t
				return 0;
			}
			if(var_73_cvector == 13821) {
				func_441(var_74_cvector, "Fear");
				var_0_object->SetMessage(512641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512644, 13825, 13824); //@t
				return 0;
			}
			if(var_73_cvector == 13825) {
				func_441(var_74_cvector, "Fear");
				var_0_object->SetMessage(512645); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540881, 42947, 42946); //@t
				return 0;
			}
			if(var_73_cvector == 42947) {
				func_441(var_74_cvector, "Fear");
				var_0_object->SetMessage(540882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540883, 13818, 42949); //@t
				var_0_object->AddReply(512666, -1, 13848); //@t
				return 0;
			}
			if(var_73_cvector == 42934) {
				func_441(var_74_cvector, "Fear");
				var_0_object->SetMessage(540871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512037, 13256, 13255); //@t
				return 0;
			}
			if(var_73_cvector == 13256) {
				func_441(var_74_cvector, "Fear");
				var_0_object->SetMessage(512038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540872, 13818, 42935); //@t
				var_0_object->AddReply(512635, 13816, 13815); //@t
				return 0;
			}
			if(var_73_cvector == 13816) {
				func_441(var_74_cvector, "Fear");
				var_0_object->SetMessage(512636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512637, 13818, 13817); //@t
				return 0;
			}
			if(var_73_cvector == 13818) {
				func_441(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512639, -1, 13819); //@t
				return 0;
			}
			var_3_string = true;
			bool var_276_bool;
			func_8923(var_276_bool);
			if(var_276_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d0";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 5625) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_8935();
			}
			if(var_74_cvector == 5632) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_8935();
			}
			if(var_74_cvector == 9281) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_8941();
			}
			if(var_74_cvector == 33610) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_9199();
				object var_144_object = var_1_object;
				func_8959(var_0_object);
			}
			if(var_74_cvector == 33611) {
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_9199();
				object var_174_object = var_1_object;
				func_8959(var_0_object);
			}
			if(var_74_cvector == 34255) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_9199();
			}
			if(var_74_cvector == 5661) {
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_8947();
			}
			if(var_74_cvector == 22425) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_8925();
			}
			if(var_74_cvector == 22426) {
				object var_203_object; object var_204_object;
				var_203_object = var_1_object;
				var_204_object = var_0_object;
				func_8925();
			}
			if(var_74_cvector == 22423) {
				object var_207_object; object var_208_object;
				var_207_object = var_1_object;
				var_208_object = var_0_object;
				func_8925();
			}
			if(var_73_cvector == 5624) {
				bool var_211_bool;
				func_9484(var_1_object);
				if(!var_211_bool) { //@nz
					func_970(var_74_cvector, "Neutral");
					var_0_object->SetMessage(505111); //@t
					var_0_object->ClearReplies(); //@t
					bool var_238_bool;
					func_9424(var_1_object);
					if(var_238_bool != 0)
						var_0_object->AddReply(505112, 5626, 5625); //@t
					bool var_247_bool;
					func_9424(var_1_object);
					if(var_247_bool != 0)
						var_0_object->AddReply(505119, 5626, 5632); //@t
					var_0_object->AddReply(505120, -1, 5634); //@t
					return 0;
				}
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(505106); //@t
				var_0_object->ClearReplies(); //@t
				bool var_257_bool = false;
				bool var_258_bool;
				func_9484(var_1_object);
				if(var_258_bool != 0) {
					bool var_260_bool;
					func_9436(var_1_object);
					if(var_260_bool != 0)
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(505107, 9234, 5620); //@t
				bool var_269_bool = false;
				bool var_270_bool = false;
				bool var_271_bool;
				func_9472(var_1_object);
				if(var_271_bool != 0) {
					bool var_277_bool;
					func_9951(var_1_object);
					if(var_277_bool != 0)
						var_270_bool = true;
				}
				if(var_270_bool != 0) {
					bool var_293_bool;
					func_9448(var_1_object);
					if(var_293_bool != 0)
						var_269_bool = true;
				}
				if(var_269_bool != 0)
					var_0_object->AddReply(505142, 5662, 5661); //@t
				bool var_302_bool;
				func_9412(var_1_object);
				if(var_302_bool != 0)
					var_0_object->AddReply(521229, 34260, 22420); //@t
				var_0_object->AddReply(505110, -1, 5623); //@t
				return 0;
			}
			if(var_73_cvector == 34260) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(532789); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532790, 34264, 34261); //@t
				var_0_object->AddReply(532791, 34264, 34262); //@t
				var_0_object->AddReply(532792, 22421, 34263); //@t
				return 0;
			}
			if(var_73_cvector == 34264) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(532793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532794, 22421, 34266); //@t
				var_0_object->AddReply(532795, 34268, 34267); //@t
				var_0_object->AddReply(532798, 34273, 34272); //@t
				return 0;
			}
			if(var_73_cvector == 34273) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(532799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532800, 22421, 34274); //@t
				var_0_object->AddReply(532801, 22424, 34276); //@t
				return 0;
			}
			if(var_73_cvector == 34268) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(532796); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532797, 22421, 34270); //@t
				return 0;
			}
			if(var_73_cvector == 22421) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(521230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521231, 22424, 22422); //@t
				var_0_object->AddReply(521232, -1, 22423); //@t
				return 0;
			}
			if(var_73_cvector == 22424) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(521233); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521234, -1, 22425); //@t
				var_0_object->AddReply(521235, -1, 22426); //@t
				return 0;
			}
			if(var_73_cvector == 5662) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(505143); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505144, 5664, 5663); //@t
				var_0_object->AddReply(505154, 5664, 5674); //@t
				return 0;
			}
			if(var_73_cvector == 5664) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(505145); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505146, 5666, 5665); //@t
				var_0_object->AddReply(505153, 5666, 5672); //@t
				return 0;
			}
			if(var_73_cvector == 5666) {
				func_970(var_74_cvector, "Anger");
				var_0_object->SetMessage(505147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505148, 34256, 5667); //@t
				var_0_object->AddReply(505149, -1, 5668); //@t
				return 0;
			}
			if(var_73_cvector == 34256) {
				func_970(var_74_cvector, "Anger");
				var_0_object->SetMessage(532785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532786, -1, 34257); //@t
				return 0;
			}
			if(var_73_cvector == 9234) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(508411); //@t
				var_0_object->ClearReplies(); //@t
				bool var_418_bool;
				func_9651(var_1_object);
				if(var_418_bool != 0)
					var_0_object->AddReply(508448, 9282, 9281); //@t
				bool var_427_bool;
				func_9460(var_1_object);
				if(var_427_bool != 0)
					var_0_object->AddReply(508463, 9300, 9299); //@t
				return 0;
			}
			if(var_73_cvector == 9300) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(508464); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508465, -1, 9301); //@t
				return 0;
			}
			if(var_73_cvector == 9282) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(508449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508451, 9287, 9284); //@t
				var_0_object->AddReply(508452, 9287, 9285); //@t
				var_0_object->AddReply(508453, 9287, 9286); //@t
				return 0;
			}
			if(var_73_cvector == 9287) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(508454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524819, 26132, 26131); //@t
				return 0;
			}
			if(var_73_cvector == 26132) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(524820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524821, 26134, 26133); //@t
				var_0_object->AddReply(508412, 9236, 9235); //@t
				var_0_object->AddReply(524920, 26250, 26249); //@t
				return 0;
			}
			if(var_73_cvector == 26250) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(524921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524922, 9240, 26251); //@t
				var_0_object->AddReply(524924, 9251, 26254); //@t
				return 0;
			}
			if(var_73_cvector == 9236) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(508413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508414, 9238, 9237); //@t
				return 0;
			}
			if(var_73_cvector == 9238) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(508415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508416, 9240, 9239); //@t
				var_0_object->AddReply(508418, 9242, 9241); //@t
				return 0;
			}
			if(var_73_cvector == 9242) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(508419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508456, 9292, 9291); //@t
				return 0;
			}
			if(var_73_cvector == 9292) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(508457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524827, 26134, 26140); //@t
				return 0;
			}
			if(var_73_cvector == 9240) {
				func_970(var_74_cvector, "Fear");
				var_0_object->SetMessage(508417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524826, 26134, 26138); //@t
				return 0;
			}
			if(var_73_cvector == 26134) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(524822); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524823, 33604, 26135); //@t
				var_0_object->AddReply(508422, 9251, 9245); //@t
				return 0;
			}
			if(var_73_cvector == 9251) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(508428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508429, 9296, 9252); //@t
				return 0;
			}
			if(var_73_cvector == 9296) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(508460); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524836, 9254, 26151); //@t
				return 0;
			}
			if(var_73_cvector == 33604) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(532187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508420, 9244, 9243); //@t
				var_0_object->AddReply(532775, 34244, 34243); //@t
				return 0;
			}
			if(var_73_cvector == 34244) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(532776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532777, 9254, 34245); //@t
				return 0;
			}
			if(var_73_cvector == 9244) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(508421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508430, 9254, 9253); //@t
				var_0_object->AddReply(524845, 9251, 26165); //@t
				return 0;
			}
			if(var_73_cvector == 9254) {
				func_970(var_74_cvector, "Surprise");
				var_0_object->SetMessage(508431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524846, 33605, 26167); //@t
				var_0_object->AddReply(508432, 9256, 9255); //@t
				return 0;
			}
			if(var_73_cvector == 9256) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(508433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508434, 9258, 9257); //@t
				return 0;
			}
			if(var_73_cvector == 9258) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(508435); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508436, 33605, 9259); //@t
				var_0_object->AddReply(524828, 26143, 26142); //@t
				return 0;
			}
			if(var_73_cvector == 26143) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(524829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524830, 33605, 26144); //@t
				return 0;
			}
			if(var_73_cvector == 33605) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(532188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532189, 33607, 33606); //@t
				var_0_object->AddReply(532778, 34248, 34247); //@t
				return 0;
			}
			if(var_73_cvector == 34248) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(532779); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532780, 34251, 34249); //@t
				var_0_object->AddReply(532781, 34251, 34250); //@t
				return 0;
			}
			if(var_73_cvector == 34251) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(532782); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532783, 33607, 34253); //@t
				var_0_object->AddReply(532784, -1, 34255); //@t
				return 0;
			}
			if(var_73_cvector == 33607) {
				func_970(var_74_cvector, "Neutral");
				var_0_object->SetMessage(532190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532191, -1, 33610); //@t
				var_0_object->AddReply(532192, -1, 33611); //@t
				return 0;
			}
			if(var_73_cvector == 5626) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(505113); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505114, 5628, 5627); //@t
				var_0_object->AddReply(505118, -1, 5631); //@t
				return 0;
			}
			if(var_73_cvector == 5628) {
				func_970(var_74_cvector, "Confusion");
				var_0_object->SetMessage(505115); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505116, -1, 5629); //@t
				var_0_object->AddReply(505117, -1, 5630); //@t
				return 0;
			}
			var_3_string = true;
			bool var_669_bool;
			func_8923(var_669_bool);
			if(var_669_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3e1";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 8194) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_9089();
				object var_83_object = var_1_object;
				func_9101(var_0_object);
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_8953();
			}
			if(var_74_cvector == 8192) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_9089();
			}
			if(var_74_cvector == 34238) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_9083();
			}
			if(var_73_cvector == 7630) {
				func_2210(var_74_cvector, "Neutral");
				var_0_object->SetMessage(506924); //@t
				var_0_object->ClearReplies(); //@t
				bool var_138_bool = false;
				bool var_139_bool = false;
				bool var_140_bool;
				func_9603(var_1_object);
				if(var_140_bool != 0) {
					bool var_148_bool;
					func_9639(var_1_object);
					if(var_148_bool != 0)
						var_139_bool = true;
				}
				if(var_139_bool != 0) {
					bool var_154_bool;
					func_9627(var_1_object);
					if(var_154_bool != 0)
						var_138_bool = true;
				}
				if(var_138_bool != 0)
					var_0_object->AddReply(506925, 7632, 7631); //@t
				bool var_163_bool;
				func_9591(var_1_object);
				if(var_163_bool != 0)
					var_0_object->AddReply(532771, 10476, 34238); //@t
				var_0_object->AddReply(507777, -1, 8579); //@t
				var_0_object->AddReply(532772, -1, 34239); //@t
				return 0;
			}
			if(var_73_cvector == 10476) {
				func_2210(var_74_cvector, "Confusion");
				var_0_object->SetMessage(509531); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509532, 10478, 10477); //@t
				var_0_object->AddReply(509539, 10478, 10484); //@t
				return 0;
			}
			if(var_73_cvector == 10478) {
				func_2210(var_74_cvector, "Confusion");
				var_0_object->SetMessage(509533); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509534, -1, 10479); //@t
				var_0_object->AddReply(509535, 10481, 10480); //@t
				return 0;
			}
			if(var_73_cvector == 10481) {
				func_2210(var_74_cvector, "Confusion");
				var_0_object->SetMessage(509536); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509537, -1, 10482); //@t
				var_0_object->AddReply(509538, -1, 10483); //@t
				return 0;
			}
			if(var_73_cvector == 7632) {
				func_2210(var_74_cvector, "Surprise");
				var_0_object->SetMessage(506926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506927, 8188, 7633); //@t
				bool var_215_bool;
				func_9615(var_1_object);
				if(var_215_bool != 0)
					var_0_object->AddReply(507420, 8190, 8189); //@t
				return 0;
			}
			if(var_73_cvector == 8190) {
				func_2210(var_74_cvector, "Neutral");
				var_0_object->SetMessage(507421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507426, 8197, 8195); //@t
				var_0_object->AddReply(534040, 35619, 35618); //@t
				return 0;
			}
			if(var_73_cvector == 35619) {
				func_2210(var_74_cvector, "Neutral");
				var_0_object->SetMessage(534041); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534042, 35621, 35620); //@t
				var_0_object->AddReply(534046, 8188, 35624); //@t
				return 0;
			}
			if(var_73_cvector == 35621) {
				func_2210(var_74_cvector, "Anger");
				var_0_object->SetMessage(534043); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534047, 35628, 35626); //@t
				var_0_object->AddReply(534048, 35628, 35627); //@t
				return 0;
			}
			if(var_73_cvector == 35628) {
				func_2210(var_74_cvector, "Neutral");
				var_0_object->SetMessage(534049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534050, 8188, 35629); //@t
				return 0;
			}
			if(var_73_cvector == 8197) {
				func_2210(var_74_cvector, "Neutral");
				var_0_object->SetMessage(507427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507428, 8188, 8198); //@t
				var_0_object->AddReply(532773, -1, 34240); //@t
				return 0;
			}
			if(var_73_cvector == 8188) {
				object var_273_object; object var_274_object;
				var_273_object = var_1_object;
				var_274_object = var_0_object;
				func_9095();
				func_2210(var_74_cvector, "Confusion");
				var_0_object->SetMessage(507419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507422, 8193, 8191); //@t
				var_0_object->AddReply(507423, -1, 8192); //@t
				return 0;
			}
			if(var_73_cvector == 8193) {
				func_2210(var_74_cvector, "Confusion");
				var_0_object->SetMessage(507424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507425, -1, 8194); //@t
				return 0;
			}
			var_3_string = true;
			bool var_292_bool;
			func_8923(var_292_bool);
			if(var_292_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8b9";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 11286) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_9148();
			}
			if(var_74_cvector == 11314) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_9129();
				object var_126_object = var_1_object;
				func_9154(var_0_object);
			}
			if(var_74_cvector == 11315) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_9129();
				object var_156_object = var_1_object;
				func_9154(var_0_object);
			}
			if(var_74_cvector == 11318) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_9129();
				object var_162_object = var_1_object;
				func_9154(var_0_object);
			}
			if(var_74_cvector == 11320) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_9193();
			}
			if(var_74_cvector == 35992) {
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_9170();
			}
			if(var_74_cvector == 35993) {
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_9170();
			}
			if(var_74_cvector == 11287) {
				object var_198_object; object var_199_object;
				var_198_object = var_1_object;
				var_199_object = var_0_object;
				func_9034();
			}
			if(var_73_cvector == 11285) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510235); //@t
				var_0_object->ClearReplies(); //@t
				bool var_222_bool = false;
				bool var_223_bool;
				func_9663(var_1_object);
				if(var_223_bool != 0) {
					bool var_231_bool;
					func_9675(var_1_object);
					if(var_231_bool != 0)
						var_222_bool = true;
				}
				if(var_222_bool != 0)
					var_0_object->AddReply(510236, 11288, 11286); //@t
				bool var_240_bool = false;
				bool var_241_bool;
				func_9699(var_1_object);
				if(var_241_bool != 0) {
					bool var_247_bool;
					func_9687(var_1_object);
					if(var_247_bool != 0)
						var_240_bool = true;
				}
				if(var_240_bool != 0)
					var_0_object->AddReply(510266, 35986, 11320); //@t
				bool var_256_bool;
				func_9532(var_1_object);
				if(var_256_bool != 0)
					var_0_object->AddReply(510237, 11089, 11287); //@t
				var_0_object->AddReply(511382, -1, 12578); //@t
				return 0;
			}
			if(var_73_cvector == 11089) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510063); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510064, 11091, 11090); //@t
				return 0;
			}
			if(var_73_cvector == 11091) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510065); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510066, 11093, 11092); //@t
				var_0_object->AddReply(510070, 11097, 11096); //@t
				return 0;
			}
			if(var_73_cvector == 11097) {
				func_2781(var_74_cvector, "Surprise");
				var_0_object->SetMessage(510071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510072, 11099, 11098); //@t
				var_0_object->AddReply(510080, 11110, 11109); //@t
				var_0_object->AddReply(510242, 11293, 11292); //@t
				return 0;
			}
			if(var_73_cvector == 11293) {
				func_2781(var_74_cvector, "Surprise");
				var_0_object->SetMessage(510243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510244, 11110, 11294); //@t
				var_0_object->AddReply(510245, 11290, 11295); //@t
				return 0;
			}
			if(var_73_cvector == 11110) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510239, 11290, 11289); //@t
				var_0_object->AddReply(510083, -1, 11112); //@t
				return 0;
			}
			if(var_73_cvector == 11290) {
				func_2781(var_74_cvector, "Surprise");
				var_0_object->SetMessage(510240); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510082, -1, 11111); //@t
				return 0;
			}
			if(var_73_cvector == 11099) {
				func_2781(var_74_cvector, "Surprise");
				var_0_object->SetMessage(510073); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510074, 11101, 11100); //@t
				var_0_object->AddReply(510079, 11101, 11107); //@t
				return 0;
			}
			if(var_73_cvector == 11101) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510076, 11093, 11102); //@t
				var_0_object->AddReply(510078, -1, 11106); //@t
				return 0;
			}
			if(var_73_cvector == 11093) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510067); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510068, -1, 11094); //@t
				var_0_object->AddReply(510069, -1, 11095); //@t
				return 0;
			}
			if(var_73_cvector == 35986) {
				func_2781(var_74_cvector, "Anger");
				var_0_object->SetMessage(534376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534377, 35988, 35987); //@t
				return 0;
			}
			if(var_73_cvector == 35988) {
				func_2781(var_74_cvector, "Anger");
				var_0_object->SetMessage(534378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534379, 11321, 35989); //@t
				var_0_object->AddReply(534383, 11321, 35996); //@t
				return 0;
			}
			if(var_73_cvector == 11321) {
				func_2781(var_74_cvector, "Anger");
				var_0_object->SetMessage(510267); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510268, 11323, 11322); //@t
				var_0_object->AddReply(510270, 11325, 11324); //@t
				return 0;
			}
			if(var_73_cvector == 11325) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510271); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510272, 35991, 11326); //@t
				return 0;
			}
			if(var_73_cvector == 11323) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510269); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510275, 11330, 11329); //@t
				var_0_object->AddReply(510273, 11328, 11327); //@t
				return 0;
			}
			if(var_73_cvector == 11328) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510281, 11330, 11336); //@t
				return 0;
			}
			if(var_73_cvector == 11330) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510277, 11332, 11331); //@t
				return 0;
			}
			if(var_73_cvector == 11332) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510279, 35991, 11333); //@t
				var_0_object->AddReply(510280, 35991, 11335); //@t
				return 0;
			}
			if(var_73_cvector == 35991) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(534380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534381, -1, 35992); //@t
				var_0_object->AddReply(534382, -1, 35993); //@t
				return 0;
			}
			if(var_73_cvector == 11288) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510246, 11298, 11297); //@t
				var_0_object->AddReply(510253, 11308, 11304); //@t
				return 0;
			}
			if(var_73_cvector == 11298) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510248, 11300, 11299); //@t
				var_0_object->AddReply(510258, 11308, 11309); //@t
				return 0;
			}
			if(var_73_cvector == 11300) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510249); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510250, 11302, 11301); //@t
				var_0_object->AddReply(510256, 11302, 11307); //@t
				return 0;
			}
			if(var_73_cvector == 11302) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510259, 11313, 11312); //@t
				return 0;
			}
			if(var_73_cvector == 11313) {
				func_2781(var_74_cvector, "Confusion");
				var_0_object->SetMessage(510260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510261, -1, 11314); //@t
				var_0_object->AddReply(510252, 11308, 11303); //@t
				return 0;
			}
			if(var_73_cvector == 11308) {
				func_2781(var_74_cvector, "Confusion");
				var_0_object->SetMessage(510257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510262, -1, 11315); //@t
				var_0_object->AddReply(510263, 11317, 11316); //@t
				return 0;
			}
			if(var_73_cvector == 11317) {
				func_2781(var_74_cvector, "Neutral");
				var_0_object->SetMessage(510264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510265, -1, 11318); //@t
				return 0;
			}
			var_3_string = true;
			bool var_497_bool;
			func_8923(var_497_bool);
			if(var_497_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf4";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 12296) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_9111();
			}
			if(var_74_cvector == 12301) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_9111();
			}
			if(var_74_cvector == 12309) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_9046();
			}
			if(var_74_cvector == 38101) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_9046();
			}
			if(var_73_cvector == 38099) {
				bool var_138_bool;
				func_9544(var_1_object);
				if(var_138_bool != 0) {
					object var_146_object; object var_147_object;
					var_146_object = var_1_object;
					var_147_object = var_0_object;
					func_9040();
					object var_150_object; object var_151_object;
					var_150_object = var_1_object;
					var_151_object = var_0_object;
					func_9055();
					func_3705(var_74_cvector, "Neutral");
					var_0_object->SetMessage(536314); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511097, 12285, 12284); //@t
					var_0_object->AddReply(536312, 12285, 38097); //@t
					return 0;
				}
				func_3705(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511109); //@t
				var_0_object->ClearReplies(); //@t
				bool var_180_bool;
				func_9556(var_1_object);
				if(var_180_bool != 0)
					var_0_object->AddReply(511110, 12300, 12299); //@t
				bool var_189_bool = false;
				bool var_190_bool;
				func_9568(var_1_object);
				if(var_190_bool != 0) {
					bool var_196_bool;
					func_9580(var_196_bool, var_1_object);
					if(var_196_bool != 0)
						var_189_bool = true;
				}
				if(var_189_bool != 0)
					var_0_object->AddReply(511113, 12303, 12302); //@t
				var_0_object->AddReply(536311, -1, 38096); //@t
				return 0;
			}
			if(var_73_cvector == 12303) {
				func_3705(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511114); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511115, 12305, 12304); //@t
				return 0;
			}
			if(var_73_cvector == 12305) {
				func_3705(var_74_cvector, "Surprise");
				var_0_object->SetMessage(511116); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511118, 12308, 12307); //@t
				return 0;
			}
			if(var_73_cvector == 12308) {
				func_3705(var_74_cvector, "Surprise");
				var_0_object->SetMessage(511119); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511120, -1, 12309); //@t
				var_0_object->AddReply(536315, -1, 38101); //@t
				return 0;
			}
			if(var_73_cvector == 12300) {
				func_3705(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511112, -1, 12301); //@t
				return 0;
			}
			if(var_73_cvector == 12285) {
				func_3705(var_74_cvector, "Confusion");
				var_0_object->SetMessage(511098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511099, 12287, 12286); //@t
				var_0_object->AddReply(511104, 12289, 12291); //@t
				return 0;
			}
			if(var_73_cvector == 12287) {
				func_3705(var_74_cvector, "Confusion");
				var_0_object->SetMessage(511100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511101, 12289, 12288); //@t
				var_0_object->AddReply(511103, 12289, 12290); //@t
				return 0;
			}
			if(var_73_cvector == 12289) {
				func_3705(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511105, 12295, 12294); //@t
				return 0;
			}
			if(var_73_cvector == 12295) {
				func_3705(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511106); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511107, -1, 12296); //@t
				var_0_object->AddReply(511108, -1, 12297); //@t
				return 0;
			}
			var_3_string = true;
			bool var_279_bool;
			func_8923(var_279_bool);
			if(var_279_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe90";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 12998) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_9227();
			}
			if(var_74_cvector == 12999) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_9227();
			}
			if(var_74_cvector == 12975) {
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_9269();
			}
			if(var_74_cvector == 12989) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_8953();
				object var_166_object = var_1_object;
				func_9067(var_0_object);
			}
			if(var_74_cvector == 12990) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_8953();
				object var_191_object = var_1_object;
				func_9067(var_0_object);
			}
			if(var_74_cvector == 13739) {
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_object;
				func_9275();
			}
			if(var_74_cvector == 13741) {
				object var_201_object; object var_202_object;
				var_201_object = var_1_object;
				var_202_object = var_0_object;
				func_9010();
				object var_203_object = var_1_object;
				func_9281(var_0_object);
			}
			if(var_74_cvector == 16862) {
				object var_245_object = var_1_object;
				func_9281(var_0_object);
			}
			if(var_73_cvector == 13751) {
				bool var_249_bool = false;
				bool var_250_bool = false;
				bool var_251_bool;
				func_9783(var_1_object);
				if(var_251_bool != 0) {
					bool var_257_bool;
					func_9723(var_1_object);
					if(!var_257_bool) //@nz
						var_250_bool = true;
				}
				if(var_250_bool != 0) {
					bool var_264_bool;
					func_9735(var_1_object);
					if(!var_264_bool) //@nz
						var_249_bool = true;
				}
				if(var_249_bool != 0) {
					object var_271_object; object var_272_object;
					var_271_object = var_1_object;
					var_272_object = var_0_object;
					func_9288();
					func_4252(var_74_cvector, "Anger");
					var_0_object->SetMessage(512584); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511771, 12991, 12979); //@t
					bool var_296_bool;
					func_9711(var_1_object);
					if(!var_296_bool) //@nz
						var_0_object->AddReply(512585, 13755, 13752); //@t
					return 0;
				}
				func_4252(var_74_cvector, "Fear");
				var_0_object->SetMessage(511765); //@t
				var_0_object->ClearReplies(); //@t
				bool var_308_bool = false;
				bool var_309_bool;
				func_9747(var_1_object);
				if(var_309_bool != 0) {
					bool var_315_bool;
					func_9759(var_1_object);
					if(var_315_bool != 0)
						var_308_bool = true;
				}
				if(var_308_bool != 0)
					var_0_object->AddReply(511767, 12977, 12975); //@t
				bool var_324_bool = false;
				bool var_325_bool;
				func_9723(var_1_object);
				if(var_325_bool != 0) {
					bool var_327_bool;
					func_9771(var_1_object);
					if(var_327_bool != 0)
						var_324_bool = true;
				}
				if(var_324_bool != 0)
					var_0_object->AddReply(512570, 13740, 13739); //@t
				var_0_object->AddReply(511766, -1, 12974); //@t
				return 0;
			}
			if(var_73_cvector == 13740) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512592, 13763, 13762); //@t
				return 0;
			}
			if(var_73_cvector == 13763) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512593); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512594, 13765, 13764); //@t
				return 0;
			}
			if(var_73_cvector == 13765) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512595); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512572, -1, 13741); //@t
				var_0_object->AddReply(515790, -1, 16862); //@t
				return 0;
			}
			if(var_73_cvector == 12977) {
				func_4252(var_74_cvector, "Fear");
				var_0_object->SetMessage(511769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511770, 12981, 12978); //@t
				var_0_object->AddReply(511772, 12981, 12980); //@t
				return 0;
			}
			if(var_73_cvector == 12981) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511774, 12984, 12983); //@t
				return 0;
			}
			if(var_73_cvector == 12984) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511776, 12987, 12985); //@t
				var_0_object->AddReply(511777, 12987, 12986); //@t
				var_0_object->AddReply(515789, -1, 16861); //@t
				return 0;
			}
			if(var_73_cvector == 12987) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511779, -1, 12989); //@t
				var_0_object->AddReply(511780, -1, 12990); //@t
				return 0;
			}
			if(var_73_cvector == 13755) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512587); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512588, 12993, 13756); //@t
				return 0;
			}
			if(var_73_cvector == 12991) {
				func_4252(var_74_cvector, "Anger");
				var_0_object->SetMessage(511781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511782, 12993, 12992); //@t
				return 0;
			}
			if(var_73_cvector == 12993) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511783); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512589, 12995, 13758); //@t
				var_0_object->AddReply(511784, 13760, 12994); //@t
				return 0;
			}
			if(var_73_cvector == 12995) {
				func_4252(var_74_cvector, "Confusion");
				var_0_object->SetMessage(511785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512590, 13760, 13759); //@t
				return 0;
			}
			if(var_73_cvector == 13760) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511786, 12997, 12996); //@t
				var_0_object->AddReply(515791, 12997, 16863); //@t
				return 0;
			}
			if(var_73_cvector == 12997) {
				func_4252(var_74_cvector, "Neutral");
				var_0_object->SetMessage(511787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511788, -1, 12998); //@t
				var_0_object->AddReply(511789, -1, 12999); //@t
				return 0;
			}
			var_3_string = true;
			bool var_454_bool;
			func_8923(var_454_bool);
			if(var_454_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10b3";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 34767) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_8985();
			}
			if(var_74_cvector == 42862) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_8985();
			}
			if(var_74_cvector == 42863) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_8985();
			}
			if(var_73_cvector == 34759) {
				func_4902(var_74_cvector, "Neutral");
				var_0_object->SetMessage(533245); //@t
				var_0_object->ClearReplies(); //@t
				bool var_134_bool;
				func_9496(var_1_object);
				if(var_134_bool != 0)
					var_0_object->AddReply(533246, 42854, 34760); //@t
				var_0_object->AddReply(540800, -1, 42851); //@t
				return 0;
			}
			if(var_73_cvector == 42854) {
				func_4902(var_74_cvector, "Neutral");
				var_0_object->SetMessage(540803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540804, 34761, 42855); //@t
				var_0_object->AddReply(540805, 42857, 42856); //@t
				return 0;
			}
			if(var_73_cvector == 42857) {
				func_4902(var_74_cvector, "Neutral");
				var_0_object->SetMessage(540806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540807, 34764, 42858); //@t
				return 0;
			}
			if(var_73_cvector == 34761) {
				func_4902(var_74_cvector, "Neutral");
				var_0_object->SetMessage(533247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533249, 34764, 34763); //@t
				return 0;
			}
			if(var_73_cvector == 34764) {
				func_4902(var_74_cvector, "Neutral");
				var_0_object->SetMessage(533250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540808, 42861, 42860); //@t
				var_0_object->AddReply(540811, -1, 42863); //@t
				return 0;
			}
			if(var_73_cvector == 42861) {
				func_4902(var_74_cvector, "Neutral");
				var_0_object->SetMessage(540809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533251, 34766, 34765); //@t
				var_0_object->AddReply(540810, -1, 42862); //@t
				return 0;
			}
			if(var_73_cvector == 34766) {
				func_4902(var_74_cvector, "Neutral");
				var_0_object->SetMessage(533252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533253, -1, 34767); //@t
				return 0;
			}
			var_3_string = true;
			bool var_199_bool;
			func_8923(var_199_bool);
			if(var_199_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x133d";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_73_cvector == 13432) {
				bool var_79_bool = false;
				bool var_80_bool;
				func_9819(var_1_object);
				if(var_80_bool != 0) {
					bool var_88_bool;
					func_9807(var_1_object);
					if(var_88_bool != 0)
						var_79_bool = true;
				}
				if(var_79_bool != 0) {
					object var_94_object; object var_95_object;
					var_94_object = var_1_object;
					var_95_object = var_0_object;
					func_9347();
					func_5296(var_74_cvector, "Neutral");
					var_0_object->SetMessage(512275); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512276, 13435, 13433); //@t
					var_0_object->AddReply(512277, 13435, 13434); //@t
					return 0;
				}
				func_5296(var_74_cvector, "Neutral");
				var_0_object->SetMessage(513779); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513780, -1, 15016); //@t
				var_0_object->AddReply(541598, -1, 43762); //@t
				return 0;
			}
			if(var_73_cvector == 13435) {
				func_5296(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512279, 13439, 13437); //@t
				var_0_object->AddReply(512280, 13439, 13438); //@t
				return 0;
			}
			if(var_73_cvector == 13439) {
				func_5296(var_74_cvector, "Surprise");
				var_0_object->SetMessage(512281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512282, 13442, 13441); //@t
				var_0_object->AddReply(541834, 13442, 44049); //@t
				return 0;
			}
			if(var_73_cvector == 13442) {
				func_5296(var_74_cvector, "Surprise");
				var_0_object->SetMessage(512283); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512284, 13444, 13443); //@t
				return 0;
			}
			if(var_73_cvector == 13444) {
				func_5296(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512286, 13446, 13445); //@t
				return 0;
			}
			if(var_73_cvector == 13446) {
				func_5296(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512288, 13448, 13447); //@t
				var_0_object->AddReply(541836, 13448, 44052); //@t
				return 0;
			}
			if(var_73_cvector == 13448) {
				func_5296(var_74_cvector, "Neutral");
				var_0_object->SetMessage(512289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512290, 13450, 13449); //@t
				return 0;
			}
			if(var_73_cvector == 13450) {
				func_5296(var_74_cvector, "Surprise");
				var_0_object->SetMessage(512291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512292, -1, 13451); //@t
				var_0_object->AddReply(541837, -1, 44054); //@t
				return 0;
			}
			var_3_string = true;
			bool var_191_bool;
			func_8923(var_191_bool);
			if(var_191_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x14c7";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 15244) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_9359();
			}
			if(var_74_cvector == 15245) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_9359();
			}
			if(var_74_cvector == 15247) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_9406();
			}
			if(var_74_cvector == 15264) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_9376();
			}
			if(var_73_cvector == 15229) {
				bool var_138_bool;
				func_9831(var_1_object);
				if(var_138_bool != 0) {
					object var_146_object; object var_147_object;
					var_146_object = var_1_object;
					var_147_object = var_0_object;
					func_9353();
					object var_150_object; object var_151_object;
					var_150_object = var_1_object;
					var_151_object = var_0_object;
					func_9077();
					func_5743(var_74_cvector, "Neutral");
					var_0_object->SetMessage(513994); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(538808, 40728, 40727); //@t
					var_0_object->AddReply(538813, 40730, 40732); //@t
					return 0;
				}
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514011); //@t
				var_0_object->ClearReplies(); //@t
				bool var_180_bool;
				func_9939(var_1_object);
				if(var_180_bool != 0)
					var_0_object->AddReply(514012, 15248, 15247); //@t
				bool var_189_bool = false;
				bool var_190_bool;
				func_9843(var_1_object);
				if(var_190_bool != 0) {
					bool var_196_bool;
					func_9855(var_1_object);
					if(var_196_bool != 0)
						var_189_bool = true;
				}
				if(var_189_bool != 0)
					var_0_object->AddReply(514029, 15265, 15264); //@t
				var_0_object->AddReply(514039, -1, 15274); //@t
				return 0;
			}
			if(var_73_cvector == 15265) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514031, 15267, 15266); //@t
				return 0;
			}
			if(var_73_cvector == 15267) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514032); //@t
				var_0_object->ClearReplies(); //@t
				bool var_219_bool;
				func_9867(var_1_object);
				if(var_219_bool != 0)
					var_0_object->AddReply(514033, 15269, 15268); //@t
				var_0_object->AddReply(514038, -1, 15273); //@t
				return 0;
			}
			if(var_73_cvector == 15269) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514035, -1, 15270); //@t
				var_0_object->AddReply(514036, -1, 15271); //@t
				var_0_object->AddReply(514037, -1, 15272); //@t
				return 0;
			}
			if(var_73_cvector == 15248) {
				func_5743(var_74_cvector, "Confusion");
				var_0_object->SetMessage(514013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514014, 15250, 15249); //@t
				var_0_object->AddReply(514024, 15260, 15259); //@t
				return 0;
			}
			if(var_73_cvector == 15260) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514026, 15262, 15261); //@t
				var_0_object->AddReply(538812, 40751, 40731); //@t
				return 0;
			}
			if(var_73_cvector == 40751) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(538826); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538827, 15262, 40752); //@t
				return 0;
			}
			if(var_73_cvector == 15262) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514027); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514028, -1, 15263); //@t
				var_0_object->AddReply(538828, 15250, 40754); //@t
				return 0;
			}
			if(var_73_cvector == 15250) {
				func_5743(var_74_cvector, "Confusion");
				var_0_object->SetMessage(514015); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514016, 15252, 15251); //@t
				return 0;
			}
			if(var_73_cvector == 15252) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514018, -1, 15253); //@t
				var_0_object->AddReply(514019, 15255, 15254); //@t
				return 0;
			}
			if(var_73_cvector == 15255) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514020); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514021, 15257, 15256); //@t
				return 0;
			}
			if(var_73_cvector == 15257) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514023, -1, 15258); //@t
				var_0_object->AddReply(541838, -1, 44055); //@t
				return 0;
			}
			if(var_73_cvector == 40728) {
				func_5743(var_74_cvector, "Confusion");
				var_0_object->SetMessage(538809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538810, 40730, 40729); //@t
				var_0_object->AddReply(538814, 40735, 40734); //@t
				return 0;
			}
			if(var_73_cvector == 40735) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(538815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538816, 40737, 40736); //@t
				return 0;
			}
			if(var_73_cvector == 40737) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(538817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538818, 40740, 40738); //@t
				var_0_object->AddReply(538819, -1, 40739); //@t
				return 0;
			}
			if(var_73_cvector == 40740) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(538820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538821, 40730, 40741); //@t
				return 0;
			}
			if(var_73_cvector == 40730) {
				func_5743(var_74_cvector, "Confusion");
				var_0_object->SetMessage(538811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513995, 15231, 15230); //@t
				var_0_object->AddReply(538822, 15233, 40743); //@t
				return 0;
			}
			if(var_73_cvector == 15231) {
				func_5743(var_74_cvector, "Surprise");
				var_0_object->SetMessage(513996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513997, 15233, 15232); //@t
				var_0_object->AddReply(538823, 15237, 40745); //@t
				return 0;
			}
			if(var_73_cvector == 15233) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(513998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513999, 15235, 15234); //@t
				return 0;
			}
			if(var_73_cvector == 15235) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514000); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514001, 15237, 15236); //@t
				return 0;
			}
			if(var_73_cvector == 15237) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514003, 15239, 15238); //@t
				var_0_object->AddReply(538825, 15241, 40749); //@t
				return 0;
			}
			if(var_73_cvector == 15239) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514005, 15241, 15240); //@t
				return 0;
			}
			if(var_73_cvector == 15241) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514007, 15243, 15242); //@t
				var_0_object->AddReply(514010, -1, 15245); //@t
				return 0;
			}
			if(var_73_cvector == 15243) {
				func_5743(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514009, -1, 15244); //@t
				return 0;
			}
			var_3_string = true;
			bool var_417_bool;
			func_8923(var_417_bool);
			if(var_417_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1686";
	
	}

}


task task_21
{
}


task task_22
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, int var_55_int, int var_56_int, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 36145) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_9018();
			}
			if(var_74_cvector == 40329) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_9018();
			}
			if(var_74_cvector == 40333) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_9382();
			}
			if(var_74_cvector == 15601) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_9388();
			}
			if(var_73_cvector == 36142) {
				bool var_140_bool;
				func_9520(var_1_object);
				if(var_140_bool != 0) {
					object var_148_object; object var_149_object;
					var_148_object = var_1_object;
					var_149_object = var_0_object;
					func_9012();
					object var_152_object; object var_153_object;
					var_152_object = var_1_object;
					var_153_object = var_0_object;
					func_9061();
					func_6609(var_74_cvector, "Neutral");
					var_0_object->SetMessage(534501); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(538426, 40303, 40302); //@t
					var_0_object->AddReply(538432, 40311, 40308); //@t
					return 0;
				}
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514377); //@t
				var_0_object->ClearReplies(); //@t
				bool var_182_bool = false;
				bool var_183_bool;
				func_9891(var_1_object);
				if(var_183_bool != 0) {
					bool var_189_bool;
					func_9879(var_1_object);
					if(var_189_bool != 0)
						var_182_bool = true;
				}
				if(var_182_bool != 0)
					var_0_object->AddReply(538451, 15592, 40333); //@t
				bool var_198_bool = false;
				bool var_199_bool = false;
				bool var_200_bool;
				func_9891(var_1_object);
				if(!var_200_bool) { //@nz
					bool var_203_bool;
					func_9903(var_1_object);
					if(var_203_bool != 0)
						var_199_bool = true;
				}
				if(var_199_bool != 0) {
					bool var_209_bool;
					func_9915(var_1_object);
					if(var_209_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0)
					var_0_object->AddReply(514378, 15602, 15601); //@t
				var_0_object->AddReply(538442, -1, 40321); //@t
				var_0_object->AddReply(514419, -1, 15644); //@t
				return 0;
			}
			if(var_73_cvector == 15602) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514380, 15604, 15603); //@t
				var_0_object->AddReply(514399, 15604, 15623); //@t
				return 0;
			}
			if(var_73_cvector == 15604) {
				func_6609(var_74_cvector, "Surprise");
				var_0_object->SetMessage(514381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514382, 15606, 15605); //@t
				return 0;
			}
			if(var_73_cvector == 15606) {
				func_6609(var_74_cvector, "Surprise");
				var_0_object->SetMessage(514383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514384, 15608, 15607); //@t
				return 0;
			}
			if(var_73_cvector == 15608) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514385); //@t
				var_0_object->ClearReplies(); //@t
				bool var_252_bool;
				func_9927(var_1_object);
				if(var_252_bool != 0)
					var_0_object->AddReply(514386, 15610, 15609); //@t
				var_0_object->AddReply(514398, -1, 15622); //@t
				return 0;
			}
			if(var_73_cvector == 15610) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514388, 15612, 15611); //@t
				return 0;
			}
			if(var_73_cvector == 15612) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514390, 15614, 15613); //@t
				return 0;
			}
			if(var_73_cvector == 15614) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514391); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514392, 15616, 15615); //@t
				var_0_object->AddReply(514397, 15616, 15620); //@t
				return 0;
			}
			if(var_73_cvector == 15616) {
				func_6609(var_74_cvector, "Confusion");
				var_0_object->SetMessage(514393); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514394, 15618, 15617); //@t
				return 0;
			}
			if(var_73_cvector == 15618) {
				func_6609(var_74_cvector, "Confusion");
				var_0_object->SetMessage(514395); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514396, -1, 15619); //@t
				var_0_object->AddReply(539600, -1, 41546); //@t
				return 0;
			}
			if(var_73_cvector == 15592) {
				func_6609(var_74_cvector, "Fear");
				var_0_object->SetMessage(514369); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538448, 40331, 40330); //@t
				var_0_object->AddReply(514376, -1, 15599); //@t
				return 0;
			}
			if(var_73_cvector == 40331) {
				func_6609(var_74_cvector, "Fear");
				var_0_object->SetMessage(538449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514370, 15594, 15593); //@t
				var_0_object->AddReply(538450, -1, 40332); //@t
				return 0;
			}
			if(var_73_cvector == 15594) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(514371); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514372, 15596, 15595); //@t
				return 0;
			}
			if(var_73_cvector == 15596) {
				func_6609(var_74_cvector, "Fear");
				var_0_object->SetMessage(514373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514374, -1, 15597); //@t
				var_0_object->AddReply(514375, -1, 15598); //@t
				return 0;
			}
			if(var_73_cvector == 40311) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(538435); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538436, 40313, 40312); //@t
				var_0_object->AddReply(538438, 40303, 40314); //@t
				return 0;
			}
			if(var_73_cvector == 40313) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(538437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538439, 40303, 40316); //@t
				return 0;
			}
			if(var_73_cvector == 40303) {
				func_6609(var_74_cvector, "Confusion");
				var_0_object->SetMessage(538427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538428, 40305, 40304); //@t
				var_0_object->AddReply(538433, 40310, 40309); //@t
				return 0;
			}
			if(var_73_cvector == 40310) {
				func_6609(var_74_cvector, "Surprise");
				var_0_object->SetMessage(538434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538440, 40305, 40318); //@t
				return 0;
			}
			if(var_73_cvector == 40305) {
				func_6609(var_74_cvector, "Confusion");
				var_0_object->SetMessage(538429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538430, 38458, 40306); //@t
				var_0_object->AddReply(538441, 38458, 40320); //@t
				return 0;
			}
			if(var_73_cvector == 38458) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536630); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538443, 40307, 40322); //@t
				var_0_object->AddReply(536631, 38460, 38459); //@t
				return 0;
			}
			if(var_73_cvector == 40307) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(538431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536629, 38460, 38457); //@t
				var_0_object->AddReply(538444, 40325, 40324); //@t
				return 0;
			}
			if(var_73_cvector == 40325) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(538445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538446, 38460, 40326); //@t
				return 0;
			}
			if(var_73_cvector == 38460) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536633, 38462, 38461); //@t
				var_0_object->AddReply(538447, -1, 40329); //@t
				return 0;
			}
			if(var_73_cvector == 38462) {
				func_6609(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536634); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534504, -1, 36145); //@t
				var_0_object->AddReply(534505, -1, 36146); //@t
				return 0;
			}
			var_3_string = true;
			bool var_433_bool;
			func_8923(var_433_bool);
			if(var_433_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x19e8";
	
	}

}


task task_23
{
}


task task_24
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, int var_60_int, int var_61_int, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_74_cvector == 35700) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_8994();
				object var_106_object = var_1_object;
				func_9101(var_0_object);
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_8953();
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_9003();
			}
			if(var_74_cvector == 38262) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_8994();
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_9003();
				object var_145_object = var_1_object;
				func_8975(var_0_object);
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_8953();
			}
			if(var_73_cvector == 35694) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(534101); //@t
				var_0_object->ClearReplies(); //@t
				bool var_172_bool;
				func_9508(var_1_object);
				if(var_172_bool != 0)
					var_0_object->AddReply(534102, 35697, 35695); //@t
				var_0_object->AddReply(534103, -1, 35696); //@t
				var_0_object->AddReply(536433, -1, 38218); //@t
				return 0;
			}
			if(var_73_cvector == 35697) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(534104); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536434, 38220, 38219); //@t
				var_0_object->AddReply(536440, 38226, 38225); //@t
				return 0;
			}
			if(var_73_cvector == 38226) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536441); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536442, 38220, 38227); //@t
				var_0_object->AddReply(536443, 38230, 38229); //@t
				return 0;
			}
			if(var_73_cvector == 38220) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536435); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536436, 38222, 38221); //@t
				var_0_object->AddReply(536451, 38230, 38238); //@t
				return 0;
			}
			if(var_73_cvector == 38222) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536438, 38230, 38223); //@t
				var_0_object->AddReply(536446, 38230, 38232); //@t
				return 0;
			}
			if(var_73_cvector == 38230) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536445, 38234, 38231); //@t
				var_0_object->AddReply(536452, 38241, 38240); //@t
				return 0;
			}
			if(var_73_cvector == 38241) {
				func_7426(var_74_cvector, "Surprise");
				var_0_object->SetMessage(536453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536454, 38234, 38242); //@t
				return 0;
			}
			if(var_73_cvector == 38234) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536448, 38236, 38235); //@t
				var_0_object->AddReply(536461, 38253, 38251); //@t
				return 0;
			}
			if(var_73_cvector == 38236) {
				func_7426(var_74_cvector, "Surprise");
				var_0_object->SetMessage(536449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536459, 38224, 38248); //@t
				var_0_object->AddReply(536462, 38253, 38252); //@t
				return 0;
			}
			if(var_73_cvector == 38253) {
				func_7426(var_74_cvector, "Surprise");
				var_0_object->SetMessage(536463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536464, 38224, 38255); //@t
				return 0;
			}
			if(var_73_cvector == 38224) {
				func_7426(var_74_cvector, "Surprise");
				var_0_object->SetMessage(536439); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536466, 38258, 38257); //@t
				return 0;
			}
			if(var_73_cvector == 38258) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(536467); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534105, 35699, 35698); //@t
				var_0_object->AddReply(536468, 35699, 38260); //@t
				return 0;
			}
			if(var_73_cvector == 35699) {
				func_7426(var_74_cvector, "Neutral");
				var_0_object->SetMessage(534106); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534107, -1, 35700); //@t
				var_0_object->AddReply(536469, -1, 38262); //@t
				return 0;
			}
			var_3_string = true;
			bool var_300_bool;
			func_8923(var_300_bool);
			if(var_300_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d19";
	
	}

}


task task_25
{
}


task task_26
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, int var_65_int, int var_66_int, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_73_cvector == 37351) {
				func_7946(var_74_cvector, "Neutral");
				var_0_object->SetMessage(535665); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535666, 42176, 37352); //@t
				var_0_object->AddReply(540007, -1, 41978); //@t
				return 0;
			}
			if(var_73_cvector == 42176) {
				func_7946(var_74_cvector, "Confusion");
				var_0_object->SetMessage(540197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540198, 42216, 42177); //@t
				var_0_object->AddReply(540232, 42214, 42213); //@t
				return 0;
			}
			if(var_73_cvector == 42216) {
				func_7946(var_74_cvector, "Confusion");
				var_0_object->SetMessage(540234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540235, 42214, 42217); //@t
				var_0_object->AddReply(540236, -1, 42218); //@t
				return 0;
			}
			if(var_73_cvector == 42214) {
				func_7946(var_74_cvector, "Neutral");
				var_0_object->SetMessage(540233); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540237, 42221, 42219); //@t
				var_0_object->AddReply(540238, -1, 42220); //@t
				return 0;
			}
			if(var_73_cvector == 42221) {
				func_7946(var_74_cvector, "Surprise");
				var_0_object->SetMessage(540239); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540240, 42224, 42222); //@t
				return 0;
			}
			if(var_73_cvector == 42224) {
				func_7946(var_74_cvector, "Surprise");
				var_0_object->SetMessage(540242); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540243, -1, 42225); //@t
				var_0_object->AddReply(540241, -1, 42223); //@t
				return 0;
			}
			var_3_string = true;
			bool var_150_bool;
			func_8923(var_150_bool);
			if(var_150_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1f21";
	
	}

}


task task_27
{
}


task task_28
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, int var_70_int, int var_71_int, bool var_72_bool, cvector var_73_cvector, cvector var_74_cvector)
	{
		if(1 != 0) {
			func_8750();
			if(var_73_cvector == 42551) {
				func_8259(var_74_cvector, "Neutral");
				var_0_object->SetMessage(540542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540543, -1, 42552); //@t
				var_0_object->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_string = true;
			bool var_103_bool;
			func_8923(var_103_bool);
			if(var_103_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x205a";
	
	}

}


maintask task_29
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, bool var_70_bool, cvector var_71_cvector, cvector var_72_cvector)
	{
		var_73_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_8338(var_70_bool, var_71_cvector, var_72_cvector);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, bool var_70_bool, cvector var_71_cvector, cvector var_72_cvector, string var_73_string)
	{
		if(var_73_string == "icot_viktor_NPC_Trigger")
			func_8377(var_73_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, bool var_70_bool, cvector var_71_cvector, cvector var_72_cvector)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
		func_8366(var_70_bool, var_71_cvector, var_72_cvector);
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, bool var_70_bool, cvector var_71_cvector, cvector var_72_cvector, object var_73_object)
	{
		bool var_75_bool;
		if(actor != 0) {
			@IsOverrideActive(var_75_bool);
			if(!var_75_bool) { //@nz
				disable OnUse;
				bool var_78_bool; object var_79_object;
				var_73_object = var_79_object;
				func_8465(var_78_bool, var_79_object);
				enable OnUse;
				object var_92_object;
				var_73_object = var_92_object;
				func_10327(var_92_object);
			}
		}
	}

}


void func_8704(string var_83_string)
{
	bool var_87_bool; float var_88_float; float var_89_float;
	@lshHasAnimation(var_87_bool, var_83_string);
	if(var_87_bool != 0) {
		@lshGetAnimTimes(var_83_string, var_88_float, var_89_float);
		@lshPlayAnimation(var_88_float, var_89_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_83_string);
	}
	
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_78_bool;
	func_8474(var_78_bool);
	if(!var_78_bool) goto Label_0; //@nz
}


// @pe
void func_3588(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_675_object, object var_676_object)
{
	var_0_object = var_676_object;
	var_1_object = var_675_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_682_bool;
		func_9544(var_1_object);
		if(var_682_bool != 0) {
			object var_688_object; object var_689_object;
			var_688_object = var_1_object;
			var_689_object = var_0_object;
			func_9040();
			object var_692_object; object var_693_object;
			var_692_object = var_1_object;
			var_693_object = var_0_object;
			func_9055();
			func_3705(var_676_object, "Neutral");
			var_0_object->SetMessage(536314); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511097, 12285, 12284); //@t
			var_0_object->AddReply(536312, 12285, 38097); //@t
		} else {
					func_3705(var_676_object, "Neutral");
					var_0_object->SetMessage(511109); //@t
					var_0_object->ClearReplies(); //@t
					bool var_721_bool;
					func_9556(var_1_object);
					if(var_721_bool != 0)
						var_0_object->AddReply(511110, 12300, 12299); //@t
					bool var_730_bool = false;
					bool var_731_bool;
					func_9568(var_1_object);
					if(var_731_bool != 0) {
						bool var_737_bool;
						func_9580(var_737_bool, var_1_object);
						if(var_737_bool != 0)
							var_730_bool = true;
					}
					if(var_730_bool != 0)
						var_0_object->AddReply(511113, 12303, 12302); //@t
					var_0_object->AddReply(536311, -1, 38096); //@t
		}
	}
	for(;;) {
		bool var_711_bool;
		func_8923(var_711_bool);
		if(var_711_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_8704(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3704;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3704:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe08";


// @pe
void func_9735(bool var_802_bool)
{
	int var_804_int;
	func_8784(var_804_int, "d5q03");
	if(var_804_int == -1)
		var_802_bool = true;
	var_802_bool = false;
}


// @pe
void func_4105(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_780_object, object var_781_object)
{
	var_0_object = var_781_object;
	var_1_object = var_780_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_787_bool = false;
		bool var_788_bool = false;
		bool var_789_bool;
		func_9783(var_1_object);
		if(var_789_bool != 0) {
			bool var_795_bool;
			func_9723(var_1_object);
			if(!var_795_bool) //@nz
				var_788_bool = true;
		}
		if(var_788_bool != 0) {
			bool var_802_bool;
			func_9735(var_1_object);
			if(!var_802_bool) //@nz
				var_787_bool = true;
		}
		if(var_787_bool != 0) {
			object var_809_object; object var_810_object;
			var_809_object = var_1_object;
			var_810_object = var_0_object;
			func_9288();
			func_4252(var_781_object, "Anger");
			var_0_object->SetMessage(512584); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511771, 12991, 12979); //@t
			bool var_825_bool;
			func_9711(var_1_object);
			if(!var_825_bool) //@nz
				var_0_object->AddReply(512585, 13755, 13752); //@t
		} else {
					func_4252(var_781_object, "Fear");
					var_0_object->SetMessage(511765); //@t
					var_0_object->ClearReplies(); //@t
					bool var_845_bool = false;
					bool var_846_bool;
					func_9747(var_1_object);
					if(var_846_bool != 0) {
						bool var_852_bool;
						func_9759(var_1_object);
						if(var_852_bool != 0)
							var_845_bool = true;
					}
					if(var_845_bool != 0)
						var_0_object->AddReply(511767, 12977, 12975); //@t
					bool var_861_bool = false;
					bool var_862_bool;
					func_9723(var_1_object);
					if(var_862_bool != 0) {
						bool var_864_bool;
						func_9771(var_1_object);
						if(var_864_bool != 0)
							var_861_bool = true;
					}
					if(var_861_bool != 0)
						var_0_object->AddReply(512570, 13740, 13739); //@t
					var_0_object->AddReply(511766, -1, 12974); //@t
		}
	}
	for(;;) {
		bool var_835_bool;
		func_8923(var_835_bool);
		if(var_835_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_8704(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4251;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4251:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x100d";


// @pe
void func_8201(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1465_object, object var_1466_object)
{
	var_0_object = var_1466_object;
	var_1_object = var_1465_object;
	var_3_string = false;
	if(1 != 0) {
		func_8259(var_1466_object, "Neutral");
		var_0_object->SetMessage(540542); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540543, -1, 42552); //@t
		var_0_object->AddReply(540796, -1, 42845); //@t
		goto Label_8229;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x200d";
	}
Label_8229:
	bool var_1487_bool;
	func_8923(var_1487_bool);
	if(var_1487_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_8704(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_8258;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_8258:
		return 0;

	}
	
}


void func_9227(void)
{
	object var_82_object;
	int var_83_int;
	func_8784(var_83_int, "d5q03");
	if(var_83_int == 0) {
		@SetVariable("d5q03", 1);
		object var_91_object;
		func_10260(var_91_object);
		var_91_object = var_82_object;
		float var_102_float;
		func_8895(var_102_float);
		var_82_object->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 515370, var_102_float);
		func_10115();
		func_10128();
		object var_136_object;
		func_8789(var_136_object, "quest_d5_03");
		bool var_144_bool;
		func_8883(var_144_bool, "quest_d5_03", "place_prisoners");
		var_82_object = null;
	}
}


void func_13(object var_0_object, int var_95_int, object var_96_object)
{
	var_0_object = var_96_object;
	bool var_106_bool; object var_107_object;
	var_96_object = var_107_object;
	func_8479(var_106_bool, var_107_object, 70.0);
	if(!var_106_bool) { //@nz
		var_95_int = -2;
		return 8;
	}
	object var_102_object;
	@CreateDialog(var_102_object);
	int var_154_int;
	func_8917(var_154_int);
	var_102_object->SetNPCName(var_154_int);
	int var_155_int;
	func_8915(var_155_int);
	var_102_object->SetNPCDescription(var_155_int);
	string var_156_string;
	func_8919(var_156_string);
	var_102_object->SetPhoto(var_156_string);
	string var_157_string;
	func_8921(var_157_string);
	var_102_object->SetPhoto2(var_157_string);
	int var_158_int;
	func_10310(var_158_int);
	var_102_object->SetPlayerName(var_158_int);
	bool var_103_bool;
	@IsOverrideActive(var_103_bool);
	if(var_103_bool != 0) {
		var_95_int = -2;
		return 8;
	}
	@DoDialog(var_102_object);
	bool var_167_bool; object var_168_object;
	object var_169_object;
	func_8757(var_169_object);
	var_169_object = var_168_object;
	func_8566(var_167_bool, var_168_object);
	object var_262_object; object var_263_object;
	var_96_object = var_262_object;
	var_102_object = var_263_object;
	TaskCall(2);
	func_94(var_264_object, var_265_object, var_266_string, var_267_bool, var_262_object, var_263_object);
	TaskReturn();
	bool var_105_bool;
	var_102_object->IsDialogEnd(var_105_bool);
	
	for(;;) {
		var_315_bool = !var_105_bool; //@nz
		if(var_315_bool == 0) goto Label_83;
		@sync();
		var_102_object->IsDialogEnd(var_105_bool);
	}
	
Label_83:
	object var_316_object;
	var_96_object = var_316_object;
	func_8548();
	@StopDialog(var_102_object);
	var_102_object->GetReturnValue(-1);
	int var_104_int = var_95_int;
}
EMIT "Stack[-4] = 0";


void func_8720(string var_277_string, bool var_278_bool)
{
	bool var_284_bool; float var_285_float; float var_286_float;
	@lshHasAnimation(var_284_bool, var_277_string);
	if(var_284_bool != 0) {
		@lshGetAnimTimes(var_277_string, var_285_float, var_286_float);
		@lshPlayAnimation(var_285_float, var_286_float, var_278_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_277_string);
	}
	
}


// @pe
void func_9747(bool var_846_bool)
{
	int var_848_int;
	func_8784(var_848_int, "d5q03");
	if(var_848_int == 2)
		var_846_bool = true;
	var_846_bool = false;
}


void func_10260(object var_91_object)
{
	object var_94_object; object var_95_object;
	@GetMainOutdoorScene(var_94_object);
	if(var_94_object == null) {
		@Trace("Can't find main outdoor scene");
		var_95_object = null;
		var_95_object = var_91_object;
	}
	var_94_object->GetMap(var_95_object);
	var_95_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_8735(bool var_201_bool, string var_202_string)
{
	bool var_204_bool;
	bool var_205_bool;
	func_8923(var_205_bool);
	if(var_205_bool != 0) {
		@lshHasSpeech(var_204_bool, var_202_string);
		if(var_204_bool != 0) {
			@lshPlaySpeech(var_202_string);
			var_201_bool = true;
		}
	}
	var_201_bool = false;
}


// @pe
void func_9759(bool var_852_bool)
{
	int var_854_int;
	func_8784(var_854_int, "ood5Viktor1");
	if(var_854_int == 0) {
		var_852_bool = true;
		return 0;
	}
	var_852_bool = false;
}


void func_10277(object var_128_object, string var_129_string, float var_130_float)
{
	object var_138_object;
	@GetMainOutdoorScene(var_138_object);
	if(var_138_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_136_cvector;
	cvector var_137_cvector;
	bool var_139_bool;
	var_138_object->GetLocator(var_129_string, var_139_bool, var_136_cvector, var_137_cvector);
	if(!var_139_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_129_string) + " doesnt exist");
	var_138_object->GetMap(var_128_object);
	if(var_128_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_149_float = GetByIndex(var_136_cvector, 0);
	var_150_float = GetByIndex(var_136_cvector, 2);
	var_128_object->SetMapParams(var_149_float, var_150_float, var_130_float);
}
EMIT "Stack[-2] = 0";


void func_2599(object var_0_object, int var_555_int, object var_556_object)
{
	var_0_object = var_556_object;
	bool var_566_bool; object var_567_object;
	var_556_object = var_567_object;
	func_8479(var_566_bool, var_567_object, 70.0);
	if(!var_566_bool) { //@nz
		var_555_int = -2;
		return 8;
	}
	object var_562_object;
	@CreateDialog(var_562_object);
	int var_570_int;
	func_8917(var_570_int);
	var_562_object->SetNPCName(var_570_int);
	int var_571_int;
	func_8915(var_571_int);
	var_562_object->SetNPCDescription(var_571_int);
	string var_572_string;
	func_8919(var_572_string);
	var_562_object->SetPhoto(var_572_string);
	string var_573_string;
	func_8921(var_573_string);
	var_562_object->SetPhoto2(var_573_string);
	int var_574_int;
	func_10310(var_574_int);
	var_562_object->SetPlayerName(var_574_int);
	bool var_563_bool;
	@IsOverrideActive(var_563_bool);
	if(var_563_bool != 0) {
		var_555_int = -2;
		return 8;
	}
	@DoDialog(var_562_object);
	bool var_576_bool; object var_577_object;
	object var_578_object;
	func_8757(var_578_object);
	var_578_object = var_577_object;
	func_8566(var_576_bool, var_577_object);
	object var_579_object; object var_580_object;
	var_556_object = var_579_object;
	var_562_object = var_580_object;
	TaskCall(10);
	func_2680(var_581_object, var_582_object, var_583_string, var_584_bool, var_579_object, var_580_object);
	TaskReturn();
	bool var_565_bool;
	var_562_object->IsDialogEnd(var_565_bool);
	
	for(;;) {
		var_647_bool = !var_565_bool; //@nz
		if(var_647_bool == 0) goto Label_2669;
		@sync();
		var_562_object->IsDialogEnd(var_565_bool);
	}
	
Label_2669:
	object var_648_object;
	var_556_object = var_648_object;
	func_8548();
	@StopDialog(var_562_object);
	var_562_object->GetReturnValue(-1);
	int var_564_int = var_555_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9771(bool var_864_bool)
{
	int var_866_int;
	func_8784(var_866_int, "ood5Viktor2");
	if(var_866_int == 0) {
		var_864_bool = true;
		return 0;
	}
	var_864_bool = false;
}


void func_8750(void)
{
	bool var_76_bool;
	func_8923(var_76_bool);
	if(var_76_bool != 0)
		@lshStopSpeech();
}


void func_8757(object var_169_object)
{
	object var_171_object;
	@self(var_171_object);
	var_171_object = var_169_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_9269(void)
{
	@SetVariable("ood5Viktor1", 1);
}


// @pe
void func_9783(bool var_789_bool)
{
	int var_791_int;
	func_8784(var_791_int, "ood5Viktor3");
	if(var_791_int == 0) {
		var_789_bool = true;
		return 0;
	}
	var_789_bool = false;
}


// @pe
void func_9275(void)
{
	@SetVariable("ood5Viktor2", 1);
}


void func_8763(cvector var_133_cvector, cvector var_134_cvector)
{
	float var_137_float = sqrt(var_134_cvector | var_134_cvector);
	if(var_137_float < 0.000001)
		var_133_cvector = [0.0, 0.0, 0.0];
	var_133_cvector = var_134_cvector / var_137_float;
}


// @pe
void func_9281(object var_203_object)
{
	object var_206_object;
	var_203_object = var_206_object;
	bool var_205_bool;
	func_8838(var_205_bool, var_206_object, 0.3);
}


// @pe
void func_2114(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_489_object, object var_490_object)
{
	var_0_object = var_490_object;
	var_1_object = var_489_object;
	var_3_string = false;
	if(1 != 0) {
		func_2210(var_490_object, "Neutral");
		var_0_object->SetMessage(506924); //@t
		var_0_object->ClearReplies(); //@t
		bool var_505_bool = false;
		bool var_506_bool = false;
		bool var_507_bool;
		func_9603(var_1_object);
		if(var_507_bool != 0) {
			bool var_513_bool;
			func_9639(var_1_object);
			if(var_513_bool != 0)
				var_506_bool = true;
		}
		if(var_506_bool != 0) {
			bool var_519_bool;
			func_9627(var_1_object);
			if(var_519_bool != 0)
				var_505_bool = true;
		}
		if(var_505_bool != 0)
			var_0_object->AddReply(506925, 7632, 7631); //@t
		bool var_528_bool;
		func_9591(var_1_object);
		if(var_528_bool != 0)
			var_0_object->AddReply(532771, 10476, 34238); //@t
		var_0_object->AddReply(507777, -1, 8579); //@t
		var_0_object->AddReply(532772, -1, 34239); //@t
		goto Label_2180;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x846";
	}
Label_2180:
	bool var_543_bool;
	func_8923(var_543_bool);
	if(var_543_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_8704(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2209;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2209:
		return 0;

	}
	
}


// @pe
void func_9795(bool var_911_bool)
{
	int var_913_int;
	func_8784(var_913_int, "ood6Viktor1");
	if(var_913_int == 0) {
		var_911_bool = true;
		return 0;
	}
	var_911_bool = false;
}


// @pe
void func_8259(object var_2_object, string var_1472_string)
{
	bool var_1473_bool;
	func_8923(var_1473_bool);
	if(!var_1473_bool) //@nz
		return 0;
	if(var_1472_string == var_2_object)
		return 0;
	string var_1476_string; bool var_1477_bool;
	var_1472_string = var_1476_string;
	if(var_1472_string == "")
		var_1477_bool = false;
	else
		var_1477_bool = true;
	func_8720(var_1476_string, var_1477_bool);
	var_2_object = var_1472_string;
	
}


// @pe
void func_8773(float var_234_float, float var_235_float, float var_236_float, float var_237_float)
{
	if(var_235_float < var_236_float) {
		var_236_float = var_234_float;
		return 0;
	}
	if(var_235_float > var_237_float) {
		var_237_float = var_234_float;
		return 0;
	}
	var_235_float = var_234_float;
}


void func_10310(int var_158_int)
{
	int var_160_int;
	@GetVariable("branch", var_160_int);
	if(var_160_int == 0) {
		var_158_int = 1;
		return 2;
	EMIT "GOTO 0x2855";
	}
	if(var_160_int == 1) {
		var_158_int = 2;
		return 2;
	}
	var_158_int = 3;
}


// @pe
void func_9288(void)
{
	@SetVariable("ood5Viktor3", 1);
}


// @pe
void func_9294(void)
{
	@SetVariable("ood6Viktor1", 1);
}


// @pe
void func_5199(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1041_object, object var_1042_object)
{
	var_0_object = var_1042_object;
	var_1_object = var_1041_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1048_bool = false;
		bool var_1049_bool;
		func_9819(var_1_object);
		if(var_1049_bool != 0) {
			bool var_1055_bool;
			func_9807(var_1_object);
			if(var_1055_bool != 0)
				var_1048_bool = true;
		}
		if(var_1048_bool != 0) {
			object var_1061_object; object var_1062_object;
			var_1061_object = var_1_object;
			var_1062_object = var_0_object;
			func_9347();
			func_5296(var_1042_object, "Neutral");
			var_0_object->SetMessage(512275); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512276, 13435, 13433); //@t
			var_0_object->AddReply(512277, 13435, 13434); //@t
		} else {
					func_5296(var_1042_object, "Neutral");
					var_0_object->SetMessage(513779); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513780, -1, 15016); //@t
					var_0_object->AddReply(541598, -1, 43762); //@t
		}
	}
	for(;;) {
		bool var_1080_bool;
		func_8923(var_1080_bool);
		if(var_1080_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_8704(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_5295;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5295:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1453";


// @pe
void func_9807(bool var_1055_bool)
{
	int var_1057_int;
	func_8784(var_1057_int, "ood8Viktor1");
	if(var_1057_int == 0) {
		var_1055_bool = true;
		return 0;
	}
	var_1055_bool = false;
}


void func_8784(int var_361_int, string var_362_string)
{
	int var_364_int;
	@GetVariable(var_362_string, var_364_int);
	var_364_int = var_361_int;
}


void func_9300(void)
{
	@SetVariable("d6q01", 1);
	object var_85_object;
	func_10260(var_85_object);
	object var_82_object;
	var_85_object = var_82_object;
	float var_96_float;
	func_8895(var_96_float);
	var_82_object->AddMark("d6q01ViktorGotoAlexandr", "pt_map_alexandr", 1, 515383, var_96_float);
	float var_103_float;
	func_8895(var_103_float);
	var_82_object->AddMark("d6q01ViktorGotoBigVlad", "pt_map_bigvlad", 1, 515384, var_103_float);
	float var_108_float;
	func_8895(var_108_float);
	var_82_object->AddMark("d6q01ViktorGotoAlxBigSelf", "pt_map_viktor", 1, 515385, var_108_float);
	func_10141();
	func_10167();
	func_10154();
}
EMIT "Stack[-1] = 0";


void func_8789(object var_114_object, string var_115_string)
{
	object var_118_object;
	@GetMainOutdoorScene(var_118_object);
	object var_119_object;
	@AddBlankActor(var_119_object, var_118_object, var_115_string, (var_115_string + ".bin"));
	var_119_object = var_114_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10327(object var_92_object)
{
	var_93_bool = GlobalVars[1];
	if(!var_93_bool) { //@nz
		int var_95_int; object var_96_object;
		var_92_object = var_96_object;
		TaskCall(1);
		func_13(var_97_object, var_95_int, var_96_object);
		TaskReturn();
		var_324_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_325_bool;
	func_8909(var_325_bool, 1);
	if(var_325_bool != 0) {
		int var_328_int; object var_329_object;
		var_92_object = var_329_object;
		TaskCall(5);
		func_738(var_330_object, var_328_int, var_329_object);
		TaskReturn();
		return 0;
	}
	bool var_463_bool;
	func_8909(var_463_bool, 2);
	if(var_463_bool != 0) {
		int var_465_int; object var_466_object;
		var_92_object = var_466_object;
		TaskCall(7);
		func_2033(var_467_object, var_465_int, var_466_object);
		TaskReturn();
		return 0;
	}
	bool var_553_bool;
	func_8909(var_553_bool, 3);
	if(var_553_bool != 0) {
		int var_555_int; object var_556_object;
		var_92_object = var_556_object;
		TaskCall(9);
		func_2599(var_557_object, var_555_int, var_556_object);
		TaskReturn();
		return 0;
	}
	bool var_649_bool;
	func_8909(var_649_bool, 4);
	if(var_649_bool != 0) {
		int var_651_int; object var_652_object;
		var_92_object = var_652_object;
		TaskCall(11);
		func_3507(var_653_object, var_651_int, var_652_object);
		TaskReturn();
		return 0;
	}
	bool var_754_bool;
	func_8909(var_754_bool, 5);
	if(var_754_bool != 0) {
		int var_756_int; object var_757_object;
		var_92_object = var_757_object;
		TaskCall(13);
		func_4024(var_758_object, var_756_int, var_757_object);
		TaskReturn();
		return 0;
	}
	bool var_878_bool;
	func_8909(var_878_bool, 6);
	if(var_878_bool != 0) {
		int var_880_int; object var_881_object;
		var_92_object = var_881_object;
		TaskCall(3);
		func_277(var_882_object, var_880_int, var_881_object);
		TaskReturn();
		return 0;
	}
	bool var_951_bool;
	func_8909(var_951_bool, 7);
	if(var_951_bool != 0) {
		int var_953_int; object var_954_object;
		var_92_object = var_954_object;
		TaskCall(15);
		func_4758(var_955_object, var_953_int, var_954_object);
		TaskReturn();
		return 0;
	}
	bool var_1015_bool;
	func_8909(var_1015_bool, 8);
	if(var_1015_bool != 0) {
		int var_1017_int; object var_1018_object;
		var_92_object = var_1018_object;
		TaskCall(17);
		func_5118(var_1019_object, var_1017_int, var_1018_object);
		TaskReturn();
		return 0;
	}
	bool var_1098_bool;
	func_8909(var_1098_bool, 9);
	if(var_1098_bool != 0) {
		int var_1100_int; object var_1101_object;
		var_92_object = var_1101_object;
		TaskCall(19);
		func_5545(var_1102_object, var_1100_int, var_1101_object);
		TaskReturn();
		return 0;
	}
	bool var_1200_bool;
	func_8909(var_1200_bool, 10);
	if(var_1200_bool != 0) {
		int var_1202_int; object var_1203_object;
		var_92_object = var_1203_object;
		TaskCall(23);
		func_7277(var_1204_object, var_1202_int, var_1203_object);
		TaskReturn();
		return 0;
	}
	bool var_1267_bool;
	func_8909(var_1267_bool, 11);
	if(var_1267_bool != 0) {
		int var_1269_int; object var_1270_object;
		var_92_object = var_1270_object;
		TaskCall(21);
		func_6387(var_1271_object, var_1269_int, var_1270_object);
		TaskReturn();
		return 0;
	}
	bool var_1383_bool;
	func_8909(var_1383_bool, 12);
	if(var_1383_bool != 0) {
		int var_1385_int; object var_1386_object;
		var_92_object = var_1386_object;
		TaskCall(25);
		func_7807(var_1387_object, var_1385_int, var_1386_object);
		TaskReturn();
		return 0;
	}
	int var_1441_int; object var_1442_object;
	var_92_object = var_1442_object;
	TaskCall(27);
	func_8120(var_1443_object, var_1441_int, var_1442_object);
	TaskReturn();
}


// @pe
void func_9819(bool var_1049_bool)
{
	int var_1051_int;
	func_8784(var_1051_int, "d8KainIsReason");
	if(var_1051_int == 1)
		var_1049_bool = true;
	var_1049_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_262_object, object var_263_object)
{
	var_0_object = var_263_object;
	var_3_string = false;
	if(1 != 0) {
		object var_269_object; object var_270_object;
		var_269_object = var_262_object;
		var_270_object = var_0_object;
		func_9123();
		func_157(var_263_object, "Neutral");
		var_0_object->SetMessage(501575); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(501576, 1782, 1780); //@t
		var_0_object->AddReply(501577, 1782, 1781); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_297_bool;
	func_8923(var_297_bool);
	if(var_297_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_8704(var_2_object);
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


void func_8800(int var_122_int, int var_123_int)
{
	object var_125_object;
	@CreateIntVector(var_125_object);
	var_125_object->add(var_122_int);
	var_125_object->add(var_123_int);
	@SendWorldWndMessage(3, var_125_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9831(bool var_1131_bool)
{
	int var_1133_int;
	func_8784(var_1133_int, "ood9Viktor1");
	if(var_1133_int == 0) {
		var_1131_bool = true;
		return 0;
	}
	var_1131_bool = false;
}


void func_8812(object var_109_object, int var_110_int)
{
	int var_112_int;
	object var_113_object;
	var_109_object = var_113_object;
	int var_115_int;
	func_8448(var_113_object, "money", var_115_int);
	if(var_115_int > 0) {
		@GetInvItemByName(var_112_int, "Money");
		int var_122_int; int var_123_int;
		var_112_int = var_122_int;
		var_110_int = var_123_int;
		func_8800(var_122_int, var_123_int);
	}
}


void func_7277(object var_0_object, int var_1202_int, object var_1203_object)
{
	var_0_object = var_1203_object;
	bool var_1213_bool; object var_1214_object;
	var_1203_object = var_1214_object;
	func_8479(var_1213_bool, var_1214_object, 70.0);
	if(!var_1213_bool) { //@nz
		var_1202_int = -2;
		return 8;
	}
	object var_1209_object;
	@CreateDialog(var_1209_object);
	int var_1217_int;
	func_8917(var_1217_int);
	var_1209_object->SetNPCName(var_1217_int);
	int var_1218_int;
	func_8915(var_1218_int);
	var_1209_object->SetNPCDescription(var_1218_int);
	string var_1219_string;
	func_8919(var_1219_string);
	var_1209_object->SetPhoto(var_1219_string);
	string var_1220_string;
	func_8921(var_1220_string);
	var_1209_object->SetPhoto2(var_1220_string);
	int var_1221_int;
	func_10310(var_1221_int);
	var_1209_object->SetPlayerName(var_1221_int);
	bool var_1210_bool;
	@IsOverrideActive(var_1210_bool);
	if(var_1210_bool != 0) {
		var_1202_int = -2;
		return 8;
	}
	@DoDialog(var_1209_object);
	bool var_1223_bool; object var_1224_object;
	object var_1225_object;
	func_8757(var_1225_object);
	var_1225_object = var_1224_object;
	func_8566(var_1223_bool, var_1224_object);
	object var_1226_object; object var_1227_object;
	var_1203_object = var_1226_object;
	var_1209_object = var_1227_object;
	TaskCall(24);
	func_7358(var_1228_object, var_1229_object, var_1230_string, var_1231_bool, var_1226_object, var_1227_object);
	TaskReturn();
	bool var_1212_bool;
	var_1209_object->IsDialogEnd(var_1212_bool);
	
	for(;;) {
		var_1265_bool = !var_1212_bool; //@nz
		if(var_1265_bool == 0) goto Label_7347;
		@sync();
		var_1209_object->IsDialogEnd(var_1212_bool);
	}
	
Label_7347:
	object var_1266_object;
	var_1203_object = var_1266_object;
	func_8548();
	@StopDialog(var_1209_object);
	var_1209_object->GetReturnValue(-1);
	int var_1211_int = var_1202_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5743(object var_2_object, string var_1145_string)
{
	bool var_1146_bool;
	func_8923(var_1146_bool);
	if(!var_1146_bool) //@nz
		return 0;
	if(var_1145_string == var_2_object)
		return 0;
	string var_1149_string; bool var_1150_bool;
	var_1145_string = var_1149_string;
	if(var_1145_string == "")
		var_1150_bool = false;
	else
		var_1150_bool = true;
	func_8720(var_1149_string, var_1150_bool);
	var_2_object = var_1145_string;
	
}


// @pe
void func_9843(bool var_1180_bool)
{
	int var_1182_int;
	func_8784(var_1182_int, "d9q01");
	if(var_1182_int == 2)
		var_1180_bool = true;
	var_1180_bool = false;
}


// @pe
void func_2680(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_579_object, object var_580_object)
{
	var_0_object = var_580_object;
	var_1_object = var_579_object;
	var_3_string = false;
	if(1 != 0) {
		func_2781(var_580_object, "Neutral");
		var_0_object->SetMessage(510235); //@t
		var_0_object->ClearReplies(); //@t
		bool var_595_bool = false;
		bool var_596_bool;
		func_9663(var_1_object);
		if(var_596_bool != 0) {
			bool var_602_bool;
			func_9675(var_1_object);
			if(var_602_bool != 0)
				var_595_bool = true;
		}
		if(var_595_bool != 0)
			var_0_object->AddReply(510236, 11288, 11286); //@t
		bool var_611_bool = false;
		bool var_612_bool;
		func_9699(var_1_object);
		if(var_612_bool != 0) {
			bool var_618_bool;
			func_9687(var_1_object);
			if(var_618_bool != 0)
				var_611_bool = true;
		}
		if(var_611_bool != 0)
			var_0_object->AddReply(510266, 35986, 11320); //@t
		bool var_627_bool;
		func_9532(var_1_object);
		if(var_627_bool != 0)
			var_0_object->AddReply(510237, 11089, 11287); //@t
		var_0_object->AddReply(511382, -1, 12578); //@t
		goto Label_2751;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa7c";
	}
Label_2751:
	bool var_639_bool;
	func_8923(var_639_bool);
	if(var_639_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_8704(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2780;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2780:
		return 0;

	}
	
}


// @pe
void func_3705(object var_2_object, string var_696_string)
{
	bool var_697_bool;
	func_8923(var_697_bool);
	if(!var_697_bool) //@nz
		return 0;
	if(var_696_string == var_2_object)
		return 0;
	string var_700_string; bool var_701_bool;
	var_696_string = var_700_string;
	if(var_696_string == "")
		var_701_bool = false;
	else
		var_701_bool = true;
	func_8720(var_700_string, var_701_bool);
	var_2_object = var_696_string;
	
}


void func_8831(bool var_739_bool, object var_740_object, string var_741_string)
{
	int var_744_int;
	@GetInvItemByName(var_744_int, var_741_string);
	bool var_745_bool;
	var_740_object->HasItem(var_744_int, var_745_bool);
	var_745_bool = var_739_bool;
}


void func_7807(object var_0_object, int var_1385_int, object var_1386_object)
{
	var_0_object = var_1386_object;
	bool var_1396_bool; object var_1397_object;
	var_1386_object = var_1397_object;
	func_8479(var_1396_bool, var_1397_object, 70.0);
	if(!var_1396_bool) { //@nz
		var_1385_int = -2;
		return 8;
	}
	object var_1392_object;
	@CreateDialog(var_1392_object);
	int var_1400_int;
	func_8917(var_1400_int);
	var_1392_object->SetNPCName(var_1400_int);
	int var_1401_int;
	func_8915(var_1401_int);
	var_1392_object->SetNPCDescription(var_1401_int);
	string var_1402_string;
	func_8919(var_1402_string);
	var_1392_object->SetPhoto(var_1402_string);
	string var_1403_string;
	func_8921(var_1403_string);
	var_1392_object->SetPhoto2(var_1403_string);
	int var_1404_int;
	func_10310(var_1404_int);
	var_1392_object->SetPlayerName(var_1404_int);
	bool var_1393_bool;
	@IsOverrideActive(var_1393_bool);
	if(var_1393_bool != 0) {
		var_1385_int = -2;
		return 8;
	}
	@DoDialog(var_1392_object);
	bool var_1406_bool; object var_1407_object;
	object var_1408_object;
	func_8757(var_1408_object);
	var_1408_object = var_1407_object;
	func_8566(var_1406_bool, var_1407_object);
	object var_1409_object; object var_1410_object;
	var_1386_object = var_1409_object;
	var_1392_object = var_1410_object;
	TaskCall(26);
	func_7888(var_1411_object, var_1412_object, var_1413_string, var_1414_bool, var_1409_object, var_1410_object);
	TaskReturn();
	bool var_1395_bool;
	var_1392_object->IsDialogEnd(var_1395_bool);
	
	for(;;) {
		var_1439_bool = !var_1395_bool; //@nz
		if(var_1439_bool == 0) goto Label_7877;
		@sync();
		var_1392_object->IsDialogEnd(var_1395_bool);
	}
	
Label_7877:
	object var_1440_object;
	var_1386_object = var_1440_object;
	func_8548();
	@StopDialog(var_1392_object);
	var_1392_object->GetReturnValue(-1);
	int var_1394_int = var_1385_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9855(bool var_1186_bool)
{
	int var_1188_int;
	func_8784(var_1188_int, "ood9Viktor2");
	if(var_1188_int == 0) {
		var_1186_bool = true;
		return 0;
	}
	var_1186_bool = false;
}


// @pe
void func_9347(void)
{
	@SetVariable("ood8Viktor1", 1);
}


// @pe
void func_8838(bool var_205_bool, object var_206_object, float var_207_float)
{
	if(!var_206_object) { //@nz
		var_205_bool = false;
		return 0;
	}
	if(var_207_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_207_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_212_float;
		var_207_float = var_212_float;
		func_8873(var_212_float);
		bool var_216_bool; object var_217_object; float var_219_float;
		var_206_object = var_217_object;
		var_207_float = var_219_float;
		func_8426(var_216_bool, var_217_object, "reputation", var_219_float, (float)0, (float)1);
		var_205_bool = true;
		return 0;

	}
	
	var_205_bool = false;
}


// @pe
void func_9353(void)
{
	@SetVariable("ood9Viktor1", 1);
}


// @pe
void func_9867(bool var_219_bool)
{
	int var_221_int;
	func_8784(var_221_int, "d9TalkToPolkovodec");
	if(var_221_int != 0) {
		var_219_bool = true;
		return 0;
	}
	var_219_bool = false;
}


// @pe
void func_9359(void)
{
	@SetVariable("d9q01", 1);
	func_10193();
	func_10206();
	bool var_114_bool;
	func_8883(var_114_bool, "quest_d9_01", "place_rifles");
}


void func_8338(object var_0_object, object var_1_object, object var_2_object)
{
	@GetPosition(var_1_object);
	@GetDirection(var_2_object);
	var_0_object = false;
	bool var_74_bool;
	func_8474(var_74_bool);
	if(!var_74_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
		func_8366(var_70_bool, var_71_cvector, var_72_cvector);
	}
	for(;;) {
		func_8704("Neutral");
		@lshWaitForAnimEnd();
	}
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


void func_4758(object var_0_object, int var_953_int, object var_954_object)
{
	var_0_object = var_954_object;
	bool var_964_bool; object var_965_object;
	var_954_object = var_965_object;
	func_8479(var_964_bool, var_965_object, 70.0);
	if(!var_964_bool) { //@nz
		var_953_int = -2;
		return 8;
	}
	object var_960_object;
	@CreateDialog(var_960_object);
	int var_968_int;
	func_8917(var_968_int);
	var_960_object->SetNPCName(var_968_int);
	int var_969_int;
	func_8915(var_969_int);
	var_960_object->SetNPCDescription(var_969_int);
	string var_970_string;
	func_8919(var_970_string);
	var_960_object->SetPhoto(var_970_string);
	string var_971_string;
	func_8921(var_971_string);
	var_960_object->SetPhoto2(var_971_string);
	int var_972_int;
	func_10310(var_972_int);
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
	func_8757(var_976_object);
	var_976_object = var_975_object;
	func_8566(var_974_bool, var_975_object);
	object var_977_object; object var_978_object;
	var_954_object = var_977_object;
	var_960_object = var_978_object;
	TaskCall(16);
	func_4839(var_979_object, var_980_object, var_981_string, var_982_bool, var_977_object, var_978_object);
	TaskReturn();
	bool var_963_bool;
	var_960_object->IsDialogEnd(var_963_bool);
	
	for(;;) {
		var_1013_bool = !var_963_bool; //@nz
		if(var_1013_bool == 0) goto Label_4828;
		@sync();
		var_960_object->IsDialogEnd(var_963_bool);
	}
	
Label_4828:
	object var_1014_object;
	var_954_object = var_1014_object;
	func_8548();
	@StopDialog(var_960_object);
	var_960_object->GetReturnValue(-1);
	int var_962_int = var_953_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9879(bool var_1346_bool)
{
	int var_1348_int;
	func_8784(var_1348_int, "d11q01");
	if(var_1348_int == 1)
		var_1346_bool = true;
	var_1346_bool = false;
}


// @pe
void func_4252(object var_2_object, string var_813_string)
{
	bool var_814_bool;
	func_8923(var_814_bool);
	if(!var_814_bool) //@nz
		return 0;
	if(var_813_string == var_2_object)
		return 0;
	string var_817_string; bool var_818_bool;
	var_813_string = var_817_string;
	if(var_813_string == "")
		var_818_bool = false;
	else
		var_818_bool = true;
	func_8720(var_817_string, var_818_bool);
	var_2_object = var_813_string;
	
}


// @pe
void func_157(object var_2_object, string var_273_string)
{
	bool var_274_bool;
	func_8923(var_274_bool);
	if(!var_274_bool) //@nz
		return 0;
	if(var_273_string == var_2_object)
		return 0;
	string var_277_string; bool var_278_bool;
	var_273_string = var_277_string;
	if(var_273_string == "")
		var_278_bool = false;
	else
		var_278_bool = true;
	func_8720(var_277_string, var_278_bool);
	var_2_object = var_273_string;
	
}


// @pe
void func_9376(void)
{
	@SetVariable("ood9Viktor2", 1);
}


// @pe
void func_2210(object var_2_object, string var_496_string)
{
	bool var_497_bool;
	func_8923(var_497_bool);
	if(!var_497_bool) //@nz
		return 0;
	if(var_496_string == var_2_object)
		return 0;
	string var_500_string; bool var_501_bool;
	var_496_string = var_500_string;
	if(var_496_string == "")
		var_501_bool = false;
	else
		var_501_bool = true;
	func_8720(var_500_string, var_501_bool);
	var_2_object = var_496_string;
	
}


// @pe
void func_9891(bool var_1340_bool)
{
	int var_1342_int;
	func_8784(var_1342_int, "ood11Viktor1");
	if(var_1342_int == 0) {
		var_1340_bool = true;
		return 0;
	}
	var_1340_bool = false;
}


// @pe
void func_9382(void)
{
	@SetVariable("ood11Viktor1", 1);
}


void func_8873(float var_212_float)
{
	object var_214_object;
	@CreateFloatVector(var_214_object);
	var_214_object->add(var_212_float);
	@SendWorldWndMessage(16, var_214_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9388(void)
{
	@SetVariable("ood11Viktor2", 1);
}


void func_8366(object var_0_object, object var_1_object, object var_2_object)
{
	@SetPosition(var_1_object);
	@SetDirection(var_2_object);
	var_0_object = false;
	@LockAnimation("all", "stand", 0);
}


// @pe
void func_9903(bool var_1360_bool)
{
	int var_1362_int;
	func_8784(var_1362_int, "ood11Viktor2");
	if(var_1362_int == 0) {
		var_1360_bool = true;
		return 0;
	}
	var_1360_bool = false;
}


// @pe
void func_5296(object var_2_object, string var_1065_string)
{
	bool var_1066_bool;
	func_8923(var_1066_bool);
	if(!var_1066_bool) //@nz
		return 0;
	if(var_1065_string == var_2_object)
		return 0;
	string var_1069_string; bool var_1070_bool;
	var_1065_string = var_1069_string;
	if(var_1065_string == "")
		var_1070_bool = false;
	else
		var_1070_bool = true;
	func_8720(var_1069_string, var_1070_bool);
	var_2_object = var_1065_string;
	
}


// @pe
void func_9394(void)
{
	@SetVariable("KnowMyth", 1);
}


void func_8883(bool var_133_bool, string var_134_string, string var_135_string)
{
	object var_137_object;
	@FindActor(var_137_object, var_134_string);
	if(var_137_object == null)
		var_133_bool = false;
	@Trigger(var_137_object, var_135_string);
	var_133_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_9400(void)
{
	@SetVariable("d6ViktorVisit", 1);
}


void func_8377(object var_0_object)
{
	if(!var_0_object) { //@nz
		var_0_object = true;
		@PlayAnimation("all", "stand");
		@WaitForAnimEnd();
	}
}


// @pe
void func_9915(bool var_1366_bool)
{
	int var_1368_int;
	func_8784(var_1368_int, "d11q01");
	if(var_1368_int >= 4)
		var_1366_bool = true;
	var_1366_bool = false;
}


// @pe
void func_9406(void)
{
	@SetVariable("ood9Viktor3", 1);
}


// @pe
void func_7358(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1226_object, object var_1227_object)
{
	var_0_object = var_1227_object;
	var_3_string = false;
	if(1 != 0) {
		func_7426(var_1227_object, "Neutral");
		var_0_object->SetMessage(534101); //@t
		var_0_object->ClearReplies(); //@t
		bool var_1242_bool;
		func_9508(var_1226_object);
		if(var_1242_bool != 0)
			var_0_object->AddReply(534102, 35697, 35695); //@t
		var_0_object->AddReply(534103, -1, 35696); //@t
		var_0_object->AddReply(536433, -1, 38218); //@t
		goto Label_7396;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1cc2";
	}
Label_7396:
	bool var_1257_bool;
	func_8923(var_1257_bool);
	if(var_1257_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_8704(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_7425;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_7425:
		return 0;

	}
	
}


void func_8895(float var_102_float)
{
	float var_104_float;
	@GetGameTime(var_104_float);
	var_104_float = var_102_float;
}


// @pe
void func_9412(bool var_449_bool)
{
	int var_451_int;
	func_8784(var_451_int, "d1q02");
	if(var_451_int == 3)
		var_449_bool = true;
	var_449_bool = false;
}


void func_8900(int var_222_int)
{
	float var_224_float;
	@GetGameTime(var_224_float);
	var_222_int = 1 + (var_224_float / 24);
}


// @pe
void func_9927(bool var_252_bool)
{
	int var_254_int;
	func_8784(var_254_int, "d11q01");
	if(var_254_int == 1000)
		var_252_bool = true;
	var_252_bool = false;
}


// @pe
void func_8909(bool var_325_bool, int var_326_int)
{
	int var_327_int;
	func_8900(var_327_int);
	var_325_bool = var_327_int == var_326_int;
}


// @pe
void func_9424(bool var_377_bool)
{
	int var_379_int;
	func_8784(var_379_int, "ood1Viktor1");
	if(var_379_int == 0) {
		var_377_bool = true;
		return 0;
	}
	var_377_bool = false;
}


// @pe
void func_7888(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1409_object, object var_1410_object)
{
	var_0_object = var_1410_object;
	var_1_object = var_1409_object;
	var_3_string = false;
	if(1 != 0) {
		func_7946(var_1410_object, "Neutral");
		var_0_object->SetMessage(535665); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535666, 42176, 37352); //@t
		var_0_object->AddReply(540007, -1, 41978); //@t
		goto Label_7916;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ed4";
	}
Label_7916:
	bool var_1431_bool;
	func_8923(var_1431_bool);
	if(var_1431_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_8704(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_7945;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_7945:
		return 0;

	}
	
}


void func_8915(int var_155_int)
{
	var_155_int = 515554;
}


// @pe
void func_9939(bool var_1170_bool)
{
	int var_1172_int;
	func_8784(var_1172_int, "ood9Viktor3");
	if(var_1172_int == 0) {
		var_1170_bool = true;
		return 0;
	}
	var_1170_bool = false;
}


void func_8917(int var_154_int)
{
	var_154_int = 502879;
}


void func_8919(string var_156_string)
{
	var_156_string = "ui/NPC_Viktor.png";
}


void func_8921(string var_157_string)
{
	var_157_string = "ui/NPC_Viktor_b.png";
}


void func_8923(bool var_149_bool)
{
	var_149_bool = true;
}


// @pe
void func_9436(bool var_407_bool)
{
	int var_409_int;
	func_8784(var_409_int, "ood1Viktor2");
	if(var_409_int == 0) {
		var_407_bool = true;
		return 0;
	}
	var_407_bool = false;
}


// @pe
void func_8925(void)
{
	func_10037();
	bool var_198_bool;
	func_8883(var_198_bool, "quest_d1_02", "fail");
}


// @pe
void func_2781(object var_2_object, string var_586_string)
{
	bool var_587_bool;
	func_8923(var_587_bool);
	if(!var_587_bool) //@nz
		return 0;
	if(var_586_string == var_2_object)
		return 0;
	string var_590_string; bool var_591_bool;
	var_586_string = var_590_string;
	if(var_586_string == "")
		var_591_bool = false;
	else
		var_591_bool = true;
	func_8720(var_590_string, var_591_bool);
	var_2_object = var_586_string;
	
}


// @pe
void func_9951(bool var_424_bool)
{
	bool var_426_bool = false;
	bool var_427_bool = false;
	int var_428_int;
	func_8784(var_428_int, "d1q01");
	if(var_428_int != 0) {
		int var_432_int;
		func_8784(var_432_int, "d1q01");
		if(var_432_int != 1000)
			var_427_bool = true;
	}
	if(var_427_bool != 0) {
		int var_436_int;
		func_8784(var_436_int, "d1q01");
		if(var_436_int != -1)
			var_426_bool = true;
	}
	if(var_426_bool != 0) {
		var_424_bool = true;
		return 0;
	}
	var_424_bool = false;
}


void func_8414(bool var_224_bool, object var_225_object, string var_226_string)
{
	var_231_bool = IsFuncExist(var_225_object, "HasProperty", 2);
	if(!var_231_bool) { //@nz
		var_224_bool = false;
		return 2;
	}
	bool var_228_bool;
	var_225_object->HasProperty(var_226_string, var_228_bool);
	var_228_bool = var_224_bool;
}


void func_738(object var_0_object, int var_328_int, object var_329_object)
{
	var_0_object = var_329_object;
	bool var_339_bool; object var_340_object;
	var_329_object = var_340_object;
	func_8479(var_339_bool, var_340_object, 70.0);
	if(!var_339_bool) { //@nz
		var_328_int = -2;
		return 8;
	}
	object var_335_object;
	@CreateDialog(var_335_object);
	int var_343_int;
	func_8917(var_343_int);
	var_335_object->SetNPCName(var_343_int);
	int var_344_int;
	func_8915(var_344_int);
	var_335_object->SetNPCDescription(var_344_int);
	string var_345_string;
	func_8919(var_345_string);
	var_335_object->SetPhoto(var_345_string);
	string var_346_string;
	func_8921(var_346_string);
	var_335_object->SetPhoto2(var_346_string);
	int var_347_int;
	func_10310(var_347_int);
	var_335_object->SetPlayerName(var_347_int);
	bool var_336_bool;
	@IsOverrideActive(var_336_bool);
	if(var_336_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	@DoDialog(var_335_object);
	bool var_349_bool; object var_350_object;
	object var_351_object;
	func_8757(var_351_object);
	var_351_object = var_350_object;
	func_8566(var_349_bool, var_350_object);
	object var_352_object; object var_353_object;
	var_329_object = var_352_object;
	var_335_object = var_353_object;
	TaskCall(6);
	func_819(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object);
	TaskReturn();
	bool var_338_bool;
	var_335_object->IsDialogEnd(var_338_bool);
	
	for(;;) {
		var_461_bool = !var_338_bool; //@nz
		if(var_461_bool == 0) goto Label_808;
		@sync();
		var_335_object->IsDialogEnd(var_338_bool);
	}
	
Label_808:
	object var_462_object;
	var_329_object = var_462_object;
	func_8548();
	@StopDialog(var_335_object);
	var_335_object->GetReturnValue(-1);
	int var_337_int = var_328_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8935(void)
{
	@SetVariable("ood1Viktor1", 1);
}


// @pe
void func_9448(bool var_440_bool)
{
	int var_442_int;
	func_8784(var_442_int, "ood1Viktor3");
	if(var_442_int == 0) {
		var_440_bool = true;
		return 0;
	}
	var_440_bool = false;
}


// @pe
void func_4839(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_977_object, object var_978_object)
{
	var_0_object = var_978_object;
	var_3_string = false;
	if(1 != 0) {
		func_4902(var_978_object, "Neutral");
		var_0_object->SetMessage(533245); //@t
		var_0_object->ClearReplies(); //@t
		bool var_993_bool;
		func_9496(var_977_object);
		if(var_993_bool != 0)
			var_0_object->AddReply(533246, 42854, 34760); //@t
		var_0_object->AddReply(540800, -1, 42851); //@t
		goto Label_4872;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12eb";
	}
Label_4872:
	bool var_1005_bool;
	func_8923(var_1005_bool);
	if(var_1005_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_8704(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4901;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4901:
		return 0;

	}
	
}


void func_8426(bool var_216_bool, object var_217_object, string var_218_string, float var_219_float, float var_220_float, float var_221_float)
{
	object var_225_object;
	var_217_object = var_225_object;
	string var_226_string;
	var_218_string = var_226_string;
	bool var_224_bool;
	func_8414(var_224_bool, var_225_object, var_226_string);
	if(!var_224_bool) //@nz
		var_216_bool = false;
	float var_223_float;
	var_217_object->GetProperty(var_218_string, var_223_float);
	float var_234_float; float var_236_float; float var_237_float;
	var_220_float = var_236_float;
	var_221_float = var_237_float;
	func_8773(var_234_float, (var_223_float + var_219_float), var_236_float, var_237_float);
	var_217_object->SetProperty(var_218_string, var_234_float);
	var_216_bool = true;
}


// @pe
void func_8941(void)
{
	@SetVariable("ood1Viktor2", 1);
}


// @pe
void func_8947(void)
{
	@SetVariable("ood1Viktor3", 1);
}


// @pe
void func_9460(bool var_427_bool)
{
	int var_429_int;
	func_8784(var_429_int, "d1q01");
	if(var_429_int == 0) {
		var_427_bool = true;
		return 0;
	}
	var_427_bool = false;
}


void func_6387(object var_0_object, int var_1269_int, object var_1270_object)
{
	var_0_object = var_1270_object;
	bool var_1280_bool; object var_1281_object;
	var_1270_object = var_1281_object;
	func_8479(var_1280_bool, var_1281_object, 70.0);
	if(!var_1280_bool) { //@nz
		var_1269_int = -2;
		return 8;
	}
	object var_1276_object;
	@CreateDialog(var_1276_object);
	int var_1284_int;
	func_8917(var_1284_int);
	var_1276_object->SetNPCName(var_1284_int);
	int var_1285_int;
	func_8915(var_1285_int);
	var_1276_object->SetNPCDescription(var_1285_int);
	string var_1286_string;
	func_8919(var_1286_string);
	var_1276_object->SetPhoto(var_1286_string);
	string var_1287_string;
	func_8921(var_1287_string);
	var_1276_object->SetPhoto2(var_1287_string);
	int var_1288_int;
	func_10310(var_1288_int);
	var_1276_object->SetPlayerName(var_1288_int);
	bool var_1277_bool;
	@IsOverrideActive(var_1277_bool);
	if(var_1277_bool != 0) {
		var_1269_int = -2;
		return 8;
	}
	@DoDialog(var_1276_object);
	bool var_1290_bool; object var_1291_object;
	object var_1292_object;
	func_8757(var_1292_object);
	var_1292_object = var_1291_object;
	func_8566(var_1290_bool, var_1291_object);
	object var_1293_object; object var_1294_object;
	var_1270_object = var_1293_object;
	var_1276_object = var_1294_object;
	TaskCall(22);
	func_6468(var_1295_object, var_1296_object, var_1297_string, var_1298_bool, var_1293_object, var_1294_object);
	TaskReturn();
	bool var_1279_bool;
	var_1276_object->IsDialogEnd(var_1279_bool);
	
	for(;;) {
		var_1381_bool = !var_1279_bool; //@nz
		if(var_1381_bool == 0) goto Label_6457;
		@sync();
		var_1276_object->IsDialogEnd(var_1279_bool);
	}
	
Label_6457:
	object var_1382_object;
	var_1270_object = var_1382_object;
	func_8548();
	@StopDialog(var_1276_object);
	var_1276_object->GetReturnValue(-1);
	int var_1278_int = var_1269_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8953(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_8959(object var_145_object)
{
	object var_149_object;
	func_10260(var_149_object);
	object var_146_object;
	var_149_object = var_146_object;
	func_10277(var_146_object, "pt_b1q05_patrol_house", (float)2);
	object var_169_object;
	func_10260(var_169_object);
	var_145_object->ShowMap(var_169_object);
}


// @pe
void func_9472(bool var_418_bool)
{
	int var_420_int;
	func_8784(var_420_int, "d1q01TeloNedostupno");
	if(var_420_int == 1)
		var_418_bool = true;
	var_418_bool = false;
}


void func_8448(object var_113_object, string var_114_string, int var_115_int)
{
	int var_117_int;
	var_113_object->GetProperty(var_114_string, var_117_int);
	var_113_object->SetProperty(var_114_string, (var_117_int + var_115_int));
}


// @pe
void func_7426(object var_2_object, string var_1233_string)
{
	bool var_1234_bool;
	func_8923(var_1234_bool);
	if(!var_1234_bool) //@nz
		return 0;
	if(var_1233_string == var_2_object)
		return 0;
	string var_1237_string; bool var_1238_bool;
	var_1233_string = var_1237_string;
	if(var_1233_string == "")
		var_1238_bool = false;
	else
		var_1238_bool = true;
	func_8720(var_1237_string, var_1238_bool);
	var_2_object = var_1233_string;
	
}


void func_9985(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 669, 2, 534123);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, 666);
}
EMIT "Stack[-1] = 0";


void func_8455(bool var_82_bool, cvector var_83_cvector)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	cvector var_88_cvector = var_83_cvector - var_87_cvector;
	var_90_float = GetByIndex(var_88_cvector, 0);
	var_91_float = GetByIndex(var_88_cvector, 2);
	bool var_89_bool;
	@Rotate(var_90_float, var_91_float, var_89_bool);
	var_89_bool = var_82_bool;
}


// @pe
void func_7946(object var_2_object, string var_1416_string)
{
	bool var_1417_bool;
	func_8923(var_1417_bool);
	if(!var_1417_bool) //@nz
		return 0;
	if(var_1416_string == var_2_object)
		return 0;
	string var_1420_string; bool var_1421_bool;
	var_1416_string = var_1420_string;
	if(var_1416_string == "")
		var_1421_bool = false;
	else
		var_1421_bool = true;
	func_8720(var_1420_string, var_1421_bool);
	var_2_object = var_1416_string;
	
}


// @pe
void func_9484(bool var_359_bool)
{
	int var_361_int;
	func_8784(var_361_int, "d1q01FirstGeorgVisit");
	if(var_361_int == 1)
		var_359_bool = true;
	var_359_bool = false;
}


void func_9998(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 686, 2, 534534);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8975(object var_145_object)
{
	@Trace("money 7000 is given");
	object var_148_object;
	var_145_object = var_148_object;
	func_8812(var_148_object, 7000);
}


void func_8465(bool var_78_bool, object var_79_object)
{
	cvector var_81_cvector;
	var_79_object->GetPosition(var_81_cvector);
	bool var_82_bool; cvector var_83_cvector;
	var_81_cvector = var_83_cvector;
	func_8455(var_82_bool, var_83_cvector);
	var_82_bool = var_78_bool;
}


void func_277(object var_0_object, int var_880_int, object var_881_object)
{
	var_0_object = var_881_object;
	bool var_891_bool; object var_892_object;
	var_881_object = var_892_object;
	func_8479(var_891_bool, var_892_object, 70.0);
	if(!var_891_bool) { //@nz
		var_880_int = -2;
		return 8;
	}
	object var_887_object;
	@CreateDialog(var_887_object);
	int var_895_int;
	func_8917(var_895_int);
	var_887_object->SetNPCName(var_895_int);
	int var_896_int;
	func_8915(var_896_int);
	var_887_object->SetNPCDescription(var_896_int);
	string var_897_string;
	func_8919(var_897_string);
	var_887_object->SetPhoto(var_897_string);
	string var_898_string;
	func_8921(var_898_string);
	var_887_object->SetPhoto2(var_898_string);
	int var_899_int;
	func_10310(var_899_int);
	var_887_object->SetPlayerName(var_899_int);
	bool var_888_bool;
	@IsOverrideActive(var_888_bool);
	if(var_888_bool != 0) {
		var_880_int = -2;
		return 8;
	}
	@DoDialog(var_887_object);
	bool var_901_bool; object var_902_object;
	object var_903_object;
	func_8757(var_903_object);
	var_903_object = var_902_object;
	func_8566(var_901_bool, var_902_object);
	object var_904_object; object var_905_object;
	var_881_object = var_904_object;
	var_887_object = var_905_object;
	TaskCall(4);
	func_358(var_906_object, var_907_object, var_908_string, var_909_bool, var_904_object, var_905_object);
	TaskReturn();
	bool var_890_bool;
	var_887_object->IsDialogEnd(var_890_bool);
	
	for(;;) {
		var_949_bool = !var_890_bool; //@nz
		if(var_949_bool == 0) goto Label_347;
		@sync();
		var_887_object->IsDialogEnd(var_890_bool);
	}
	
Label_347:
	object var_950_object;
	var_881_object = var_950_object;
	func_8548();
	@StopDialog(var_887_object);
	var_887_object->GetReturnValue(-1);
	int var_889_int = var_880_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9496(bool var_993_bool)
{
	int var_995_int;
	func_8784(var_995_int, "d7q03");
	if(var_995_int == 2)
		var_993_bool = true;
	var_993_bool = false;
}


// @pe
void func_8985(void)
{
	@SetVariable("d7q03", 3);
	func_10180();
}


void func_8474(bool var_74_bool)
{
	bool var_76_bool;
	@IsLoaded(var_76_bool);
	var_76_bool = var_74_bool;
}


void func_10011(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 687, 2, 534535);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_10232(var_111_bool, var_112_object, 686);
}
EMIT "Stack[-1] = 0";


void func_8479(bool var_106_bool, object var_107_object, float var_108_float)
{
	cvector var_119_cvector; bool var_126_bool;
	var_107_object->GetPosition(var_119_cvector);
	float var_118_float;
	var_107_object->GetEyesHeight(var_118_float);
	var_127_float = GetByIndex(var_119_cvector, 1);
	SetByIndex(var_119_cvector, 1) = (var_127_float + var_118_float);
	cvector var_120_cvector;
	@GetPosition(var_120_cvector);
	@GetEyesHeight(var_118_float);
	var_128_float = GetByIndex(var_120_cvector, 1);
	SetByIndex(var_120_cvector, 1) = (var_128_float + var_118_float);
	cvector var_121_cvector = var_119_cvector - var_120_cvector;
	var_129_float = GetByIndex(var_121_cvector, 1);
	SetByIndex(var_121_cvector, 1) = (float)0;
	var_131_float = sqrt(var_121_cvector | var_121_cvector);
	var_121_cvector /= var_131_float;
	cvector var_122_cvector = -var_121_cvector;
	cvector var_133_cvector;
	func_8763(var_133_cvector, (var_122_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_123_cvector = ((var_121_cvector * var_108_float) + (var_133_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_125_bool;
	@IsOverrideActive(var_125_bool);
	if(var_125_bool != 0)
		var_106_bool = false;
	@StopWorld();
	@CameraTransit((var_120_cvector + var_123_cvector), var_122_cvector, true);
	var_147_float = GetByIndex(var_123_cvector, 0);
	var_148_float = GetByIndex(var_123_cvector, 2);
	@Rotate(var_147_float, var_148_float);
	bool var_149_bool;
	func_8923(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		@HasAnimationTrack(var_126_bool, "head");
		if(var_126_bool == 0) goto Label_8542;
		@LookAsyncCamera("head");
	}
Label_8542:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_106_bool = true;
	
}


// @pe
void func_8994(void)
{
	@SetVariable("d10q02", 3);
	func_9985();
}


// @pe
void func_9508(bool var_1242_bool)
{
	int var_1244_int;
	func_8784(var_1244_int, "d10q02");
	if(var_1244_int == 2)
		var_1242_bool = true;
	var_1242_bool = false;
}


// @pe
void func_4902(object var_2_object, string var_984_string)
{
	bool var_985_bool;
	func_8923(var_985_bool);
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
	func_8720(var_988_string, var_989_bool);
	var_2_object = var_984_string;
	
}


void func_10024(void)
{
	object var_116_object;
	@CreateDiaryEntry(var_116_object, 32, 1, 512114);
	bool var_120_bool; object var_121_object;
	var_116_object = var_121_object;
	func_10232(var_120_bool, var_121_object, 2);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9003(void)
{
	bool var_133_bool;
	func_8883(var_133_bool, "quest_d10_02", "unlock_georg");
}


// @pe
void func_9520(bool var_1300_bool)
{
	int var_1302_int;
	func_8784(var_1302_int, "ood11Viktor4");
	if(var_1302_int == 0) {
		var_1300_bool = true;
		return 0;
	}
	var_1300_bool = false;
}


// @pe
void func_9010(void)
{
}


// @pe
void func_819(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_352_object, object var_353_object)
{
	var_0_object = var_353_object;
	var_1_object = var_352_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_359_bool;
		func_9484(var_1_object);
		if(!var_359_bool) { //@nz
			func_970(var_353_object, "Neutral");
			var_0_object->SetMessage(505111); //@t
			var_0_object->ClearReplies(); //@t
			bool var_377_bool;
			func_9424(var_1_object);
			if(var_377_bool != 0)
				var_0_object->AddReply(505112, 5626, 5625); //@t
			bool var_386_bool;
			func_9424(var_1_object);
			if(var_386_bool != 0)
				var_0_object->AddReply(505119, 5626, 5632); //@t
			var_0_object->AddReply(505120, -1, 5634); //@t
		} else {
					func_970(var_353_object, "Neutral");
					var_0_object->SetMessage(505106); //@t
					var_0_object->ClearReplies(); //@t
					bool var_404_bool = false;
					bool var_405_bool;
					func_9484(var_1_object);
					if(var_405_bool != 0) {
						bool var_407_bool;
						func_9436(var_1_object);
						if(var_407_bool != 0)
							var_404_bool = true;
					}
					if(var_404_bool != 0)
						var_0_object->AddReply(505107, 9234, 5620); //@t
					bool var_416_bool = false;
					bool var_417_bool = false;
					bool var_418_bool;
					func_9472(var_1_object);
					if(var_418_bool != 0) {
						bool var_424_bool;
						func_9951(var_1_object);
						if(var_424_bool != 0)
							var_417_bool = true;
					}
					if(var_417_bool != 0) {
						bool var_440_bool;
						func_9448(var_1_object);
						if(var_440_bool != 0)
							var_416_bool = true;
					}
					if(var_416_bool != 0)
						var_0_object->AddReply(505142, 5662, 5661); //@t
					bool var_449_bool;
					func_9412(var_1_object);
					if(var_449_bool != 0)
						var_0_object->AddReply(521229, 34260, 22420); //@t
					var_0_object->AddReply(505110, -1, 5623); //@t
		}
	}
	for(;;) {
		bool var_394_bool;
		func_8923(var_394_bool);
		if(var_394_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_8704(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_969;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_969:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x337";


// @pe
void func_9012(void)
{
	@SetVariable("ood11Viktor4", 1);
}


void func_10037(void)
{
	object var_191_object;
	@CreateDiaryEntry(var_191_object, 275, 2, 521237);
	bool var_195_bool; object var_196_object;
	var_191_object = var_196_object;
	func_10232(var_195_bool, var_196_object, 7);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9018(void)
{
	@SetVariable("d11q06", 1);
	func_9998();
	func_10011();
	object var_114_object;
	func_8789(var_114_object, "quest_d11_06");
}


// @pe
void func_9532(bool var_627_bool)
{
	int var_629_int;
	func_8784(var_629_int, "ood3Viktor3");
	if(var_629_int == 0) {
		var_627_bool = true;
		return 0;
	}
	var_627_bool = false;
}


void func_10050(void)
{
	object var_185_object;
	@CreateDiaryEntry(var_185_object, 136, 2, 515306);
	bool var_189_bool; object var_190_object;
	var_185_object = var_190_object;
	func_10232(var_189_bool, var_190_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6468(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1293_object, object var_1294_object)
{
	var_0_object = var_1294_object;
	var_1_object = var_1293_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1300_bool;
		func_9520(var_1_object);
		if(var_1300_bool != 0) {
			object var_1306_object; object var_1307_object;
			var_1306_object = var_1_object;
			var_1307_object = var_0_object;
			func_9012();
			object var_1310_object; object var_1311_object;
			var_1310_object = var_1_object;
			var_1311_object = var_0_object;
			func_9061();
			func_6609(var_1294_object, "Neutral");
			var_0_object->SetMessage(534501); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(538426, 40303, 40302); //@t
			var_0_object->AddReply(538432, 40311, 40308); //@t
		} else {
					func_6609(var_1294_object, "Neutral");
					var_0_object->SetMessage(514377); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1339_bool = false;
					bool var_1340_bool;
					func_9891(var_1_object);
					if(var_1340_bool != 0) {
						bool var_1346_bool;
						func_9879(var_1_object);
						if(var_1346_bool != 0)
							var_1339_bool = true;
					}
					if(var_1339_bool != 0)
						var_0_object->AddReply(538451, 15592, 40333); //@t
					bool var_1355_bool = false;
					bool var_1356_bool = false;
					bool var_1357_bool;
					func_9891(var_1_object);
					if(!var_1357_bool) { //@nz
						bool var_1360_bool;
						func_9903(var_1_object);
						if(var_1360_bool != 0)
							var_1356_bool = true;
					}
					if(var_1356_bool != 0) {
						bool var_1366_bool;
						func_9915(var_1_object);
						if(var_1366_bool != 0)
							var_1355_bool = true;
					}
					if(var_1355_bool != 0)
						var_0_object->AddReply(514378, 15602, 15601); //@t
					var_0_object->AddReply(538442, -1, 40321); //@t
					var_0_object->AddReply(514419, -1, 15644); //@t
		}
	}
	for(;;) {
		bool var_1329_bool;
		func_8923(var_1329_bool);
		if(var_1329_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_8704(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_6608;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_6608:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1948";


// @pe
void func_9544(bool var_682_bool)
{
	int var_684_int;
	func_8784(var_684_int, "ood4Viktor1");
	if(var_684_int == 0) {
		var_682_bool = true;
		return 0;
	}
	var_682_bool = false;
}


// @pe
void func_9034(void)
{
	@SetVariable("ood3Viktor3", 1);
}


void func_10063(void)
{
	object var_104_object;
	@CreateDiaryEntry(var_104_object, 77, 2, 512159);
	bool var_108_bool; object var_109_object;
	var_104_object = var_109_object;
	func_10232(var_108_bool, var_109_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9040(void)
{
	@SetVariable("ood4Viktor1", 1);
}


// @pe
void func_9556(bool var_721_bool)
{
	int var_723_int;
	func_8784(var_723_int, "d4q04");
	if(var_723_int == 0) {
		var_721_bool = true;
		return 0;
	}
	var_721_bool = false;
}


// @pe
void func_9046(void)
{
	@SetVariable("d4q04", 1000);
	func_10089();
}


void func_10076(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 710, 2, 536316);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9055(void)
{
	@SetVariable("d4ViktorVisit", 1);
}


// @pe
void func_9568(bool var_731_bool)
{
	int var_733_int;
	func_8784(var_733_int, "d4q04");
	if(var_733_int == 1)
		var_731_bool = true;
	var_731_bool = false;
}


void func_8548(void)
{
	bool var_318_bool;
	@CameraSwitchToNormal(true);
	bool var_320_bool;
	func_8923(var_320_bool);
	if(var_320_bool != 0) {
	} else {
		@HasAnimationTrack(var_318_bool, "head");
		if(var_318_bool == 0) goto Label_8565;
		@UnlookAsync("head");
	}
Label_8565:
	
}


// @pe
void func_9061(void)
{
	@SetVariable("d11ViktorVisit", 1);
}


// @pe
void func_358(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_904_object, object var_905_object)
{
	var_0_object = var_905_object;
	var_1_object = var_904_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_911_bool;
		func_9795(var_1_object);
		if(var_911_bool != 0) {
			object var_917_object; object var_918_object;
			var_917_object = var_1_object;
			var_918_object = var_0_object;
			func_9400();
			func_441(var_905_object, "Surprise");
			var_0_object->SetMessage(512036); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(540874, 42939, 42937); //@t
			var_0_object->AddReply(540878, 42939, 42941); //@t
		} else {
					func_441(var_905_object, "Neutral");
					var_0_object->SetMessage(513016); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513017, -1, 14223); //@t
		}
	}
	for(;;) {
		bool var_936_bool;
		func_8923(var_936_bool);
		if(var_936_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_8704(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_440;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_440:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16a";


void func_10089(void)
{
	object var_125_object;
	@CreateDiaryEntry(var_125_object, 712, 2, 536318);
	bool var_129_bool; object var_130_object;
	var_125_object = var_130_object;
	func_10232(var_129_bool, var_130_object, 710);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9067(object var_166_object)
{
	@Trace("money25000 is given");
	object var_169_object;
	var_166_object = var_169_object;
	func_8812(var_169_object, 25000);
}


// @pe
void func_9580(bool var_737_bool, object var_738_object)
{
	object var_740_object;
	var_738_object = var_740_object;
	bool var_739_bool;
	func_8831(var_739_bool, var_740_object, "hunter_mark");
	if(var_739_bool != 0) {
		var_737_bool = true;
		return 0;
	}
	var_737_bool = false;
}


// @pe
void func_9077(void)
{
	@SetVariable("d9ViktorVisit", 1);
}


void func_8566(bool var_167_bool, object var_168_object)
{
	int var_174_int; int var_175_int;
	@GetVariable("voice_common", var_174_int);
	if(var_174_int != 0) {
		bool var_178_bool; object var_179_object;
		var_168_object = var_179_object;
		func_8624(var_178_bool, var_179_object);
		if(!var_178_bool) { //@nz
			bool var_209_bool; object var_210_object;
			var_168_object = var_210_object;
			func_8661(var_209_bool, var_210_object);
			if(!var_209_bool) { //@nz
				var_167_bool = false;
				return 4;
			}
		}
		@irand(var_175_int, 2);
		if(var_175_int != 0)
			@SetVariable("voice_common", ((var_174_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_254_bool; object var_255_object;
		var_168_object = var_255_object;
		func_8661(var_254_bool, var_255_object);
		if(!var_254_bool) { //@nz
			bool var_257_bool; object var_258_object;
			var_168_object = var_258_object;
			func_8624(var_257_bool, var_258_object);
			if(!var_257_bool) { //@nz
				var_167_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_8622;
	
Label_8622:
	var_167_bool = true;
	
}


// @pe
void func_9591(bool var_528_bool)
{
	int var_530_int;
	func_8784(var_530_int, "ood2Viktor2");
	if(var_530_int == 0) {
		var_528_bool = true;
		return 0;
	}
	var_528_bool = false;
}


void func_10102(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 711, 2, 536317);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_10232(var_111_bool, var_112_object, 710);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9083(void)
{
	@SetVariable("ood2Viktor2", 1);
}


// @pe
void func_9089(void)
{
	@SetVariable("ood2Viktor1", 1);
}


// @pe
void func_9603(bool var_507_bool)
{
	int var_509_int;
	func_8784(var_509_int, "ood2Viktor1");
	if(var_509_int == 0) {
		var_507_bool = true;
		return 0;
	}
	var_507_bool = false;
}


void func_10115(void)
{
	object var_106_object;
	@CreateDiaryEntry(var_106_object, 154, 2, 515365);
	bool var_110_bool; object var_111_object;
	var_106_object = var_111_object;
	func_10232(var_110_bool, var_111_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9095(void)
{
	@SetVariable("KnowRavell", 1);
}


// @pe
void func_9101(object var_106_object)
{
	@Trace("money 5000 is given");
	object var_109_object;
	var_106_object = var_109_object;
	func_8812(var_109_object, 5000);
}


// @pe
void func_9615(bool var_215_bool)
{
	int var_217_int;
	func_8784(var_217_int, "KnowRavell");
	if(var_217_int == 1)
		var_215_bool = true;
	var_215_bool = false;
}


void func_10128(void)
{
	object var_129_object;
	@CreateDiaryEntry(var_129_object, 155, 2, 515366);
	bool var_133_bool; object var_134_object;
	var_129_object = var_134_object;
	func_10232(var_133_bool, var_134_object, 154);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9111(void)
{
	@SetVariable("d4q04", 1);
	func_10076();
	func_10102();
}


// @pe
void func_9627(bool var_519_bool)
{
	int var_521_int;
	func_8784(var_521_int, "d2q03");
	if(var_521_int == 1)
		var_519_bool = true;
	var_519_bool = false;
}


void func_10141(void)
{
	object var_110_object;
	@CreateDiaryEntry(var_110_object, 111, 1, 513734);
	bool var_114_bool; object var_115_object;
	var_110_object = var_115_object;
	func_10232(var_114_bool, var_115_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9123(void)
{
	@SetVariable("KnowViktor", 1);
}


// @pe
void func_9639(bool var_513_bool)
{
	int var_515_int;
	func_8784(var_515_int, "d2q03MariaGotoViktor");
	if(var_515_int == 1)
		var_513_bool = true;
	var_513_bool = false;
}


void func_9129(void)
{
	object var_89_object;
	func_10260(var_89_object);
	object var_88_object;
	var_89_object = var_88_object;
	float var_100_float;
	func_8895(var_100_float);
	var_88_object->AddMark("d3q02ViktorGotoMladVlad", "pt_map_mladvlad", 0, 511380, var_100_float);
	func_10063();
}
EMIT "Stack[-1] = 0";


void func_10154(void)
{
	object var_141_object;
	@CreateDiaryEntry(var_141_object, 113, 1, 513736);
	bool var_145_bool; object var_146_object;
	var_141_object = var_146_object;
	func_10232(var_145_bool, var_146_object, 111);
}
EMIT "Stack[-1] = 0";


void func_5545(object var_0_object, int var_1100_int, object var_1101_object)
{
	var_0_object = var_1101_object;
	bool var_1111_bool; object var_1112_object;
	var_1101_object = var_1112_object;
	func_8479(var_1111_bool, var_1112_object, 70.0);
	if(!var_1111_bool) { //@nz
		var_1100_int = -2;
		return 8;
	}
	object var_1107_object;
	@CreateDialog(var_1107_object);
	int var_1115_int;
	func_8917(var_1115_int);
	var_1107_object->SetNPCName(var_1115_int);
	int var_1116_int;
	func_8915(var_1116_int);
	var_1107_object->SetNPCDescription(var_1116_int);
	string var_1117_string;
	func_8919(var_1117_string);
	var_1107_object->SetPhoto(var_1117_string);
	string var_1118_string;
	func_8921(var_1118_string);
	var_1107_object->SetPhoto2(var_1118_string);
	int var_1119_int;
	func_10310(var_1119_int);
	var_1107_object->SetPlayerName(var_1119_int);
	bool var_1108_bool;
	@IsOverrideActive(var_1108_bool);
	if(var_1108_bool != 0) {
		var_1100_int = -2;
		return 8;
	}
	@DoDialog(var_1107_object);
	bool var_1121_bool; object var_1122_object;
	object var_1123_object;
	func_8757(var_1123_object);
	var_1123_object = var_1122_object;
	func_8566(var_1121_bool, var_1122_object);
	object var_1124_object; object var_1125_object;
	var_1101_object = var_1124_object;
	var_1107_object = var_1125_object;
	TaskCall(20);
	func_5626(var_1126_object, var_1127_object, var_1128_string, var_1129_bool, var_1124_object, var_1125_object);
	TaskReturn();
	bool var_1110_bool;
	var_1107_object->IsDialogEnd(var_1110_bool);
	
	for(;;) {
		var_1198_bool = !var_1110_bool; //@nz
		if(var_1198_bool == 0) goto Label_5615;
		@sync();
		var_1107_object->IsDialogEnd(var_1110_bool);
	}
	
Label_5615:
	object var_1199_object;
	var_1101_object = var_1199_object;
	func_8548();
	@StopDialog(var_1107_object);
	var_1107_object->GetReturnValue(-1);
	int var_1109_int = var_1100_int;
}
EMIT "Stack[-4] = 0";


void func_8624(bool var_178_bool, object var_179_object)
{
	string var_185_string; bool var_187_bool; int var_188_int; string var_189_string;
	var_185_string = "c";
	int var_186_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_179_object->HasProperty((var_185_string + (var_186_int + 1)), var_187_bool);
			if(!var_187_bool) { //@nz
			} else {
				var_186_int += 1;
			}
		}
		if(!var_186_int) { //@nz
			var_178_bool = false;
			return 10;
		}
		var_188_int = 0;
		if(var_186_int > 1)
			@irand(var_188_int, var_186_int);
		var_179_object->GetProperty((var_185_string + (var_188_int + 1)), var_189_string);
		bool var_201_bool; string var_202_string;
		var_189_string = var_202_string;
		func_8735(var_201_bool, var_202_string);
		var_201_bool = var_178_bool;
		return 10;

	}
}


// @pe
void func_9651(bool var_418_bool)
{
	int var_420_int;
	func_8784(var_420_int, "d1q01");
	if(var_420_int == 1)
		var_418_bool = true;
	var_418_bool = false;
}


void func_3507(object var_0_object, int var_651_int, object var_652_object)
{
	var_0_object = var_652_object;
	bool var_662_bool; object var_663_object;
	var_652_object = var_663_object;
	func_8479(var_662_bool, var_663_object, 70.0);
	if(!var_662_bool) { //@nz
		var_651_int = -2;
		return 8;
	}
	object var_658_object;
	@CreateDialog(var_658_object);
	int var_666_int;
	func_8917(var_666_int);
	var_658_object->SetNPCName(var_666_int);
	int var_667_int;
	func_8915(var_667_int);
	var_658_object->SetNPCDescription(var_667_int);
	string var_668_string;
	func_8919(var_668_string);
	var_658_object->SetPhoto(var_668_string);
	string var_669_string;
	func_8921(var_669_string);
	var_658_object->SetPhoto2(var_669_string);
	int var_670_int;
	func_10310(var_670_int);
	var_658_object->SetPlayerName(var_670_int);
	bool var_659_bool;
	@IsOverrideActive(var_659_bool);
	if(var_659_bool != 0) {
		var_651_int = -2;
		return 8;
	}
	@DoDialog(var_658_object);
	bool var_672_bool; object var_673_object;
	object var_674_object;
	func_8757(var_674_object);
	var_674_object = var_673_object;
	func_8566(var_672_bool, var_673_object);
	object var_675_object; object var_676_object;
	var_652_object = var_675_object;
	var_658_object = var_676_object;
	TaskCall(12);
	func_3588(var_677_object, var_678_object, var_679_string, var_680_bool, var_675_object, var_676_object);
	TaskReturn();
	bool var_661_bool;
	var_658_object->IsDialogEnd(var_661_bool);
	
	for(;;) {
		var_752_bool = !var_661_bool; //@nz
		if(var_752_bool == 0) goto Label_3577;
		@sync();
		var_658_object->IsDialogEnd(var_661_bool);
	}
	
Label_3577:
	object var_753_object;
	var_652_object = var_753_object;
	func_8548();
	@StopDialog(var_658_object);
	var_658_object->GetReturnValue(-1);
	int var_660_int = var_651_int;
}
EMIT "Stack[-4] = 0";


void func_10167(void)
{
	object var_133_object;
	@CreateDiaryEntry(var_133_object, 112, 1, 513735);
	bool var_137_bool; object var_138_object;
	var_133_object = var_138_object;
	func_10232(var_137_bool, var_138_object, 111);
}
EMIT "Stack[-1] = 0";


void func_4024(object var_0_object, int var_756_int, object var_757_object)
{
	var_0_object = var_757_object;
	bool var_767_bool; object var_768_object;
	var_757_object = var_768_object;
	func_8479(var_767_bool, var_768_object, 70.0);
	if(!var_767_bool) { //@nz
		var_756_int = -2;
		return 8;
	}
	object var_763_object;
	@CreateDialog(var_763_object);
	int var_771_int;
	func_8917(var_771_int);
	var_763_object->SetNPCName(var_771_int);
	int var_772_int;
	func_8915(var_772_int);
	var_763_object->SetNPCDescription(var_772_int);
	string var_773_string;
	func_8919(var_773_string);
	var_763_object->SetPhoto(var_773_string);
	string var_774_string;
	func_8921(var_774_string);
	var_763_object->SetPhoto2(var_774_string);
	int var_775_int;
	func_10310(var_775_int);
	var_763_object->SetPlayerName(var_775_int);
	bool var_764_bool;
	@IsOverrideActive(var_764_bool);
	if(var_764_bool != 0) {
		var_756_int = -2;
		return 8;
	}
	@DoDialog(var_763_object);
	bool var_777_bool; object var_778_object;
	object var_779_object;
	func_8757(var_779_object);
	var_779_object = var_778_object;
	func_8566(var_777_bool, var_778_object);
	object var_780_object; object var_781_object;
	var_757_object = var_780_object;
	var_763_object = var_781_object;
	TaskCall(14);
	func_4105(var_782_object, var_783_object, var_784_string, var_785_bool, var_780_object, var_781_object);
	TaskReturn();
	bool var_766_bool;
	var_763_object->IsDialogEnd(var_766_bool);
	
	for(;;) {
		var_876_bool = !var_766_bool; //@nz
		if(var_876_bool == 0) goto Label_4094;
		@sync();
		var_763_object->IsDialogEnd(var_766_bool);
	}
	
Label_4094:
	object var_877_object;
	var_757_object = var_877_object;
	func_8548();
	@StopDialog(var_763_object);
	var_763_object->GetReturnValue(-1);
	int var_765_int = var_756_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_441(object var_2_object, string var_921_string)
{
	bool var_922_bool;
	func_8923(var_922_bool);
	if(!var_922_bool) //@nz
		return 0;
	if(var_921_string == var_2_object)
		return 0;
	string var_925_string; bool var_926_bool;
	var_921_string = var_925_string;
	if(var_921_string == "")
		var_926_bool = false;
	else
		var_926_bool = true;
	func_8720(var_925_string, var_926_bool);
	var_2_object = var_921_string;
	
}


void func_8120(object var_0_object, int var_1441_int, object var_1442_object)
{
	var_0_object = var_1442_object;
	bool var_1452_bool; object var_1453_object;
	var_1442_object = var_1453_object;
	func_8479(var_1452_bool, var_1453_object, 70.0);
	if(!var_1452_bool) { //@nz
		var_1441_int = -2;
		return 8;
	}
	object var_1448_object;
	@CreateDialog(var_1448_object);
	int var_1456_int;
	func_8917(var_1456_int);
	var_1448_object->SetNPCName(var_1456_int);
	int var_1457_int;
	func_8915(var_1457_int);
	var_1448_object->SetNPCDescription(var_1457_int);
	string var_1458_string;
	func_8919(var_1458_string);
	var_1448_object->SetPhoto(var_1458_string);
	string var_1459_string;
	func_8921(var_1459_string);
	var_1448_object->SetPhoto2(var_1459_string);
	int var_1460_int;
	func_10310(var_1460_int);
	var_1448_object->SetPlayerName(var_1460_int);
	bool var_1449_bool;
	@IsOverrideActive(var_1449_bool);
	if(var_1449_bool != 0) {
		var_1441_int = -2;
		return 8;
	}
	@DoDialog(var_1448_object);
	bool var_1462_bool; object var_1463_object;
	object var_1464_object;
	func_8757(var_1464_object);
	var_1464_object = var_1463_object;
	func_8566(var_1462_bool, var_1463_object);
	object var_1465_object; object var_1466_object;
	var_1442_object = var_1465_object;
	var_1448_object = var_1466_object;
	TaskCall(28);
	func_8201(var_1467_object, var_1468_object, var_1469_string, var_1470_bool, var_1465_object, var_1466_object);
	TaskReturn();
	bool var_1451_bool;
	var_1448_object->IsDialogEnd(var_1451_bool);
	
	for(;;) {
		var_1495_bool = !var_1451_bool; //@nz
		if(var_1495_bool == 0) goto Label_8190;
		@sync();
		var_1448_object->IsDialogEnd(var_1451_bool);
	}
	
Label_8190:
	object var_1496_object;
	var_1442_object = var_1496_object;
	func_8548();
	@StopDialog(var_1448_object);
	var_1448_object->GetReturnValue(-1);
	int var_1450_int = var_1441_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9148(void)
{
	@SetVariable("ood3Viktor1", 1);
}


// @pe
void func_9663(bool var_596_bool)
{
	int var_598_int;
	func_8784(var_598_int, "d3q02");
	if(var_598_int == 1)
		var_596_bool = true;
	var_596_bool = false;
}


// @pe
void func_9154(object var_127_object)
{
	object var_131_object;
	func_10260(var_131_object);
	object var_128_object;
	var_131_object = var_128_object;
	func_10277(var_128_object, "pt_map_mladvlad", (float)2);
	object var_151_object;
	func_10260(var_151_object);
	var_127_object->ShowMap(var_151_object);
}


void func_10180(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 644, 2, 533278);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, 641);
}
EMIT "Stack[-1] = 0";


// @pe
void func_970(object var_2_object, string var_368_string)
{
	bool var_369_bool;
	func_8923(var_369_bool);
	if(!var_369_bool) //@nz
		return 0;
	if(var_368_string == var_2_object)
		return 0;
	string var_372_string; bool var_373_bool;
	var_368_string = var_372_string;
	if(var_368_string == "")
		var_373_bool = false;
	else
		var_373_bool = true;
	func_8720(var_372_string, var_373_bool);
	var_2_object = var_368_string;
	
}


// @pe
void func_9675(bool var_602_bool)
{
	int var_604_int;
	func_8784(var_604_int, "ood3Viktor1");
	if(var_604_int == 0) {
		var_602_bool = true;
		return 0;
	}
	var_602_bool = false;
}


// @pe
void func_6609(object var_2_object, string var_1314_string)
{
	bool var_1315_bool;
	func_8923(var_1315_bool);
	if(!var_1315_bool) //@nz
		return 0;
	if(var_1314_string == var_2_object)
		return 0;
	string var_1318_string; bool var_1319_bool;
	var_1314_string = var_1318_string;
	if(var_1314_string == "")
		var_1319_bool = false;
	else
		var_1319_bool = true;
	func_8720(var_1318_string, var_1319_bool);
	var_2_object = var_1314_string;
	
}


void func_9170(void)
{
	@SetVariable("d3q02", 3);
	object var_178_object;
	func_10260(var_178_object);
	object var_175_object;
	var_178_object = var_175_object;
	float var_183_float;
	func_8895(var_183_float);
	var_175_object->AddMark("d3q02ViktorGotoHan", "pt_map_han", 0, 511385, var_183_float);
	func_10050();
}
EMIT "Stack[-1] = 0";


void func_10193(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 182, 1, 515445);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, -1);
}
EMIT "Stack[-1] = 0";


void func_8661(bool var_209_bool, object var_210_object)
{
	bool var_218_bool; int var_219_int; string var_220_string;
	int var_222_int;
	func_8900(var_222_int);
	string var_216_string = ("d" + var_222_int) + "m";
	int var_217_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_210_object->HasProperty((var_216_string + (var_217_int + 1)), var_218_bool);
			if(!var_218_bool) { //@nz
			} else {
				var_217_int += 1;
			}
		}
		if(!var_217_int) { //@nz
			var_209_bool = false;
			return 10;
		}
		var_219_int = 0;
		if(var_217_int > 1)
			@irand(var_219_int, var_217_int);
		var_210_object->GetProperty((var_216_string + (var_219_int + 1)), var_220_string);
		bool var_241_bool; string var_242_string;
		var_220_string = var_242_string;
		func_8735(var_241_bool, var_242_string);
		var_241_bool = var_209_bool;
		return 10;

	}
}


// @pe
void func_9687(bool var_618_bool)
{
	int var_620_int;
	func_8784(var_620_int, "d3q02");
	if(var_620_int == 2)
		var_618_bool = true;
	var_618_bool = false;
}


void func_10206(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 183, 1, 515446);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_10232(var_111_bool, var_112_object, 182);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9699(bool var_612_bool)
{
	int var_614_int;
	func_8784(var_614_int, "ood3Viktor2");
	if(var_614_int == 0) {
		var_612_bool = true;
		return 0;
	}
	var_612_bool = false;
}


// @pe
void func_9193(void)
{
	@SetVariable("ood3Viktor2", 1);
}


void func_10219(object var_97_object)
{
	object var_99_object;
	@GetDiaryRoot(var_99_object);
	if(!var_99_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_97_object = false;
	}
	var_99_object = var_97_object;
}
EMIT "Stack[-1] = 0";


void func_9199(void)
{
	@SetVariable("d1q01", 2);
	object var_101_object;
	func_10260(var_101_object);
	object var_98_object;
	var_101_object = var_98_object;
	float var_112_float;
	func_8895(var_112_float);
	var_98_object->AddMark("d1q01ViktorGotoIsidor", "pt_map_burah_father", 1, 508637, var_112_float);
	func_10024();
	bool var_138_bool;
	func_8883(var_138_bool, "quest_d1_01", "place_patrol");
}
EMIT "Stack[-1] = 0";


// @pe
void func_9711(bool var_825_bool)
{
	int var_827_int;
	func_8784(var_827_int, "d5q03");
	if(var_827_int == 0) {
		var_825_bool = true;
		return 0;
	}
	var_825_bool = false;
}


void func_2033(object var_0_object, int var_465_int, object var_466_object)
{
	var_0_object = var_466_object;
	bool var_476_bool; object var_477_object;
	var_466_object = var_477_object;
	func_8479(var_476_bool, var_477_object, 70.0);
	if(!var_476_bool) { //@nz
		var_465_int = -2;
		return 8;
	}
	object var_472_object;
	@CreateDialog(var_472_object);
	int var_480_int;
	func_8917(var_480_int);
	var_472_object->SetNPCName(var_480_int);
	int var_481_int;
	func_8915(var_481_int);
	var_472_object->SetNPCDescription(var_481_int);
	string var_482_string;
	func_8919(var_482_string);
	var_472_object->SetPhoto(var_482_string);
	string var_483_string;
	func_8921(var_483_string);
	var_472_object->SetPhoto2(var_483_string);
	int var_484_int;
	func_10310(var_484_int);
	var_472_object->SetPlayerName(var_484_int);
	bool var_473_bool;
	@IsOverrideActive(var_473_bool);
	if(var_473_bool != 0) {
		var_465_int = -2;
		return 8;
	}
	@DoDialog(var_472_object);
	bool var_486_bool; object var_487_object;
	object var_488_object;
	func_8757(var_488_object);
	var_488_object = var_487_object;
	func_8566(var_486_bool, var_487_object);
	object var_489_object; object var_490_object;
	var_466_object = var_489_object;
	var_472_object = var_490_object;
	TaskCall(8);
	func_2114(var_491_object, var_492_object, var_493_string, var_494_bool, var_489_object, var_490_object);
	TaskReturn();
	bool var_475_bool;
	var_472_object->IsDialogEnd(var_475_bool);
	
	for(;;) {
		var_551_bool = !var_475_bool; //@nz
		if(var_551_bool == 0) goto Label_2103;
		@sync();
		var_472_object->IsDialogEnd(var_475_bool);
	}
	
Label_2103:
	object var_552_object;
	var_466_object = var_552_object;
	func_8548();
	@StopDialog(var_472_object);
	var_472_object->GetReturnValue(-1);
	int var_474_int = var_465_int;
}
EMIT "Stack[-4] = 0";


void func_10232(bool var_88_bool, object var_89_object, int var_90_int)
{
	object var_97_object;
	func_10219(var_97_object);
	object var_94_object;
	var_97_object = var_94_object;
	object var_95_object;
	var_94_object->Find(var_90_int, var_95_object);
	if(!var_95_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_90_int);
		var_88_bool = false;
	}
	var_95_object->AddChild(var_89_object);
	@SendWorldWndMessage(7);
	int var_96_int;
	var_89_object->GetCategory(var_96_int);
	@SetDiarySection(var_96_int);
	var_88_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5626(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1124_object, object var_1125_object)
{
	var_0_object = var_1125_object;
	var_1_object = var_1124_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1131_bool;
		func_9831(var_1_object);
		if(var_1131_bool != 0) {
			object var_1137_object; object var_1138_object;
			var_1137_object = var_1_object;
			var_1138_object = var_0_object;
			func_9353();
			object var_1141_object; object var_1142_object;
			var_1141_object = var_1_object;
			var_1142_object = var_0_object;
			func_9077();
			func_5743(var_1125_object, "Neutral");
			var_0_object->SetMessage(513994); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(538808, 40728, 40727); //@t
			var_0_object->AddReply(538813, 40730, 40732); //@t
		} else {
					func_5743(var_1125_object, "Neutral");
					var_0_object->SetMessage(514011); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1170_bool;
					func_9939(var_1_object);
					if(var_1170_bool != 0)
						var_0_object->AddReply(514012, 15248, 15247); //@t
					bool var_1179_bool = false;
					bool var_1180_bool;
					func_9843(var_1_object);
					if(var_1180_bool != 0) {
						bool var_1186_bool;
						func_9855(var_1_object);
						if(var_1186_bool != 0)
							var_1179_bool = true;
					}
					if(var_1179_bool != 0)
						var_0_object->AddReply(514029, 15265, 15264); //@t
					var_0_object->AddReply(514039, -1, 15274); //@t
		}
	}
	for(;;) {
		bool var_1160_bool;
		func_8923(var_1160_bool);
		if(var_1160_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_8704(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_5742;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5742:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x15fe";


// @pe
void func_9723(bool var_795_bool)
{
	int var_797_int;
	func_8784(var_797_int, "d5q03");
	if(var_797_int == 1000)
		var_795_bool = true;
	var_795_bool = false;
}


void func_5118(object var_0_object, int var_1017_int, object var_1018_object)
{
	var_0_object = var_1018_object;
	bool var_1028_bool; object var_1029_object;
	var_1018_object = var_1029_object;
	func_8479(var_1028_bool, var_1029_object, 70.0);
	if(!var_1028_bool) { //@nz
		var_1017_int = -2;
		return 8;
	}
	object var_1024_object;
	@CreateDialog(var_1024_object);
	int var_1032_int;
	func_8917(var_1032_int);
	var_1024_object->SetNPCName(var_1032_int);
	int var_1033_int;
	func_8915(var_1033_int);
	var_1024_object->SetNPCDescription(var_1033_int);
	string var_1034_string;
	func_8919(var_1034_string);
	var_1024_object->SetPhoto(var_1034_string);
	string var_1035_string;
	func_8921(var_1035_string);
	var_1024_object->SetPhoto2(var_1035_string);
	int var_1036_int;
	func_10310(var_1036_int);
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
	func_8757(var_1040_object);
	var_1040_object = var_1039_object;
	func_8566(var_1038_bool, var_1039_object);
	object var_1041_object; object var_1042_object;
	var_1018_object = var_1041_object;
	var_1024_object = var_1042_object;
	TaskCall(18);
	func_5199(var_1043_object, var_1044_object, var_1045_string, var_1046_bool, var_1041_object, var_1042_object);
	TaskReturn();
	bool var_1027_bool;
	var_1024_object->IsDialogEnd(var_1027_bool);
	
	for(;;) {
		var_1096_bool = !var_1027_bool; //@nz
		if(var_1096_bool == 0) goto Label_5188;
		@sync();
		var_1024_object->IsDialogEnd(var_1027_bool);
	}
	
Label_5188:
	object var_1097_object;
	var_1018_object = var_1097_object;
	func_8548();
	@StopDialog(var_1024_object);
	var_1024_object->GetReturnValue(-1);
	int var_1026_int = var_1017_int;
}
EMIT "Stack[-4] = 0";


