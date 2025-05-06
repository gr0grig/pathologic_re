task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0; // 0x1 PushV
	var_3_int = var_0_int; // 0x2 Mov
	var_4_float = var_1_float; // 0x3 Mov
	func_7162(var_3_int, var_4_float); // 0x4 Call
	if(var_2_bool == 0) goto Label_8; // 0x6 JumpB
	return 0; // 0x7 Return
	
Label_8:
	var_3588_bool = 0; var_3589_int = 0; var_3590_float = 0; // 0x8 PushV
	var_3589_int = var_0_int; // 0x9 Mov
	var_3590_float = var_1_float; // 0xa Mov
	func_10065(var_3589_int, var_3590_float); // 0xb Call
	if(var_3588_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_3783_int = 0; var_3784_float = 0; // 0xf PushV
	var_3783_int = var_0_int; // 0x10 Mov
	var_3784_float = var_1_float; // 0x11 Mov
	func_10142(var_3784_float); // 0x12 Call
	return 0; // 0x14 Return
}


event_26(var_0_string, var_1_string)
{
	var_2_string = "playsound"; // 0x1932 PushS
	var_3_bool = var_0_string == var_2_string; // 0x1933 Eq
	if(var_3_bool == 0) goto Label_6455; // 0x1934 JumpB
	PlaySound(var_1_string); // 0x1935 Func
	
Label_6455:
	return 0; // 0x1937 Return
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x1938 PushV
	var_22_string = "horror"; // 0x1939 PushS
	var_23_bool = var_0_string == var_22_string; // 0x193a Eq
	if(var_23_bool == 0) goto Label_6491; // 0x193b JumpB
	_strtoi(var_12_int, var_1_string); // 0x193c Func
	var_24_object = GlobalVars[17]; // 0x193e PushGE
	size(var_13_int); // 0x193f ObjFunc
	var_25_bool = 0; // 0x1941 PushV
	var_25_bool = 0; // 0x1942 MovB
	var_26_int = 0; // 0x1943 PushI
	var_27_bool = var_12_int >= var_26_int; // 0x1944 GE
	if(var_27_bool == 0) goto Label_6473; // 0x1945 JumpB
	var_28_bool = var_12_int < var_13_int; // 0x1946 LT
	if(var_28_bool == 0) goto Label_6473; // 0x1947 JumpB
	var_25_bool = 1; // 0x1948 MovB
	
Label_6473:
	if(var_25_bool == 0) goto Label_6487; // 0x1949 JumpB
	var_29_object = GlobalVars[17]; // 0x194a PushGE
	get(var_14_object, var_12_int); // 0x194b ObjFunc
	var_30_object = Obj(); var_31_int = 0; // 0x194d PushV
	var_30_object = var_14_object; // 0x194e Mov
	var_31_int = 1; // 0x194f MovI
	func_229(var_31_int); // 0x1950 Call
	var_57_string = "Replaced"; // 0x1952 PushS
	Trace(var_57_string); // 0x1953 Func
	var_14_object = 0; // 0x1955 SetNull
	goto Label_6490; // 0x1956 Jump
	
Label_6490:
	goto Label_6544; // 0x195a Jump
	
Label_6544:
	return 20; // 0x1990 Return
	
Label_6487:
	var_58_string = "Invalid region index"; // 0x1957 PushS
	Trace(var_58_string); // 0x1958 Func
	
Label_6491:
	var_59_string = "nail"; // 0x195b PushS
	var_60_bool = var_0_string == var_59_string; // 0x195c Eq
	if(var_60_bool == 0) goto Label_6525; // 0x195d JumpB
	_strtoi(var_15_int, var_1_string); // 0x195e Func
	var_61_object = GlobalVars[17]; // 0x1960 PushGE
	size(var_16_int); // 0x1961 ObjFunc
	var_62_bool = 0; // 0x1963 PushV
	var_62_bool = 0; // 0x1964 MovB
	var_63_int = 0; // 0x1965 PushI
	var_64_bool = var_15_int >= var_63_int; // 0x1966 GE
	if(var_64_bool == 0) goto Label_6507; // 0x1967 JumpB
	var_65_bool = var_15_int < var_16_int; // 0x1968 LT
	if(var_65_bool == 0) goto Label_6507; // 0x1969 JumpB
	var_62_bool = 1; // 0x196a MovB
	
Label_6507:
	if(var_62_bool == 0) goto Label_6521; // 0x196b JumpB
	var_66_object = GlobalVars[17]; // 0x196c PushGE
	get(var_17_object, var_15_int); // 0x196d ObjFunc
	var_67_object = Obj(); var_68_int = 0; // 0x196f PushV
	var_67_object = var_17_object; // 0x1970 Mov
	var_68_int = 2; // 0x1971 MovI
	func_229(var_68_int); // 0x1972 Call
	var_69_string = "Replaced"; // 0x1974 PushS
	Trace(var_69_string); // 0x1975 Func
	var_17_object = 0; // 0x1977 SetNull
	goto Label_6524; // 0x1978 Jump
	
Label_6524:
	goto Label_6544; // 0x197c Jump
	
Label_6521:
	var_70_string = "Invalid region index"; // 0x1979 PushS
	Trace(var_70_string); // 0x197a Func
	
Label_6525:
	var_71_string = "fogme"; // 0x197d PushS
	var_72_bool = var_0_string == var_71_string; // 0x197e Eq
	if(var_72_bool == 0) goto Label_6544; // 0x197f JumpB
	var_73_object = Obj(); // 0x1980 PushV
	func_67(var_73_object); // 0x1981 Call
	var_18_object = var_73_object; // 0x1982 Mov
	GetScene(var_19_object); // 0x1984 ObjFunc
	GetPosition(var_20_cvector); // 0x1986 ObjFunc
	var_77_string = "fog"; // 0x1988 PushS
	var_78_cvector = CVector(0.0, 0.0, 1.0); // 0x1989 PushVec
	var_79_string = "fog_stat.xml"; // 0x198a PushS
	AddActorByType(var_21_object, var_77_string, var_19_object, var_20_cvector, var_78_cvector, var_79_string); // 0x198b Func
	var_21_object = 0; // 0x198d SetNull
	var_19_object = 0; // 0x198e SetNull
	var_18_object = 0; // 0x198f SetNull
}


main()
{
	var_0_string = "branch"; // 0x15 PushS
	var_1_int = 0; // 0x16 PushI
	SetVariable(var_0_string, var_1_int); // 0x17 Func
	func_44(); // 0x1a Call
	func_6791(); // 0x1d Call
	func_7208(); // 0x20 Call
	func_10100(); // 0x23 Call
	func_11007(); // 0x26 Call
	
Label_40:
	Hold(); // 0x28 Func
	goto Label_40; // 0x2a Jump
}


func_9728()
{
	var_4187_object = Obj(); var_4188_object = Obj(); var_4189_object = Obj(); var_4190_object = Obj(); // 0x2600 PushV
	var_4191_object = Obj(); // 0x2601 PushV
	func_10048(var_4191_object); // 0x2602 Call
	var_4189_object = var_4191_object; // 0x2603 Mov
	var_4192_string = "d10q01AglajaGotoPetr"; // 0x2605 PushS
	FindMark(var_4190_object, var_4192_string); // 0x2606 ObjFunc
	var_4193_object = var_4190_object; // 0x2608 Push
	if(var_4193_object == 0) goto Label_9740; // 0x2609 JumpB
	Remove(); // 0x260a ObjFunc
	
Label_9740:
	var_4194_string = "d10q01SoldierGotoPetr"; // 0x260c PushS
	FindMark(var_4190_object, var_4194_string); // 0x260d ObjFunc
	var_4195_object = var_4190_object; // 0x260f Push
	if(var_4195_object == 0) goto Label_9747; // 0x2610 JumpB
	Remove(); // 0x2611 ObjFunc
	
Label_9747:
	var_4196_bool = 0; var_4197_int = 0; // 0x2613 PushV
	var_4197_int = 186; // 0x2614 MovI
	func_10031(var_4196_bool, var_4197_int); // 0x2615 Call
	return 4; // 0x2617 Return
}


func_2052(var_2151_int, var_2152_int, var_2153_int)
{
	var_2154_int = 0; var_2155_int = 0; var_2156_int = 0; var_2157_int = 0; // 0x804 PushV
	var_2158_bool = 0; // 0x805 PushV
	var_2158_bool = 0; // 0x806 MovB
	var_2159_int = 8; // 0x807 PushI
	var_2160_bool = var_2153_int > var_2159_int; // 0x808 GT
	if(var_2160_bool == 0) goto Label_2062; // 0x809 JumpB
	var_2161_int = 21; // 0x80a PushI
	var_2162_bool = var_2153_int < var_2161_int; // 0x80b LT
	if(var_2162_bool == 0) goto Label_2062; // 0x80c JumpB
	var_2158_bool = 1; // 0x80d MovB
	
Label_2062:
	if(var_2158_bool == 0) goto Label_2168; // 0x80e JumpB
	var_2163_int = 0; var_2164_string = ""; var_2165_string = ""; var_2166_int = 0; // 0x80f PushV
	var_2163_int = var_2151_int; // 0x810 Mov
	var_2164_string = "pers_woman"; // 0x811 MovS
	var_2165_string = "woman_d.xml"; // 0x812 MovS
	var_2166_int = 1; // 0x813 MovI
	func_438(var_2163_int, var_2164_string, var_2165_string, var_2166_int); // 0x814 Call
	var_2167_int = 0; var_2168_string = ""; var_2169_string = ""; var_2170_int = 0; // 0x816 PushV
	var_2167_int = var_2151_int; // 0x817 Mov
	var_2168_string = "pers_unosha"; // 0x818 MovS
	var_2169_string = "unosha_d.xml"; // 0x819 MovS
	var_2170_int = 1; // 0x81a MovI
	func_438(var_2167_int, var_2168_string, var_2169_string, var_2170_int); // 0x81b Call
	var_2171_int = 0; var_2172_string = ""; var_2173_string = ""; var_2174_int = 0; // 0x81d PushV
	var_2171_int = var_2151_int; // 0x81e Mov
	var_2172_string = "pers_unosha"; // 0x81f MovS
	var_2173_string = "unosha2_d.xml"; // 0x820 MovS
	var_2174_int = 1; // 0x821 MovI
	func_438(var_2171_int, var_2172_string, var_2173_string, var_2174_int); // 0x822 Call
	var_2175_int = 0; var_2176_string = ""; var_2177_string = ""; var_2178_int = 0; // 0x824 PushV
	var_2175_int = var_2151_int; // 0x825 Mov
	var_2176_string = "pers_boy"; // 0x826 MovS
	var_2177_string = "boy_d.xml"; // 0x827 MovS
	var_2178_int = 1; // 0x828 MovI
	func_438(var_2175_int, var_2176_string, var_2177_string, var_2178_int); // 0x829 Call
	var_2179_int = 0; var_2180_string = ""; var_2181_string = ""; var_2182_int = 0; // 0x82b PushV
	var_2179_int = var_2151_int; // 0x82c Mov
	var_2180_string = "pers_girl"; // 0x82d MovS
	var_2181_string = "girl_d.xml"; // 0x82e MovS
	var_2182_int = 1; // 0x82f MovI
	func_438(var_2179_int, var_2180_string, var_2181_string, var_2182_int); // 0x830 Call
	var_2183_int = 0; var_2184_string = ""; var_2185_string = ""; var_2186_int = 0; // 0x832 PushV
	var_2183_int = var_2151_int; // 0x833 Mov
	var_2184_string = "pers_girl"; // 0x834 MovS
	var_2185_string = "girl2_d.xml"; // 0x835 MovS
	var_2186_int = 1; // 0x836 MovI
	func_438(var_2183_int, var_2184_string, var_2185_string, var_2186_int); // 0x837 Call
	var_2187_int = 0; var_2188_string = ""; var_2189_string = ""; var_2190_int = 0; // 0x839 PushV
	var_2187_int = var_2151_int; // 0x83a Mov
	var_2188_string = "pers_alkash"; // 0x83b MovS
	var_2189_string = "alkash_d.xml"; // 0x83c MovS
	var_2190_int = 1; // 0x83d MovI
	func_438(var_2187_int, var_2188_string, var_2189_string, var_2190_int); // 0x83e Call
	var_2191_int = 0; var_2192_string = ""; var_2193_string = ""; var_2194_int = 0; // 0x840 PushV
	var_2191_int = var_2151_int; // 0x841 Mov
	var_2192_string = "pers_vaxxabit"; // 0x842 MovS
	var_2193_string = "vaxxabit.xml"; // 0x843 MovS
	var_2194_int = 1; // 0x844 MovI
	func_438(var_2191_int, var_2192_string, var_2193_string, var_2194_int); // 0x845 Call
	var_2195_int = 0; var_2196_string = ""; var_2197_string = ""; var_2198_int = 0; // 0x847 PushV
	var_2195_int = var_2151_int; // 0x848 Mov
	var_2196_string = "pers_vaxxabit"; // 0x849 MovS
	var_2197_string = "vaxxabit_d.xml"; // 0x84a MovS
	var_2198_int = 1; // 0x84b MovI
	func_438(var_2195_int, var_2196_string, var_2197_string, var_2198_int); // 0x84c Call
	var_2199_int = 0; var_2200_string = ""; var_2201_string = ""; var_2202_int = 0; // 0x84e PushV
	var_2199_int = var_2151_int; // 0x84f Mov
	var_2200_string = "pers_vaxxabitka"; // 0x850 MovS
	var_2201_string = "vaxxabitka.xml"; // 0x851 MovS
	var_2202_int = 1; // 0x852 MovI
	func_438(var_2199_int, var_2200_string, var_2201_string, var_2202_int); // 0x853 Call
	var_2203_int = 0; var_2204_string = ""; var_2205_string = ""; var_2206_int = 0; // 0x855 PushV
	var_2203_int = var_2151_int; // 0x856 Mov
	var_2204_string = "pers_vaxxabitka"; // 0x857 MovS
	var_2205_string = "vaxxabitka_d.xml"; // 0x858 MovS
	var_2206_int = 1; // 0x859 MovI
	func_438(var_2203_int, var_2204_string, var_2205_string, var_2206_int); // 0x85a Call
	var_2207_int = 1; // 0x85c PushI
	var_2208_int = var_2152_int + var_2207_int; // 0x85d Add
	var_2209_int = 3; // 0x85e PushI
	var_2210_bool = var_2208_int >= var_2209_int; // 0x85f GE
	if(var_2210_bool == 0) goto Label_2145; // 0x860 JumpB
	
Label_2145:
	var_2211_int = 0; var_2212_string = ""; var_2213_string = ""; var_2214_int = 0; // 0x861 PushV
	var_2211_int = var_2151_int; // 0x862 Mov
	var_2212_string = "fog"; // 0x863 MovS
	var_2213_string = "fog.xml"; // 0x864 MovS
	var_2214_int = 4; // 0x865 MovI
	func_464(var_2211_int, var_2212_string, var_2213_string, var_2214_int); // 0x866 Call
	var_2215_int = 1; // 0x868 PushI
	var_2216_float = 0; var_2217_int = 0; // 0x869 PushV
	var_2217_int = var_2152_int; // 0x86a Mov
	func_1022(var_2216_float, var_2217_int); // 0x86b Call
	var_2156_int = var_2215_int * var_2216_float; // 0x86d Mult2
	var_2218_int = var_2156_int; // 0x86e Push
	if(var_2218_int == 0) goto Label_2167; // 0x86f JumpB
	var_2219_int = 0; var_2220_string = ""; var_2221_string = ""; var_2222_int = 0; // 0x870 PushV
	var_2219_int = var_2151_int; // 0x871 Mov
	var_2220_string = "pers_bomber"; // 0x872 MovS
	var_2221_string = "bomber.xml"; // 0x873 MovS
	var_2222_int = var_2156_int; // 0x874 Mov
	func_438(var_2219_int, var_2220_string, var_2221_string, var_2222_int); // 0x875 Call
	
Label_2167:
	goto Label_2251; // 0x877 Jump
	
Label_2251:
	var_2223_int = 0; var_2224_string = ""; var_2225_string = ""; var_2226_int = 0; var_2227_int = 0; var_2228_int = 0; // 0x8cb PushV
	var_2223_int = var_2151_int; // 0x8cc Mov
	var_2224_string = "pers_worker"; // 0x8cd MovS
	var_2225_string = "agony1.xml"; // 0x8ce MovS
	var_2226_int = 2; // 0x8cf MovI
	var_2227_int = 4; // 0x8d0 MovI
	var_2228_int = 4; // 0x8d1 MovI
	func_451(var_2223_int, var_2224_string, var_2225_string, var_2226_int, var_2227_int, var_2228_int); // 0x8d2 Call
	var_2229_int = 0; var_2230_string = ""; var_2231_string = ""; var_2232_int = 0; var_2233_int = 0; var_2234_int = 0; // 0x8d4 PushV
	var_2229_int = var_2151_int; // 0x8d5 Mov
	var_2230_string = "pers_unosha"; // 0x8d6 MovS
	var_2231_string = "agony1.xml"; // 0x8d7 MovS
	var_2232_int = 2; // 0x8d8 MovI
	var_2233_int = 4; // 0x8d9 MovI
	var_2234_int = 4; // 0x8da MovI
	func_451(var_2229_int, var_2230_string, var_2231_string, var_2232_int, var_2233_int, var_2234_int); // 0x8db Call
	var_2235_int = 0; var_2236_string = ""; var_2237_string = ""; var_2238_int = 0; var_2239_int = 0; var_2240_int = 0; // 0x8dd PushV
	var_2235_int = var_2151_int; // 0x8de Mov
	var_2236_string = "pers_woman"; // 0x8df MovS
	var_2237_string = "agony1.xml"; // 0x8e0 MovS
	var_2238_int = 2; // 0x8e1 MovI
	var_2239_int = 4; // 0x8e2 MovI
	var_2240_int = 4; // 0x8e3 MovI
	func_451(var_2235_int, var_2236_string, var_2237_string, var_2238_int, var_2239_int, var_2240_int); // 0x8e4 Call
	var_2241_int = 0; var_2242_string = ""; var_2243_string = ""; var_2244_int = 0; var_2245_int = 0; var_2246_int = 0; // 0x8e6 PushV
	var_2241_int = var_2151_int; // 0x8e7 Mov
	var_2242_string = "pers_vaxxabitka"; // 0x8e8 MovS
	var_2243_string = "agony1.xml"; // 0x8e9 MovS
	var_2244_int = 2; // 0x8ea MovI
	var_2245_int = 4; // 0x8eb MovI
	var_2246_int = 4; // 0x8ec MovI
	func_451(var_2241_int, var_2242_string, var_2243_string, var_2244_int, var_2245_int, var_2246_int); // 0x8ed Call
	var_2247_int = 0; var_2248_string = ""; var_2249_string = ""; var_2250_int = 0; var_2251_int = 0; var_2252_int = 0; // 0x8ef PushV
	var_2247_int = var_2151_int; // 0x8f0 Mov
	var_2248_string = "pers_wasted_girl"; // 0x8f1 MovS
	var_2249_string = "agony1.xml"; // 0x8f2 MovS
	var_2250_int = 2; // 0x8f3 MovI
	var_2251_int = 4; // 0x8f4 MovI
	var_2252_int = 4; // 0x8f5 MovI
	func_451(var_2247_int, var_2248_string, var_2249_string, var_2250_int, var_2251_int, var_2252_int); // 0x8f6 Call
	var_2253_bool = 0; var_2254_int = 0; var_2255_int = 0; // 0x8f8 PushV
	var_2254_int = var_2152_int; // 0x8f9 Mov
	var_2255_int = var_2153_int; // 0x8fa Mov
	func_1112(var_2253_bool, var_2254_int, var_2255_int); // 0x8fb Call
	if(var_2253_bool == 0) goto Label_2309; // 0x8fd JumpB
	var_2256_int = 0; var_2257_string = ""; var_2258_string = ""; var_2259_int = 0; // 0x8fe PushV
	var_2256_int = var_2151_int; // 0x8ff Mov
	var_2257_string = "pers_soldat"; // 0x900 MovS
	var_2258_string = "soldier_marauder.xml"; // 0x901 MovS
	var_2259_int = 2; // 0x902 MovI
	func_438(var_2256_int, var_2257_string, var_2258_string, var_2259_int); // 0x903 Call
	
Label_2309:
	return 4; // 0x905 Return
	
Label_2168:
	var_2260_int = 0; var_2261_string = ""; var_2262_string = ""; var_2263_int = 0; // 0x878 PushV
	var_2260_int = var_2151_int; // 0x879 Mov
	var_2261_string = "pers_woman"; // 0x87a MovS
	var_2262_string = "woman_d.xml"; // 0x87b MovS
	var_2263_int = 1; // 0x87c MovI
	func_438(var_2260_int, var_2261_string, var_2262_string, var_2263_int); // 0x87d Call
	var_2264_int = 0; var_2265_string = ""; var_2266_string = ""; var_2267_int = 0; // 0x87f PushV
	var_2264_int = var_2151_int; // 0x880 Mov
	var_2265_string = "pers_unosha"; // 0x881 MovS
	var_2266_string = "unosha_d.xml"; // 0x882 MovS
	var_2267_int = 1; // 0x883 MovI
	func_438(var_2264_int, var_2265_string, var_2266_string, var_2267_int); // 0x884 Call
	var_2268_int = 0; var_2269_string = ""; var_2270_string = ""; var_2271_int = 0; // 0x886 PushV
	var_2268_int = var_2151_int; // 0x887 Mov
	var_2269_string = "pers_unosha"; // 0x888 MovS
	var_2270_string = "unosha2_d.xml"; // 0x889 MovS
	var_2271_int = 1; // 0x88a MovI
	func_438(var_2268_int, var_2269_string, var_2270_string, var_2271_int); // 0x88b Call
	var_2272_int = 0; var_2273_string = ""; var_2274_string = ""; var_2275_int = 0; // 0x88d PushV
	var_2272_int = var_2151_int; // 0x88e Mov
	var_2273_string = "pers_alkash"; // 0x88f MovS
	var_2274_string = "alkash_d.xml"; // 0x890 MovS
	var_2275_int = 1; // 0x891 MovI
	func_438(var_2272_int, var_2273_string, var_2274_string, var_2275_int); // 0x892 Call
	var_2276_int = 0; var_2277_string = ""; var_2278_string = ""; var_2279_int = 0; // 0x894 PushV
	var_2276_int = var_2151_int; // 0x895 Mov
	var_2277_string = "pers_vaxxabit"; // 0x896 MovS
	var_2278_string = "vaxxabit.xml"; // 0x897 MovS
	var_2279_int = 1; // 0x898 MovI
	func_438(var_2276_int, var_2277_string, var_2278_string, var_2279_int); // 0x899 Call
	var_2280_int = 0; var_2281_string = ""; var_2282_string = ""; var_2283_int = 0; // 0x89b PushV
	var_2280_int = var_2151_int; // 0x89c Mov
	var_2281_string = "pers_vaxxabit"; // 0x89d MovS
	var_2282_string = "vaxxabit_d.xml"; // 0x89e MovS
	var_2283_int = 1; // 0x89f MovI
	func_438(var_2280_int, var_2281_string, var_2282_string, var_2283_int); // 0x8a0 Call
	var_2284_int = 0; var_2285_string = ""; var_2286_string = ""; var_2287_int = 0; // 0x8a2 PushV
	var_2284_int = var_2151_int; // 0x8a3 Mov
	var_2285_string = "pers_vaxxabitka"; // 0x8a4 MovS
	var_2286_string = "vaxxabitka.xml"; // 0x8a5 MovS
	var_2287_int = 1; // 0x8a6 MovI
	func_438(var_2284_int, var_2285_string, var_2286_string, var_2287_int); // 0x8a7 Call
	var_2288_int = 0; var_2289_string = ""; var_2290_string = ""; var_2291_int = 0; // 0x8a9 PushV
	var_2288_int = var_2151_int; // 0x8aa Mov
	var_2289_string = "pers_vaxxabitka"; // 0x8ab MovS
	var_2290_string = "vaxxabitka_d.xml"; // 0x8ac MovS
	var_2291_int = 1; // 0x8ad MovI
	func_438(var_2288_int, var_2289_string, var_2290_string, var_2291_int); // 0x8ae Call
	var_2292_int = 1; // 0x8b0 PushI
	var_2293_int = var_2152_int + var_2292_int; // 0x8b1 Add
	var_2294_int = 3; // 0x8b2 PushI
	var_2295_bool = var_2293_int >= var_2294_int; // 0x8b3 GE
	if(var_2295_bool == 0) goto Label_2229; // 0x8b4 JumpB
	
Label_2229:
	var_2296_int = 0; var_2297_string = ""; var_2298_string = ""; var_2299_int = 0; // 0x8b5 PushV
	var_2296_int = var_2151_int; // 0x8b6 Mov
	var_2297_string = "fog"; // 0x8b7 MovS
	var_2298_string = "fog.xml"; // 0x8b8 MovS
	var_2299_int = 4; // 0x8b9 MovI
	func_464(var_2296_int, var_2297_string, var_2298_string, var_2299_int); // 0x8ba Call
	var_2300_int = 1; // 0x8bc PushI
	var_2301_float = 0; var_2302_int = 0; // 0x8bd PushV
	var_2302_int = var_2152_int; // 0x8be Mov
	func_1022(var_2301_float, var_2302_int); // 0x8bf Call
	var_2157_int = var_2300_int * var_2301_float; // 0x8c1 Mult2
	var_2303_int = var_2157_int; // 0x8c2 Push
	if(var_2303_int == 0) goto Label_2251; // 0x8c3 JumpB
	var_2304_int = 0; var_2305_string = ""; var_2306_string = ""; var_2307_int = 0; // 0x8c4 PushV
	var_2304_int = var_2151_int; // 0x8c5 Mov
	var_2305_string = "pers_bomber"; // 0x8c6 MovS
	var_2306_string = "bomber.xml"; // 0x8c7 MovS
	var_2307_int = var_2157_int; // 0x8c8 Mov
	func_438(var_2304_int, var_2305_string, var_2306_string, var_2307_int); // 0x8c9 Call
}


func_11268(var_4710_int)
{
	var_4711_int = 0; var_4712_int = 0; // 0x2c04 PushV
	var_4713_string = "vol_"; // 0x2c05 PushS
	var_4714_int = var_4713_string + var_4710_int; // 0x2c06 Add
	GetVariable(var_4714_int, var_4712_int); // 0x2c07 Func
	var_4715_string = "vol_"; // 0x2c09 PushS
	var_4716_int = var_4715_string + var_4710_int; // 0x2c0a Add
	var_4717_int = 8; // 0x2c0b PushI
	var_4718_int = var_4712_int | var_4717_int; // 0x2c0c Or
	SetVariable(var_4716_int, var_4718_int); // 0x2c0d Func
	return 2; // 0x2c0f Return
}


func_8200(var_4558_int)
{
	var_4559_int = 0; var_4560_int = 0; // 0x2008 PushV
	var_4561_int = 15489; // 0x2009 PushI
	var_4562_int = 15488; // 0x200a PushI
	AddMessage(var_4561_int, var_4562_int, var_4560_int); // 0x200b Func
	var_4563_string = "player_mail"; // 0x200d PushS
	var_4564_int = 1; // 0x200e PushI
	SetVariable(var_4563_string, var_4564_int); // 0x200f Func
	var_4558_int = var_4560_int; // 0x2011 Mov
	return 2; // 0x2012 Return
}


func_5641()
{
	var_224_string = "r5_house2_01"; // 0x160a PushS
	add(var_224_string); // 0x160b ObjFunc
	var_225_string = "r5_house2_02"; // 0x160d PushS
	add(var_225_string); // 0x160e ObjFunc
	var_226_string = "r5_house2_03"; // 0x1610 PushS
	add(var_226_string); // 0x1611 ObjFunc
	var_227_string = "r5_house3_01_i2"; // 0x1613 PushS
	add(var_227_string); // 0x1614 ObjFunc
	var_228_string = "r5_house3_01"; // 0x1616 PushS
	add(var_228_string); // 0x1617 ObjFunc
	var_229_string = "r5_house3_02_i2"; // 0x1619 PushS
	add(var_229_string); // 0x161a ObjFunc
	var_230_string = "r5_house3_02"; // 0x161c PushS
	add(var_230_string); // 0x161d ObjFunc
	var_231_string = "r5_house3_03_i2"; // 0x161f PushS
	add(var_231_string); // 0x1620 ObjFunc
	var_232_string = "r5_house3_03"; // 0x1622 PushS
	add(var_232_string); // 0x1623 ObjFunc
	var_233_string = "r5_house3_04_i2"; // 0x1625 PushS
	add(var_233_string); // 0x1626 ObjFunc
	var_234_string = "r5_house3_04"; // 0x1628 PushS
	add(var_234_string); // 0x1629 ObjFunc
	var_235_string = "r5_house3_05_i2"; // 0x162b PushS
	add(var_235_string); // 0x162c ObjFunc
	var_236_string = "r5_house3_05"; // 0x162e PushS
	add(var_236_string); // 0x162f ObjFunc
	var_237_string = "r5_house3_06_i2"; // 0x1631 PushS
	add(var_237_string); // 0x1632 ObjFunc
	var_238_string = "r5_house3_06"; // 0x1634 PushS
	add(var_238_string); // 0x1635 ObjFunc
	var_239_string = "r5_house3_07_i2"; // 0x1637 PushS
	add(var_239_string); // 0x1638 ObjFunc
	var_240_string = "r5_house3_07"; // 0x163a PushS
	add(var_240_string); // 0x163b ObjFunc
	var_241_string = "r5_House6_01"; // 0x163d PushS
	add(var_241_string); // 0x163e ObjFunc
	return 0; // 0x1640 Return
}


func_8718()
{
	var_4973_object = Obj(); var_4974_object = Obj(); var_4975_object = Obj(); var_4976_object = Obj(); // 0x220e PushV
	var_4977_object = Obj(); // 0x220f PushV
	func_10048(var_4977_object); // 0x2210 Call
	var_4975_object = var_4977_object; // 0x2211 Mov
	var_4978_string = "d2q01AlexandrGotoAnna"; // 0x2213 PushS
	FindMark(var_4976_object, var_4978_string); // 0x2214 ObjFunc
	var_4979_object = var_4976_object; // 0x2216 Push
	if(var_4979_object == 0) goto Label_8730; // 0x2217 JumpB
	Remove(); // 0x2218 ObjFunc
	
Label_8730:
	var_4980_string = "d2q01AlexandrGotoBigVlad"; // 0x221a PushS
	FindMark(var_4976_object, var_4980_string); // 0x221b ObjFunc
	var_4981_object = var_4976_object; // 0x221d Push
	if(var_4981_object == 0) goto Label_8737; // 0x221e JumpB
	Remove(); // 0x221f ObjFunc
	
Label_8737:
	var_4982_string = "d2q01AlexandrGotoGeorg"; // 0x2221 PushS
	FindMark(var_4976_object, var_4982_string); // 0x2222 ObjFunc
	var_4983_object = var_4976_object; // 0x2224 Push
	if(var_4983_object == 0) goto Label_8744; // 0x2225 JumpB
	Remove(); // 0x2226 ObjFunc
	
Label_8744:
	var_4984_string = "d2q01AnnaGotoKapella"; // 0x2228 PushS
	FindMark(var_4976_object, var_4984_string); // 0x2229 ObjFunc
	var_4985_object = var_4976_object; // 0x222b Push
	if(var_4985_object == 0) goto Label_8751; // 0x222c JumpB
	Remove(); // 0x222d ObjFunc
	
Label_8751:
	var_4986_string = "d2q01KapellaGotoSpi4ka"; // 0x222f PushS
	FindMark(var_4976_object, var_4986_string); // 0x2230 ObjFunc
	var_4987_object = var_4976_object; // 0x2232 Push
	if(var_4987_object == 0) goto Label_8758; // 0x2233 JumpB
	Remove(); // 0x2234 ObjFunc
	
Label_8758:
	var_4988_string = "d2q01WomanDGotoAlexandr"; // 0x2236 PushS
	FindMark(var_4976_object, var_4988_string); // 0x2237 ObjFunc
	var_4989_object = var_4976_object; // 0x2239 Push
	if(var_4989_object == 0) goto Label_8765; // 0x223a JumpB
	Remove(); // 0x223b ObjFunc
	
Label_8765:
	var_4990_string = "d2q02AndreiGotoGrif"; // 0x223d PushS
	FindMark(var_4976_object, var_4990_string); // 0x223e ObjFunc
	var_4991_object = var_4976_object; // 0x2240 Push
	if(var_4991_object == 0) goto Label_8772; // 0x2241 JumpB
	Remove(); // 0x2242 ObjFunc
	
Label_8772:
	var_4992_string = "d2q02AndreiGotoGrifSelf"; // 0x2244 PushS
	FindMark(var_4976_object, var_4992_string); // 0x2245 ObjFunc
	var_4993_object = var_4976_object; // 0x2247 Push
	if(var_4993_object == 0) goto Label_8779; // 0x2248 JumpB
	Remove(); // 0x2249 ObjFunc
	
Label_8779:
	var_4994_string = "d2q02AndreiGotoPetr"; // 0x224b PushS
	FindMark(var_4976_object, var_4994_string); // 0x224c ObjFunc
	var_4995_object = var_4976_object; // 0x224e Push
	if(var_4995_object == 0) goto Label_8786; // 0x224f JumpB
	Remove(); // 0x2250 ObjFunc
	
Label_8786:
	var_4996_string = "d2q02AndreiGotoPetrSelf"; // 0x2252 PushS
	FindMark(var_4976_object, var_4996_string); // 0x2253 ObjFunc
	var_4997_object = var_4976_object; // 0x2255 Push
	if(var_4997_object == 0) goto Label_8793; // 0x2256 JumpB
	Remove(); // 0x2257 ObjFunc
	
Label_8793:
	var_4998_string = "d2q02EvaGotoAndrei"; // 0x2259 PushS
	FindMark(var_4976_object, var_4998_string); // 0x225a ObjFunc
	var_4999_object = var_4976_object; // 0x225c Push
	if(var_4999_object == 0) goto Label_8800; // 0x225d JumpB
	Remove(); // 0x225e ObjFunc
	
Label_8800:
	var_5000_string = "d2q02EvaGotoAndreiSelf"; // 0x2260 PushS
	FindMark(var_4976_object, var_5000_string); // 0x2261 ObjFunc
	var_5001_object = var_4976_object; // 0x2263 Push
	if(var_5001_object == 0) goto Label_8807; // 0x2264 JumpB
	Remove(); // 0x2265 ObjFunc
	
Label_8807:
	var_5002_string = "d2q02EvaGotoMaria"; // 0x2267 PushS
	FindMark(var_4976_object, var_5002_string); // 0x2268 ObjFunc
	var_5003_object = var_4976_object; // 0x226a Push
	if(var_5003_object == 0) goto Label_8814; // 0x226b JumpB
	Remove(); // 0x226c ObjFunc
	
Label_8814:
	var_5004_string = "d2q02MariaGotoPetr"; // 0x226e PushS
	FindMark(var_4976_object, var_5004_string); // 0x226f ObjFunc
	var_5005_object = var_4976_object; // 0x2271 Push
	if(var_5005_object == 0) goto Label_8821; // 0x2272 JumpB
	Remove(); // 0x2273 ObjFunc
	
Label_8821:
	var_5006_string = "d2q02PetrGotoAndrei"; // 0x2275 PushS
	FindMark(var_4976_object, var_5006_string); // 0x2276 ObjFunc
	var_5007_object = var_4976_object; // 0x2278 Push
	if(var_5007_object == 0) goto Label_8828; // 0x2279 JumpB
	Remove(); // 0x227a ObjFunc
	
Label_8828:
	var_5008_string = "d2q02PetrGotoAndreiSelf"; // 0x227c PushS
	FindMark(var_4976_object, var_5008_string); // 0x227d ObjFunc
	var_5009_object = var_4976_object; // 0x227f Push
	if(var_5009_object == 0) goto Label_8835; // 0x2280 JumpB
	Remove(); // 0x2281 ObjFunc
	
Label_8835:
	var_5010_string = "d2q02PetrRefusedSelf"; // 0x2283 PushS
	FindMark(var_4976_object, var_5010_string); // 0x2284 ObjFunc
	var_5011_object = var_4976_object; // 0x2286 Push
	if(var_5011_object == 0) goto Label_8842; // 0x2287 JumpB
	Remove(); // 0x2288 ObjFunc
	
Label_8842:
	var_5012_string = "d2q02ReadyAndrei"; // 0x228a PushS
	FindMark(var_4976_object, var_5012_string); // 0x228b ObjFunc
	var_5013_object = var_4976_object; // 0x228d Push
	if(var_5013_object == 0) goto Label_8849; // 0x228e JumpB
	Remove(); // 0x228f ObjFunc
	
Label_8849:
	var_5014_string = "d2q03BirdmaskGotoLara"; // 0x2291 PushS
	FindMark(var_4976_object, var_5014_string); // 0x2292 ObjFunc
	var_5015_object = var_4976_object; // 0x2294 Push
	if(var_5015_object == 0) goto Label_8856; // 0x2295 JumpB
	Remove(); // 0x2296 ObjFunc
	
Label_8856:
	var_5016_string = "d2q03BirdmaskGotoLaraSelf"; // 0x2298 PushS
	FindMark(var_4976_object, var_5016_string); // 0x2299 ObjFunc
	var_5017_object = var_4976_object; // 0x229b Push
	if(var_5017_object == 0) goto Label_8863; // 0x229c JumpB
	Remove(); // 0x229d ObjFunc
	
Label_8863:
	var_5018_string = "d2q03LaraGotoJulia"; // 0x229f PushS
	FindMark(var_4976_object, var_5018_string); // 0x22a0 ObjFunc
	var_5019_object = var_4976_object; // 0x22a2 Push
	if(var_5019_object == 0) goto Label_8870; // 0x22a3 JumpB
	Remove(); // 0x22a4 ObjFunc
	
Label_8870:
	var_5020_string = "d2q03LaraGotoMaria"; // 0x22a6 PushS
	FindMark(var_4976_object, var_5020_string); // 0x22a7 ObjFunc
	var_5021_object = var_4976_object; // 0x22a9 Push
	if(var_5021_object == 0) goto Label_8877; // 0x22aa JumpB
	Remove(); // 0x22ab ObjFunc
	
Label_8877:
	var_5022_string = "d2q03LaraGotoMladVlad"; // 0x22ad PushS
	FindMark(var_4976_object, var_5022_string); // 0x22ae ObjFunc
	var_5023_object = var_4976_object; // 0x22b0 Push
	if(var_5023_object == 0) goto Label_8884; // 0x22b1 JumpB
	Remove(); // 0x22b2 ObjFunc
	
Label_8884:
	var_5024_string = "d2q03LaraGotoMoneyFoodSelf"; // 0x22b4 PushS
	FindMark(var_4976_object, var_5024_string); // 0x22b5 ObjFunc
	var_5025_object = var_4976_object; // 0x22b7 Push
	if(var_5025_object == 0) goto Label_8891; // 0x22b8 JumpB
	Remove(); // 0x22b9 ObjFunc
	
Label_8891:
	var_5026_string = "d2q03LaraGotoSklad"; // 0x22bb PushS
	FindMark(var_4976_object, var_5026_string); // 0x22bc ObjFunc
	var_5027_object = var_4976_object; // 0x22be Push
	if(var_5027_object == 0) goto Label_8898; // 0x22bf JumpB
	Remove(); // 0x22c0 ObjFunc
	
Label_8898:
	var_5028_string = "d2q03LaraGotoSkladSelf"; // 0x22c2 PushS
	FindMark(var_4976_object, var_5028_string); // 0x22c3 ObjFunc
	var_5029_object = var_4976_object; // 0x22c5 Push
	if(var_5029_object == 0) goto Label_8905; // 0x22c6 JumpB
	Remove(); // 0x22c7 ObjFunc
	
Label_8905:
	var_5030_bool = 0; var_5031_int = 0; // 0x22c9 PushV
	var_5031_int = 10; // 0x22ca MovI
	func_10031(var_5030_bool, var_5031_int); // 0x22cb Call
	var_5032_bool = 0; var_5033_int = 0; // 0x22cd PushV
	var_5033_int = 11; // 0x22ce MovI
	func_10031(var_5032_bool, var_5033_int); // 0x22cf Call
	var_5034_bool = 0; var_5035_int = 0; // 0x22d1 PushV
	var_5035_int = 12; // 0x22d2 MovI
	func_10031(var_5034_bool, var_5035_int); // 0x22d3 Call
	return 4; // 0x22d5 Return
}


func_11280()
{
	var_4701_int = 0; var_4702_int = 0; var_4703_int = 0; var_4704_int = 0; // 0x2c10 PushV
	var_4703_int = 0; // 0x2c11 MovI
	
Label_11282:
	var_4705_int = 3; // 0x2c12 PushI
	var_4706_bool = var_4703_int < var_4705_int; // 0x2c13 LT
	if(var_4706_bool == 0) goto Label_11394; // 0x2c14 JumpB
	var_4707_int = 13; // 0x2c15 PushI
	irand(var_4704_int, var_4707_int); // 0x2c16 Func
	var_4708_int = 0; // 0x2c18 PushI
	var_4709_bool = var_4704_int == var_4708_int; // 0x2c19 Eq
	if(var_4709_bool == 0) goto Label_11296; // 0x2c1a JumpB
	var_4710_int = 0; // 0x2c1b PushV
	var_4710_int = 11; // 0x2c1c MovI
	func_11268(var_4710_int); // 0x2c1d Call
	goto Label_11391; // 0x2c1f Jump
	
Label_11391:
	var_4719_int = 1; // 0x2c7f PushI
	var_4703_int = var_4703_int + var_4719_int; // 0x2c80 Add2
	goto Label_11282; // 0x2c81 Jump
	
Label_11296:
	var_4720_int = 1; // 0x2c20 PushI
	var_4721_bool = var_4704_int == var_4720_int; // 0x2c21 Eq
	if(var_4721_bool == 0) goto Label_11304; // 0x2c22 JumpB
	var_4722_int = 0; // 0x2c23 PushV
	var_4722_int = 18; // 0x2c24 MovI
	func_11268(var_4722_int); // 0x2c25 Call
	goto Label_11391; // 0x2c27 Jump
	
Label_11304:
	var_4723_int = 2; // 0x2c28 PushI
	var_4724_bool = var_4704_int == var_4723_int; // 0x2c29 Eq
	if(var_4724_bool == 0) goto Label_11312; // 0x2c2a JumpB
	var_4725_int = 0; // 0x2c2b PushV
	var_4725_int = 21; // 0x2c2c MovI
	func_11268(var_4725_int); // 0x2c2d Call
	goto Label_11391; // 0x2c2f Jump
	
Label_11312:
	var_4726_int = 3; // 0x2c30 PushI
	var_4727_bool = var_4704_int == var_4726_int; // 0x2c31 Eq
	if(var_4727_bool == 0) goto Label_11320; // 0x2c32 JumpB
	var_4728_int = 0; // 0x2c33 PushV
	var_4728_int = 2; // 0x2c34 MovI
	func_11268(var_4728_int); // 0x2c35 Call
	goto Label_11391; // 0x2c37 Jump
	
Label_11320:
	var_4729_int = 4; // 0x2c38 PushI
	var_4730_bool = var_4704_int == var_4729_int; // 0x2c39 Eq
	if(var_4730_bool == 0) goto Label_11328; // 0x2c3a JumpB
	var_4731_int = 0; // 0x2c3b PushV
	var_4731_int = 9; // 0x2c3c MovI
	func_11268(var_4731_int); // 0x2c3d Call
	goto Label_11391; // 0x2c3f Jump
	
Label_11328:
	var_4732_int = 5; // 0x2c40 PushI
	var_4733_bool = var_4704_int == var_4732_int; // 0x2c41 Eq
	if(var_4733_bool == 0) goto Label_11336; // 0x2c42 JumpB
	var_4734_int = 0; // 0x2c43 PushV
	var_4734_int = 13; // 0x2c44 MovI
	func_11268(var_4734_int); // 0x2c45 Call
	goto Label_11391; // 0x2c47 Jump
	
Label_11336:
	var_4735_int = 6; // 0x2c48 PushI
	var_4736_bool = var_4704_int == var_4735_int; // 0x2c49 Eq
	if(var_4736_bool == 0) goto Label_11344; // 0x2c4a JumpB
	var_4737_int = 0; // 0x2c4b PushV
	var_4737_int = 24; // 0x2c4c MovI
	func_11268(var_4737_int); // 0x2c4d Call
	goto Label_11391; // 0x2c4f Jump
	
Label_11344:
	var_4738_int = 7; // 0x2c50 PushI
	var_4739_bool = var_4704_int == var_4738_int; // 0x2c51 Eq
	if(var_4739_bool == 0) goto Label_11352; // 0x2c52 JumpB
	var_4740_int = 0; // 0x2c53 PushV
	var_4740_int = 10; // 0x2c54 MovI
	func_11268(var_4740_int); // 0x2c55 Call
	goto Label_11391; // 0x2c57 Jump
	
Label_11352:
	var_4741_int = 8; // 0x2c58 PushI
	var_4742_bool = var_4704_int == var_4741_int; // 0x2c59 Eq
	if(var_4742_bool == 0) goto Label_11360; // 0x2c5a JumpB
	var_4743_int = 0; // 0x2c5b PushV
	var_4743_int = 20; // 0x2c5c MovI
	func_11268(var_4743_int); // 0x2c5d Call
	goto Label_11391; // 0x2c5f Jump
	
Label_11360:
	var_4744_int = 9; // 0x2c60 PushI
	var_4745_bool = var_4704_int == var_4744_int; // 0x2c61 Eq
	if(var_4745_bool == 0) goto Label_11368; // 0x2c62 JumpB
	var_4746_int = 0; // 0x2c63 PushV
	var_4746_int = 21; // 0x2c64 MovI
	func_11268(var_4746_int); // 0x2c65 Call
	goto Label_11391; // 0x2c67 Jump
	
Label_11368:
	var_4747_int = 10; // 0x2c68 PushI
	var_4748_bool = var_4704_int == var_4747_int; // 0x2c69 Eq
	if(var_4748_bool == 0) goto Label_11376; // 0x2c6a JumpB
	var_4749_int = 0; // 0x2c6b PushV
	var_4749_int = 3; // 0x2c6c MovI
	func_11268(var_4749_int); // 0x2c6d Call
	goto Label_11391; // 0x2c6f Jump
	
Label_11376:
	var_4750_int = 11; // 0x2c70 PushI
	var_4751_bool = var_4704_int == var_4750_int; // 0x2c71 Eq
	if(var_4751_bool == 0) goto Label_11384; // 0x2c72 JumpB
	var_4752_int = 0; // 0x2c73 PushV
	var_4752_int = 19; // 0x2c74 MovI
	func_11268(var_4752_int); // 0x2c75 Call
	goto Label_11391; // 0x2c77 Jump
	
Label_11384:
	var_4753_int = 12; // 0x2c78 PushI
	var_4754_bool = var_4704_int == var_4753_int; // 0x2c79 Eq
	if(var_4754_bool == 0) goto Label_11391; // 0x2c7a JumpB
	var_4755_int = 0; // 0x2c7b PushV
	var_4755_int = 26; // 0x2c7c MovI
	func_11268(var_4755_int); // 0x2c7d Call
	
Label_11394:
	return 4; // 0x2c82 Return
}


func_8211(var_4578_int)
{
	var_4579_int = 0; var_4580_int = 0; // 0x2013 PushV
	var_4581_int = 15491; // 0x2014 PushI
	var_4582_int = 15490; // 0x2015 PushI
	AddMessage(var_4581_int, var_4582_int, var_4580_int); // 0x2016 Func
	var_4583_string = "player_mail"; // 0x2018 PushS
	var_4584_int = 1; // 0x2019 PushI
	SetVariable(var_4583_string, var_4584_int); // 0x201a Func
	var_4578_int = var_4580_int; // 0x201c Mov
	return 2; // 0x201d Return
}


func_5140()
{
	var_173_string = "r2_house_2_02"; // 0x1415 PushS
	add(var_173_string); // 0x1416 ObjFunc
	var_174_string = "r2_house_2_03"; // 0x1418 PushS
	add(var_174_string); // 0x1419 ObjFunc
	var_175_string = "r2_house7_02"; // 0x141b PushS
	add(var_175_string); // 0x141c ObjFunc
	var_176_string = "r2_house01_01"; // 0x141e PushS
	add(var_176_string); // 0x141f ObjFunc
	var_177_string = "r2_house7_01"; // 0x1421 PushS
	add(var_177_string); // 0x1422 ObjFunc
	var_178_string = "r2_house3_01_i2"; // 0x1424 PushS
	add(var_178_string); // 0x1425 ObjFunc
	var_179_string = "r2_house3_01"; // 0x1427 PushS
	add(var_179_string); // 0x1428 ObjFunc
	var_180_string = "r2_house3_02_i2"; // 0x142a PushS
	add(var_180_string); // 0x142b ObjFunc
	var_181_string = "r2_house3_02"; // 0x142d PushS
	add(var_181_string); // 0x142e ObjFunc
	var_182_string = "r2_house3_03_i2"; // 0x1430 PushS
	add(var_182_string); // 0x1431 ObjFunc
	var_183_string = "r2_house3_03"; // 0x1433 PushS
	add(var_183_string); // 0x1434 ObjFunc
	return 0; // 0x1436 Return
}


func_533(var_1457_string)
{
	var_1464_object = Obj(); var_1465_int = 0; var_1466_bool = 0; var_1467_cvector = CVector(0,0,0); var_1468_cvector = CVector(0,0,0); var_1469_object = Obj(); var_1470_string = ""; var_1471_object = Obj(); var_1472_int = 0; var_1473_bool = 0; var_1474_cvector = CVector(0,0,0); var_1475_cvector = CVector(0,0,0); var_1476_object = Obj(); var_1477_string = ""; // 0x215 PushV
	GetMainOutdoorScene(var_1471_object); // 0x216 Func
	var_1472_int = 0; // 0x218 MovI
	
Label_537:
	var_1478_int = 1; // 0x219 PushI
	var_1479_int = var_1472_int + var_1478_int; // 0x21a Add
	var_1480_int = var_1457_string + var_1479_int; // 0x21b Add
	GetLocator(var_1480_int, var_1473_bool, var_1474_cvector, var_1475_cvector); // 0x21c ObjFunc
	var_1481_bool = var_1473_bool == 0; // 0x21e Not
	if(var_1481_bool == 0) goto Label_545; // 0x21f JumpB
	goto Label_555; // 0x220 Jump
	
Label_555:
	return 14; // 0x22b Return
	
Label_545:
	var_1477_string = "fog_stat.xml"; // 0x221 MovS
	var_1482_string = "fog"; // 0x222 PushS
	AddStationaryActorByType(var_1476_object, var_1474_cvector, var_1475_cvector, var_1482_string, var_1477_string); // 0x223 ObjFunc
	add(var_1476_object); // 0x225 ObjFunc
	var_1476_object = 0; // 0x227 SetNull
	var_1483_int = 1; // 0x228 PushI
	var_1472_int = var_1472_int + var_1483_int; // 0x229 Add2
	goto Label_537; // 0x22a Jump
}


func_4632(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object)
{
	var_3193_int = 0; // 0x1219 PushI
	var_3194_bool = var_3188_int == var_3193_int; // 0x121a Eq
	if(var_3194_bool == 0) goto Label_4660; // 0x121b JumpB
	var_3195_int = 0; var_3196_bool = 0; // 0x121c PushV
	var_3195_int = 4; // 0x121d MovI
	var_3196_bool = 1; // 0x121e MovB
	func_731(var_3195_int, var_3196_bool); // 0x121f Call
	var_3197_int = 0; var_3198_bool = 0; var_3199_int = 0; // 0x1221 PushV
	var_3197_int = 4; // 0x1222 MovI
	var_3198_bool = 1; // 0x1223 MovB
	var_3199_int = 1; // 0x1224 MovI
	func_748(var_3197_int, var_3198_bool, var_3199_int); // 0x1225 Call
	var_3200_int = 0; var_3201_int = 0; var_3202_object = Obj(); var_3203_object = Obj(); var_3204_object = Obj(); // 0x1227 PushV
	var_3200_int = 4; // 0x1228 MovI
	var_3201_int = var_3187_int; // 0x1229 Mov
	var_3202_object = var_3189_object; // 0x122a Mov
	var_3203_object = var_3190_object; // 0x122b Mov
	var_3204_object = var_3191_object; // 0x122c Mov
	func_655(var_3200_int, var_3201_int, var_3202_object, var_3203_object, var_3204_object); // 0x122d Call
	var_3205_object = Obj(); var_3206_int = 0; // 0x122f PushV
	var_3205_object = var_3192_object; // 0x1230 Mov
	var_3206_int = 2; // 0x1231 MovI
	func_229(var_3206_int); // 0x1232 Call
	
Label_4660:
	var_3207_int = 0; var_3208_bool = 0; // 0x1234 PushV
	var_3207_int = 4; // 0x1235 MovI
	var_3208_bool = 0; // 0x1236 MovB
	func_714(var_3207_int, var_3208_bool); // 0x1237 Call
	var_3209_int = 0; var_3210_int = 0; var_3211_int = 0; // 0x1239 PushV
	var_3209_int = 4; // 0x123a MovI
	var_3210_int = var_3187_int; // 0x123b Mov
	var_3211_int = var_3188_int; // 0x123c Mov
	func_3338(var_3209_int, var_3210_int, var_3211_int); // 0x123d Call
	return 0; // 0x123f Return
}


func_9754()
{
	var_4815_bool = 0; var_4816_int = 0; // 0x261b PushV
	var_4816_int = 192; // 0x261c MovI
	func_10031(var_4815_bool, var_4816_int); // 0x261d Call
	var_4817_bool = 0; var_4818_int = 0; // 0x261f PushV
	var_4818_int = 197; // 0x2620 MovI
	func_10031(var_4817_bool, var_4818_int); // 0x2621 Call
	return 0; // 0x2623 Return
}


func_4126()
{
	var_61_string = "dt_house1_union2_05l"; // 0x101f PushS
	add(var_61_string); // 0x1020 ObjFunc
	var_62_string = "dt_house1_union2_05r"; // 0x1022 PushS
	add(var_62_string); // 0x1023 ObjFunc
	var_63_string = "dt_house2_04"; // 0x1025 PushS
	add(var_63_string); // 0x1026 ObjFunc
	var_64_string = "dt_house2_05"; // 0x1028 PushS
	add(var_64_string); // 0x1029 ObjFunc
	var_65_string = "dt_house2_02"; // 0x102b PushS
	add(var_65_string); // 0x102c ObjFunc
	var_66_string = "dt_house2_01"; // 0x102e PushS
	add(var_66_string); // 0x102f ObjFunc
	var_67_string = "dt_house3_10_i2"; // 0x1031 PushS
	add(var_67_string); // 0x1032 ObjFunc
	var_68_string = "dt_house3_10"; // 0x1034 PushS
	add(var_68_string); // 0x1035 ObjFunc
	var_69_string = "dt_house3_11_i2"; // 0x1037 PushS
	add(var_69_string); // 0x1038 ObjFunc
	var_70_string = "dt_house3_11"; // 0x103a PushS
	add(var_70_string); // 0x103b ObjFunc
	var_71_string = "dt_house3_12_i2"; // 0x103d PushS
	add(var_71_string); // 0x103e ObjFunc
	var_72_string = "dt_house3_12"; // 0x1040 PushS
	add(var_72_string); // 0x1041 ObjFunc
	var_73_string = "dt_house_1_06"; // 0x1043 PushS
	add(var_73_string); // 0x1044 ObjFunc
	var_74_string = "dt_house3_07_i2"; // 0x1046 PushS
	add(var_74_string); // 0x1047 ObjFunc
	var_75_string = "dt_house3_07"; // 0x1049 PushS
	add(var_75_string); // 0x104a ObjFunc
	var_76_string = "house5_21"; // 0x104c PushS
	add(var_76_string); // 0x104d ObjFunc
	var_77_string = "house1_se_02l"; // 0x104f PushS
	add(var_77_string); // 0x1050 ObjFunc
	var_78_string = "house1_se_02r"; // 0x1052 PushS
	add(var_78_string); // 0x1053 ObjFunc
	var_79_string = "dt_house3_01_i2"; // 0x1055 PushS
	add(var_79_string); // 0x1056 ObjFunc
	var_80_string = "dt_house3_02_i2"; // 0x1058 PushS
	add(var_80_string); // 0x1059 ObjFunc
	var_81_string = "dt_house3_02"; // 0x105b PushS
	add(var_81_string); // 0x105c ObjFunc
	var_82_string = "dt_house3_03_i2"; // 0x105e PushS
	add(var_82_string); // 0x105f ObjFunc
	var_83_string = "dt_house3_03"; // 0x1061 PushS
	add(var_83_string); // 0x1062 ObjFunc
	return 0; // 0x1064 Return
}


func_8222(var_3889_int)
{
	var_3890_int = 0; var_3891_int = 0; // 0x201e PushV
	var_3892_int = 1160; // 0x201f PushI
	var_3893_int = 1159; // 0x2020 PushI
	AddMessage(var_3892_int, var_3893_int, var_3891_int); // 0x2021 Func
	var_3894_string = "player_mail"; // 0x2023 PushS
	var_3895_int = 1; // 0x2024 PushI
	SetVariable(var_3894_string, var_3895_int); // 0x2025 Func
	var_3889_int = var_3891_int; // 0x2027 Mov
	return 2; // 0x2028 Return
}


func_2592(var_1513_int, var_1514_int, var_1515_int)
{
	var_1516_int = 0; var_1517_int = 0; var_1518_int = 0; var_1519_int = 0; // 0xa20 PushV
	var_1520_bool = 0; // 0xa21 PushV
	var_1520_bool = 0; // 0xa22 MovB
	var_1521_int = 8; // 0xa23 PushI
	var_1522_bool = var_1515_int > var_1521_int; // 0xa24 GT
	if(var_1522_bool == 0) goto Label_2602; // 0xa25 JumpB
	var_1523_int = 21; // 0xa26 PushI
	var_1524_bool = var_1515_int < var_1523_int; // 0xa27 LT
	if(var_1524_bool == 0) goto Label_2602; // 0xa28 JumpB
	var_1520_bool = 1; // 0xa29 MovB
	
Label_2602:
	if(var_1520_bool == 0) goto Label_2675; // 0xa2a JumpB
	var_1525_int = 0; var_1526_string = ""; var_1527_string = ""; var_1528_int = 0; // 0xa2b PushV
	var_1525_int = var_1513_int; // 0xa2c Mov
	var_1526_string = "pers_boy"; // 0xa2d MovS
	var_1527_string = "boy_d.xml"; // 0xa2e MovS
	var_1528_int = 1; // 0xa2f MovI
	func_438(var_1525_int, var_1526_string, var_1527_string, var_1528_int); // 0xa30 Call
	var_1529_int = 0; var_1530_string = ""; var_1531_string = ""; var_1532_int = 0; // 0xa32 PushV
	var_1529_int = var_1513_int; // 0xa33 Mov
	var_1530_string = "pers_alkash"; // 0xa34 MovS
	var_1531_string = "alkash_d.xml"; // 0xa35 MovS
	var_1532_int = 1; // 0xa36 MovI
	func_438(var_1529_int, var_1530_string, var_1531_string, var_1532_int); // 0xa37 Call
	var_1533_int = 0; var_1534_string = ""; var_1535_string = ""; var_1536_int = 0; // 0xa39 PushV
	var_1533_int = var_1513_int; // 0xa3a Mov
	var_1534_string = "pers_girl"; // 0xa3b MovS
	var_1535_string = "girl_d.xml"; // 0xa3c MovS
	var_1536_int = 1; // 0xa3d MovI
	func_438(var_1533_int, var_1534_string, var_1535_string, var_1536_int); // 0xa3e Call
	var_1537_int = 0; var_1538_string = ""; var_1539_string = ""; var_1540_int = 0; // 0xa40 PushV
	var_1537_int = var_1513_int; // 0xa41 Mov
	var_1538_string = "pers_worker"; // 0xa42 MovS
	var_1539_string = "worker_d.xml"; // 0xa43 MovS
	var_1540_int = 1; // 0xa44 MovI
	func_438(var_1537_int, var_1538_string, var_1539_string, var_1540_int); // 0xa45 Call
	var_1541_int = 0; var_1542_string = ""; var_1543_string = ""; var_1544_int = 0; // 0xa47 PushV
	var_1541_int = var_1513_int; // 0xa48 Mov
	var_1542_string = "pers_worker"; // 0xa49 MovS
	var_1543_string = "worker2_d.xml"; // 0xa4a MovS
	var_1544_int = 1; // 0xa4b MovI
	func_438(var_1541_int, var_1542_string, var_1543_string, var_1544_int); // 0xa4c Call
	var_1545_int = 0; var_1546_string = ""; var_1547_string = ""; var_1548_int = 0; // 0xa4e PushV
	var_1545_int = var_1513_int; // 0xa4f Mov
	var_1546_string = "pers_vaxxabit"; // 0xa50 MovS
	var_1547_string = "vaxxabit_d.xml"; // 0xa51 MovS
	var_1548_int = 1; // 0xa52 MovI
	func_438(var_1545_int, var_1546_string, var_1547_string, var_1548_int); // 0xa53 Call
	var_1549_int = 0; var_1550_string = ""; var_1551_string = ""; var_1552_int = 0; // 0xa55 PushV
	var_1549_int = var_1513_int; // 0xa56 Mov
	var_1550_string = "pers_vaxxabitka"; // 0xa57 MovS
	var_1551_string = "vaxxabitka_d.xml"; // 0xa58 MovS
	var_1552_int = 1; // 0xa59 MovI
	func_438(var_1549_int, var_1550_string, var_1551_string, var_1552_int); // 0xa5a Call
	var_1553_int = 0; var_1554_string = ""; var_1555_string = ""; var_1556_int = 0; // 0xa5c PushV
	var_1553_int = var_1513_int; // 0xa5d Mov
	var_1554_string = "fog"; // 0xa5e MovS
	var_1555_string = "fog.xml"; // 0xa5f MovS
	var_1556_int = 6; // 0xa60 MovI
	func_464(var_1553_int, var_1554_string, var_1555_string, var_1556_int); // 0xa61 Call
	var_1561_int = 1; // 0xa63 PushI
	var_1562_float = 0; var_1563_int = 0; // 0xa64 PushV
	var_1563_int = var_1514_int; // 0xa65 Mov
	func_1022(var_1562_float, var_1563_int); // 0xa66 Call
	var_1518_int = var_1561_int * var_1562_float; // 0xa68 Mult2
	var_1608_int = var_1518_int; // 0xa69 Push
	if(var_1608_int == 0) goto Label_2674; // 0xa6a JumpB
	var_1609_int = 0; var_1610_string = ""; var_1611_string = ""; var_1612_int = 0; // 0xa6b PushV
	var_1609_int = var_1513_int; // 0xa6c Mov
	var_1610_string = "pers_bomber"; // 0xa6d MovS
	var_1611_string = "bomber.xml"; // 0xa6e MovS
	var_1612_int = var_1518_int; // 0xa6f Mov
	func_438(var_1609_int, var_1610_string, var_1611_string, var_1612_int); // 0xa70 Call
	
Label_2674:
	goto Label_2732; // 0xa72 Jump
	
Label_2732:
	var_1613_int = 0; var_1614_string = ""; var_1615_string = ""; var_1616_int = 0; var_1617_int = 0; var_1618_int = 0; // 0xaac PushV
	var_1613_int = var_1513_int; // 0xaad Mov
	var_1614_string = "pers_worker"; // 0xaae MovS
	var_1615_string = "agony1.xml"; // 0xaaf MovS
	var_1616_int = 2; // 0xab0 MovI
	var_1617_int = 4; // 0xab1 MovI
	var_1618_int = 4; // 0xab2 MovI
	func_451(var_1613_int, var_1614_string, var_1615_string, var_1616_int, var_1617_int, var_1618_int); // 0xab3 Call
	var_1623_int = 0; var_1624_string = ""; var_1625_string = ""; var_1626_int = 0; var_1627_int = 0; var_1628_int = 0; // 0xab5 PushV
	var_1623_int = var_1513_int; // 0xab6 Mov
	var_1624_string = "pers_unosha"; // 0xab7 MovS
	var_1625_string = "agony1.xml"; // 0xab8 MovS
	var_1626_int = 2; // 0xab9 MovI
	var_1627_int = 4; // 0xaba MovI
	var_1628_int = 4; // 0xabb MovI
	func_451(var_1623_int, var_1624_string, var_1625_string, var_1626_int, var_1627_int, var_1628_int); // 0xabc Call
	var_1629_int = 0; var_1630_string = ""; var_1631_string = ""; var_1632_int = 0; var_1633_int = 0; var_1634_int = 0; // 0xabe PushV
	var_1629_int = var_1513_int; // 0xabf Mov
	var_1630_string = "pers_woman"; // 0xac0 MovS
	var_1631_string = "agony1.xml"; // 0xac1 MovS
	var_1632_int = 2; // 0xac2 MovI
	var_1633_int = 4; // 0xac3 MovI
	var_1634_int = 4; // 0xac4 MovI
	func_451(var_1629_int, var_1630_string, var_1631_string, var_1632_int, var_1633_int, var_1634_int); // 0xac5 Call
	var_1635_int = 0; var_1636_string = ""; var_1637_string = ""; var_1638_int = 0; var_1639_int = 0; var_1640_int = 0; // 0xac7 PushV
	var_1635_int = var_1513_int; // 0xac8 Mov
	var_1636_string = "pers_vaxxabitka"; // 0xac9 MovS
	var_1637_string = "agony1.xml"; // 0xaca MovS
	var_1638_int = 2; // 0xacb MovI
	var_1639_int = 4; // 0xacc MovI
	var_1640_int = 4; // 0xacd MovI
	func_451(var_1635_int, var_1636_string, var_1637_string, var_1638_int, var_1639_int, var_1640_int); // 0xace Call
	var_1641_int = 0; var_1642_string = ""; var_1643_string = ""; var_1644_int = 0; var_1645_int = 0; var_1646_int = 0; // 0xad0 PushV
	var_1641_int = var_1513_int; // 0xad1 Mov
	var_1642_string = "pers_wasted_girl"; // 0xad2 MovS
	var_1643_string = "agony1.xml"; // 0xad3 MovS
	var_1644_int = 2; // 0xad4 MovI
	var_1645_int = 4; // 0xad5 MovI
	var_1646_int = 4; // 0xad6 MovI
	func_451(var_1641_int, var_1642_string, var_1643_string, var_1644_int, var_1645_int, var_1646_int); // 0xad7 Call
	return 4; // 0xad9 Return
	
Label_2675:
	var_1647_int = 0; var_1648_string = ""; var_1649_string = ""; var_1650_int = 0; // 0xa73 PushV
	var_1647_int = var_1513_int; // 0xa74 Mov
	var_1648_string = "pers_boy"; // 0xa75 MovS
	var_1649_string = "boy_d.xml"; // 0xa76 MovS
	var_1650_int = 1; // 0xa77 MovI
	func_438(var_1647_int, var_1648_string, var_1649_string, var_1650_int); // 0xa78 Call
	var_1651_int = 0; var_1652_string = ""; var_1653_string = ""; var_1654_int = 0; // 0xa7a PushV
	var_1651_int = var_1513_int; // 0xa7b Mov
	var_1652_string = "pers_alkash"; // 0xa7c MovS
	var_1653_string = "alkash_d.xml"; // 0xa7d MovS
	var_1654_int = 1; // 0xa7e MovI
	func_438(var_1651_int, var_1652_string, var_1653_string, var_1654_int); // 0xa7f Call
	var_1655_int = 0; var_1656_string = ""; var_1657_string = ""; var_1658_int = 0; // 0xa81 PushV
	var_1655_int = var_1513_int; // 0xa82 Mov
	var_1656_string = "pers_girl"; // 0xa83 MovS
	var_1657_string = "girl_d.xml"; // 0xa84 MovS
	var_1658_int = 1; // 0xa85 MovI
	func_438(var_1655_int, var_1656_string, var_1657_string, var_1658_int); // 0xa86 Call
	var_1659_int = 0; var_1660_string = ""; var_1661_string = ""; var_1662_int = 0; // 0xa88 PushV
	var_1659_int = var_1513_int; // 0xa89 Mov
	var_1660_string = "pers_vaxxabit"; // 0xa8a MovS
	var_1661_string = "vaxxabit_d.xml"; // 0xa8b MovS
	var_1662_int = 1; // 0xa8c MovI
	func_438(var_1659_int, var_1660_string, var_1661_string, var_1662_int); // 0xa8d Call
	var_1663_int = 0; var_1664_string = ""; var_1665_string = ""; var_1666_int = 0; // 0xa8f PushV
	var_1663_int = var_1513_int; // 0xa90 Mov
	var_1664_string = "pers_vaxxabitka"; // 0xa91 MovS
	var_1665_string = "vaxxabitka_d.xml"; // 0xa92 MovS
	var_1666_int = 1; // 0xa93 MovI
	func_438(var_1663_int, var_1664_string, var_1665_string, var_1666_int); // 0xa94 Call
	var_1667_int = 0; var_1668_string = ""; var_1669_string = ""; var_1670_int = 0; // 0xa96 PushV
	var_1667_int = var_1513_int; // 0xa97 Mov
	var_1668_string = "fog"; // 0xa98 MovS
	var_1669_string = "fog.xml"; // 0xa99 MovS
	var_1670_int = 6; // 0xa9a MovI
	func_464(var_1667_int, var_1668_string, var_1669_string, var_1670_int); // 0xa9b Call
	var_1671_int = 2; // 0xa9d PushI
	var_1672_float = 0; var_1673_int = 0; // 0xa9e PushV
	var_1673_int = var_1514_int; // 0xa9f Mov
	func_1022(var_1672_float, var_1673_int); // 0xaa0 Call
	var_1519_int = var_1671_int * var_1672_float; // 0xaa2 Mult2
	var_1674_int = var_1519_int; // 0xaa3 Push
	if(var_1674_int == 0) goto Label_2732; // 0xaa4 JumpB
	var_1675_int = 0; var_1676_string = ""; var_1677_string = ""; var_1678_int = 0; // 0xaa5 PushV
	var_1675_int = var_1513_int; // 0xaa6 Mov
	var_1676_string = "pers_bomber"; // 0xaa7 MovS
	var_1677_string = "bomber.xml"; // 0xaa8 MovS
	var_1678_int = var_1519_int; // 0xaa9 Mov
	func_438(var_1675_int, var_1676_string, var_1677_string, var_1678_int); // 0xaaa Call
}


func_6688()
{
	var_3869_object = Obj(); var_3870_bool = 0; var_3871_cvector = CVector(0,0,0); var_3872_cvector = CVector(0,0,0); var_3873_int = 0; var_3874_object = Obj(); var_3875_object = Obj(); var_3876_object = Obj(); var_3877_bool = 0; var_3878_cvector = CVector(0,0,0); var_3879_cvector = CVector(0,0,0); var_3880_int = 0; var_3881_object = Obj(); var_3882_object = Obj(); // 0x1a20 PushV
	var_3883_string = "Setting arena..."; // 0x1a21 PushS
	Trace(var_3883_string); // 0x1a22 Func
	var_3884_object = GlobalVars[15]; // 0x1a24 PushGE
	var_3885_bool = var_3884_object == 0; // 0x1a25 NullEq
	if(var_3885_bool == 0) goto Label_6753; // 0x1a26 JumpB
	GetMainOutdoorScene(var_3876_object); // 0x1a27 Func
	var_3886_string = "pt_arena_manager"; // 0x1a29 PushS
	GetLocator(var_3886_string, var_3877_bool, var_3878_cvector, var_3879_cvector); // 0x1a2a ObjFunc
	var_3887_bool = var_3877_bool == 0; // 0x1a2c Not
	if(var_3887_bool == 0) goto Label_6706; // 0x1a2d JumpB
	var_3888_string = "Locator doesn't exist for arena manager"; // 0x1a2e PushS
	Trace(var_3888_string); // 0x1a2f Func
	goto Label_6715; // 0x1a31 Jump
	
Label_6715:
	var_3880_int = 0; // 0x1a3b MovI
	
Label_6716:
	var_3889_int = 6; // 0x1a3c PushI
	var_3890_bool = var_3880_int < var_3889_int; // 0x1a3d LT
	if(var_3890_bool == 0) goto Label_6745; // 0x1a3e JumpB
	var_3891_string = "pt_arena_torch"; // 0x1a3f PushS
	var_3892_int = 1; // 0x1a40 PushI
	var_3893_int = var_3880_int + var_3892_int; // 0x1a41 Add
	var_3894_int = var_3891_string + var_3893_int; // 0x1a42 Add
	GetLocator(var_3894_int, var_3877_bool, var_3878_cvector, var_3879_cvector); // 0x1a43 ObjFunc
	var_3895_bool = var_3877_bool == 0; // 0x1a45 Not
	if(var_3895_bool == 0) goto Label_6734; // 0x1a46 JumpB
	var_3896_string = "Locator doesn't exist for arena torch "; // 0x1a47 PushS
	var_3897_int = 1; // 0x1a48 PushI
	var_3898_int = var_3880_int + var_3897_int; // 0x1a49 Add
	var_3899_int = var_3896_string + var_3898_int; // 0x1a4a Add
	Trace(var_3899_int); // 0x1a4b Func
	goto Label_6742; // 0x1a4d Jump
	
Label_6742:
	var_3900_int = 1; // 0x1a56 PushI
	var_3880_int = var_3880_int + var_3900_int; // 0x1a57 Add2
	goto Label_6716; // 0x1a58 Jump
	
Label_6734:
	var_3901_string = "scripted"; // 0x1a4e PushS
	var_3902_string = "torch.xml"; // 0x1a4f PushS
	AddActorByType(var_3881_object, var_3901_string, var_3876_object, var_3878_cvector, var_3879_cvector, var_3902_string); // 0x1a50 Func
	var_3903_object = GlobalVars[16]; // 0x1a52 PushGE
	add(var_3881_object); // 0x1a53 ObjFunc
	var_3881_object = 0; // 0x1a55 SetNull
	
Label_6745:
	var_3904_string = "arena_light"; // 0x1a59 PushS
	FindActor(var_3882_object, var_3904_string); // 0x1a5a Func
	var_3905_bool = 1; // 0x1a5c PushB
	Switch(var_3905_bool); // 0x1a5d ObjFunc
	var_3882_object = 0; // 0x1a5f SetNull
	var_3876_object = 0; // 0x1a60 SetNull
	
Label_6753:
	return 14; // 0x1a61 Return
	
Label_6706:
	var_3906_object = GlobalVars[15]; // 0x1a32 PushGE
	var_3907_object = Obj(); var_3908_object = Obj(); var_3909_cvector = CVector(0,0,0); var_3910_cvector = CVector(0,0,0); // 0x1a33 PushV
	var_3908_object = var_3876_object; // 0x1a34 Mov
	var_3909_cvector = var_3878_cvector; // 0x1a35 Mov
	var_3910_cvector = var_3879_cvector; // 0x1a36 Mov
	func_11636(var_3908_object, var_3909_cvector, var_3910_cvector); // 0x1a37 Call
	var_3906_object = var_3907_object; // 0x1a38 Mov
	GlobalVars[15] = var_3906_object; // 0x1a3a PopGE
}


func_9764()
{
	var_4555_bool = 0; var_4556_string = ""; var_4557_string = ""; // 0x2625 PushV
	var_4556_string = "quest_d12_01"; // 0x2626 MovS
	var_4557_string = "init_mnogogrannik"; // 0x2627 MovS
	func_153(var_4555_bool, var_4556_string, var_4557_string); // 0x2628 Call
	return 0; // 0x262a Return
}


func_7208()
{
	var_320_float = 0; var_321_int = 0; var_322_int = 0; var_323_float = 0; var_324_int = 0; var_325_object = Obj(); var_326_float = 0; var_327_int = 0; var_328_int = 0; var_329_float = 0; var_330_int = 0; var_331_object = Obj(); // 0x1c28 PushV
	GetGameTime(var_326_float); // 0x1c29 Func
	var_327_int = 1; // 0x1c2b MovI
	
Label_7212:
	var_332_int = 12; // 0x1c2c PushI
	var_333_bool = var_327_int < var_332_int; // 0x1c2d LT
	if(var_333_bool == 0) goto Label_7224; // 0x1c2e JumpB
	var_334_int = 16384; // 0x1c2f PushI
	var_335_int = var_334_int + var_327_int; // 0x1c30 Add
	var_336_int = 24; // 0x1c31 PushI
	var_337_float = var_336_int * var_327_int; // 0x1c32 Mult
	SetTimeEvent(var_335_int, var_337_float); // 0x1c33 Func
	var_338_int = 1; // 0x1c35 PushI
	var_327_int = var_327_int + var_338_int; // 0x1c36 Add2
	goto Label_7212; // 0x1c37 Jump
	
Label_7224:
	var_328_int = 0; // 0x1c38 MovI
	
Label_7225:
	var_339_int = 288; // 0x1c39 PushI
	var_340_bool = var_328_int < var_339_int; // 0x1c3a LT
	if(var_340_bool == 0) goto Label_7239; // 0x1c3b JumpB
	var_329_float = var_328_int; // 0x1c3c Mov
	var_341_bool = var_329_float < var_326_float; // 0x1c3d LT
	if(var_341_bool == 0) goto Label_7232; // 0x1c3e JumpB
	goto Label_7236; // 0x1c3f Jump
	
Label_7236:
	var_342_int = 1; // 0x1c44 PushI
	var_328_int = var_328_int + var_342_int; // 0x1c45 Add2
	goto Label_7225; // 0x1c46 Jump
	
Label_7232:
	var_343_int = 32768; // 0x1c40 PushI
	var_344_int = var_343_int + var_328_int; // 0x1c41 Add
	SetTimeEvent(var_344_int, var_329_float); // 0x1c42 Func
	
Label_7239:
	var_330_int = 0; // 0x1c47 MovI
	
Label_7240:
	var_345_int = 16; // 0x1c48 PushI
	var_346_bool = var_330_int < var_345_int; // 0x1c49 LT
	if(var_346_bool == 0) goto Label_7258; // 0x1c4a JumpB
	var_347_string = ""; var_348_int = 0; // 0x1c4b PushV
	var_348_int = var_330_int; // 0x1c4c Mov
	func_223(var_347_string, var_348_int); // 0x1c4d Call
	var_352_int = 0; // 0x1c4f PushI
	SetVariable(var_347_string, var_352_int); // 0x1c50 Func
	var_353_int = 0; var_354_bool = 0; // 0x1c52 PushV
	var_353_int = var_330_int; // 0x1c53 Mov
	var_354_bool = 0; // 0x1c54 MovB
	func_731(var_353_int, var_354_bool); // 0x1c55 Call
	var_364_int = 1; // 0x1c57 PushI
	var_330_int = var_330_int + var_364_int; // 0x1c58 Add2
	goto Label_7240; // 0x1c59 Jump
	
Label_7258:
	var_365_int = 0; var_366_int = 0; // 0x1c5a PushV
	var_365_int = 0; // 0x1c5b MovI
	var_367_int = 24; // 0x1c5c PushI
	var_366_int = var_326_float % var_367_int; // 0x1c5d Mod2
	func_7280(var_365_int, var_366_int); // 0x1c5e Call
	GetMainOutdoorScene(var_331_object); // 0x1c60 Func
	var_3770_int = 0; // 0x1c62 PushI
	var_3771_bool = 0; // 0x1c63 PushV
	var_3771_bool = 1; // 0x1c64 MovB
	var_3772_int = 10; // 0x1c65 PushI
	var_3773_bool = var_326_float < var_3772_int; // 0x1c66 LT
	if(var_3773_bool == 0) goto Label_7276; // 0x1c67 JumpB
	var_3774_int = 18; // 0x1c68 PushI
	var_3775_bool = var_326_float >= var_3774_int; // 0x1c69 GE
	if(var_3775_bool == 0) goto Label_7276; // 0x1c6a JumpB
	var_3771_bool = 0; // 0x1c6b MovB
	
Label_7276:
	SwitchLights(var_3770_int, var_3771_bool); // 0x1c6c ObjFunc
	return 12; // 0x1c6e Return
}


func_8233(var_4836_int)
{
	var_4837_int = 0; var_4838_int = 0; // 0x2029 PushV
	var_4839_int = 1158; // 0x202a PushI
	var_4840_int = 1157; // 0x202b PushI
	AddMessage(var_4839_int, var_4840_int, var_4838_int); // 0x202c Func
	var_4841_string = "player_mail"; // 0x202e PushS
	var_4842_int = 1; // 0x202f PushI
	SetVariable(var_4841_string, var_4842_int); // 0x2030 Func
	var_4836_int = var_4838_int; // 0x2032 Mov
	return 2; // 0x2033 Return
}


func_6186(var_1237_int, var_1238_int, var_1239_object, var_1240_object, var_1241_object, var_1242_object)
{
	var_1243_int = 0; // 0x182b PushI
	var_1244_bool = var_1238_int == var_1243_int; // 0x182c Eq
	if(var_1244_bool == 0) goto Label_6214; // 0x182d JumpB
	var_1245_int = 0; var_1246_bool = 0; // 0x182e PushV
	var_1245_int = 14; // 0x182f MovI
	var_1246_bool = 0; // 0x1830 MovB
	func_731(var_1245_int, var_1246_bool); // 0x1831 Call
	var_1247_int = 0; var_1248_bool = 0; var_1249_int = 0; // 0x1833 PushV
	var_1247_int = 14; // 0x1834 MovI
	var_1248_bool = 0; // 0x1835 MovB
	var_1249_int = 1; // 0x1836 MovI
	func_748(var_1247_int, var_1248_bool, var_1249_int); // 0x1837 Call
	var_1250_int = 0; var_1251_int = 0; var_1252_object = Obj(); var_1253_object = Obj(); var_1254_object = Obj(); // 0x1839 PushV
	var_1250_int = 14; // 0x183a MovI
	var_1251_int = var_1237_int; // 0x183b Mov
	var_1252_object = var_1239_object; // 0x183c Mov
	var_1253_object = var_1240_object; // 0x183d Mov
	var_1254_object = var_1241_object; // 0x183e Mov
	func_557(var_1251_int, var_1252_object, var_1253_object, var_1254_object); // 0x183f Call
	var_1255_object = Obj(); var_1256_int = 0; // 0x1841 PushV
	var_1255_object = var_1242_object; // 0x1842 Mov
	var_1256_int = 0; // 0x1843 MovI
	func_229(var_1256_int); // 0x1844 Call
	
Label_6214:
	var_1257_int = 0; var_1258_int = 0; // 0x1846 PushV
	var_1257_int = 14; // 0x1847 MovI
	var_1258_int = var_1238_int; // 0x1848 Mov
	func_909(var_1257_int, var_1258_int); // 0x1849 Call
	var_1268_int = 0; var_1269_int = 0; var_1270_int = 0; // 0x184b PushV
	var_1268_int = 14; // 0x184c MovI
	var_1269_int = var_1237_int; // 0x184d Mov
	var_1270_int = var_1238_int; // 0x184e Mov
	func_1122(var_1268_int, var_1269_int, var_1270_int); // 0x184f Call
	return 0; // 0x1851 Return
}


func_9771()
{
	var_4575_bool = 0; var_4576_string = ""; var_4577_string = ""; // 0x262c PushV
	var_4576_string = "quest_d12_01"; // 0x262d MovS
	var_4577_string = "init_theater"; // 0x262e MovS
	func_153(var_4575_bool, var_4576_string, var_4577_string); // 0x262f Call
	return 0; // 0x2631 Return
}


func_44()
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_object = Obj(); var_8_object = Obj(); var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x2c PushV
	var_12_string = "player"; // 0x2d PushS
	FindActor(var_7_object, var_12_string); // 0x2e Func
	var_13_string = "cot_eva"; // 0x30 PushS
	GetSceneByName(var_8_object, var_13_string); // 0x31 Func
	var_14_bool = var_8_object == 0; // 0x33 Not
	if(var_14_bool == 0) goto Label_57; // 0x34 JumpB
	var_15_string = "Starting scene not found"; // 0x35 PushS
	Trace(var_15_string); // 0x36 Func
	return 10; // 0x38 Return
	
Label_57:
	var_16_string = "pt_Danko"; // 0x39 PushS
	GetLocator(var_16_string, var_9_bool, var_10_cvector, var_11_cvector); // 0x3a ObjFunc
	var_17_bool = var_9_bool; // 0x3c Push
	if(var_17_bool == 0) goto Label_64; // 0x3d JumpB
	Teleport(var_7_object, var_8_object, var_10_cvector, var_11_cvector); // 0x3e Func
	
Label_64:
	return 10; // 0x40 Return
}


func_557(var_457_int, var_459_object, var_460_object, var_461_object)
{
	var_462_int = 0; var_463_bool = 0; // 0x22e PushV
	var_462_int = var_457_int; // 0x22f Mov
	var_463_bool = 1; // 0x230 MovB
	func_477(var_462_int, var_463_bool); // 0x231 Call
	var_490_object = Obj(); // 0x233 PushV
	var_490_object = var_459_object; // 0x234 Mov
	func_189(); // 0x235 Call
	var_500_object = Obj(); // 0x237 PushV
	var_500_object = var_460_object; // 0x238 Mov
	func_189(); // 0x239 Call
	var_501_object = Obj(); // 0x23b PushV
	var_501_object = var_461_object; // 0x23c Mov
	func_189(); // 0x23d Call
	return 0; // 0x23f Return
}


func_9778()
{
	var_4374_string = ""; var_4375_bool = 0; // 0x2633 PushV
	var_4374_string = "sobor@door1"; // 0x2634 MovS
	var_4375_bool = 1; // 0x2635 MovB
	func_137(var_4374_string, var_4375_bool); // 0x2636 Call
	return 0; // 0x2638 Return
}


func_8244(var_4352_int)
{
	var_4353_int = 0; var_4354_int = 0; // 0x2034 PushV
	var_4355_int = 1154; // 0x2035 PushI
	var_4356_int = 1153; // 0x2036 PushI
	AddMessage(var_4355_int, var_4356_int, var_4354_int); // 0x2037 Func
	var_4357_string = "player_mail"; // 0x2039 PushS
	var_4358_int = 1; // 0x203a PushI
	SetVariable(var_4357_string, var_4358_int); // 0x203b Func
	var_4352_int = var_4354_int; // 0x203d Mov
	return 2; // 0x203e Return
}


func_5175(var_1075_int, var_1076_int, var_1077_object, var_1078_object, var_1079_object, var_1080_object)
{
	var_1081_int = 0; // 0x1438 PushI
	var_1082_bool = var_1076_int == var_1081_int; // 0x1439 Eq
	if(var_1082_bool == 0) goto Label_5203; // 0x143a JumpB
	var_1083_int = 0; var_1084_bool = 0; // 0x143b PushV
	var_1083_int = 8; // 0x143c MovI
	var_1084_bool = 0; // 0x143d MovB
	func_731(var_1083_int, var_1084_bool); // 0x143e Call
	var_1085_int = 0; var_1086_bool = 0; var_1087_int = 0; // 0x1440 PushV
	var_1085_int = 8; // 0x1441 MovI
	var_1086_bool = 0; // 0x1442 MovB
	var_1087_int = 1; // 0x1443 MovI
	func_748(var_1085_int, var_1086_bool, var_1087_int); // 0x1444 Call
	var_1088_int = 0; var_1089_int = 0; var_1090_object = Obj(); var_1091_object = Obj(); var_1092_object = Obj(); // 0x1446 PushV
	var_1088_int = 8; // 0x1447 MovI
	var_1089_int = var_1075_int; // 0x1448 Mov
	var_1090_object = var_1077_object; // 0x1449 Mov
	var_1091_object = var_1078_object; // 0x144a Mov
	var_1092_object = var_1079_object; // 0x144b Mov
	func_557(var_1089_int, var_1090_object, var_1091_object, var_1092_object); // 0x144c Call
	var_1093_object = Obj(); var_1094_int = 0; // 0x144e PushV
	var_1093_object = var_1080_object; // 0x144f Mov
	var_1094_int = 0; // 0x1450 MovI
	func_229(var_1094_int); // 0x1451 Call
	
Label_5203:
	var_1095_int = 0; var_1096_int = 0; // 0x1453 PushV
	var_1095_int = 8; // 0x1454 MovI
	var_1096_int = var_1076_int; // 0x1455 Mov
	func_805(var_1095_int, var_1096_int); // 0x1456 Call
	var_1097_int = 0; var_1098_int = 0; var_1099_int = 0; // 0x1458 PushV
	var_1097_int = 8; // 0x1459 MovI
	var_1098_int = var_1075_int; // 0x145a Mov
	var_1099_int = var_1076_int; // 0x145b Mov
	func_1270(var_1097_int, var_1098_int, var_1099_int); // 0x145c Call
	return 0; // 0x145e Return
}


func_9785()
{
	var_4380_bool = 0; var_4381_string = ""; var_4382_string = ""; // 0x263a PushV
	var_4381_string = "quest_d12_01"; // 0x263b MovS
	var_4382_string = "place_birdmask"; // 0x263c MovS
	func_153(var_4380_bool, var_4381_string, var_4382_string); // 0x263d Call
	return 0; // 0x263f Return
}


func_8255(var_3985_int)
{
	var_3986_int = 0; var_3987_int = 0; // 0x203f PushV
	var_3988_int = 1152; // 0x2040 PushI
	var_3989_int = 1151; // 0x2041 PushI
	AddMessage(var_3988_int, var_3989_int, var_3987_int); // 0x2042 Func
	var_3990_string = "player_mail"; // 0x2044 PushS
	var_3991_int = 1; // 0x2045 PushI
	SetVariable(var_3990_string, var_3991_int); // 0x2046 Func
	var_3985_int = var_3987_int; // 0x2048 Mov
	return 2; // 0x2049 Return
}


func_576(var_1419_int, var_1420_int, var_1421_object, var_1422_object, var_1423_object)
{
	var_1424_int = 0; var_1425_bool = 0; // 0x241 PushV
	var_1424_int = var_1419_int; // 0x242 Mov
	var_1425_bool = 0; // 0x243 MovB
	func_477(var_1424_int, var_1425_bool); // 0x244 Call
	var_1426_object = Obj(); // 0x246 PushV
	var_1426_object = var_1421_object; // 0x247 Mov
	func_189(); // 0x248 Call
	var_1427_object = Obj(); // 0x24a PushV
	var_1427_object = var_1422_object; // 0x24b Mov
	func_189(); // 0x24c Call
	var_1428_object = Obj(); // 0x24e PushV
	var_1428_object = var_1423_object; // 0x24f Mov
	func_189(); // 0x250 Call
	var_1429_int = 8; // 0x252 PushI
	var_1430_bool = var_1420_int <= var_1429_int; // 0x253 LE
	if(var_1430_bool == 0) goto Label_620; // 0x254 JumpB
	var_1431_string = ""; var_1432_object = Obj(); var_1433_string = ""; var_1434_string = ""; // 0x255 PushV
	var_1435_string = "pt_blockpost"; // 0x256 PushS
	var_1436_int = 1; // 0x257 PushI
	var_1437_int = var_1419_int + var_1436_int; // 0x258 Add
	var_1438_int = var_1435_string + var_1437_int; // 0x259 Add
	var_1439_string = "_1_"; // 0x25a PushS
	var_1431_string = var_1438_int + var_1439_string; // 0x25b Add2
	var_1432_object = var_1421_object; // 0x25c Mov
	var_1433_string = "pers_patrool"; // 0x25d MovS
	var_1434_string = "patrol_stat.xml"; // 0x25e MovS
	func_511(var_1432_object, var_1433_string, var_1434_string); // 0x25f Call
	var_1457_string = ""; var_1458_object = Obj(); // 0x261 PushV
	var_1459_string = "pt_fog"; // 0x262 PushS
	var_1460_int = 1; // 0x263 PushI
	var_1461_int = var_1419_int + var_1460_int; // 0x264 Add
	var_1462_int = var_1459_string + var_1461_int; // 0x265 Add
	var_1463_string = "_"; // 0x266 PushS
	var_1457_string = var_1462_int + var_1463_string; // 0x267 Add2
	var_1458_object = var_1423_object; // 0x268 Mov
	func_533(var_1458_object); // 0x269 Call
	goto Label_654; // 0x26b Jump
	
Label_654:
	return 0; // 0x28e Return
	
Label_620:
	var_1484_string = ""; var_1485_object = Obj(); var_1486_string = ""; var_1487_string = ""; // 0x26c PushV
	var_1488_string = "pt_blockpost"; // 0x26d PushS
	var_1489_int = 1; // 0x26e PushI
	var_1490_int = var_1419_int + var_1489_int; // 0x26f Add
	var_1491_int = var_1488_string + var_1490_int; // 0x270 Add
	var_1492_string = "_1_"; // 0x271 PushS
	var_1484_string = var_1491_int + var_1492_string; // 0x272 Add2
	var_1485_object = var_1421_object; // 0x273 Mov
	var_1486_string = "pers_soldat"; // 0x274 MovS
	var_1487_string = "soldier.xml"; // 0x275 MovS
	func_511(var_1485_object, var_1486_string, var_1487_string); // 0x276 Call
	var_1493_string = ""; var_1494_object = Obj(); var_1495_string = ""; var_1496_string = ""; // 0x278 PushV
	var_1497_string = "pt_blockpost"; // 0x279 PushS
	var_1498_int = 1; // 0x27a PushI
	var_1499_int = var_1419_int + var_1498_int; // 0x27b Add
	var_1500_int = var_1497_string + var_1499_int; // 0x27c Add
	var_1501_string = "_2_"; // 0x27d PushS
	var_1493_string = var_1500_int + var_1501_string; // 0x27e Add2
	var_1494_object = var_1422_object; // 0x27f Mov
	var_1495_string = "pers_sanitar"; // 0x280 MovS
	var_1496_string = "sanitar_stat.xml"; // 0x281 MovS
	func_511(var_1494_object, var_1495_string, var_1496_string); // 0x282 Call
	var_1502_string = ""; var_1503_object = Obj(); // 0x284 PushV
	var_1504_string = "pt_fog"; // 0x285 PushS
	var_1505_int = 1; // 0x286 PushI
	var_1506_int = var_1419_int + var_1505_int; // 0x287 Add
	var_1507_int = var_1504_string + var_1506_int; // 0x288 Add
	var_1508_string = "_"; // 0x289 PushS
	var_1502_string = var_1507_int + var_1508_string; // 0x28a Add2
	var_1503_object = var_1423_object; // 0x28b Mov
	func_533(var_1503_object); // 0x28c Call
}


func_4672()
{
	var_127_string = "dt_house3_14_i2"; // 0x1241 PushS
	add(var_127_string); // 0x1242 ObjFunc
	var_128_string = "dt_house3_14"; // 0x1244 PushS
	add(var_128_string); // 0x1245 ObjFunc
	var_129_string = "house1_arc_01l"; // 0x1247 PushS
	add(var_129_string); // 0x1248 ObjFunc
	var_130_string = "house1_arc_01r"; // 0x124a PushS
	add(var_130_string); // 0x124b ObjFunc
	var_131_string = "dt_House6_01"; // 0x124d PushS
	add(var_131_string); // 0x124e ObjFunc
	var_132_string = "dt_house_1_09"; // 0x1250 PushS
	add(var_132_string); // 0x1251 ObjFunc
	var_133_string = "house5_24"; // 0x1253 PushS
	add(var_133_string); // 0x1254 ObjFunc
	var_134_string = "dt_House6_03"; // 0x1256 PushS
	add(var_134_string); // 0x1257 ObjFunc
	var_135_string = "dt_House6_04"; // 0x1259 PushS
	add(var_135_string); // 0x125a ObjFunc
	var_136_string = "dt_house_1_08"; // 0x125c PushS
	add(var_136_string); // 0x125d ObjFunc
	var_137_string = "house5_unoin_solidl"; // 0x125f PushS
	add(var_137_string); // 0x1260 ObjFunc
	var_138_string = "house5_unoin_solidr"; // 0x1262 PushS
	add(var_138_string); // 0x1263 ObjFunc
	var_139_string = "dt_house2_12"; // 0x1265 PushS
	add(var_139_string); // 0x1266 ObjFunc
	var_140_string = "dt_house2_11"; // 0x1268 PushS
	add(var_140_string); // 0x1269 ObjFunc
	var_141_string = "dt_house2_13"; // 0x126b PushS
	add(var_141_string); // 0x126c ObjFunc
	var_142_string = "dt_house2_09"; // 0x126e PushS
	add(var_142_string); // 0x126f ObjFunc
	var_143_string = "dt_house2_08"; // 0x1271 PushS
	add(var_143_string); // 0x1272 ObjFunc
	var_144_string = "dt_house2_07"; // 0x1274 PushS
	add(var_144_string); // 0x1275 ObjFunc
	var_145_string = "dt_house2_06"; // 0x1277 PushS
	add(var_145_string); // 0x1278 ObjFunc
	var_146_string = "house5_01"; // 0x127a PushS
	add(var_146_string); // 0x127b ObjFunc
	var_147_string = "house5_15"; // 0x127d PushS
	add(var_147_string); // 0x127e ObjFunc
	var_148_string = "house5_16"; // 0x1280 PushS
	add(var_148_string); // 0x1281 ObjFunc
	var_149_string = "house5_17"; // 0x1283 PushS
	add(var_149_string); // 0x1284 ObjFunc
	var_150_string = "house5_unoin04l"; // 0x1286 PushS
	add(var_150_string); // 0x1287 ObjFunc
	var_151_string = "house5_unoin04r"; // 0x1289 PushS
	add(var_151_string); // 0x128a ObjFunc
	var_152_string = "house5_23"; // 0x128c PushS
	add(var_152_string); // 0x128d ObjFunc
	return 0; // 0x128f Return
}


func_5697(var_1156_int, var_1157_int, var_1158_object, var_1159_object, var_1160_object, var_1161_object)
{
	var_1162_int = 0; // 0x1642 PushI
	var_1163_bool = var_1157_int == var_1162_int; // 0x1643 Eq
	if(var_1163_bool == 0) goto Label_5725; // 0x1644 JumpB
	var_1164_int = 0; var_1165_bool = 0; // 0x1645 PushV
	var_1164_int = 11; // 0x1646 MovI
	var_1165_bool = 0; // 0x1647 MovB
	func_731(var_1164_int, var_1165_bool); // 0x1648 Call
	var_1166_int = 0; var_1167_bool = 0; var_1168_int = 0; // 0x164a PushV
	var_1166_int = 11; // 0x164b MovI
	var_1167_bool = 0; // 0x164c MovB
	var_1168_int = 1; // 0x164d MovI
	func_748(var_1166_int, var_1167_bool, var_1168_int); // 0x164e Call
	var_1169_int = 0; var_1170_int = 0; var_1171_object = Obj(); var_1172_object = Obj(); var_1173_object = Obj(); // 0x1650 PushV
	var_1169_int = 11; // 0x1651 MovI
	var_1170_int = var_1156_int; // 0x1652 Mov
	var_1171_object = var_1158_object; // 0x1653 Mov
	var_1172_object = var_1159_object; // 0x1654 Mov
	var_1173_object = var_1160_object; // 0x1655 Mov
	func_557(var_1170_int, var_1171_object, var_1172_object, var_1173_object); // 0x1656 Call
	var_1174_object = Obj(); var_1175_int = 0; // 0x1658 PushV
	var_1174_object = var_1161_object; // 0x1659 Mov
	var_1175_int = 0; // 0x165a MovI
	func_229(var_1175_int); // 0x165b Call
	
Label_5725:
	var_1176_int = 0; var_1177_int = 0; // 0x165d PushV
	var_1176_int = 11; // 0x165e MovI
	var_1177_int = var_1157_int; // 0x165f Mov
	func_805(var_1176_int, var_1177_int); // 0x1660 Call
	var_1178_int = 0; var_1179_int = 0; var_1180_int = 0; // 0x1662 PushV
	var_1178_int = 11; // 0x1663 MovI
	var_1179_int = var_1156_int; // 0x1664 Mov
	var_1180_int = var_1157_int; // 0x1665 Mov
	func_1270(var_1178_int, var_1179_int, var_1180_int); // 0x1666 Call
	return 0; // 0x1668 Return
}


func_67(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0x43 PushV
	var_76_string = "player"; // 0x44 PushS
	FindActor(var_75_object, var_76_string); // 0x45 Func
	var_73_object = var_75_object; // 0x47 Mov
	return 2; // 0x48 Return
}


func_9792(var_4345_bool)
{
	var_4348_int = 0; var_4349_string = ""; // 0x2641 PushV
	var_4349_string = "d1q01"; // 0x2642 MovS
	func_92(var_4348_int, var_4349_string); // 0x2643 Call
	var_4350_int = 0; // 0x2645 PushI
	var_4351_bool = var_4348_int == var_4350_int; // 0x2646 Eq
	if(var_4351_bool == 0) goto Label_9802; // 0x2647 JumpB
	var_4345_bool = 1; // 0x2648 MovB
	return 0; // 0x2649 Return
	
Label_9802:
	var_4345_bool = 0; // 0x264a MovB
	return 0; // 0x264b Return
}


func_1607(var_555_int, var_557_int)
{
	var_558_bool = 0; // 0x648 PushV
	var_558_bool = 0; // 0x649 MovB
	var_559_int = 8; // 0x64a PushI
	var_560_bool = var_557_int > var_559_int; // 0x64b GT
	if(var_560_bool == 0) goto Label_1617; // 0x64c JumpB
	var_561_int = 21; // 0x64d PushI
	var_562_bool = var_557_int < var_561_int; // 0x64e LT
	if(var_562_bool == 0) goto Label_1617; // 0x64f JumpB
	var_558_bool = 1; // 0x650 MovB
	
Label_1617:
	if(var_558_bool == 0) goto Label_1668; // 0x651 JumpB
	var_563_int = 0; var_564_string = ""; var_565_string = ""; var_566_int = 0; // 0x652 PushV
	var_563_int = var_555_int; // 0x653 Mov
	var_564_string = "pers_boy"; // 0x654 MovS
	var_565_string = "boy.xml"; // 0x655 MovS
	var_566_int = 1; // 0x656 MovI
	func_438(var_563_int, var_564_string, var_565_string, var_566_int); // 0x657 Call
	var_571_int = 0; var_572_string = ""; var_573_string = ""; var_574_int = 0; // 0x659 PushV
	var_571_int = var_555_int; // 0x65a Mov
	var_572_string = "pers_alkash"; // 0x65b MovS
	var_573_string = "alkash.xml"; // 0x65c MovS
	var_574_int = 1; // 0x65d MovI
	func_438(var_571_int, var_572_string, var_573_string, var_574_int); // 0x65e Call
	var_575_int = 0; var_576_string = ""; var_577_string = ""; var_578_int = 0; // 0x660 PushV
	var_575_int = var_555_int; // 0x661 Mov
	var_576_string = "pers_girl"; // 0x662 MovS
	var_577_string = "girl.xml"; // 0x663 MovS
	var_578_int = 1; // 0x664 MovI
	func_438(var_575_int, var_576_string, var_577_string, var_578_int); // 0x665 Call
	var_579_int = 0; var_580_string = ""; var_581_string = ""; var_582_int = 0; // 0x667 PushV
	var_579_int = var_555_int; // 0x668 Mov
	var_580_string = "pers_girl"; // 0x669 MovS
	var_581_string = "girl2.xml"; // 0x66a MovS
	var_582_int = 1; // 0x66b MovI
	func_438(var_579_int, var_580_string, var_581_string, var_582_int); // 0x66c Call
	var_583_int = 0; var_584_string = ""; var_585_string = ""; var_586_int = 0; // 0x66e PushV
	var_583_int = var_555_int; // 0x66f Mov
	var_584_string = "pers_worker"; // 0x670 MovS
	var_585_string = "worker.xml"; // 0x671 MovS
	var_586_int = 2; // 0x672 MovI
	func_438(var_583_int, var_584_string, var_585_string, var_586_int); // 0x673 Call
	var_587_int = 0; var_588_string = ""; var_589_string = ""; var_590_int = 0; // 0x675 PushV
	var_587_int = var_555_int; // 0x676 Mov
	var_588_string = "pers_worker"; // 0x677 MovS
	var_589_string = "worker2.xml"; // 0x678 MovS
	var_590_int = 2; // 0x679 MovI
	func_438(var_587_int, var_588_string, var_589_string, var_590_int); // 0x67a Call
	var_591_int = 0; var_592_string = ""; var_593_string = ""; var_594_int = 0; // 0x67c PushV
	var_591_int = var_555_int; // 0x67d Mov
	var_592_string = "pers_dog"; // 0x67e MovS
	var_593_string = "dog.xml"; // 0x67f MovS
	var_594_int = 1; // 0x680 MovI
	func_438(var_591_int, var_592_string, var_593_string, var_594_int); // 0x681 Call
	goto Label_1696; // 0x683 Jump
	
Label_1696:
	return 0; // 0x6a0 Return
	
Label_1668:
	var_595_int = 0; var_596_string = ""; var_597_string = ""; var_598_int = 0; // 0x684 PushV
	var_595_int = var_555_int; // 0x685 Mov
	var_596_string = "pers_alkash"; // 0x686 MovS
	var_597_string = "alkash.xml"; // 0x687 MovS
	var_598_int = 2; // 0x688 MovI
	func_438(var_595_int, var_596_string, var_597_string, var_598_int); // 0x689 Call
	var_599_int = 0; var_600_string = ""; var_601_string = ""; var_602_int = 0; // 0x68b PushV
	var_599_int = var_555_int; // 0x68c Mov
	var_600_string = "pers_worker"; // 0x68d MovS
	var_601_string = "worker.xml"; // 0x68e MovS
	var_602_int = 1; // 0x68f MovI
	func_438(var_599_int, var_600_string, var_601_string, var_602_int); // 0x690 Call
	var_603_int = 0; var_604_string = ""; var_605_string = ""; var_606_int = 0; // 0x692 PushV
	var_603_int = var_555_int; // 0x693 Mov
	var_604_string = "pers_worker"; // 0x694 MovS
	var_605_string = "worker2.xml"; // 0x695 MovS
	var_606_int = 1; // 0x696 MovI
	func_438(var_603_int, var_604_string, var_605_string, var_606_int); // 0x697 Call
	var_607_int = 0; var_608_string = ""; var_609_string = ""; var_610_int = 0; // 0x699 PushV
	var_607_int = var_555_int; // 0x69a Mov
	var_608_string = "pers_dog"; // 0x69b MovS
	var_609_string = "dog.xml"; // 0x69c MovS
	var_610_int = 1; // 0x69d MovI
	func_438(var_607_int, var_608_string, var_609_string, var_610_int); // 0x69e Call
}


func_74(var_476_bool, var_477_object, var_478_string)
{
	var_479_bool = 0; var_480_bool = 0; // 0x4a PushV
	var_481_string = "HasProperty"; // 0x4b PushS
	var_482_int = 2; // 0x4c PushI
	var_483_bool = IsFuncExist(var_477_object, var_481_string, var_482_int); // 0x4d FuncExist
	var_484_bool = var_483_bool == 0; // 0x4e Not
	if(var_484_bool == 0) goto Label_82; // 0x4f JumpB
	var_476_bool = 0; // 0x50 MovB
	return 2; // 0x51 Return
	
Label_82:
	HasProperty(var_478_string, var_480_bool); // 0x52 ObjFunc
	var_476_bool = var_480_bool; // 0x54 Mov
	return 2; // 0x55 Return
}


func_8266(var_4665_int)
{
	var_4666_int = 0; var_4667_int = 0; // 0x204a PushV
	var_4668_int = 1156; // 0x204b PushI
	var_4669_int = 1155; // 0x204c PushI
	AddMessage(var_4668_int, var_4669_int, var_4667_int); // 0x204d Func
	var_4670_string = "player_mail"; // 0x204f PushS
	var_4671_int = 1; // 0x2050 PushI
	SetVariable(var_4670_string, var_4671_int); // 0x2051 Func
	var_4665_int = var_4667_int; // 0x2053 Mov
	return 2; // 0x2054 Return
}


func_9804(var_4657_bool)
{
	var_4660_int = 0; var_4661_string = ""; // 0x264d PushV
	var_4661_string = "d1q01KaterinaUHave1day"; // 0x264e MovS
	func_92(var_4660_int, var_4661_string); // 0x264f Call
	var_4662_int = 1; // 0x2651 PushI
	var_4663_bool = var_4660_int == var_4662_int; // 0x2652 Eq
	if(var_4663_bool == 0) goto Label_9814; // 0x2653 JumpB
	var_4657_bool = 1; // 0x2654 MovB
	return 0; // 0x2655 Return
	
Label_9814:
	var_4657_bool = 0; // 0x2656 MovB
	return 0; // 0x2657 Return
}


func_6226(var_2472_int, var_2473_int, var_2474_object, var_2475_object, var_2476_object, var_2477_object)
{
	var_2478_int = 0; // 0x1853 PushI
	var_2479_bool = var_2473_int == var_2478_int; // 0x1854 Eq
	if(var_2479_bool == 0) goto Label_6254; // 0x1855 JumpB
	var_2480_int = 0; var_2481_bool = 0; // 0x1856 PushV
	var_2480_int = 14; // 0x1857 MovI
	var_2481_bool = 1; // 0x1858 MovB
	func_731(var_2480_int, var_2481_bool); // 0x1859 Call
	var_2482_int = 0; var_2483_bool = 0; var_2484_int = 0; // 0x185b PushV
	var_2482_int = 14; // 0x185c MovI
	var_2483_bool = 1; // 0x185d MovB
	var_2484_int = 1; // 0x185e MovI
	func_748(var_2482_int, var_2483_bool, var_2484_int); // 0x185f Call
	var_2485_int = 0; var_2486_int = 0; var_2487_object = Obj(); var_2488_object = Obj(); var_2489_object = Obj(); // 0x1861 PushV
	var_2485_int = 14; // 0x1862 MovI
	var_2486_int = var_2472_int; // 0x1863 Mov
	var_2487_object = var_2474_object; // 0x1864 Mov
	var_2488_object = var_2475_object; // 0x1865 Mov
	var_2489_object = var_2476_object; // 0x1866 Mov
	func_576(var_2485_int, var_2486_int, var_2487_object, var_2488_object, var_2489_object); // 0x1867 Call
	var_2490_object = Obj(); var_2491_int = 0; // 0x1869 PushV
	var_2490_object = var_2477_object; // 0x186a Mov
	var_2491_int = 1; // 0x186b MovI
	func_229(var_2491_int); // 0x186c Call
	
Label_6254:
	var_2492_int = 0; var_2493_bool = 0; // 0x186e PushV
	var_2492_int = 14; // 0x186f MovI
	var_2493_bool = 0; // 0x1870 MovB
	func_714(var_2492_int, var_2493_bool); // 0x1871 Call
	var_2494_int = 0; var_2495_int = 0; var_2496_int = 0; // 0x1873 PushV
	var_2494_int = 14; // 0x1874 MovI
	var_2495_int = var_2472_int; // 0x1875 Mov
	var_2496_int = var_2473_int; // 0x1876 Mov
	func_1797(var_2494_int, var_2495_int, var_2496_int); // 0x1877 Call
	return 0; // 0x1879 Return
}


func_8277(var_4591_int)
{
	var_4592_int = 0; var_4593_int = 0; // 0x2055 PushV
	var_4594_int = 1175; // 0x2056 PushI
	var_4595_int = 1174; // 0x2057 PushI
	AddMessage(var_4594_int, var_4595_int, var_4593_int); // 0x2058 Func
	var_4596_string = "player_mail"; // 0x205a PushS
	var_4597_int = 1; // 0x205b PushI
	SetVariable(var_4596_string, var_4597_int); // 0x205c Func
	var_4591_int = var_4593_int; // 0x205e Mov
	return 2; // 0x205f Return
}


func_3158(var_3287_int, var_3288_int, var_3289_int)
{
	var_3290_int = 0; var_3291_int = 0; var_3292_int = 0; var_3293_int = 0; var_3294_int = 0; var_3295_int = 0; var_3296_int = 0; var_3297_int = 0; // 0xc56 PushV
	var_3298_bool = 0; // 0xc57 PushV
	var_3298_bool = 0; // 0xc58 MovB
	var_3299_int = 8; // 0xc59 PushI
	var_3300_bool = var_3289_int > var_3299_int; // 0xc5a GT
	if(var_3300_bool == 0) goto Label_3168; // 0xc5b JumpB
	var_3301_int = 21; // 0xc5c PushI
	var_3302_bool = var_3289_int < var_3301_int; // 0xc5d LT
	if(var_3302_bool == 0) goto Label_3168; // 0xc5e JumpB
	var_3298_bool = 1; // 0xc5f MovB
	
Label_3168:
	if(var_3298_bool == 0) goto Label_3247; // 0xc60 JumpB
	var_3303_int = 0; var_3304_string = ""; var_3305_string = ""; var_3306_int = 0; // 0xc61 PushV
	var_3303_int = var_3287_int; // 0xc62 Mov
	var_3304_string = "pers_woman"; // 0xc63 MovS
	var_3305_string = "woman.xml"; // 0xc64 MovS
	var_3306_int = 1; // 0xc65 MovI
	func_438(var_3303_int, var_3304_string, var_3305_string, var_3306_int); // 0xc66 Call
	var_3307_int = 0; var_3308_string = ""; var_3309_string = ""; var_3310_int = 0; // 0xc68 PushV
	var_3307_int = var_3287_int; // 0xc69 Mov
	var_3308_string = "pers_unosha"; // 0xc6a MovS
	var_3309_string = "unosha.xml"; // 0xc6b MovS
	var_3310_int = 1; // 0xc6c MovI
	func_438(var_3307_int, var_3308_string, var_3309_string, var_3310_int); // 0xc6d Call
	var_3311_int = 0; var_3312_string = ""; var_3313_string = ""; var_3314_int = 0; // 0xc6f PushV
	var_3311_int = var_3287_int; // 0xc70 Mov
	var_3312_string = "pers_unosha"; // 0xc71 MovS
	var_3313_string = "unosha2.xml"; // 0xc72 MovS
	var_3314_int = 1; // 0xc73 MovI
	func_438(var_3311_int, var_3312_string, var_3313_string, var_3314_int); // 0xc74 Call
	var_3315_int = 0; var_3316_string = ""; var_3317_string = ""; var_3318_int = 0; // 0xc76 PushV
	var_3315_int = var_3287_int; // 0xc77 Mov
	var_3316_string = "pers_boy"; // 0xc78 MovS
	var_3317_string = "boy.xml"; // 0xc79 MovS
	var_3318_int = 1; // 0xc7a MovI
	func_438(var_3315_int, var_3316_string, var_3317_string, var_3318_int); // 0xc7b Call
	var_3319_int = 1; // 0xc7d PushI
	var_3320_int = var_3288_int + var_3319_int; // 0xc7e Add
	var_3321_int = 2; // 0xc7f PushI
	var_3322_bool = var_3320_int >= var_3321_int; // 0xc80 GE
	if(var_3322_bool == 0) goto Label_3209; // 0xc81 JumpB
	var_3323_int = 0; var_3324_string = ""; var_3325_string = ""; var_3326_int = 0; // 0xc82 PushV
	var_3323_int = var_3287_int; // 0xc83 Mov
	var_3324_string = "pers_patrool"; // 0xc84 MovS
	var_3325_string = "patrol.xml"; // 0xc85 MovS
	var_3326_int = 2; // 0xc86 MovI
	func_438(var_3323_int, var_3324_string, var_3325_string, var_3326_int); // 0xc87 Call
	
Label_3209:
	var_3327_int = 0; var_3328_string = ""; var_3329_string = ""; var_3330_int = 0; // 0xc89 PushV
	var_3327_int = var_3287_int; // 0xc8a Mov
	var_3328_string = "pers_rat"; // 0xc8b MovS
	var_3329_string = "rat.xml"; // 0xc8c MovS
	var_3330_int = 2; // 0xc8d MovI
	func_438(var_3327_int, var_3328_string, var_3329_string, var_3330_int); // 0xc8e Call
	var_3331_int = 1; // 0xc90 PushI
	var_3332_float = 0; var_3333_int = 0; // 0xc91 PushV
	var_3333_int = var_3288_int; // 0xc92 Mov
	func_932(var_3332_float, var_3333_int); // 0xc93 Call
	var_3294_int = var_3331_int * var_3332_float; // 0xc95 Mult2
	var_3334_int = var_3294_int; // 0xc96 Push
	if(var_3334_int == 0) goto Label_3231; // 0xc97 JumpB
	var_3335_int = 0; var_3336_string = ""; var_3337_string = ""; var_3338_int = 0; // 0xc98 PushV
	var_3335_int = var_3287_int; // 0xc99 Mov
	var_3336_string = "pers_grabitel"; // 0xc9a MovS
	var_3337_string = "grabitel.xml"; // 0xc9b MovS
	var_3338_int = var_3294_int; // 0xc9c Mov
	func_438(var_3335_int, var_3336_string, var_3337_string, var_3338_int); // 0xc9d Call
	
Label_3231:
	var_3339_int = 1; // 0xc9f PushI
	var_3340_float = 0; var_3341_int = 0; // 0xca0 PushV
	var_3341_int = var_3288_int; // 0xca1 Mov
	func_1022(var_3340_float, var_3341_int); // 0xca2 Call
	var_3295_int = var_3339_int * var_3340_float; // 0xca4 Mult2
	var_3342_int = var_3295_int; // 0xca5 Push
	if(var_3342_int == 0) goto Label_3246; // 0xca6 JumpB
	var_3343_int = 0; var_3344_string = ""; var_3345_string = ""; var_3346_int = 0; // 0xca7 PushV
	var_3343_int = var_3287_int; // 0xca8 Mov
	var_3344_string = "pers_bomber"; // 0xca9 MovS
	var_3345_string = "bomber.xml"; // 0xcaa MovS
	var_3346_int = var_3295_int; // 0xcab Mov
	func_438(var_3343_int, var_3344_string, var_3345_string, var_3346_int); // 0xcac Call
	
Label_3246:
	goto Label_3324; // 0xcae Jump
	
Label_3324:
	var_3347_bool = 0; var_3348_int = 0; var_3349_int = 0; // 0xcfc PushV
	var_3348_int = var_3288_int; // 0xcfd Mov
	var_3349_int = var_3289_int; // 0xcfe Mov
	func_1112(var_3347_bool, var_3348_int, var_3349_int); // 0xcff Call
	if(var_3347_bool == 0) goto Label_3337; // 0xd01 JumpB
	var_3350_int = 0; var_3351_string = ""; var_3352_string = ""; var_3353_int = 0; // 0xd02 PushV
	var_3350_int = var_3287_int; // 0xd03 Mov
	var_3351_string = "pers_soldat"; // 0xd04 MovS
	var_3352_string = "soldier_marauder.xml"; // 0xd05 MovS
	var_3353_int = 2; // 0xd06 MovI
	func_438(var_3350_int, var_3351_string, var_3352_string, var_3353_int); // 0xd07 Call
	
Label_3337:
	return 8; // 0xd09 Return
	
Label_3247:
	var_3354_int = 0; var_3355_string = ""; var_3356_string = ""; var_3357_int = 0; // 0xcaf PushV
	var_3354_int = var_3287_int; // 0xcb0 Mov
	var_3355_string = "pers_woman"; // 0xcb1 MovS
	var_3356_string = "woman.xml"; // 0xcb2 MovS
	var_3357_int = 1; // 0xcb3 MovI
	func_438(var_3354_int, var_3355_string, var_3356_string, var_3357_int); // 0xcb4 Call
	var_3358_int = 0; var_3359_string = ""; var_3360_string = ""; var_3361_int = 0; // 0xcb6 PushV
	var_3358_int = var_3287_int; // 0xcb7 Mov
	var_3359_string = "pers_unosha"; // 0xcb8 MovS
	var_3360_string = "unosha.xml"; // 0xcb9 MovS
	var_3361_int = 1; // 0xcba MovI
	func_438(var_3358_int, var_3359_string, var_3360_string, var_3361_int); // 0xcbb Call
	var_3362_int = 0; var_3363_string = ""; var_3364_string = ""; var_3365_int = 0; // 0xcbd PushV
	var_3362_int = var_3287_int; // 0xcbe Mov
	var_3363_string = "pers_unosha"; // 0xcbf MovS
	var_3364_string = "unosha2.xml"; // 0xcc0 MovS
	var_3365_int = 1; // 0xcc1 MovI
	func_438(var_3362_int, var_3363_string, var_3364_string, var_3365_int); // 0xcc2 Call
	var_3366_int = 0; var_3367_string = ""; var_3368_string = ""; var_3369_int = 0; // 0xcc4 PushV
	var_3366_int = var_3287_int; // 0xcc5 Mov
	var_3367_string = "pers_boy"; // 0xcc6 MovS
	var_3368_string = "boy.xml"; // 0xcc7 MovS
	var_3369_int = 1; // 0xcc8 MovI
	func_438(var_3366_int, var_3367_string, var_3368_string, var_3369_int); // 0xcc9 Call
	var_3370_int = 1; // 0xccb PushI
	var_3371_int = var_3288_int + var_3370_int; // 0xccc Add
	var_3372_int = 2; // 0xccd PushI
	var_3373_bool = var_3371_int >= var_3372_int; // 0xcce GE
	if(var_3373_bool == 0) goto Label_3287; // 0xccf JumpB
	var_3374_int = 0; var_3375_string = ""; var_3376_string = ""; var_3377_int = 0; // 0xcd0 PushV
	var_3374_int = var_3287_int; // 0xcd1 Mov
	var_3375_string = "pers_patrool"; // 0xcd2 MovS
	var_3376_string = "patrol.xml"; // 0xcd3 MovS
	var_3377_int = 2; // 0xcd4 MovI
	func_438(var_3374_int, var_3375_string, var_3376_string, var_3377_int); // 0xcd5 Call
	
Label_3287:
	var_3378_int = 0; var_3379_string = ""; var_3380_string = ""; var_3381_int = 0; // 0xcd7 PushV
	var_3378_int = var_3287_int; // 0xcd8 Mov
	var_3379_string = "pers_rat"; // 0xcd9 MovS
	var_3380_string = "rat.xml"; // 0xcda MovS
	var_3381_int = 2; // 0xcdb MovI
	func_438(var_3378_int, var_3379_string, var_3380_string, var_3381_int); // 0xcdc Call
	var_3382_int = 2; // 0xcde PushI
	var_3383_float = 0; var_3384_int = 0; // 0xcdf PushV
	var_3384_int = var_3288_int; // 0xce0 Mov
	func_932(var_3383_float, var_3384_int); // 0xce1 Call
	var_3296_int = var_3382_int * var_3383_float; // 0xce3 Mult2
	var_3385_int = var_3296_int; // 0xce4 Push
	if(var_3385_int == 0) goto Label_3309; // 0xce5 JumpB
	var_3386_int = 0; var_3387_string = ""; var_3388_string = ""; var_3389_int = 0; // 0xce6 PushV
	var_3386_int = var_3287_int; // 0xce7 Mov
	var_3387_string = "pers_grabitel"; // 0xce8 MovS
	var_3388_string = "grabitel.xml"; // 0xce9 MovS
	var_3389_int = var_3296_int; // 0xcea Mov
	func_438(var_3386_int, var_3387_string, var_3388_string, var_3389_int); // 0xceb Call
	
Label_3309:
	var_3390_int = 1; // 0xced PushI
	var_3391_float = 0; var_3392_int = 0; // 0xcee PushV
	var_3392_int = var_3288_int; // 0xcef Mov
	func_1022(var_3391_float, var_3392_int); // 0xcf0 Call
	var_3297_int = var_3390_int * var_3391_float; // 0xcf2 Mult2
	var_3393_int = var_3297_int; // 0xcf3 Push
	if(var_3393_int == 0) goto Label_3324; // 0xcf4 JumpB
	var_3394_int = 0; var_3395_string = ""; var_3396_string = ""; var_3397_int = 0; // 0xcf5 PushV
	var_3394_int = var_3287_int; // 0xcf6 Mov
	var_3395_string = "pers_bomber"; // 0xcf7 MovS
	var_3396_string = "bomber.xml"; // 0xcf8 MovS
	var_3397_int = var_3297_int; // 0xcf9 Mov
	func_438(var_3394_int, var_3395_string, var_3396_string, var_3397_int); // 0xcfa Call
}


func_86(var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x56 PushV
	CreateObjectVector(var_29_object); // 0x57 Func
	var_27_object = var_29_object; // 0x59 Mov
	return 2; // 0x5a Return
}


func_1112(var_783_bool, var_784_int, var_785_int)
{
	var_783_bool = 0; // 0x459 MovB
	var_786_int = 10; // 0x45a PushI
	var_787_bool = var_784_int == var_786_int; // 0x45b Eq
	if(var_787_bool == 0) goto Label_1121; // 0x45c JumpB
	var_788_int = 6; // 0x45d PushI
	var_789_bool = var_785_int < var_788_int; // 0x45e LT
	if(var_789_bool == 0) goto Label_1121; // 0x45f JumpB
	var_783_bool = 1; // 0x460 MovB
	
Label_1121:
	return 0; // 0x461 Return
}


func_9816(var_3913_bool)
{
	var_3916_int = 0; var_3917_string = ""; // 0x2659 PushV
	var_3917_string = "d6q03"; // 0x265a MovS
	func_92(var_3916_int, var_3917_string); // 0x265b Call
	var_3920_int = 0; // 0x265d PushI
	var_3921_bool = var_3916_int == var_3920_int; // 0x265e Eq
	if(var_3921_bool == 0) goto Label_9826; // 0x265f JumpB
	var_3913_bool = 1; // 0x2660 MovB
	return 0; // 0x2661 Return
	
Label_9826:
	var_3913_bool = 0; // 0x2662 MovB
	return 0; // 0x2663 Return
}


func_92(var_3916_int, var_3917_string)
{
	var_3918_int = 0; var_3919_int = 0; // 0x5c PushV
	GetVariable(var_3917_string, var_3919_int); // 0x5d Func
	var_3916_int = var_3919_int; // 0x5f Mov
	return 2; // 0x60 Return
}


func_9310()
{
	var_4042_object = Obj(); var_4043_object = Obj(); var_4044_object = Obj(); var_4045_object = Obj(); // 0x245e PushV
	var_4046_object = Obj(); // 0x245f PushV
	func_10048(var_4046_object); // 0x2460 Call
	var_4044_object = var_4046_object; // 0x2461 Mov
	var_4047_string = "d5q01AlexandrGotoKaterina"; // 0x2463 PushS
	FindMark(var_4045_object, var_4047_string); // 0x2464 ObjFunc
	var_4048_object = var_4045_object; // 0x2466 Push
	if(var_4048_object == 0) goto Label_9322; // 0x2467 JumpB
	Remove(); // 0x2468 ObjFunc
	
Label_9322:
	var_4049_string = "d5q01BigVladGotoAlexandr"; // 0x246a PushS
	FindMark(var_4045_object, var_4049_string); // 0x246b ObjFunc
	var_4050_object = var_4045_object; // 0x246d Push
	if(var_4050_object == 0) goto Label_9329; // 0x246e JumpB
	Remove(); // 0x246f ObjFunc
	
Label_9329:
	var_4051_string = "d5q01BurahMeeting1"; // 0x2471 PushS
	FindMark(var_4045_object, var_4051_string); // 0x2472 ObjFunc
	var_4052_object = var_4045_object; // 0x2474 Push
	if(var_4052_object == 0) goto Label_9336; // 0x2475 JumpB
	Remove(); // 0x2476 ObjFunc
	
Label_9336:
	var_4053_string = "d5q01BurahMeeting2"; // 0x2478 PushS
	FindMark(var_4045_object, var_4053_string); // 0x2479 ObjFunc
	var_4054_object = var_4045_object; // 0x247b Push
	if(var_4054_object == 0) goto Label_9343; // 0x247c JumpB
	Remove(); // 0x247d ObjFunc
	
Label_9343:
	var_4055_string = "d5q01GrifWantsMoney"; // 0x247f PushS
	FindMark(var_4045_object, var_4055_string); // 0x2480 ObjFunc
	var_4056_object = var_4045_object; // 0x2482 Push
	if(var_4056_object == 0) goto Label_9350; // 0x2483 JumpB
	Remove(); // 0x2484 ObjFunc
	
Label_9350:
	var_4057_string = "d5q01GrifWillHelp"; // 0x2486 PushS
	FindMark(var_4045_object, var_4057_string); // 0x2487 ObjFunc
	var_4058_object = var_4045_object; // 0x2489 Push
	if(var_4058_object == 0) goto Label_9357; // 0x248a JumpB
	Remove(); // 0x248b ObjFunc
	
Label_9357:
	var_4059_string = "d5q01KaterinaGotoLara"; // 0x248d PushS
	FindMark(var_4045_object, var_4059_string); // 0x248e ObjFunc
	var_4060_object = var_4045_object; // 0x2490 Push
	if(var_4060_object == 0) goto Label_9364; // 0x2491 JumpB
	Remove(); // 0x2492 ObjFunc
	
Label_9364:
	var_4061_string = "d5q01PatrolGotoGrif"; // 0x2494 PushS
	FindMark(var_4045_object, var_4061_string); // 0x2495 ObjFunc
	var_4062_object = var_4045_object; // 0x2497 Push
	if(var_4062_object == 0) goto Label_9371; // 0x2498 JumpB
	Remove(); // 0x2499 ObjFunc
	
Label_9371:
	var_4063_string = "d5q01RubinGotoBigVlad"; // 0x249b PushS
	FindMark(var_4045_object, var_4063_string); // 0x249c ObjFunc
	var_4064_object = var_4045_object; // 0x249e Push
	if(var_4064_object == 0) goto Label_9378; // 0x249f JumpB
	Remove(); // 0x24a0 ObjFunc
	
Label_9378:
	var_4065_string = "d5q01RubinGotoBigVladSelf"; // 0x24a2 PushS
	FindMark(var_4045_object, var_4065_string); // 0x24a3 ObjFunc
	var_4066_object = var_4045_object; // 0x24a5 Push
	if(var_4066_object == 0) goto Label_9385; // 0x24a6 JumpB
	Remove(); // 0x24a7 ObjFunc
	
Label_9385:
	var_4067_string = "d5q02AnnaGotoGorbun"; // 0x24a9 PushS
	FindMark(var_4045_object, var_4067_string); // 0x24aa ObjFunc
	var_4068_object = var_4045_object; // 0x24ac Push
	if(var_4068_object == 0) goto Label_9392; // 0x24ad JumpB
	Remove(); // 0x24ae ObjFunc
	
Label_9392:
	var_4069_string = "d5q02AnnaGotoGorbunSelf"; // 0x24b0 PushS
	FindMark(var_4045_object, var_4069_string); // 0x24b1 ObjFunc
	var_4070_object = var_4045_object; // 0x24b3 Push
	if(var_4070_object == 0) goto Label_9399; // 0x24b4 JumpB
	Remove(); // 0x24b5 ObjFunc
	
Label_9399:
	var_4071_string = "d5q02AnnaGotoKabak"; // 0x24b7 PushS
	FindMark(var_4045_object, var_4071_string); // 0x24b8 ObjFunc
	var_4072_object = var_4045_object; // 0x24ba Push
	if(var_4072_object == 0) goto Label_9406; // 0x24bb JumpB
	Remove(); // 0x24bc ObjFunc
	
Label_9406:
	var_4073_string = "d5q02GorbunFindTheDaughter"; // 0x24be PushS
	FindMark(var_4045_object, var_4073_string); // 0x24bf ObjFunc
	var_4074_object = var_4045_object; // 0x24c1 Push
	if(var_4074_object == 0) goto Label_9413; // 0x24c2 JumpB
	Remove(); // 0x24c3 ObjFunc
	
Label_9413:
	var_4075_string = "d5q02NudeMeeting"; // 0x24c5 PushS
	FindMark(var_4045_object, var_4075_string); // 0x24c6 ObjFunc
	var_4076_object = var_4045_object; // 0x24c8 Push
	if(var_4076_object == 0) goto Label_9420; // 0x24c9 JumpB
	Remove(); // 0x24ca ObjFunc
	
Label_9420:
	var_4077_string = "d5q03BirdmaskBringMoneySelf"; // 0x24cc PushS
	FindMark(var_4045_object, var_4077_string); // 0x24cd ObjFunc
	var_4078_object = var_4045_object; // 0x24cf Push
	if(var_4078_object == 0) goto Label_9427; // 0x24d0 JumpB
	Remove(); // 0x24d1 ObjFunc
	
Label_9427:
	var_4079_string = "d5q03BirdmaskGotoMladVlad"; // 0x24d3 PushS
	FindMark(var_4045_object, var_4079_string); // 0x24d4 ObjFunc
	var_4080_object = var_4045_object; // 0x24d6 Push
	if(var_4080_object == 0) goto Label_9434; // 0x24d7 JumpB
	Remove(); // 0x24d8 ObjFunc
	
Label_9434:
	var_4081_string = "d5q03BirdmaskGotoViktor"; // 0x24da PushS
	FindMark(var_4045_object, var_4081_string); // 0x24db ObjFunc
	var_4082_object = var_4045_object; // 0x24dd Push
	if(var_4082_object == 0) goto Label_9441; // 0x24de JumpB
	Remove(); // 0x24df ObjFunc
	
Label_9441:
	var_4083_string = "d5q03MladVladSavePrisonersSelf"; // 0x24e1 PushS
	FindMark(var_4045_object, var_4083_string); // 0x24e2 ObjFunc
	var_4084_object = var_4045_object; // 0x24e4 Push
	if(var_4084_object == 0) goto Label_9448; // 0x24e5 JumpB
	Remove(); // 0x24e6 ObjFunc
	
Label_9448:
	var_4085_string = "d5q03SavePrisoners"; // 0x24e8 PushS
	FindMark(var_4045_object, var_4085_string); // 0x24e9 ObjFunc
	var_4086_object = var_4045_object; // 0x24eb Push
	if(var_4086_object == 0) goto Label_9455; // 0x24ec JumpB
	Remove(); // 0x24ed ObjFunc
	
Label_9455:
	var_4087_string = "d5q03ViktorSavePrisonersSelf"; // 0x24ef PushS
	FindMark(var_4045_object, var_4087_string); // 0x24f0 ObjFunc
	var_4088_object = var_4045_object; // 0x24f2 Push
	if(var_4088_object == 0) goto Label_9462; // 0x24f3 JumpB
	Remove(); // 0x24f4 ObjFunc
	
Label_9462:
	var_4089_bool = 0; var_4090_int = 0; // 0x24f6 PushV
	var_4090_int = 139; // 0x24f7 MovI
	func_10031(var_4089_bool, var_4090_int); // 0x24f8 Call
	var_4091_bool = 0; var_4092_int = 0; // 0x24fa PushV
	var_4092_int = 148; // 0x24fb MovI
	func_10031(var_4091_bool, var_4092_int); // 0x24fc Call
	var_4093_bool = 0; var_4094_int = 0; // 0x24fe PushV
	var_4094_int = 154; // 0x24ff MovI
	func_10031(var_4093_bool, var_4094_int); // 0x2500 Call
	return 4; // 0x2502 Return
}


func_5215(var_2310_int, var_2311_int, var_2312_object, var_2313_object, var_2314_object, var_2315_object)
{
	var_2316_int = 0; // 0x1460 PushI
	var_2317_bool = var_2311_int == var_2316_int; // 0x1461 Eq
	if(var_2317_bool == 0) goto Label_5243; // 0x1462 JumpB
	var_2318_int = 0; var_2319_bool = 0; // 0x1463 PushV
	var_2318_int = 8; // 0x1464 MovI
	var_2319_bool = 1; // 0x1465 MovB
	func_731(var_2318_int, var_2319_bool); // 0x1466 Call
	var_2320_int = 0; var_2321_bool = 0; var_2322_int = 0; // 0x1468 PushV
	var_2320_int = 8; // 0x1469 MovI
	var_2321_bool = 1; // 0x146a MovB
	var_2322_int = 1; // 0x146b MovI
	func_748(var_2320_int, var_2321_bool, var_2322_int); // 0x146c Call
	var_2323_int = 0; var_2324_int = 0; var_2325_object = Obj(); var_2326_object = Obj(); var_2327_object = Obj(); // 0x146e PushV
	var_2323_int = 8; // 0x146f MovI
	var_2324_int = var_2310_int; // 0x1470 Mov
	var_2325_object = var_2312_object; // 0x1471 Mov
	var_2326_object = var_2313_object; // 0x1472 Mov
	var_2327_object = var_2314_object; // 0x1473 Mov
	func_576(var_2323_int, var_2324_int, var_2325_object, var_2326_object, var_2327_object); // 0x1474 Call
	var_2328_object = Obj(); var_2329_int = 0; // 0x1476 PushV
	var_2328_object = var_2315_object; // 0x1477 Mov
	var_2329_int = 1; // 0x1478 MovI
	func_229(var_2329_int); // 0x1479 Call
	
Label_5243:
	var_2330_int = 0; var_2331_bool = 0; // 0x147b PushV
	var_2330_int = 8; // 0x147c MovI
	var_2331_bool = 0; // 0x147d MovB
	func_714(var_2330_int, var_2331_bool); // 0x147e Call
	var_2332_int = 0; var_2333_int = 0; var_2334_int = 0; // 0x1480 PushV
	var_2332_int = 8; // 0x1481 MovI
	var_2333_int = var_2310_int; // 0x1482 Mov
	var_2334_int = var_2311_int; // 0x1483 Mov
	func_2052(var_2332_int, var_2333_int, var_2334_int); // 0x1484 Call
	return 0; // 0x1486 Return
}


func_8288(var_4682_int)
{
	var_4683_int = 0; var_4684_int = 0; // 0x2060 PushV
	var_4685_int = 14525; // 0x2061 PushI
	var_4686_int = 14524; // 0x2062 PushI
	AddMessage(var_4685_int, var_4686_int, var_4684_int); // 0x2063 Func
	var_4687_string = "player_mail"; // 0x2065 PushS
	var_4688_int = 1; // 0x2066 PushI
	SetVariable(var_4687_string, var_4688_int); // 0x2067 Func
	var_4682_int = var_4684_int; // 0x2069 Mov
	return 2; // 0x206a Return
}


func_97(var_3992_object, var_3993_string)
{
	var_3994_object = Obj(); var_3995_object = Obj(); var_3996_object = Obj(); var_3997_object = Obj(); // 0x61 PushV
	GetMainOutdoorScene(var_3996_object); // 0x62 Func
	var_3998_string = ".bin"; // 0x64 PushS
	var_3999_int = var_3993_string + var_3998_string; // 0x65 Add
	AddBlankActor(var_3997_object, var_3996_object, var_3993_string, var_3999_int); // 0x66 Func
	var_3992_object = var_3997_object; // 0x68 Mov
	return 4; // 0x69 Return
}


func_1122(var_1268_int, var_1269_int, var_1270_int)
{
	var_1271_bool = 0; // 0x463 PushV
	var_1271_bool = 0; // 0x464 MovB
	var_1272_int = 8; // 0x465 PushI
	var_1273_bool = var_1270_int > var_1272_int; // 0x466 GT
	if(var_1273_bool == 0) goto Label_1132; // 0x467 JumpB
	var_1274_int = 21; // 0x468 PushI
	var_1275_bool = var_1270_int < var_1274_int; // 0x469 LT
	if(var_1275_bool == 0) goto Label_1132; // 0x46a JumpB
	var_1271_bool = 1; // 0x46b MovB
	
Label_1132:
	if(var_1271_bool == 0) goto Label_1197; // 0x46c JumpB
	var_1276_int = 0; var_1277_string = ""; var_1278_string = ""; var_1279_int = 0; // 0x46d PushV
	var_1276_int = var_1268_int; // 0x46e Mov
	var_1277_string = "pers_wasted_girl"; // 0x46f MovS
	var_1278_string = "wasted_girl.xml"; // 0x470 MovS
	var_1279_int = 2; // 0x471 MovI
	func_438(var_1276_int, var_1277_string, var_1278_string, var_1279_int); // 0x472 Call
	var_1280_int = 0; var_1281_string = ""; var_1282_string = ""; var_1283_int = 0; // 0x474 PushV
	var_1280_int = var_1268_int; // 0x475 Mov
	var_1281_string = "pers_wasted_male"; // 0x476 MovS
	var_1282_string = "wasted_male.xml"; // 0x477 MovS
	var_1283_int = 3; // 0x478 MovI
	func_438(var_1280_int, var_1281_string, var_1282_string, var_1283_int); // 0x479 Call
	var_1284_int = 0; var_1285_string = ""; var_1286_string = ""; var_1287_int = 0; // 0x47b PushV
	var_1284_int = var_1268_int; // 0x47c Mov
	var_1285_string = "pers_woman"; // 0x47d MovS
	var_1286_string = "woman.xml"; // 0x47e MovS
	var_1287_int = 3; // 0x47f MovI
	func_438(var_1284_int, var_1285_string, var_1286_string, var_1287_int); // 0x480 Call
	var_1288_int = 0; var_1289_string = ""; var_1290_string = ""; var_1291_int = 0; // 0x482 PushV
	var_1288_int = var_1268_int; // 0x483 Mov
	var_1289_string = "pers_unosha"; // 0x484 MovS
	var_1290_string = "unosha.xml"; // 0x485 MovS
	var_1291_int = 2; // 0x486 MovI
	func_438(var_1288_int, var_1289_string, var_1290_string, var_1291_int); // 0x487 Call
	var_1292_int = 0; var_1293_string = ""; var_1294_string = ""; var_1295_int = 0; // 0x489 PushV
	var_1292_int = var_1268_int; // 0x48a Mov
	var_1293_string = "pers_unosha"; // 0x48b MovS
	var_1294_string = "unosha2.xml"; // 0x48c MovS
	var_1295_int = 2; // 0x48d MovI
	func_438(var_1292_int, var_1293_string, var_1294_string, var_1295_int); // 0x48e Call
	var_1296_int = 0; var_1297_string = ""; var_1298_string = ""; var_1299_int = 0; // 0x490 PushV
	var_1296_int = var_1268_int; // 0x491 Mov
	var_1297_string = "pers_boy"; // 0x492 MovS
	var_1298_string = "boy.xml"; // 0x493 MovS
	var_1299_int = 2; // 0x494 MovI
	func_438(var_1296_int, var_1297_string, var_1298_string, var_1299_int); // 0x495 Call
	var_1300_int = 0; var_1301_string = ""; var_1302_string = ""; var_1303_int = 0; // 0x497 PushV
	var_1300_int = var_1268_int; // 0x498 Mov
	var_1301_string = "pers_girl"; // 0x499 MovS
	var_1302_string = "girl.xml"; // 0x49a MovS
	var_1303_int = 1; // 0x49b MovI
	func_438(var_1300_int, var_1301_string, var_1302_string, var_1303_int); // 0x49c Call
	var_1304_int = 0; var_1305_string = ""; var_1306_string = ""; var_1307_int = 0; // 0x49e PushV
	var_1304_int = var_1268_int; // 0x49f Mov
	var_1305_string = "pers_girl"; // 0x4a0 MovS
	var_1306_string = "girl2.xml"; // 0x4a1 MovS
	var_1307_int = 1; // 0x4a2 MovI
	func_438(var_1304_int, var_1305_string, var_1306_string, var_1307_int); // 0x4a3 Call
	var_1308_int = 0; var_1309_string = ""; var_1310_string = ""; var_1311_int = 0; // 0x4a5 PushV
	var_1308_int = var_1268_int; // 0x4a6 Mov
	var_1309_string = "pers_dog"; // 0x4a7 MovS
	var_1310_string = "dog.xml"; // 0x4a8 MovS
	var_1311_int = 1; // 0x4a9 MovI
	func_438(var_1308_int, var_1309_string, var_1310_string, var_1311_int); // 0x4aa Call
	goto Label_1232; // 0x4ac Jump
	
Label_1232:
	var_1312_bool = 0; // 0x4d0 PushV
	var_1312_bool = 0; // 0x4d1 MovB
	var_1313_bool = 0; // 0x4d2 PushV
	var_1313_bool = 0; // 0x4d3 MovB
	var_1314_int = 0; // 0x4d4 PushI
	var_1315_bool = var_1269_int == var_1314_int; // 0x4d5 Eq
	if(var_1315_bool == 0) goto Label_1243; // 0x4d6 JumpB
	var_1316_int = 12; // 0x4d7 PushI
	var_1317_bool = var_1270_int > var_1316_int; // 0x4d8 GT
	if(var_1317_bool == 0) goto Label_1243; // 0x4d9 JumpB
	var_1313_bool = 1; // 0x4da MovB
	
Label_1243:
	if(var_1313_bool == 0) goto Label_1248; // 0x4db JumpB
	var_1318_int = 22; // 0x4dc PushI
	var_1319_bool = var_1270_int < var_1318_int; // 0x4dd LT
	if(var_1319_bool == 0) goto Label_1248; // 0x4de JumpB
	var_1312_bool = 1; // 0x4df MovB
	
Label_1248:
	if(var_1312_bool == 0) goto Label_1256; // 0x4e0 JumpB
	var_1320_int = 0; var_1321_string = ""; var_1322_string = ""; var_1323_int = 0; // 0x4e1 PushV
	var_1320_int = var_1268_int; // 0x4e2 Mov
	var_1321_string = "pers_wasted_girl"; // 0x4e3 MovS
	var_1322_string = "wasted_girl_killme.xml"; // 0x4e4 MovS
	var_1323_int = 1; // 0x4e5 MovI
	func_438(var_1320_int, var_1321_string, var_1322_string, var_1323_int); // 0x4e6 Call
	
Label_1256:
	var_1324_bool = 0; var_1325_int = 0; var_1326_int = 0; // 0x4e8 PushV
	var_1325_int = var_1269_int; // 0x4e9 Mov
	var_1326_int = var_1270_int; // 0x4ea Mov
	func_1112(var_1324_bool, var_1325_int, var_1326_int); // 0x4eb Call
	if(var_1324_bool == 0) goto Label_1269; // 0x4ed JumpB
	var_1327_int = 0; var_1328_string = ""; var_1329_string = ""; var_1330_int = 0; // 0x4ee PushV
	var_1327_int = var_1268_int; // 0x4ef Mov
	var_1328_string = "pers_soldat"; // 0x4f0 MovS
	var_1329_string = "soldier_marauder.xml"; // 0x4f1 MovS
	var_1330_int = 2; // 0x4f2 MovI
	func_438(var_1327_int, var_1328_string, var_1329_string, var_1330_int); // 0x4f3 Call
	
Label_1269:
	return 0; // 0x4f5 Return
	
Label_1197:
	var_1331_int = 0; var_1332_string = ""; var_1333_string = ""; var_1334_int = 0; // 0x4ad PushV
	var_1331_int = var_1268_int; // 0x4ae Mov
	var_1332_string = "pers_wasted_girl"; // 0x4af MovS
	var_1333_string = "wasted_girl.xml"; // 0x4b0 MovS
	var_1334_int = 1; // 0x4b1 MovI
	func_438(var_1331_int, var_1332_string, var_1333_string, var_1334_int); // 0x4b2 Call
	var_1335_int = 0; var_1336_string = ""; var_1337_string = ""; var_1338_int = 0; // 0x4b4 PushV
	var_1335_int = var_1268_int; // 0x4b5 Mov
	var_1336_string = "pers_wasted_male"; // 0x4b6 MovS
	var_1337_string = "wasted_male.xml"; // 0x4b7 MovS
	var_1338_int = 2; // 0x4b8 MovI
	func_438(var_1335_int, var_1336_string, var_1337_string, var_1338_int); // 0x4b9 Call
	var_1339_int = 0; var_1340_string = ""; var_1341_string = ""; var_1342_int = 0; // 0x4bb PushV
	var_1339_int = var_1268_int; // 0x4bc Mov
	var_1340_string = "pers_unosha"; // 0x4bd MovS
	var_1341_string = "unosha.xml"; // 0x4be MovS
	var_1342_int = 1; // 0x4bf MovI
	func_438(var_1339_int, var_1340_string, var_1341_string, var_1342_int); // 0x4c0 Call
	var_1343_int = 0; var_1344_string = ""; var_1345_string = ""; var_1346_int = 0; // 0x4c2 PushV
	var_1343_int = var_1268_int; // 0x4c3 Mov
	var_1344_string = "pers_unosha"; // 0x4c4 MovS
	var_1345_string = "unosha2.xml"; // 0x4c5 MovS
	var_1346_int = 1; // 0x4c6 MovI
	func_438(var_1343_int, var_1344_string, var_1345_string, var_1346_int); // 0x4c7 Call
	var_1347_int = 0; var_1348_string = ""; var_1349_string = ""; var_1350_int = 0; // 0x4c9 PushV
	var_1347_int = var_1268_int; // 0x4ca Mov
	var_1348_string = "pers_dog"; // 0x4cb MovS
	var_1349_string = "dog.xml"; // 0x4cc MovS
	var_1350_int = 1; // 0x4cd MovI
	func_438(var_1347_int, var_1348_string, var_1349_string, var_1350_int); // 0x4ce Call
}


func_6754()
{
	var_3755_int = 0; var_3756_int = 0; var_3757_object = Obj(); var_3758_object = Obj(); var_3759_int = 0; var_3760_int = 0; var_3761_object = Obj(); var_3762_object = Obj(); // 0x1a62 PushV
	var_3763_string = "Cleaning arena..."; // 0x1a63 PushS
	Trace(var_3763_string); // 0x1a64 Func
	var_3764_object = GlobalVars[15]; // 0x1a66 PushGE
	var_3765_bool = var_3764_object != 0; // 0x1a67 NullNeq
	if(var_3765_bool == 0) goto Label_6790; // 0x1a68 JumpB
	var_3766_object = GlobalVars[15]; // 0x1a69 PushGE
	Remove(); // 0x1a6a ObjFunc
	var_3767_object = GlobalVars[16]; // 0x1a6c PushGE
	size(var_3759_int); // 0x1a6d ObjFunc
	var_3760_int = 0; // 0x1a6f MovI
	
Label_6768:
	var_3768_bool = var_3760_int < var_3759_int; // 0x1a70 LT
	if(var_3768_bool == 0) goto Label_6780; // 0x1a71 JumpB
	var_3769_object = GlobalVars[16]; // 0x1a72 PushGE
	get(var_3761_object, var_3760_int); // 0x1a73 ObjFunc
	var_3770_string = "remove"; // 0x1a75 PushS
	Trigger(var_3761_object, var_3770_string); // 0x1a76 Func
	var_3761_object = 0; // 0x1a78 SetNull
	var_3771_int = 1; // 0x1a79 PushI
	var_3760_int = var_3760_int + var_3771_int; // 0x1a7a Add2
	goto Label_6768; // 0x1a7b Jump
	
Label_6780:
	var_3772_object = GlobalVars[16]; // 0x1a7c PushGE
	clear(); // 0x1a7d ObjFunc
	var_3773_string = "arena_light"; // 0x1a7f PushS
	FindActor(var_3762_object, var_3773_string); // 0x1a80 Func
	var_3774_bool = 0; // 0x1a82 PushB
	Switch(var_3774_bool); // 0x1a83 ObjFunc
	var_3762_object = 0; // 0x1a85 SetNull
	
Label_6790:
	return 8; // 0x1a86 Return
}


func_9828(var_4674_bool)
{
	var_4677_int = 0; var_4678_string = ""; // 0x2665 PushV
	var_4678_string = "resque_list"; // 0x2666 MovS
	func_92(var_4677_int, var_4678_string); // 0x2667 Call
	var_4679_int = 0; // 0x2669 PushI
	var_4680_bool = var_4677_int != var_4679_int; // 0x266a Neq
	if(var_4680_bool == 0) goto Label_9838; // 0x266b JumpB
	var_4674_bool = 1; // 0x266c MovB
	return 0; // 0x266d Return
	
Label_9838:
	var_4674_bool = 0; // 0x266e MovB
	return 0; // 0x266f Return
}


func_3685(var_2919_int, var_2920_int, var_2921_int)
{
	var_2922_int = 0; var_2923_int = 0; var_2924_int = 0; var_2925_int = 0; var_2926_int = 0; var_2927_int = 0; var_2928_int = 0; var_2929_int = 0; // 0xe65 PushV
	var_2930_bool = 0; // 0xe66 PushV
	var_2930_bool = 0; // 0xe67 MovB
	var_2931_int = 8; // 0xe68 PushI
	var_2932_bool = var_2921_int > var_2931_int; // 0xe69 GT
	if(var_2932_bool == 0) goto Label_3695; // 0xe6a JumpB
	var_2933_int = 21; // 0xe6b PushI
	var_2934_bool = var_2921_int < var_2933_int; // 0xe6c LT
	if(var_2934_bool == 0) goto Label_3695; // 0xe6d JumpB
	var_2930_bool = 1; // 0xe6e MovB
	
Label_3695:
	if(var_2930_bool == 0) goto Label_3774; // 0xe6f JumpB
	var_2935_int = 0; var_2936_string = ""; var_2937_string = ""; var_2938_int = 0; // 0xe70 PushV
	var_2935_int = var_2919_int; // 0xe71 Mov
	var_2936_string = "pers_woman"; // 0xe72 MovS
	var_2937_string = "woman.xml"; // 0xe73 MovS
	var_2938_int = 1; // 0xe74 MovI
	func_438(var_2935_int, var_2936_string, var_2937_string, var_2938_int); // 0xe75 Call
	var_2939_int = 0; var_2940_string = ""; var_2941_string = ""; var_2942_int = 0; // 0xe77 PushV
	var_2939_int = var_2919_int; // 0xe78 Mov
	var_2940_string = "pers_unosha"; // 0xe79 MovS
	var_2941_string = "unosha.xml"; // 0xe7a MovS
	var_2942_int = 1; // 0xe7b MovI
	func_438(var_2939_int, var_2940_string, var_2941_string, var_2942_int); // 0xe7c Call
	var_2943_int = 0; var_2944_string = ""; var_2945_string = ""; var_2946_int = 0; // 0xe7e PushV
	var_2943_int = var_2919_int; // 0xe7f Mov
	var_2944_string = "pers_unosha"; // 0xe80 MovS
	var_2945_string = "unosha2.xml"; // 0xe81 MovS
	var_2946_int = 1; // 0xe82 MovI
	func_438(var_2943_int, var_2944_string, var_2945_string, var_2946_int); // 0xe83 Call
	var_2947_int = 0; var_2948_string = ""; var_2949_string = ""; var_2950_int = 0; // 0xe85 PushV
	var_2947_int = var_2919_int; // 0xe86 Mov
	var_2948_string = "pers_boy"; // 0xe87 MovS
	var_2949_string = "boy.xml"; // 0xe88 MovS
	var_2950_int = 1; // 0xe89 MovI
	func_438(var_2947_int, var_2948_string, var_2949_string, var_2950_int); // 0xe8a Call
	var_2951_int = 1; // 0xe8c PushI
	var_2952_int = var_2920_int + var_2951_int; // 0xe8d Add
	var_2953_int = 2; // 0xe8e PushI
	var_2954_bool = var_2952_int >= var_2953_int; // 0xe8f GE
	if(var_2954_bool == 0) goto Label_3736; // 0xe90 JumpB
	var_2955_int = 0; var_2956_string = ""; var_2957_string = ""; var_2958_int = 0; // 0xe91 PushV
	var_2955_int = var_2919_int; // 0xe92 Mov
	var_2956_string = "pers_patrool"; // 0xe93 MovS
	var_2957_string = "patrol.xml"; // 0xe94 MovS
	var_2958_int = 3; // 0xe95 MovI
	func_438(var_2955_int, var_2956_string, var_2957_string, var_2958_int); // 0xe96 Call
	
Label_3736:
	var_2959_int = 0; var_2960_string = ""; var_2961_string = ""; var_2962_int = 0; // 0xe98 PushV
	var_2959_int = var_2919_int; // 0xe99 Mov
	var_2960_string = "pers_rat"; // 0xe9a MovS
	var_2961_string = "rat.xml"; // 0xe9b MovS
	var_2962_int = 4; // 0xe9c MovI
	func_438(var_2959_int, var_2960_string, var_2961_string, var_2962_int); // 0xe9d Call
	var_2963_int = 3; // 0xe9f PushI
	var_2964_float = 0; var_2965_int = 0; // 0xea0 PushV
	var_2965_int = var_2920_int; // 0xea1 Mov
	func_932(var_2964_float, var_2965_int); // 0xea2 Call
	var_2926_int = var_2963_int * var_2964_float; // 0xea4 Mult2
	var_2966_int = var_2926_int; // 0xea5 Push
	if(var_2966_int == 0) goto Label_3758; // 0xea6 JumpB
	var_2967_int = 0; var_2968_string = ""; var_2969_string = ""; var_2970_int = 0; // 0xea7 PushV
	var_2967_int = var_2919_int; // 0xea8 Mov
	var_2968_string = "pers_grabitel"; // 0xea9 MovS
	var_2969_string = "grabitel.xml"; // 0xeaa MovS
	var_2970_int = var_2926_int; // 0xeab Mov
	func_438(var_2967_int, var_2968_string, var_2969_string, var_2970_int); // 0xeac Call
	
Label_3758:
	var_2971_int = 2; // 0xeae PushI
	var_2972_float = 0; var_2973_int = 0; // 0xeaf PushV
	var_2973_int = var_2920_int; // 0xeb0 Mov
	func_1022(var_2972_float, var_2973_int); // 0xeb1 Call
	var_2927_int = var_2971_int * var_2972_float; // 0xeb3 Mult2
	var_2974_int = var_2927_int; // 0xeb4 Push
	if(var_2974_int == 0) goto Label_3773; // 0xeb5 JumpB
	var_2975_int = 0; var_2976_string = ""; var_2977_string = ""; var_2978_int = 0; // 0xeb6 PushV
	var_2975_int = var_2919_int; // 0xeb7 Mov
	var_2976_string = "pers_bomber"; // 0xeb8 MovS
	var_2977_string = "bomber.xml"; // 0xeb9 MovS
	var_2978_int = var_2927_int; // 0xeba Mov
	func_438(var_2975_int, var_2976_string, var_2977_string, var_2978_int); // 0xebb Call
	
Label_3773:
	goto Label_3851; // 0xebd Jump
	
Label_3851:
	return 8; // 0xf0b Return
	
Label_3774:
	var_2979_int = 0; var_2980_string = ""; var_2981_string = ""; var_2982_int = 0; // 0xebe PushV
	var_2979_int = var_2919_int; // 0xebf Mov
	var_2980_string = "pers_woman"; // 0xec0 MovS
	var_2981_string = "woman.xml"; // 0xec1 MovS
	var_2982_int = 1; // 0xec2 MovI
	func_438(var_2979_int, var_2980_string, var_2981_string, var_2982_int); // 0xec3 Call
	var_2983_int = 0; var_2984_string = ""; var_2985_string = ""; var_2986_int = 0; // 0xec5 PushV
	var_2983_int = var_2919_int; // 0xec6 Mov
	var_2984_string = "pers_unosha"; // 0xec7 MovS
	var_2985_string = "unosha.xml"; // 0xec8 MovS
	var_2986_int = 1; // 0xec9 MovI
	func_438(var_2983_int, var_2984_string, var_2985_string, var_2986_int); // 0xeca Call
	var_2987_int = 0; var_2988_string = ""; var_2989_string = ""; var_2990_int = 0; // 0xecc PushV
	var_2987_int = var_2919_int; // 0xecd Mov
	var_2988_string = "pers_unosha"; // 0xece MovS
	var_2989_string = "unosha2.xml"; // 0xecf MovS
	var_2990_int = 1; // 0xed0 MovI
	func_438(var_2987_int, var_2988_string, var_2989_string, var_2990_int); // 0xed1 Call
	var_2991_int = 0; var_2992_string = ""; var_2993_string = ""; var_2994_int = 0; // 0xed3 PushV
	var_2991_int = var_2919_int; // 0xed4 Mov
	var_2992_string = "pers_boy"; // 0xed5 MovS
	var_2993_string = "boy.xml"; // 0xed6 MovS
	var_2994_int = 1; // 0xed7 MovI
	func_438(var_2991_int, var_2992_string, var_2993_string, var_2994_int); // 0xed8 Call
	var_2995_int = 1; // 0xeda PushI
	var_2996_int = var_2920_int + var_2995_int; // 0xedb Add
	var_2997_int = 2; // 0xedc PushI
	var_2998_bool = var_2996_int >= var_2997_int; // 0xedd GE
	if(var_2998_bool == 0) goto Label_3814; // 0xede JumpB
	var_2999_int = 0; var_3000_string = ""; var_3001_string = ""; var_3002_int = 0; // 0xedf PushV
	var_2999_int = var_2919_int; // 0xee0 Mov
	var_3000_string = "pers_patrool"; // 0xee1 MovS
	var_3001_string = "patrol.xml"; // 0xee2 MovS
	var_3002_int = 3; // 0xee3 MovI
	func_438(var_2999_int, var_3000_string, var_3001_string, var_3002_int); // 0xee4 Call
	
Label_3814:
	var_3003_int = 0; var_3004_string = ""; var_3005_string = ""; var_3006_int = 0; // 0xee6 PushV
	var_3003_int = var_2919_int; // 0xee7 Mov
	var_3004_string = "pers_rat"; // 0xee8 MovS
	var_3005_string = "rat.xml"; // 0xee9 MovS
	var_3006_int = 4; // 0xeea MovI
	func_438(var_3003_int, var_3004_string, var_3005_string, var_3006_int); // 0xeeb Call
	var_3007_int = 4; // 0xeed PushI
	var_3008_float = 0; var_3009_int = 0; // 0xeee PushV
	var_3009_int = var_2920_int; // 0xeef Mov
	func_932(var_3008_float, var_3009_int); // 0xef0 Call
	var_2928_int = var_3007_int * var_3008_float; // 0xef2 Mult2
	var_3010_int = var_2928_int; // 0xef3 Push
	if(var_3010_int == 0) goto Label_3836; // 0xef4 JumpB
	var_3011_int = 0; var_3012_string = ""; var_3013_string = ""; var_3014_int = 0; // 0xef5 PushV
	var_3011_int = var_2919_int; // 0xef6 Mov
	var_3012_string = "pers_grabitel"; // 0xef7 MovS
	var_3013_string = "grabitel.xml"; // 0xef8 MovS
	var_3014_int = var_2928_int; // 0xef9 Mov
	func_438(var_3011_int, var_3012_string, var_3013_string, var_3014_int); // 0xefa Call
	
Label_3836:
	var_3015_int = 3; // 0xefc PushI
	var_3016_float = 0; var_3017_int = 0; // 0xefd PushV
	var_3017_int = var_2920_int; // 0xefe Mov
	func_1022(var_3016_float, var_3017_int); // 0xeff Call
	var_2929_int = var_3015_int * var_3016_float; // 0xf01 Mult2
	var_3018_int = var_2929_int; // 0xf02 Push
	if(var_3018_int == 0) goto Label_3851; // 0xf03 JumpB
	var_3019_int = 0; var_3020_string = ""; var_3021_string = ""; var_3022_int = 0; // 0xf04 PushV
	var_3019_int = var_2919_int; // 0xf05 Mov
	var_3020_string = "pers_bomber"; // 0xf06 MovS
	var_3021_string = "bomber.xml"; // 0xf07 MovS
	var_3022_int = var_2929_int; // 0xf08 Mov
	func_438(var_3019_int, var_3020_string, var_3021_string, var_3022_int); // 0xf09 Call
}


func_4197(var_693_int, var_694_int, var_695_object, var_696_object, var_697_object, var_698_object)
{
	var_699_int = 0; // 0x1066 PushI
	var_700_bool = var_694_int == var_699_int; // 0x1067 Eq
	if(var_700_bool == 0) goto Label_4225; // 0x1068 JumpB
	var_701_int = 0; var_702_bool = 0; // 0x1069 PushV
	var_701_int = 2; // 0x106a MovI
	var_702_bool = 0; // 0x106b MovB
	func_731(var_701_int, var_702_bool); // 0x106c Call
	var_703_int = 0; var_704_bool = 0; var_705_int = 0; // 0x106e PushV
	var_703_int = 2; // 0x106f MovI
	var_704_bool = 0; // 0x1070 MovB
	var_705_int = 1; // 0x1071 MovI
	func_748(var_703_int, var_704_bool, var_705_int); // 0x1072 Call
	var_706_int = 0; var_707_int = 0; var_708_object = Obj(); var_709_object = Obj(); var_710_object = Obj(); // 0x1074 PushV
	var_706_int = 2; // 0x1075 MovI
	var_707_int = var_693_int; // 0x1076 Mov
	var_708_object = var_695_object; // 0x1077 Mov
	var_709_object = var_696_object; // 0x1078 Mov
	var_710_object = var_697_object; // 0x1079 Mov
	func_557(var_707_int, var_708_object, var_709_object, var_710_object); // 0x107a Call
	var_711_object = Obj(); var_712_int = 0; // 0x107c PushV
	var_711_object = var_698_object; // 0x107d Mov
	var_712_int = 0; // 0x107e MovI
	func_229(var_712_int); // 0x107f Call
	
Label_4225:
	var_713_int = 0; var_714_int = 0; // 0x1081 PushV
	var_713_int = 2; // 0x1082 MovI
	var_714_int = var_694_int; // 0x1083 Mov
	func_872(var_713_int, var_714_int); // 0x1084 Call
	var_715_int = 0; var_716_int = 0; var_717_int = 0; // 0x1086 PushV
	var_715_int = 2; // 0x1087 MovI
	var_716_int = var_693_int; // 0x1088 Mov
	var_717_int = var_694_int; // 0x1089 Mov
	func_1411(var_715_int, var_716_int, var_717_int); // 0x108a Call
	return 0; // 0x108c Return
}


func_5737(var_2391_int, var_2392_int, var_2393_object, var_2394_object, var_2395_object, var_2396_object)
{
	var_2397_int = 0; // 0x166a PushI
	var_2398_bool = var_2392_int == var_2397_int; // 0x166b Eq
	if(var_2398_bool == 0) goto Label_5765; // 0x166c JumpB
	var_2399_int = 0; var_2400_bool = 0; // 0x166d PushV
	var_2399_int = 11; // 0x166e MovI
	var_2400_bool = 1; // 0x166f MovB
	func_731(var_2399_int, var_2400_bool); // 0x1670 Call
	var_2401_int = 0; var_2402_bool = 0; var_2403_int = 0; // 0x1672 PushV
	var_2401_int = 11; // 0x1673 MovI
	var_2402_bool = 1; // 0x1674 MovB
	var_2403_int = 1; // 0x1675 MovI
	func_748(var_2401_int, var_2402_bool, var_2403_int); // 0x1676 Call
	var_2404_int = 0; var_2405_int = 0; var_2406_object = Obj(); var_2407_object = Obj(); var_2408_object = Obj(); // 0x1678 PushV
	var_2404_int = 11; // 0x1679 MovI
	var_2405_int = var_2391_int; // 0x167a Mov
	var_2406_object = var_2393_object; // 0x167b Mov
	var_2407_object = var_2394_object; // 0x167c Mov
	var_2408_object = var_2395_object; // 0x167d Mov
	func_576(var_2404_int, var_2405_int, var_2406_object, var_2407_object, var_2408_object); // 0x167e Call
	var_2409_object = Obj(); var_2410_int = 0; // 0x1680 PushV
	var_2409_object = var_2396_object; // 0x1681 Mov
	var_2410_int = 1; // 0x1682 MovI
	func_229(var_2410_int); // 0x1683 Call
	
Label_5765:
	var_2411_int = 0; var_2412_bool = 0; // 0x1685 PushV
	var_2411_int = 11; // 0x1686 MovI
	var_2412_bool = 0; // 0x1687 MovB
	func_714(var_2411_int, var_2412_bool); // 0x1688 Call
	var_2413_int = 0; var_2414_int = 0; var_2415_int = 0; // 0x168a PushV
	var_2413_int = 11; // 0x168b MovI
	var_2414_int = var_2391_int; // 0x168c Mov
	var_2415_int = var_2392_int; // 0x168d Mov
	func_2052(var_2413_int, var_2414_int, var_2415_int); // 0x168e Call
	return 0; // 0x1690 Return
}


func_8299(var_4756_int)
{
	var_4757_int = 0; var_4758_int = 0; // 0x206b PushV
	var_4759_int = 14527; // 0x206c PushI
	var_4760_int = 14526; // 0x206d PushI
	AddMessage(var_4759_int, var_4760_int, var_4758_int); // 0x206e Func
	var_4761_string = "player_mail"; // 0x2070 PushS
	var_4762_int = 1; // 0x2071 PushI
	SetVariable(var_4761_string, var_4762_int); // 0x2072 Func
	var_4756_int = var_4758_int; // 0x2074 Mov
	return 2; // 0x2075 Return
}


func_108(var_4288_object, var_4289_string)
{
	var_4290_object = Obj(); var_4291_object = Obj(); var_4292_object = Obj(); var_4293_object = Obj(); // 0x6c PushV
	GetMainOutdoorScene(var_4292_object); // 0x6d Func
	var_4294_string = ".xml"; // 0x6f PushS
	var_4295_int = var_4289_string + var_4294_string; // 0x70 Add
	AddBlankActorFromXml(var_4293_object, var_4292_object, var_4289_string, var_4295_int); // 0x71 Func
	var_4288_object = var_4293_object; // 0x73 Mov
	return 4; // 0x74 Return
}


func_7280(var_365_int, var_366_int)
{
	var_368_int = 0; var_369_object = Obj(); var_370_object = Obj(); var_371_int = 0; var_372_object = Obj(); var_373_object = Obj(); // 0x1c70 PushV
	var_374_string = "City update"; // 0x1c71 PushS
	Trace(var_374_string); // 0x1c72 Func
	var_371_int = 0; // 0x1c74 MovI
	
Label_7285:
	var_375_int = 16; // 0x1c75 PushI
	var_376_bool = var_371_int < var_375_int; // 0x1c76 LT
	if(var_376_bool == 0) goto Label_7325; // 0x1c77 JumpB
	var_377_int = 0; // 0x1c78 PushV
	var_377_int = var_371_int; // 0x1c79 Mov
	func_425(var_377_int); // 0x1c7a Call
	var_382_bool = 0; var_383_int = 0; // 0x1c7c PushV
	var_383_int = var_371_int; // 0x1c7d Mov
	func_323(var_382_bool, var_383_int); // 0x1c7e Call
	if(var_382_bool == 0) goto Label_7304; // 0x1c80 JumpB
	var_392_int = 0; var_393_int = 0; var_394_int = 0; // 0x1c81 PushV
	var_392_int = var_371_int; // 0x1c82 Mov
	var_393_int = var_365_int; // 0x1c83 Mov
	var_394_int = var_366_int; // 0x1c84 Mov
	func_7360(var_392_int, var_393_int, var_394_int); // 0x1c85 Call
	goto Label_7322; // 0x1c87 Jump
	
Label_7322:
	var_1378_int = 1; // 0x1c9a PushI
	var_371_int = var_371_int + var_1378_int; // 0x1c9b Add2
	goto Label_7285; // 0x1c9c Jump
	
Label_7304:
	var_1379_bool = 0; var_1380_int = 0; // 0x1c88 PushV
	var_1380_int = var_371_int; // 0x1c89 Mov
	func_357(var_1379_bool, var_1380_int); // 0x1c8a Call
	if(var_1379_bool == 0) goto Label_7316; // 0x1c8c JumpB
	var_1389_int = 0; var_1390_int = 0; var_1391_int = 0; // 0x1c8d PushV
	var_1389_int = var_371_int; // 0x1c8e Mov
	var_1390_int = var_365_int; // 0x1c8f Mov
	var_1391_int = var_366_int; // 0x1c90 Mov
	func_7585(var_1389_int, var_1390_int, var_1391_int); // 0x1c91 Call
	goto Label_7322; // 0x1c93 Jump
	
Label_7316:
	var_2674_int = 0; var_2675_int = 0; var_2676_int = 0; // 0x1c94 PushV
	var_2674_int = var_371_int; // 0x1c95 Mov
	var_2675_int = var_365_int; // 0x1c96 Mov
	var_2676_int = var_366_int; // 0x1c97 Mov
	func_7810(var_2674_int, var_2675_int, var_2676_int); // 0x1c98 Call
	
Label_7325:
	var_3722_int = 0; // 0x1c9d PushI
	var_3723_bool = var_366_int == var_3722_int; // 0x1c9e Eq
	if(var_3723_bool == 0) goto Label_7332; // 0x1c9f JumpB
	var_3724_int = 0; // 0x1ca0 PushV
	var_3724_int = var_365_int; // 0x1ca1 Mov
	func_11565(var_3724_int); // 0x1ca2 Call
	
Label_7332:
	var_3760_int = 10; // 0x1ca4 PushI
	var_3761_bool = var_366_int == var_3760_int; // 0x1ca5 Eq
	if(var_3761_bool == 0) goto Label_7346; // 0x1ca6 JumpB
	var_3762_string = "day time"; // 0x1ca7 PushS
	Trace(var_3762_string); // 0x1ca8 Func
	GetMainOutdoorScene(var_372_object); // 0x1caa Func
	var_3763_int = 0; // 0x1cac PushI
	var_3764_bool = 0; // 0x1cad PushB
	SwitchLights(var_3763_int, var_3764_bool); // 0x1cae ObjFunc
	var_372_object = 0; // 0x1cb0 SetNull
	goto Label_7359; // 0x1cb1 Jump
	
Label_7359:
	return 6; // 0x1cbf Return
	
Label_7346:
	var_3765_int = 18; // 0x1cb2 PushI
	var_3766_bool = var_366_int == var_3765_int; // 0x1cb3 Eq
	if(var_3766_bool == 0) goto Label_7359; // 0x1cb4 JumpB
	var_3767_string = "night time"; // 0x1cb5 PushS
	Trace(var_3767_string); // 0x1cb6 Func
	GetMainOutdoorScene(var_373_object); // 0x1cb8 Func
	var_3768_int = 0; // 0x1cba PushI
	var_3769_bool = 1; // 0x1cbb PushB
	SwitchLights(var_3768_int, var_3769_bool); // 0x1cbc ObjFunc
	var_373_object = 0; // 0x1cbe SetNull
}


func_9840(var_4788_bool)
{
	var_4791_int = 0; var_4792_string = ""; // 0x2671 PushV
	var_4792_string = "d11q03BurahVisit"; // 0x2672 MovS
	func_92(var_4791_int, var_4792_string); // 0x2673 Call
	var_4793_int = 0; // 0x2675 PushI
	var_4794_bool = var_4791_int != var_4793_int; // 0x2676 Neq
	if(var_4794_bool == 0) goto Label_9850; // 0x2677 JumpB
	var_4788_bool = 1; // 0x2678 MovB
	return 0; // 0x2679 Return
	
Label_9850:
	var_4788_bool = 0; // 0x267a MovB
	return 0; // 0x267b Return
}


func_8310(var_4631_int)
{
	var_4632_int = 0; var_4633_int = 0; // 0x2076 PushV
	var_4634_int = 15303; // 0x2077 PushI
	var_4635_int = 15302; // 0x2078 PushI
	AddMessage(var_4634_int, var_4635_int, var_4633_int); // 0x2079 Func
	var_4636_string = "player_mail"; // 0x207b PushS
	var_4637_int = 1; // 0x207c PushI
	SetVariable(var_4636_string, var_4637_int); // 0x207d Func
	var_4631_int = var_4633_int; // 0x207f Mov
	return 2; // 0x2080 Return
}


func_119(var_300_object, var_302_string, var_303_string, var_304_string)
{
	var_306_bool = 0; var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_object = Obj(); var_310_bool = 0; var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_object = Obj(); // 0x77 PushV
	GetLocator(var_302_string, var_310_bool, var_311_cvector, var_312_cvector); // 0x78 ObjFunc
	var_314_bool = var_310_bool == 0; // 0x7a Not
	if(var_314_bool == 0) goto Label_132; // 0x7b JumpB
	var_315_string = "Locator "; // 0x7c PushS
	var_316_int = var_315_string + var_302_string; // 0x7d Add
	var_317_string = " doesn't exist"; // 0x7e PushS
	var_318_int = var_316_int + var_317_string; // 0x7f Add
	Trace(var_318_int); // 0x80 Func
	var_313_object = 0; // 0x82 SetNull
	goto Label_134; // 0x83 Jump
	
Label_134:
	var_300_object = var_313_object; // 0x86 Mov
	return 8; // 0x87 Return
	
Label_132:
	AddStationaryActor(var_313_object, var_311_cvector, var_312_cvector, var_303_string, var_304_string); // 0x84 ObjFunc
}


func_6266(var_3562_int, var_3563_int, var_3564_object, var_3565_object, var_3566_object, var_3567_object)
{
	var_3568_int = 0; // 0x187b PushI
	var_3569_bool = var_3563_int == var_3568_int; // 0x187c Eq
	if(var_3569_bool == 0) goto Label_6294; // 0x187d JumpB
	var_3570_int = 0; var_3571_bool = 0; // 0x187e PushV
	var_3570_int = 14; // 0x187f MovI
	var_3571_bool = 1; // 0x1880 MovB
	func_731(var_3570_int, var_3571_bool); // 0x1881 Call
	var_3572_int = 0; var_3573_bool = 0; var_3574_int = 0; // 0x1883 PushV
	var_3572_int = 14; // 0x1884 MovI
	var_3573_bool = 1; // 0x1885 MovB
	var_3574_int = 1; // 0x1886 MovI
	func_748(var_3572_int, var_3573_bool, var_3574_int); // 0x1887 Call
	var_3575_int = 0; var_3576_int = 0; var_3577_object = Obj(); var_3578_object = Obj(); var_3579_object = Obj(); // 0x1889 PushV
	var_3575_int = 14; // 0x188a MovI
	var_3576_int = var_3562_int; // 0x188b Mov
	var_3577_object = var_3564_object; // 0x188c Mov
	var_3578_object = var_3565_object; // 0x188d Mov
	var_3579_object = var_3566_object; // 0x188e Mov
	func_655(var_3575_int, var_3576_int, var_3577_object, var_3578_object, var_3579_object); // 0x188f Call
	var_3580_object = Obj(); var_3581_int = 0; // 0x1891 PushV
	var_3580_object = var_3567_object; // 0x1892 Mov
	var_3581_int = 2; // 0x1893 MovI
	func_229(var_3581_int); // 0x1894 Call
	
Label_6294:
	var_3582_int = 0; var_3583_bool = 0; // 0x1896 PushV
	var_3582_int = 14; // 0x1897 MovI
	var_3583_bool = 0; // 0x1898 MovB
	func_714(var_3582_int, var_3583_bool); // 0x1899 Call
	var_3584_int = 0; var_3585_int = 0; var_3586_int = 0; // 0x189b PushV
	var_3584_int = 14; // 0x189c MovI
	var_3585_int = var_3562_int; // 0x189d Mov
	var_3586_int = var_3563_int; // 0x189e Mov
	func_2978(var_3584_int, var_3585_int, var_3586_int); // 0x189f Call
	return 0; // 0x18a1 Return
}


func_9852(var_4765_bool)
{
	var_4768_int = 0; var_4769_string = ""; // 0x267d PushV
	var_4769_string = "d11q04KlaraVisit"; // 0x267e MovS
	func_92(var_4768_int, var_4769_string); // 0x267f Call
	var_4770_int = 0; // 0x2681 PushI
	var_4771_bool = var_4768_int != var_4770_int; // 0x2682 Neq
	if(var_4771_bool == 0) goto Label_9862; // 0x2683 JumpB
	var_4765_bool = 1; // 0x2684 MovB
	return 0; // 0x2685 Return
	
Label_9862:
	var_4765_bool = 0; // 0x2686 MovB
	return 0; // 0x2687 Return
}


func_8321(var_4614_int)
{
	var_4615_int = 0; var_4616_int = 0; // 0x2081 PushV
	var_4617_int = 2851; // 0x2082 PushI
	var_4618_int = 2850; // 0x2083 PushI
	AddMessage(var_4617_int, var_4618_int, var_4616_int); // 0x2084 Func
	var_4619_string = "player_mail"; // 0x2086 PushS
	var_4620_int = 1; // 0x2087 PushI
	SetVariable(var_4619_string, var_4620_int); // 0x2088 Func
	var_4614_int = var_4616_int; // 0x208a Mov
	return 2; // 0x208b Return
}


func_7810(var_2674_int, var_2675_int, var_2676_int)
{
	var_2677_object = Obj(); var_2678_object = Obj(); var_2679_object = Obj(); var_2680_object = Obj(); var_2681_object = Obj(); var_2682_object = Obj(); var_2683_object = Obj(); var_2684_object = Obj(); // 0x1e82 PushV
	var_2685_object = GlobalVars[12]; // 0x1e83 PushGE
	get(var_2681_object, var_2674_int); // 0x1e84 ObjFunc
	var_2686_object = GlobalVars[13]; // 0x1e86 PushGE
	get(var_2682_object, var_2674_int); // 0x1e87 ObjFunc
	var_2687_object = GlobalVars[14]; // 0x1e89 PushGE
	get(var_2683_object, var_2674_int); // 0x1e8a ObjFunc
	var_2688_object = GlobalVars[17]; // 0x1e8c PushGE
	get(var_2684_object, var_2674_int); // 0x1e8d ObjFunc
	var_2689_int = 0; // 0x1e8f PushI
	var_2690_bool = var_2674_int == var_2689_int; // 0x1e90 Eq
	if(var_2690_bool == 0) goto Label_7836; // 0x1e91 JumpB
	var_2691_int = 0; var_2692_int = 0; var_2693_object = Obj(); var_2694_object = Obj(); var_2695_object = Obj(); var_2696_object = Obj(); // 0x1e92 PushV
	var_2691_int = var_2675_int; // 0x1e93 Mov
	var_2692_int = var_2676_int; // 0x1e94 Mov
	var_2693_object = var_2681_object; // 0x1e95 Mov
	var_2694_object = var_2682_object; // 0x1e96 Mov
	var_2695_object = var_2683_object; // 0x1e97 Mov
	var_2696_object = var_2684_object; // 0x1e98 Mov
	func_3934(var_2691_int, var_2692_int, var_2693_object, var_2694_object, var_2695_object, var_2696_object); // 0x1e99 Call
	goto Label_8030; // 0x1e9b Jump
	
Label_8030:
	return 8; // 0x1f5e Return
	
Label_7836:
	var_2895_int = 1; // 0x1e9c PushI
	var_2896_bool = var_2674_int == var_2895_int; // 0x1e9d Eq
	if(var_2896_bool == 0) goto Label_7849; // 0x1e9e JumpB
	var_2897_int = 0; var_2898_int = 0; var_2899_object = Obj(); var_2900_object = Obj(); var_2901_object = Obj(); var_2902_object = Obj(); // 0x1e9f PushV
	var_2897_int = var_2675_int; // 0x1ea0 Mov
	var_2898_int = var_2676_int; // 0x1ea1 Mov
	var_2899_object = var_2681_object; // 0x1ea2 Mov
	var_2900_object = var_2682_object; // 0x1ea3 Mov
	var_2901_object = var_2683_object; // 0x1ea4 Mov
	var_2902_object = var_2684_object; // 0x1ea5 Mov
	func_4086(var_2897_int, var_2898_int, var_2899_object, var_2900_object, var_2901_object, var_2902_object); // 0x1ea6 Call
	goto Label_8030; // 0x1ea8 Jump
	
Label_7849:
	var_3023_int = 2; // 0x1ea9 PushI
	var_3024_bool = var_2674_int == var_3023_int; // 0x1eaa Eq
	if(var_3024_bool == 0) goto Label_7862; // 0x1eab JumpB
	var_3025_int = 0; var_3026_int = 0; var_3027_object = Obj(); var_3028_object = Obj(); var_3029_object = Obj(); var_3030_object = Obj(); // 0x1eac PushV
	var_3025_int = var_2675_int; // 0x1ead Mov
	var_3026_int = var_2676_int; // 0x1eae Mov
	var_3027_object = var_2681_object; // 0x1eaf Mov
	var_3028_object = var_2682_object; // 0x1eb0 Mov
	var_3029_object = var_2683_object; // 0x1eb1 Mov
	var_3030_object = var_2684_object; // 0x1eb2 Mov
	func_4277(var_3025_int, var_3026_int, var_3027_object, var_3028_object, var_3029_object, var_3030_object); // 0x1eb3 Call
	goto Label_8030; // 0x1eb5 Jump
	
Label_7862:
	var_3158_int = 3; // 0x1eb6 PushI
	var_3159_bool = var_2674_int == var_3158_int; // 0x1eb7 Eq
	if(var_3159_bool == 0) goto Label_7875; // 0x1eb8 JumpB
	var_3160_int = 0; var_3161_int = 0; var_3162_object = Obj(); var_3163_object = Obj(); var_3164_object = Obj(); var_3165_object = Obj(); // 0x1eb9 PushV
	var_3160_int = var_2675_int; // 0x1eba Mov
	var_3161_int = var_2676_int; // 0x1ebb Mov
	var_3162_object = var_2681_object; // 0x1ebc Mov
	var_3163_object = var_2682_object; // 0x1ebd Mov
	var_3164_object = var_2683_object; // 0x1ebe Mov
	var_3165_object = var_2684_object; // 0x1ebf Mov
	func_4450(var_3160_int, var_3161_int, var_3162_object, var_3163_object, var_3164_object, var_3165_object); // 0x1ec0 Call
	goto Label_8030; // 0x1ec2 Jump
	
Label_7875:
	var_3185_int = 4; // 0x1ec3 PushI
	var_3186_bool = var_2674_int == var_3185_int; // 0x1ec4 Eq
	if(var_3186_bool == 0) goto Label_7888; // 0x1ec5 JumpB
	var_3187_int = 0; var_3188_int = 0; var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj(); var_3192_object = Obj(); // 0x1ec6 PushV
	var_3187_int = var_2675_int; // 0x1ec7 Mov
	var_3188_int = var_2676_int; // 0x1ec8 Mov
	var_3189_object = var_2681_object; // 0x1ec9 Mov
	var_3190_object = var_2682_object; // 0x1eca Mov
	var_3191_object = var_2683_object; // 0x1ecb Mov
	var_3192_object = var_2684_object; // 0x1ecc Mov
	func_4632(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object); // 0x1ecd Call
	goto Label_8030; // 0x1ecf Jump
	
Label_7888:
	var_3212_int = 5; // 0x1ed0 PushI
	var_3213_bool = var_2674_int == var_3212_int; // 0x1ed1 Eq
	if(var_3213_bool == 0) goto Label_7901; // 0x1ed2 JumpB
	var_3214_int = 0; var_3215_int = 0; var_3216_object = Obj(); var_3217_object = Obj(); var_3218_object = Obj(); var_3219_object = Obj(); // 0x1ed3 PushV
	var_3214_int = var_2675_int; // 0x1ed4 Mov
	var_3215_int = var_2676_int; // 0x1ed5 Mov
	var_3216_object = var_2681_object; // 0x1ed6 Mov
	var_3217_object = var_2682_object; // 0x1ed7 Mov
	var_3218_object = var_2683_object; // 0x1ed8 Mov
	var_3219_object = var_2684_object; // 0x1ed9 Mov
	func_4832(var_3214_int, var_3215_int, var_3216_object, var_3217_object, var_3218_object, var_3219_object); // 0x1eda Call
	goto Label_8030; // 0x1edc Jump
	
Label_7901:
	var_3239_int = 6; // 0x1edd PushI
	var_3240_bool = var_2674_int == var_3239_int; // 0x1ede Eq
	if(var_3240_bool == 0) goto Label_7914; // 0x1edf JumpB
	var_3241_int = 0; var_3242_int = 0; var_3243_object = Obj(); var_3244_object = Obj(); var_3245_object = Obj(); var_3246_object = Obj(); // 0x1ee0 PushV
	var_3241_int = var_2675_int; // 0x1ee1 Mov
	var_3242_int = var_2676_int; // 0x1ee2 Mov
	var_3243_object = var_2681_object; // 0x1ee3 Mov
	var_3244_object = var_2682_object; // 0x1ee4 Mov
	var_3245_object = var_2683_object; // 0x1ee5 Mov
	var_3246_object = var_2684_object; // 0x1ee6 Mov
	func_4942(var_3241_int, var_3242_int, var_3243_object, var_3244_object, var_3245_object, var_3246_object); // 0x1ee7 Call
	goto Label_8030; // 0x1ee9 Jump
	
Label_7914:
	var_3263_int = 7; // 0x1eea PushI
	var_3264_bool = var_2674_int == var_3263_int; // 0x1eeb Eq
	if(var_3264_bool == 0) goto Label_7927; // 0x1eec JumpB
	var_3265_int = 0; var_3266_int = 0; var_3267_object = Obj(); var_3268_object = Obj(); var_3269_object = Obj(); var_3270_object = Obj(); // 0x1eed PushV
	var_3265_int = var_2675_int; // 0x1eee Mov
	var_3266_int = var_2676_int; // 0x1eef Mov
	var_3267_object = var_2681_object; // 0x1ef0 Mov
	var_3268_object = var_2682_object; // 0x1ef1 Mov
	var_3269_object = var_2683_object; // 0x1ef2 Mov
	var_3270_object = var_2684_object; // 0x1ef3 Mov
	func_5100(var_3265_int, var_3266_int, var_3267_object, var_3268_object, var_3269_object, var_3270_object); // 0x1ef4 Call
	goto Label_8030; // 0x1ef6 Jump
	
Label_7927:
	var_3398_int = 8; // 0x1ef7 PushI
	var_3399_bool = var_2674_int == var_3398_int; // 0x1ef8 Eq
	if(var_3399_bool == 0) goto Label_7940; // 0x1ef9 JumpB
	var_3400_int = 0; var_3401_int = 0; var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj(); // 0x1efa PushV
	var_3400_int = var_2675_int; // 0x1efb Mov
	var_3401_int = var_2676_int; // 0x1efc Mov
	var_3402_object = var_2681_object; // 0x1efd Mov
	var_3403_object = var_2682_object; // 0x1efe Mov
	var_3404_object = var_2683_object; // 0x1eff Mov
	var_3405_object = var_2684_object; // 0x1f00 Mov
	func_5255(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object); // 0x1f01 Call
	goto Label_8030; // 0x1f03 Jump
	
Label_7940:
	var_3425_int = 9; // 0x1f04 PushI
	var_3426_bool = var_2674_int == var_3425_int; // 0x1f05 Eq
	if(var_3426_bool == 0) goto Label_7953; // 0x1f06 JumpB
	var_3427_int = 0; var_3428_int = 0; var_3429_object = Obj(); var_3430_object = Obj(); var_3431_object = Obj(); var_3432_object = Obj(); // 0x1f07 PushV
	var_3427_int = var_2675_int; // 0x1f08 Mov
	var_3428_int = var_2676_int; // 0x1f09 Mov
	var_3429_object = var_2681_object; // 0x1f0a Mov
	var_3430_object = var_2682_object; // 0x1f0b Mov
	var_3431_object = var_2683_object; // 0x1f0c Mov
	var_3432_object = var_2684_object; // 0x1f0d Mov
	func_5428(var_3427_int, var_3428_int, var_3429_object, var_3430_object, var_3431_object, var_3432_object); // 0x1f0e Call
	goto Label_8030; // 0x1f10 Jump
	
Label_7953:
	var_3452_int = 10; // 0x1f11 PushI
	var_3453_bool = var_2674_int == var_3452_int; // 0x1f12 Eq
	if(var_3453_bool == 0) goto Label_7966; // 0x1f13 JumpB
	var_3454_int = 0; var_3455_int = 0; var_3456_object = Obj(); var_3457_object = Obj(); var_3458_object = Obj(); var_3459_object = Obj(); // 0x1f14 PushV
	var_3454_int = var_2675_int; // 0x1f15 Mov
	var_3455_int = var_2676_int; // 0x1f16 Mov
	var_3456_object = var_2681_object; // 0x1f17 Mov
	var_3457_object = var_2682_object; // 0x1f18 Mov
	var_3458_object = var_2683_object; // 0x1f19 Mov
	var_3459_object = var_2684_object; // 0x1f1a Mov
	func_5601(var_3454_int, var_3455_int, var_3456_object, var_3457_object, var_3458_object, var_3459_object); // 0x1f1b Call
	goto Label_8030; // 0x1f1d Jump
	
Label_7966:
	var_3479_int = 11; // 0x1f1e PushI
	var_3480_bool = var_2674_int == var_3479_int; // 0x1f1f Eq
	if(var_3480_bool == 0) goto Label_7979; // 0x1f20 JumpB
	var_3481_int = 0; var_3482_int = 0; var_3483_object = Obj(); var_3484_object = Obj(); var_3485_object = Obj(); var_3486_object = Obj(); // 0x1f21 PushV
	var_3481_int = var_2675_int; // 0x1f22 Mov
	var_3482_int = var_2676_int; // 0x1f23 Mov
	var_3483_object = var_2681_object; // 0x1f24 Mov
	var_3484_object = var_2682_object; // 0x1f25 Mov
	var_3485_object = var_2683_object; // 0x1f26 Mov
	var_3486_object = var_2684_object; // 0x1f27 Mov
	func_5777(var_3481_int, var_3482_int, var_3483_object, var_3484_object, var_3485_object, var_3486_object); // 0x1f28 Call
	goto Label_8030; // 0x1f2a Jump
	
Label_7979:
	var_3506_int = 12; // 0x1f2b PushI
	var_3507_bool = var_2674_int == var_3506_int; // 0x1f2c Eq
	if(var_3507_bool == 0) goto Label_7992; // 0x1f2d JumpB
	var_3508_int = 0; var_3509_int = 0; var_3510_object = Obj(); var_3511_object = Obj(); var_3512_object = Obj(); var_3513_object = Obj(); // 0x1f2e PushV
	var_3508_int = var_2675_int; // 0x1f2f Mov
	var_3509_int = var_2676_int; // 0x1f30 Mov
	var_3510_object = var_2681_object; // 0x1f31 Mov
	var_3511_object = var_2682_object; // 0x1f32 Mov
	var_3512_object = var_2683_object; // 0x1f33 Mov
	var_3513_object = var_2684_object; // 0x1f34 Mov
	func_5935(var_3508_int, var_3509_int, var_3510_object, var_3511_object, var_3512_object, var_3513_object); // 0x1f35 Call
	goto Label_8030; // 0x1f37 Jump
	
Label_7992:
	var_3533_int = 13; // 0x1f38 PushI
	var_3534_bool = var_2674_int == var_3533_int; // 0x1f39 Eq
	if(var_3534_bool == 0) goto Label_8005; // 0x1f3a JumpB
	var_3535_int = 0; var_3536_int = 0; var_3537_object = Obj(); var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj(); // 0x1f3b PushV
	var_3535_int = var_2675_int; // 0x1f3c Mov
	var_3536_int = var_2676_int; // 0x1f3d Mov
	var_3537_object = var_2681_object; // 0x1f3e Mov
	var_3538_object = var_2682_object; // 0x1f3f Mov
	var_3539_object = var_2683_object; // 0x1f40 Mov
	var_3540_object = var_2684_object; // 0x1f41 Mov
	func_6102(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object); // 0x1f42 Call
	goto Label_8030; // 0x1f44 Jump
	
Label_8005:
	var_3560_int = 14; // 0x1f45 PushI
	var_3561_bool = var_2674_int == var_3560_int; // 0x1f46 Eq
	if(var_3561_bool == 0) goto Label_8018; // 0x1f47 JumpB
	var_3562_int = 0; var_3563_int = 0; var_3564_object = Obj(); var_3565_object = Obj(); var_3566_object = Obj(); var_3567_object = Obj(); // 0x1f48 PushV
	var_3562_int = var_2675_int; // 0x1f49 Mov
	var_3563_int = var_2676_int; // 0x1f4a Mov
	var_3564_object = var_2681_object; // 0x1f4b Mov
	var_3565_object = var_2682_object; // 0x1f4c Mov
	var_3566_object = var_2683_object; // 0x1f4d Mov
	var_3567_object = var_2684_object; // 0x1f4e Mov
	func_6266(var_3562_int, var_3563_int, var_3564_object, var_3565_object, var_3566_object, var_3567_object); // 0x1f4f Call
	goto Label_8030; // 0x1f51 Jump
	
Label_8018:
	var_3695_int = 15; // 0x1f52 PushI
	var_3696_bool = var_2674_int == var_3695_int; // 0x1f53 Eq
	if(var_3696_bool == 0) goto Label_8030; // 0x1f54 JumpB
	var_3697_int = 0; var_3698_int = 0; var_3699_object = Obj(); var_3700_object = Obj(); var_3701_object = Obj(); var_3702_object = Obj(); // 0x1f55 PushV
	var_3697_int = var_2675_int; // 0x1f56 Mov
	var_3698_int = var_2676_int; // 0x1f57 Mov
	var_3699_object = var_2681_object; // 0x1f58 Mov
	var_3700_object = var_2682_object; // 0x1f59 Mov
	var_3701_object = var_2683_object; // 0x1f5a Mov
	var_3702_object = var_2684_object; // 0x1f5b Mov
	func_6409(var_3697_int, var_3698_int, var_3699_object, var_3700_object, var_3701_object, var_3702_object); // 0x1f5c Call
}


func_11395()
{
	var_3915_string = "player"; // 0x2c83 PushS
	var_3916_int = 0; // 0x2c84 PushI
	SetVariable(var_3915_string, var_3916_int); // 0x2c85 Func
	return 0; // 0x2c87 Return
}


func_6791()
{
	var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; // 0x1a87 PushV
	var_26_object = GlobalVars[17]; // 0x1a88 PushGE
	var_27_object = Obj(); // 0x1a89 PushV
	func_86(var_27_object); // 0x1a8a Call
	var_26_object = var_27_object; // 0x1a8b Mov
	GlobalVars[17] = var_26_object; // 0x1a8d PopGE
	var_30_object = GlobalVars[12]; // 0x1a8e PushGE
	var_31_object = Obj(); // 0x1a8f PushV
	func_86(var_31_object); // 0x1a90 Call
	var_30_object = var_31_object; // 0x1a91 Mov
	GlobalVars[12] = var_30_object; // 0x1a93 PopGE
	var_32_object = GlobalVars[13]; // 0x1a94 PushGE
	var_33_object = Obj(); // 0x1a95 PushV
	func_86(var_33_object); // 0x1a96 Call
	var_32_object = var_33_object; // 0x1a97 Mov
	GlobalVars[13] = var_32_object; // 0x1a99 PopGE
	var_34_object = GlobalVars[14]; // 0x1a9a PushGE
	var_35_object = Obj(); // 0x1a9b PushV
	func_86(var_35_object); // 0x1a9c Call
	var_34_object = var_35_object; // 0x1a9d Mov
	GlobalVars[14] = var_34_object; // 0x1a9f PopGE
	var_22_int = 0; // 0x1aa0 MovI
	
Label_6817:
	var_36_int = 16; // 0x1aa1 PushI
	var_37_bool = var_22_int < var_36_int; // 0x1aa2 LT
	if(var_37_bool == 0) goto Label_6841; // 0x1aa3 JumpB
	var_38_object = GlobalVars[12]; // 0x1aa4 PushGE
	var_39_object = Obj(); // 0x1aa5 PushV
	func_86(var_39_object); // 0x1aa6 Call
	add(var_39_object); // 0x1aa8 ObjFunc
	var_40_object = GlobalVars[13]; // 0x1aaa PushGE
	var_41_object = Obj(); // 0x1aab PushV
	func_86(var_41_object); // 0x1aac Call
	add(var_41_object); // 0x1aae ObjFunc
	var_42_object = GlobalVars[14]; // 0x1ab0 PushGE
	var_43_object = Obj(); // 0x1ab1 PushV
	func_86(var_43_object); // 0x1ab2 Call
	add(var_43_object); // 0x1ab4 ObjFunc
	var_44_int = 1; // 0x1ab6 PushI
	var_22_int = var_22_int + var_44_int; // 0x1ab7 Add2
	goto Label_6817; // 0x1ab8 Jump
	
Label_6841:
	CreateStringVector(var_23_object); // 0x1ab9 Func
	var_45_object = GlobalVars[17]; // 0x1abb PushGE
	add(var_23_object); // 0x1abc ObjFunc
	var_46_object = Obj(); // 0x1abe PushV
	var_46_object = var_23_object; // 0x1abf Mov
	func_3852(); // 0x1ac0 Call
	CreateStringVector(var_23_object); // 0x1ac2 Func
	var_47_object = GlobalVars[17]; // 0x1ac4 PushGE
	add(var_23_object); // 0x1ac5 ObjFunc
	var_48_object = Obj(); // 0x1ac7 PushV
	var_48_object = var_23_object; // 0x1ac8 Mov
	func_3974(); // 0x1ac9 Call
	CreateStringVector(var_23_object); // 0x1acb Func
	var_59_object = GlobalVars[17]; // 0x1acd PushGE
	add(var_23_object); // 0x1ace ObjFunc
	var_60_object = Obj(); // 0x1ad0 PushV
	var_60_object = var_23_object; // 0x1ad1 Mov
	func_4126(); // 0x1ad2 Call
	CreateStringVector(var_23_object); // 0x1ad4 Func
	var_84_object = GlobalVars[17]; // 0x1ad6 PushGE
	add(var_23_object); // 0x1ad7 ObjFunc
	var_85_object = Obj(); // 0x1ad9 PushV
	var_85_object = var_23_object; // 0x1ada Mov
	func_4317(); // 0x1adb Call
	CreateStringVector(var_23_object); // 0x1add Func
	var_103_object = GlobalVars[17]; // 0x1adf PushGE
	add(var_23_object); // 0x1ae0 ObjFunc
	var_104_object = Obj(); // 0x1ae2 PushV
	var_104_object = var_23_object; // 0x1ae3 Mov
	func_4490(); // 0x1ae4 Call
	CreateStringVector(var_23_object); // 0x1ae6 Func
	var_125_object = GlobalVars[17]; // 0x1ae8 PushGE
	add(var_23_object); // 0x1ae9 ObjFunc
	var_126_object = Obj(); // 0x1aeb PushV
	var_126_object = var_23_object; // 0x1aec Mov
	func_4672(); // 0x1aed Call
	CreateStringVector(var_23_object); // 0x1aef Func
	var_153_object = GlobalVars[17]; // 0x1af1 PushGE
	add(var_23_object); // 0x1af2 ObjFunc
	var_154_object = Obj(); // 0x1af4 PushV
	var_154_object = var_23_object; // 0x1af5 Mov
	func_4872(); // 0x1af6 Call
	CreateStringVector(var_23_object); // 0x1af8 Func
	var_155_object = GlobalVars[17]; // 0x1afa PushGE
	add(var_23_object); // 0x1afb ObjFunc
	var_156_object = Obj(); // 0x1afd PushV
	var_156_object = var_23_object; // 0x1afe Mov
	func_4976(); // 0x1aff Call
	CreateStringVector(var_23_object); // 0x1b01 Func
	var_171_object = GlobalVars[17]; // 0x1b03 PushGE
	add(var_23_object); // 0x1b04 ObjFunc
	var_172_object = Obj(); // 0x1b06 PushV
	var_172_object = var_23_object; // 0x1b07 Mov
	func_5140(); // 0x1b08 Call
	CreateStringVector(var_23_object); // 0x1b0a Func
	var_184_object = GlobalVars[17]; // 0x1b0c PushGE
	add(var_23_object); // 0x1b0d ObjFunc
	var_185_object = Obj(); // 0x1b0f PushV
	var_185_object = var_23_object; // 0x1b10 Mov
	func_5295(); // 0x1b11 Call
	CreateStringVector(var_23_object); // 0x1b13 Func
	var_203_object = GlobalVars[17]; // 0x1b15 PushGE
	add(var_23_object); // 0x1b16 ObjFunc
	var_204_object = Obj(); // 0x1b18 PushV
	var_204_object = var_23_object; // 0x1b19 Mov
	func_5468(); // 0x1b1a Call
	CreateStringVector(var_23_object); // 0x1b1c Func
	var_222_object = GlobalVars[17]; // 0x1b1e PushGE
	add(var_23_object); // 0x1b1f ObjFunc
	var_223_object = Obj(); // 0x1b21 PushV
	var_223_object = var_23_object; // 0x1b22 Mov
	func_5641(); // 0x1b23 Call
	CreateStringVector(var_23_object); // 0x1b25 Func
	var_242_object = GlobalVars[17]; // 0x1b27 PushGE
	add(var_23_object); // 0x1b28 ObjFunc
	var_243_object = Obj(); // 0x1b2a PushV
	var_243_object = var_23_object; // 0x1b2b Mov
	func_5817(); // 0x1b2c Call
	CreateStringVector(var_23_object); // 0x1b2e Func
	var_256_object = GlobalVars[17]; // 0x1b30 PushGE
	add(var_23_object); // 0x1b31 ObjFunc
	var_257_object = Obj(); // 0x1b33 PushV
	var_257_object = var_23_object; // 0x1b34 Mov
	func_5975(); // 0x1b35 Call
	CreateStringVector(var_23_object); // 0x1b37 Func
	var_273_object = GlobalVars[17]; // 0x1b39 PushGE
	add(var_23_object); // 0x1b3a ObjFunc
	var_274_object = Obj(); // 0x1b3c PushV
	var_274_object = var_23_object; // 0x1b3d Mov
	func_6142(); // 0x1b3e Call
	CreateStringVector(var_23_object); // 0x1b40 Func
	var_289_object = GlobalVars[17]; // 0x1b42 PushGE
	add(var_23_object); // 0x1b43 ObjFunc
	var_290_object = Obj(); // 0x1b45 PushV
	var_290_object = var_23_object; // 0x1b46 Mov
	func_6306(); // 0x1b47 Call
	GetMainOutdoorScene(var_24_object); // 0x1b49 Func
	var_25_int = 1; // 0x1b4b MovI
	
Label_6988:
	var_298_int = 17; // 0x1b4c PushI
	var_299_bool = var_25_int <= var_298_int; // 0x1b4d LE
	if(var_299_bool == 0) goto Label_7002; // 0x1b4e JumpB
	var_300_object = Obj(); var_301_object = Obj(); var_302_string = ""; var_303_string = ""; var_304_string = ""; // 0x1b4f PushV
	var_301_object = var_24_object; // 0x1b50 Mov
	var_305_string = "pt_bull"; // 0x1b51 PushS
	var_302_string = var_305_string + var_25_int; // 0x1b52 Add2
	var_303_string = "pers_bull"; // 0x1b53 MovS
	var_304_string = "bull.xml"; // 0x1b54 MovS
	func_119(var_301_object, var_302_string, var_303_string, var_304_string); // 0x1b55 Call
	var_319_int = 1; // 0x1b57 PushI
	var_25_int = var_25_int + var_319_int; // 0x1b58 Add2
	goto Label_6988; // 0x1b59 Jump
	
Label_7002:
	return 8; // 0x1b5a Return
}


func_11400(var_118_bool, var_119_int)
{
	var_120_int = 6; // 0x2c89 PushI
	var_121_bool = var_119_int == var_120_int; // 0x2c8a Eq
	if(var_121_bool == 0) goto Label_11406; // 0x2c8b JumpB
	var_118_bool = 0; // 0x2c8c MovB
	return 0; // 0x2c8d Return
	
Label_11406:
	var_122_bool = 0; var_123_int = 0; // 0x2c8e PushV
	var_123_int = 4; // 0x2c8f MovI
	func_217(var_122_bool, var_123_int); // 0x2c90 Call
	if(var_122_bool == 0) goto Label_11422; // 0x2c92 JumpB
	var_130_int = 15; // 0x2c93 PushI
	var_131_bool = var_119_int == var_130_int; // 0x2c94 Eq
	if(var_131_bool == 0) goto Label_11416; // 0x2c95 JumpB
	var_118_bool = 0; // 0x2c96 MovB
	return 0; // 0x2c97 Return
	
Label_11416:
	var_132_int = 9; // 0x2c98 PushI
	var_133_bool = var_119_int == var_132_int; // 0x2c99 Eq
	if(var_133_bool == 0) goto Label_11421; // 0x2c9a JumpB
	var_118_bool = 0; // 0x2c9b MovB
	return 0; // 0x2c9c Return
	
Label_11421:
	goto Label_11443; // 0x2c9d Jump
	
Label_11443:
	var_118_bool = 1; // 0x2cb3 MovB
	return 0; // 0x2cb4 Return
	
Label_11422:
	var_134_bool = 0; var_135_int = 0; // 0x2c9e PushV
	var_135_int = 5; // 0x2c9f MovI
	func_217(var_134_bool, var_135_int); // 0x2ca0 Call
	if(var_134_bool == 0) goto Label_11433; // 0x2ca2 JumpB
	var_136_int = 15; // 0x2ca3 PushI
	var_137_bool = var_119_int == var_136_int; // 0x2ca4 Eq
	if(var_137_bool == 0) goto Label_11432; // 0x2ca5 JumpB
	var_118_bool = 0; // 0x2ca6 MovB
	return 0; // 0x2ca7 Return
	
Label_11432:
	goto Label_11443; // 0x2ca8 Jump
	
Label_11433:
	var_138_bool = 0; var_139_int = 0; // 0x2ca9 PushV
	var_139_int = 6; // 0x2caa MovI
	func_217(var_138_bool, var_139_int); // 0x2cab Call
	if(var_138_bool == 0) goto Label_11443; // 0x2cad JumpB
	var_140_int = 15; // 0x2cae PushI
	var_141_bool = var_119_int == var_140_int; // 0x2caf Eq
	if(var_141_bool == 0) goto Label_11443; // 0x2cb0 JumpB
	var_118_bool = 0; // 0x2cb1 MovB
	return 0; // 0x2cb2 Return
}


func_137(var_3922_string, var_3923_bool)
{
	var_3924_object = Obj(); var_3925_object = Obj(); // 0x89 PushV
	FindActor(var_3925_object, var_3922_string); // 0x8a Func
	var_3926_bool = var_3925_object == 0; // 0x8c Not
	if(var_3926_bool == 0) goto Label_148; // 0x8d JumpB
	var_3927_string = "Door "; // 0x8e PushS
	var_3928_int = var_3927_string + var_3922_string; // 0x8f Add
	var_3929_string = " not found"; // 0x90 PushS
	var_3930_int = var_3928_int + var_3929_string; // 0x91 Add
	Trace(var_3930_int); // 0x92 Func
	
Label_148:
	var_3931_string = "locked"; // 0x94 PushS
	SetProperty(var_3931_string, var_3923_bool); // 0x95 ObjFunc
	return 2; // 0x97 Return
}


func_5255(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object)
{
	var_3406_int = 0; // 0x1488 PushI
	var_3407_bool = var_3401_int == var_3406_int; // 0x1489 Eq
	if(var_3407_bool == 0) goto Label_5283; // 0x148a JumpB
	var_3408_int = 0; var_3409_bool = 0; // 0x148b PushV
	var_3408_int = 8; // 0x148c MovI
	var_3409_bool = 1; // 0x148d MovB
	func_731(var_3408_int, var_3409_bool); // 0x148e Call
	var_3410_int = 0; var_3411_bool = 0; var_3412_int = 0; // 0x1490 PushV
	var_3410_int = 8; // 0x1491 MovI
	var_3411_bool = 1; // 0x1492 MovB
	var_3412_int = 1; // 0x1493 MovI
	func_748(var_3410_int, var_3411_bool, var_3412_int); // 0x1494 Call
	var_3413_int = 0; var_3414_int = 0; var_3415_object = Obj(); var_3416_object = Obj(); var_3417_object = Obj(); // 0x1496 PushV
	var_3413_int = 8; // 0x1497 MovI
	var_3414_int = var_3400_int; // 0x1498 Mov
	var_3415_object = var_3402_object; // 0x1499 Mov
	var_3416_object = var_3403_object; // 0x149a Mov
	var_3417_object = var_3404_object; // 0x149b Mov
	func_655(var_3413_int, var_3414_int, var_3415_object, var_3416_object, var_3417_object); // 0x149c Call
	var_3418_object = Obj(); var_3419_int = 0; // 0x149e PushV
	var_3418_object = var_3405_object; // 0x149f Mov
	var_3419_int = 2; // 0x14a0 MovI
	func_229(var_3419_int); // 0x14a1 Call
	
Label_5283:
	var_3420_int = 0; var_3421_bool = 0; // 0x14a3 PushV
	var_3420_int = 8; // 0x14a4 MovI
	var_3421_bool = 0; // 0x14a5 MovB
	func_714(var_3420_int, var_3421_bool); // 0x14a6 Call
	var_3422_int = 0; var_3423_int = 0; var_3424_int = 0; // 0x14a8 PushV
	var_3422_int = 8; // 0x14a9 MovI
	var_3423_int = var_3400_int; // 0x14aa Mov
	var_3424_int = var_3401_int; // 0x14ab Mov
	func_3158(var_3422_int, var_3423_int, var_3424_int); // 0x14ac Call
	return 0; // 0x14ae Return
}


func_9864(var_4587_bool)
{
	var_4587_bool = 1; // 0x2689 MovB
	return 0; // 0x268a Return
}


func_8332(var_4648_int)
{
	var_4649_int = 0; var_4650_int = 0; // 0x208c PushV
	var_4651_int = 15334; // 0x208d PushI
	var_4652_int = 15333; // 0x208e PushI
	AddMessage(var_4651_int, var_4652_int, var_4650_int); // 0x208f Func
	var_4653_string = "player_mail"; // 0x2091 PushS
	var_4654_int = 1; // 0x2092 PushI
	SetVariable(var_4653_string, var_4654_int); // 0x2093 Func
	var_4648_int = var_4650_int; // 0x2095 Mov
	return 2; // 0x2096 Return
}


func_4237(var_1827_int, var_1828_int, var_1829_object, var_1830_object, var_1831_object, var_1832_object)
{
	var_1833_int = 0; // 0x108e PushI
	var_1834_bool = var_1828_int == var_1833_int; // 0x108f Eq
	if(var_1834_bool == 0) goto Label_4265; // 0x1090 JumpB
	var_1835_int = 0; var_1836_bool = 0; // 0x1091 PushV
	var_1835_int = 2; // 0x1092 MovI
	var_1836_bool = 1; // 0x1093 MovB
	func_731(var_1835_int, var_1836_bool); // 0x1094 Call
	var_1837_int = 0; var_1838_bool = 0; var_1839_int = 0; // 0x1096 PushV
	var_1837_int = 2; // 0x1097 MovI
	var_1838_bool = 1; // 0x1098 MovB
	var_1839_int = 1; // 0x1099 MovI
	func_748(var_1837_int, var_1838_bool, var_1839_int); // 0x109a Call
	var_1840_int = 0; var_1841_int = 0; var_1842_object = Obj(); var_1843_object = Obj(); var_1844_object = Obj(); // 0x109c PushV
	var_1840_int = 2; // 0x109d MovI
	var_1841_int = var_1827_int; // 0x109e Mov
	var_1842_object = var_1829_object; // 0x109f Mov
	var_1843_object = var_1830_object; // 0x10a0 Mov
	var_1844_object = var_1831_object; // 0x10a1 Mov
	func_576(var_1840_int, var_1841_int, var_1842_object, var_1843_object, var_1844_object); // 0x10a2 Call
	var_1845_object = Obj(); var_1846_int = 0; // 0x10a4 PushV
	var_1845_object = var_1832_object; // 0x10a5 Mov
	var_1846_int = 1; // 0x10a6 MovI
	func_229(var_1846_int); // 0x10a7 Call
	
Label_4265:
	var_1847_int = 0; var_1848_bool = 0; // 0x10a9 PushV
	var_1847_int = 2; // 0x10aa MovI
	var_1848_bool = 0; // 0x10ab MovB
	func_714(var_1847_int, var_1848_bool); // 0x10ac Call
	var_1849_int = 0; var_1850_int = 0; var_1851_int = 0; // 0x10ae PushV
	var_1849_int = 2; // 0x10af MovI
	var_1850_int = var_1827_int; // 0x10b0 Mov
	var_1851_int = var_1828_int; // 0x10b1 Mov
	func_2310(var_1849_int, var_1850_int, var_1851_int); // 0x10b2 Call
	return 0; // 0x10b4 Return
}


func_9869(var_4600_bool)
{
	var_4603_int = 0; var_4604_string = ""; // 0x268e PushV
	var_4604_string = "d3RubinVisit"; // 0x268f MovS
	func_92(var_4603_int, var_4604_string); // 0x2690 Call
	var_4605_int = 1; // 0x2692 PushI
	var_4606_bool = var_4603_int == var_4605_int; // 0x2693 Eq
	if(var_4606_bool == 0) goto Label_9879; // 0x2694 JumpB
	var_4600_bool = 1; // 0x2695 MovB
	return 0; // 0x2696 Return
	
Label_9879:
	var_4600_bool = 0; // 0x2697 MovB
	return 0; // 0x2698 Return
}


func_655(var_2704_int, var_2705_int, var_2706_object, var_2707_object, var_2708_object)
{
	var_2709_int = 0; var_2710_bool = 0; // 0x290 PushV
	var_2709_int = var_2704_int; // 0x291 Mov
	var_2710_bool = 0; // 0x292 MovB
	func_477(var_2709_int, var_2710_bool); // 0x293 Call
	var_2711_object = Obj(); // 0x295 PushV
	var_2711_object = var_2706_object; // 0x296 Mov
	func_189(); // 0x297 Call
	var_2712_object = Obj(); // 0x299 PushV
	var_2712_object = var_2707_object; // 0x29a Mov
	func_189(); // 0x29b Call
	var_2713_object = Obj(); // 0x29d PushV
	var_2713_object = var_2708_object; // 0x29e Mov
	func_189(); // 0x29f Call
	var_2714_int = 8; // 0x2a1 PushI
	var_2715_bool = var_2705_int <= var_2714_int; // 0x2a2 LE
	if(var_2715_bool == 0) goto Label_689; // 0x2a3 JumpB
	var_2716_string = ""; var_2717_object = Obj(); var_2718_string = ""; var_2719_string = ""; // 0x2a4 PushV
	var_2720_string = "pt_blockpost"; // 0x2a5 PushS
	var_2721_int = 1; // 0x2a6 PushI
	var_2722_int = var_2704_int + var_2721_int; // 0x2a7 Add
	var_2723_int = var_2720_string + var_2722_int; // 0x2a8 Add
	var_2724_string = "_1_"; // 0x2a9 PushS
	var_2716_string = var_2723_int + var_2724_string; // 0x2aa Add2
	var_2717_object = var_2706_object; // 0x2ab Mov
	var_2718_string = "pers_patrool"; // 0x2ac MovS
	var_2719_string = "patrol_stat.xml"; // 0x2ad MovS
	func_511(var_2717_object, var_2718_string, var_2719_string); // 0x2ae Call
	goto Label_713; // 0x2b0 Jump
	
Label_713:
	return 0; // 0x2c9 Return
	
Label_689:
	var_2725_string = ""; var_2726_object = Obj(); var_2727_string = ""; var_2728_string = ""; // 0x2b1 PushV
	var_2729_string = "pt_blockpost"; // 0x2b2 PushS
	var_2730_int = 1; // 0x2b3 PushI
	var_2731_int = var_2704_int + var_2730_int; // 0x2b4 Add
	var_2732_int = var_2729_string + var_2731_int; // 0x2b5 Add
	var_2733_string = "_1_"; // 0x2b6 PushS
	var_2725_string = var_2732_int + var_2733_string; // 0x2b7 Add2
	var_2726_object = var_2706_object; // 0x2b8 Mov
	var_2727_string = "pers_soldat"; // 0x2b9 MovS
	var_2728_string = "soldier.xml"; // 0x2ba MovS
	func_511(var_2726_object, var_2727_string, var_2728_string); // 0x2bb Call
	var_2734_string = ""; var_2735_object = Obj(); var_2736_string = ""; var_2737_string = ""; // 0x2bd PushV
	var_2738_string = "pt_blockpost"; // 0x2be PushS
	var_2739_int = 1; // 0x2bf PushI
	var_2740_int = var_2704_int + var_2739_int; // 0x2c0 Add
	var_2741_int = var_2738_string + var_2740_int; // 0x2c1 Add
	var_2742_string = "_2_"; // 0x2c2 PushS
	var_2734_string = var_2741_int + var_2742_string; // 0x2c3 Add2
	var_2735_object = var_2707_object; // 0x2c4 Mov
	var_2736_string = "pers_sanitar"; // 0x2c5 MovS
	var_2737_string = "sanitar_stat.xml"; // 0x2c6 MovS
	func_511(var_2735_object, var_2736_string, var_2737_string); // 0x2c7 Call
}


func_4752(var_917_int, var_918_int, var_919_object, var_920_object, var_921_object, var_922_object)
{
	var_923_int = 0; // 0x1291 PushI
	var_924_bool = var_918_int == var_923_int; // 0x1292 Eq
	if(var_924_bool == 0) goto Label_4780; // 0x1293 JumpB
	var_925_int = 0; var_926_bool = 0; // 0x1294 PushV
	var_925_int = 5; // 0x1295 MovI
	var_926_bool = 0; // 0x1296 MovB
	func_731(var_925_int, var_926_bool); // 0x1297 Call
	var_927_int = 0; var_928_bool = 0; var_929_int = 0; // 0x1299 PushV
	var_927_int = 5; // 0x129a MovI
	var_928_bool = 0; // 0x129b MovB
	var_929_int = 1; // 0x129c MovI
	func_748(var_927_int, var_928_bool, var_929_int); // 0x129d Call
	var_930_int = 0; var_931_int = 0; var_932_object = Obj(); var_933_object = Obj(); var_934_object = Obj(); // 0x129f PushV
	var_930_int = 5; // 0x12a0 MovI
	var_931_int = var_917_int; // 0x12a1 Mov
	var_932_object = var_919_object; // 0x12a2 Mov
	var_933_object = var_920_object; // 0x12a3 Mov
	var_934_object = var_921_object; // 0x12a4 Mov
	func_557(var_931_int, var_932_object, var_933_object, var_934_object); // 0x12a5 Call
	var_935_object = Obj(); var_936_int = 0; // 0x12a7 PushV
	var_935_object = var_922_object; // 0x12a8 Mov
	var_936_int = 0; // 0x12a9 MovI
	func_229(var_936_int); // 0x12aa Call
	
Label_4780:
	var_937_int = 0; var_938_int = 0; // 0x12ac PushV
	var_937_int = 5; // 0x12ad MovI
	var_938_int = var_918_int; // 0x12ae Mov
	func_805(var_937_int, var_938_int); // 0x12af Call
	var_939_int = 0; var_940_int = 0; var_941_int = 0; // 0x12b1 PushV
	var_939_int = 5; // 0x12b2 MovI
	var_940_int = var_917_int; // 0x12b3 Mov
	var_941_int = var_918_int; // 0x12b4 Mov
	func_1411(var_939_int, var_940_int, var_941_int); // 0x12b5 Call
	return 0; // 0x12b7 Return
}


func_5777(var_3481_int, var_3482_int, var_3483_object, var_3484_object, var_3485_object, var_3486_object)
{
	var_3487_int = 0; // 0x1692 PushI
	var_3488_bool = var_3482_int == var_3487_int; // 0x1693 Eq
	if(var_3488_bool == 0) goto Label_5805; // 0x1694 JumpB
	var_3489_int = 0; var_3490_bool = 0; // 0x1695 PushV
	var_3489_int = 11; // 0x1696 MovI
	var_3490_bool = 1; // 0x1697 MovB
	func_731(var_3489_int, var_3490_bool); // 0x1698 Call
	var_3491_int = 0; var_3492_bool = 0; var_3493_int = 0; // 0x169a PushV
	var_3491_int = 11; // 0x169b MovI
	var_3492_bool = 1; // 0x169c MovB
	var_3493_int = 1; // 0x169d MovI
	func_748(var_3491_int, var_3492_bool, var_3493_int); // 0x169e Call
	var_3494_int = 0; var_3495_int = 0; var_3496_object = Obj(); var_3497_object = Obj(); var_3498_object = Obj(); // 0x16a0 PushV
	var_3494_int = 11; // 0x16a1 MovI
	var_3495_int = var_3481_int; // 0x16a2 Mov
	var_3496_object = var_3483_object; // 0x16a3 Mov
	var_3497_object = var_3484_object; // 0x16a4 Mov
	var_3498_object = var_3485_object; // 0x16a5 Mov
	func_655(var_3494_int, var_3495_int, var_3496_object, var_3497_object, var_3498_object); // 0x16a6 Call
	var_3499_object = Obj(); var_3500_int = 0; // 0x16a8 PushV
	var_3499_object = var_3486_object; // 0x16a9 Mov
	var_3500_int = 2; // 0x16aa MovI
	func_229(var_3500_int); // 0x16ab Call
	
Label_5805:
	var_3501_int = 0; var_3502_bool = 0; // 0x16ad PushV
	var_3501_int = 11; // 0x16ae MovI
	var_3502_bool = 0; // 0x16af MovB
	func_714(var_3501_int, var_3502_bool); // 0x16b0 Call
	var_3503_int = 0; var_3504_int = 0; var_3505_int = 0; // 0x16b2 PushV
	var_3503_int = 11; // 0x16b3 MovI
	var_3504_int = var_3481_int; // 0x16b4 Mov
	var_3505_int = var_3482_int; // 0x16b5 Mov
	func_3158(var_3503_int, var_3504_int, var_3505_int); // 0x16b6 Call
	return 0; // 0x16b8 Return
}


func_8343(var_4853_int)
{
	var_4854_int = 0; var_4855_int = 0; // 0x2097 PushV
	var_4856_int = 2853; // 0x2098 PushI
	var_4857_int = 2852; // 0x2099 PushI
	AddMessage(var_4856_int, var_4857_int, var_4855_int); // 0x209a Func
	var_4858_string = "player_mail"; // 0x209c PushS
	var_4859_int = 1; // 0x209d PushI
	SetVariable(var_4858_string, var_4859_int); // 0x209e Func
	var_4853_int = var_4855_int; // 0x20a0 Mov
	return 2; // 0x20a1 Return
}


func_153(var_4380_bool, var_4381_string, var_4382_string)
{
	var_4383_object = Obj(); var_4384_object = Obj(); // 0x99 PushV
	FindActor(var_4384_object, var_4381_string); // 0x9a Func
	var_4385_bool = var_4384_object == 0; // 0x9c NullEq
	if(var_4385_bool == 0) goto Label_160; // 0x9d JumpB
	var_4380_bool = 0; // 0x9e MovB
	return 2; // 0x9f Return
	
Label_160:
	Trigger(var_4384_object, var_4382_string); // 0xa0 Func
	var_4380_bool = 1; // 0xa2 MovB
	return 2; // 0xa3 Return
}


func_9881(var_4623_bool)
{
	var_4626_int = 0; var_4627_string = ""; // 0x269a PushV
	var_4627_string = "d3GeorgVisit"; // 0x269b MovS
	func_92(var_4626_int, var_4627_string); // 0x269c Call
	var_4628_int = 1; // 0x269e PushI
	var_4629_bool = var_4626_int == var_4628_int; // 0x269f Eq
	if(var_4629_bool == 0) goto Label_9891; // 0x26a0 JumpB
	var_4623_bool = 1; // 0x26a1 MovB
	return 0; // 0x26a2 Return
	
Label_9891:
	var_4623_bool = 0; // 0x26a3 MovB
	return 0; // 0x26a4 Return
}


func_1697(var_635_int, var_636_int, var_637_int)
{
	var_638_bool = 0; // 0x6a2 PushV
	var_638_bool = 0; // 0x6a3 MovB
	var_639_int = 8; // 0x6a4 PushI
	var_640_bool = var_637_int > var_639_int; // 0x6a5 GT
	if(var_640_bool == 0) goto Label_1707; // 0x6a6 JumpB
	var_641_int = 21; // 0x6a7 PushI
	var_642_bool = var_637_int < var_641_int; // 0x6a8 LT
	if(var_642_bool == 0) goto Label_1707; // 0x6a9 JumpB
	var_638_bool = 1; // 0x6aa MovB
	
Label_1707:
	if(var_638_bool == 0) goto Label_1744; // 0x6ab JumpB
	var_643_int = 0; var_644_string = ""; var_645_string = ""; var_646_int = 0; // 0x6ac PushV
	var_643_int = var_635_int; // 0x6ad Mov
	var_644_string = "pers_worker"; // 0x6ae MovS
	var_645_string = "worker.xml"; // 0x6af MovS
	var_646_int = 3; // 0x6b0 MovI
	func_438(var_643_int, var_644_string, var_645_string, var_646_int); // 0x6b1 Call
	var_647_int = 0; var_648_string = ""; var_649_string = ""; var_650_int = 0; // 0x6b3 PushV
	var_647_int = var_635_int; // 0x6b4 Mov
	var_648_string = "pers_worker"; // 0x6b5 MovS
	var_649_string = "worker2.xml"; // 0x6b6 MovS
	var_650_int = 3; // 0x6b7 MovI
	func_438(var_647_int, var_648_string, var_649_string, var_650_int); // 0x6b8 Call
	var_651_int = 0; var_652_string = ""; var_653_string = ""; var_654_int = 0; // 0x6ba PushV
	var_651_int = var_635_int; // 0x6bb Mov
	var_652_string = "pers_alkash"; // 0x6bc MovS
	var_653_string = "alkash.xml"; // 0x6bd MovS
	var_654_int = 1; // 0x6be MovI
	func_438(var_651_int, var_652_string, var_653_string, var_654_int); // 0x6bf Call
	var_655_int = 0; var_656_string = ""; var_657_string = ""; var_658_int = 0; // 0x6c1 PushV
	var_655_int = var_635_int; // 0x6c2 Mov
	var_656_string = "pers_woman"; // 0x6c3 MovS
	var_657_string = "woman.xml"; // 0x6c4 MovS
	var_658_int = 2; // 0x6c5 MovI
	func_438(var_655_int, var_656_string, var_657_string, var_658_int); // 0x6c6 Call
	var_659_int = 0; var_660_string = ""; var_661_string = ""; var_662_int = 0; // 0x6c8 PushV
	var_659_int = var_635_int; // 0x6c9 Mov
	var_660_string = "pers_dog"; // 0x6ca MovS
	var_661_string = "dog.xml"; // 0x6cb MovS
	var_662_int = 1; // 0x6cc MovI
	func_438(var_659_int, var_660_string, var_661_string, var_662_int); // 0x6cd Call
	goto Label_1772; // 0x6cf Jump
	
Label_1772:
	var_663_bool = 0; // 0x6ec PushV
	var_663_bool = 0; // 0x6ed MovB
	var_664_bool = 0; // 0x6ee PushV
	var_664_bool = 0; // 0x6ef MovB
	var_665_int = 0; // 0x6f0 PushI
	var_666_bool = var_636_int == var_665_int; // 0x6f1 Eq
	if(var_666_bool == 0) goto Label_1783; // 0x6f2 JumpB
	var_667_int = 12; // 0x6f3 PushI
	var_668_bool = var_637_int > var_667_int; // 0x6f4 GT
	if(var_668_bool == 0) goto Label_1783; // 0x6f5 JumpB
	var_664_bool = 1; // 0x6f6 MovB
	
Label_1783:
	if(var_664_bool == 0) goto Label_1788; // 0x6f7 JumpB
	var_669_int = 22; // 0x6f8 PushI
	var_670_bool = var_637_int < var_669_int; // 0x6f9 LT
	if(var_670_bool == 0) goto Label_1788; // 0x6fa JumpB
	var_663_bool = 1; // 0x6fb MovB
	
Label_1788:
	if(var_663_bool == 0) goto Label_1796; // 0x6fc JumpB
	var_671_int = 0; var_672_string = ""; var_673_string = ""; var_674_int = 0; // 0x6fd PushV
	var_671_int = var_635_int; // 0x6fe Mov
	var_672_string = "pers_woman"; // 0x6ff MovS
	var_673_string = "woman_killme.xml"; // 0x700 MovS
	var_674_int = 1; // 0x701 MovI
	func_438(var_671_int, var_672_string, var_673_string, var_674_int); // 0x702 Call
	
Label_1796:
	return 0; // 0x704 Return
	
Label_1744:
	var_675_int = 0; var_676_string = ""; var_677_string = ""; var_678_int = 0; // 0x6d0 PushV
	var_675_int = var_635_int; // 0x6d1 Mov
	var_676_string = "pers_alkash"; // 0x6d2 MovS
	var_677_string = "alkash.xml"; // 0x6d3 MovS
	var_678_int = 2; // 0x6d4 MovI
	func_438(var_675_int, var_676_string, var_677_string, var_678_int); // 0x6d5 Call
	var_679_int = 0; var_680_string = ""; var_681_string = ""; var_682_int = 0; // 0x6d7 PushV
	var_679_int = var_635_int; // 0x6d8 Mov
	var_680_string = "pers_worker"; // 0x6d9 MovS
	var_681_string = "worker.xml"; // 0x6da MovS
	var_682_int = 1; // 0x6db MovI
	func_438(var_679_int, var_680_string, var_681_string, var_682_int); // 0x6dc Call
	var_683_int = 0; var_684_string = ""; var_685_string = ""; var_686_int = 0; // 0x6de PushV
	var_683_int = var_635_int; // 0x6df Mov
	var_684_string = "pers_worker"; // 0x6e0 MovS
	var_685_string = "worker2.xml"; // 0x6e1 MovS
	var_686_int = 1; // 0x6e2 MovI
	func_438(var_683_int, var_684_string, var_685_string, var_686_int); // 0x6e3 Call
	var_687_int = 0; var_688_string = ""; var_689_string = ""; var_690_int = 0; // 0x6e5 PushV
	var_687_int = var_635_int; // 0x6e6 Mov
	var_688_string = "pers_dog"; // 0x6e7 MovS
	var_689_string = "dog.xml"; // 0x6e8 MovS
	var_690_int = 1; // 0x6e9 MovI
	func_438(var_687_int, var_688_string, var_689_string, var_690_int); // 0x6ea Call
}


func_6306()
{
	var_291_string = "lc_house3_05_i2"; // 0x18a3 PushS
	add(var_291_string); // 0x18a4 ObjFunc
	var_292_string = "lc_house3_05"; // 0x18a6 PushS
	add(var_292_string); // 0x18a7 ObjFunc
	var_293_string = "lc_house3_06_i2"; // 0x18a9 PushS
	add(var_293_string); // 0x18aa ObjFunc
	var_294_string = "lc_house3_06"; // 0x18ac PushS
	add(var_294_string); // 0x18ad ObjFunc
	var_295_string = "lc_House6_06"; // 0x18af PushS
	add(var_295_string); // 0x18b0 ObjFunc
	var_296_string = "lc_house3_04_i2"; // 0x18b2 PushS
	add(var_296_string); // 0x18b3 ObjFunc
	var_297_string = "lc_house3_04"; // 0x18b5 PushS
	add(var_297_string); // 0x18b6 ObjFunc
	return 0; // 0x18b8 Return
}


func_8354(var_4095_int)
{
	var_4096_int = 0; var_4097_int = 0; // 0x20a2 PushV
	var_4098_int = 3175; // 0x20a3 PushI
	var_4099_int = 3174; // 0x20a4 PushI
	AddMessage(var_4098_int, var_4099_int, var_4097_int); // 0x20a5 Func
	var_4100_string = "player_mail"; // 0x20a7 PushS
	var_4101_int = 1; // 0x20a8 PushI
	SetVariable(var_4100_string, var_4101_int); // 0x20a9 Func
	var_4095_int = var_4097_int; // 0x20ab Mov
	return 2; // 0x20ac Return
}


func_165(var_3904_bool, var_3905_string, var_3906_string, var_3907_string)
{
	var_3908_object = Obj(); var_3909_object = Obj(); // 0xa5 PushV
	FindActor(var_3909_object, var_3905_string); // 0xa6 Func
	var_3910_bool = var_3909_object == 0; // 0xa8 NullEq
	if(var_3910_bool == 0) goto Label_172; // 0xa9 JumpB
	var_3904_bool = 0; // 0xaa MovB
	return 2; // 0xab Return
	
Label_172:
	Trigger(var_3909_object, var_3906_string, var_3907_string); // 0xac Func
	var_3904_bool = 1; // 0xae MovB
	return 2; // 0xaf Return
}


func_9893(var_4640_bool)
{
	var_4643_int = 0; var_4644_string = ""; // 0x26a6 PushV
	var_4644_string = "d4BigVladVisit"; // 0x26a7 MovS
	func_92(var_4643_int, var_4644_string); // 0x26a8 Call
	var_4645_int = 1; // 0x26aa PushI
	var_4646_bool = var_4643_int == var_4645_int; // 0x26ab Eq
	if(var_4646_bool == 0) goto Label_9903; // 0x26ac JumpB
	var_4640_bool = 1; // 0x26ad MovB
	return 0; // 0x26ae Return
	
Label_9903:
	var_4640_bool = 0; // 0x26af MovB
	return 0; // 0x26b0 Return
}


func_8365(var_4904_int)
{
	var_4905_int = 0; var_4906_int = 0; // 0x20ad PushV
	var_4907_int = 3177; // 0x20ae PushI
	var_4908_int = 3176; // 0x20af PushI
	AddMessage(var_4907_int, var_4908_int, var_4906_int); // 0x20b0 Func
	var_4909_string = "player_mail"; // 0x20b2 PushS
	var_4910_int = 1; // 0x20b3 PushI
	SetVariable(var_4909_string, var_4910_int); // 0x20b4 Func
	var_4904_int = var_4906_int; // 0x20b6 Mov
	return 2; // 0x20b7 Return
}


func_5295()
{
	var_186_string = "r3_house_2_02"; // 0x14b0 PushS
	add(var_186_string); // 0x14b1 ObjFunc
	var_187_string = "r3_house7_01"; // 0x14b3 PushS
	add(var_187_string); // 0x14b4 ObjFunc
	var_188_string = "r3_house3_02_i2"; // 0x14b6 PushS
	add(var_188_string); // 0x14b7 ObjFunc
	var_189_string = "r3_house3_02"; // 0x14b9 PushS
	add(var_189_string); // 0x14ba ObjFunc
	var_190_string = "r3_house7_02"; // 0x14bc PushS
	add(var_190_string); // 0x14bd ObjFunc
	var_191_string = "r3_house4_05_i2"; // 0x14bf PushS
	add(var_191_string); // 0x14c0 ObjFunc
	var_192_string = "r3_house4_05"; // 0x14c2 PushS
	add(var_192_string); // 0x14c3 ObjFunc
	var_193_string = "r3_house4_03_i2"; // 0x14c5 PushS
	add(var_193_string); // 0x14c6 ObjFunc
	var_194_string = "r3_house4_04_i2"; // 0x14c8 PushS
	add(var_194_string); // 0x14c9 ObjFunc
	var_195_string = "r3_house4_04"; // 0x14cb PushS
	add(var_195_string); // 0x14cc ObjFunc
	var_196_string = "r3_house4_01_i2"; // 0x14ce PushS
	add(var_196_string); // 0x14cf ObjFunc
	var_197_string = "r3_house4_01"; // 0x14d1 PushS
	add(var_197_string); // 0x14d2 ObjFunc
	var_198_string = "r3_house_2_01"; // 0x14d4 PushS
	add(var_198_string); // 0x14d5 ObjFunc
	var_199_string = "r3_house4_02_i2"; // 0x14d7 PushS
	add(var_199_string); // 0x14d8 ObjFunc
	var_200_string = "r3_house4_02"; // 0x14da PushS
	add(var_200_string); // 0x14db ObjFunc
	var_201_string = "r3_house3_01_i2"; // 0x14dd PushS
	add(var_201_string); // 0x14de ObjFunc
	var_202_string = "r3_house3_01"; // 0x14e0 PushS
	add(var_202_string); // 0x14e1 ObjFunc
	return 0; // 0x14e3 Return
}


func_177(var_3982_bool, var_3983_string)
{
	var_3984_object = Obj(); var_3985_object = Obj(); // 0xb1 PushV
	FindActor(var_3985_object, var_3983_string); // 0xb2 Func
	var_3986_bool = var_3985_object == 0; // 0xb4 Not
	if(var_3986_bool == 0) goto Label_184; // 0xb5 JumpB
	var_3982_bool = 0; // 0xb6 MovB
	return 2; // 0xb7 Return
	
Label_184:
	RemoveActor(var_3985_object); // 0xb8 Func
	var_3982_bool = 1; // 0xba MovB
	return 2; // 0xbb Return
}


func_9905(var_4845_bool)
{
	var_4848_int = 0; var_4849_string = ""; // 0x26b2 PushV
	var_4849_string = "d5RubinVisit"; // 0x26b3 MovS
	func_92(var_4848_int, var_4849_string); // 0x26b4 Call
	var_4850_int = 1; // 0x26b6 PushI
	var_4851_bool = var_4848_int == var_4850_int; // 0x26b7 Eq
	if(var_4851_bool == 0) goto Label_9915; // 0x26b8 JumpB
	var_4845_bool = 1; // 0x26b9 MovB
	return 0; // 0x26ba Return
	
Label_9915:
	var_4845_bool = 0; // 0x26bb MovB
	return 0; // 0x26bc Return
}


func_4277(var_3025_int, var_3026_int, var_3027_object, var_3028_object, var_3029_object, var_3030_object)
{
	var_3031_int = 0; // 0x10b6 PushI
	var_3032_bool = var_3026_int == var_3031_int; // 0x10b7 Eq
	if(var_3032_bool == 0) goto Label_4305; // 0x10b8 JumpB
	var_3033_int = 0; var_3034_bool = 0; // 0x10b9 PushV
	var_3033_int = 2; // 0x10ba MovI
	var_3034_bool = 1; // 0x10bb MovB
	func_731(var_3033_int, var_3034_bool); // 0x10bc Call
	var_3035_int = 0; var_3036_bool = 0; var_3037_int = 0; // 0x10be PushV
	var_3035_int = 2; // 0x10bf MovI
	var_3036_bool = 1; // 0x10c0 MovB
	var_3037_int = 1; // 0x10c1 MovI
	func_748(var_3035_int, var_3036_bool, var_3037_int); // 0x10c2 Call
	var_3038_int = 0; var_3039_int = 0; var_3040_object = Obj(); var_3041_object = Obj(); var_3042_object = Obj(); // 0x10c4 PushV
	var_3038_int = 2; // 0x10c5 MovI
	var_3039_int = var_3025_int; // 0x10c6 Mov
	var_3040_object = var_3027_object; // 0x10c7 Mov
	var_3041_object = var_3028_object; // 0x10c8 Mov
	var_3042_object = var_3029_object; // 0x10c9 Mov
	func_655(var_3038_int, var_3039_int, var_3040_object, var_3041_object, var_3042_object); // 0x10ca Call
	var_3043_object = Obj(); var_3044_int = 0; // 0x10cc PushV
	var_3043_object = var_3030_object; // 0x10cd Mov
	var_3044_int = 2; // 0x10ce MovI
	func_229(var_3044_int); // 0x10cf Call
	
Label_4305:
	var_3045_int = 0; var_3046_bool = 0; // 0x10d1 PushV
	var_3045_int = 2; // 0x10d2 MovI
	var_3046_bool = 0; // 0x10d3 MovB
	func_714(var_3045_int, var_3046_bool); // 0x10d4 Call
	var_3047_int = 0; var_3048_int = 0; var_3049_int = 0; // 0x10d6 PushV
	var_3047_int = 2; // 0x10d7 MovI
	var_3048_int = var_3025_int; // 0x10d8 Mov
	var_3049_int = var_3026_int; // 0x10d9 Mov
	func_3338(var_3047_int, var_3048_int, var_3049_int); // 0x10da Call
	return 0; // 0x10dc Return
}


func_11445(var_3775_int, var_3776_int)
{
	var_3778_string = "Updating game "; // 0x2cb6 PushS
	var_3779_int = var_3778_string + var_3775_int; // 0x2cb7 Add
	var_3780_string = " "; // 0x2cb8 PushS
	var_3781_int = var_3779_int + var_3780_string; // 0x2cb9 Add
	var_3782_int = var_3781_int + var_3776_int; // 0x2cba Add
	Trace(var_3782_int); // 0x2cbb Func
	return 0; // 0x2cbd Return
}


func_6142()
{
	var_275_string = "lc_house7_03"; // 0x17ff PushS
	add(var_275_string); // 0x1800 ObjFunc
	var_276_string = "lc_house7_05"; // 0x1802 PushS
	add(var_276_string); // 0x1803 ObjFunc
	var_277_string = "lc_House6_05"; // 0x1805 PushS
	add(var_277_string); // 0x1806 ObjFunc
	var_278_string = "lc_house7_06"; // 0x1808 PushS
	add(var_278_string); // 0x1809 ObjFunc
	var_279_string = "lc_House6_02"; // 0x180b PushS
	add(var_279_string); // 0x180c ObjFunc
	var_280_string = "lc_house7_01"; // 0x180e PushS
	add(var_280_string); // 0x180f ObjFunc
	var_281_string = "lc_house_2_02"; // 0x1811 PushS
	add(var_281_string); // 0x1812 ObjFunc
	var_282_string = "lc_House6_01"; // 0x1814 PushS
	add(var_282_string); // 0x1815 ObjFunc
	var_283_string = "lc_house3_03_i2"; // 0x1817 PushS
	add(var_283_string); // 0x1818 ObjFunc
	var_284_string = "lc_house3_03"; // 0x181a PushS
	add(var_284_string); // 0x181b ObjFunc
	var_285_string = "lc_house7_04"; // 0x181d PushS
	add(var_285_string); // 0x181e ObjFunc
	var_286_string = "lc_house7_07"; // 0x1820 PushS
	add(var_286_string); // 0x1821 ObjFunc
	var_287_string = "lc_House6_03"; // 0x1823 PushS
	add(var_287_string); // 0x1824 ObjFunc
	var_288_string = "lc_House6_04"; // 0x1826 PushS
	add(var_288_string); // 0x1827 ObjFunc
	return 0; // 0x1829 Return
}


func_4792(var_2078_int, var_2079_int, var_2080_object, var_2081_object, var_2082_object, var_2083_object)
{
	var_2084_int = 0; // 0x12b9 PushI
	var_2085_bool = var_2079_int == var_2084_int; // 0x12ba Eq
	if(var_2085_bool == 0) goto Label_4820; // 0x12bb JumpB
	var_2086_int = 0; var_2087_bool = 0; // 0x12bc PushV
	var_2086_int = 5; // 0x12bd MovI
	var_2087_bool = 1; // 0x12be MovB
	func_731(var_2086_int, var_2087_bool); // 0x12bf Call
	var_2088_int = 0; var_2089_bool = 0; var_2090_int = 0; // 0x12c1 PushV
	var_2088_int = 5; // 0x12c2 MovI
	var_2089_bool = 1; // 0x12c3 MovB
	var_2090_int = 1; // 0x12c4 MovI
	func_748(var_2088_int, var_2089_bool, var_2090_int); // 0x12c5 Call
	var_2091_int = 0; var_2092_int = 0; var_2093_object = Obj(); var_2094_object = Obj(); var_2095_object = Obj(); // 0x12c7 PushV
	var_2091_int = 5; // 0x12c8 MovI
	var_2092_int = var_2078_int; // 0x12c9 Mov
	var_2093_object = var_2080_object; // 0x12ca Mov
	var_2094_object = var_2081_object; // 0x12cb Mov
	var_2095_object = var_2082_object; // 0x12cc Mov
	func_576(var_2091_int, var_2092_int, var_2093_object, var_2094_object, var_2095_object); // 0x12cd Call
	var_2096_object = Obj(); var_2097_int = 0; // 0x12cf PushV
	var_2096_object = var_2083_object; // 0x12d0 Mov
	var_2097_int = 1; // 0x12d1 MovI
	func_229(var_2097_int); // 0x12d2 Call
	
Label_4820:
	var_2098_int = 0; var_2099_bool = 0; // 0x12d4 PushV
	var_2098_int = 5; // 0x12d5 MovI
	var_2099_bool = 0; // 0x12d6 MovB
	func_714(var_2098_int, var_2099_bool); // 0x12d7 Call
	var_2100_int = 0; var_2101_int = 0; var_2102_int = 0; // 0x12d9 PushV
	var_2100_int = 5; // 0x12da MovI
	var_2101_int = var_2078_int; // 0x12db Mov
	var_2102_int = var_2079_int; // 0x12dc Mov
	func_2310(var_2100_int, var_2101_int, var_2102_int); // 0x12dd Call
	return 0; // 0x12df Return
}


func_5817()
{
	var_244_string = "r6_house2_03"; // 0x16ba PushS
	add(var_244_string); // 0x16bb ObjFunc
	var_245_string = "r6_house4_01_i2"; // 0x16bd PushS
	add(var_245_string); // 0x16be ObjFunc
	var_246_string = "r6_house4_02_i2"; // 0x16c0 PushS
	add(var_246_string); // 0x16c1 ObjFunc
	var_247_string = "r6_house4_02"; // 0x16c3 PushS
	add(var_247_string); // 0x16c4 ObjFunc
	var_248_string = "r6_house3_02_i2"; // 0x16c6 PushS
	add(var_248_string); // 0x16c7 ObjFunc
	var_249_string = "r6_house3_02"; // 0x16c9 PushS
	add(var_249_string); // 0x16ca ObjFunc
	var_250_string = "r6_house3_01_i2"; // 0x16cc PushS
	add(var_250_string); // 0x16cd ObjFunc
	var_251_string = "r6_house3_01"; // 0x16cf PushS
	add(var_251_string); // 0x16d0 ObjFunc
	var_252_string = "r6_house2_01"; // 0x16d2 PushS
	add(var_252_string); // 0x16d3 ObjFunc
	var_253_string = "r6_house7_01"; // 0x16d5 PushS
	add(var_253_string); // 0x16d6 ObjFunc
	var_254_string = "r6_House6_01"; // 0x16d8 PushS
	add(var_254_string); // 0x16d9 ObjFunc
	var_255_string = "r6_house2_02"; // 0x16db PushS
	add(var_255_string); // 0x16dc ObjFunc
	return 0; // 0x16de Return
}


func_6329(var_1353_int, var_1354_int, var_1355_object, var_1356_object, var_1357_object, var_1358_object)
{
	var_1359_int = 0; // 0x18ba PushI
	var_1360_bool = var_1354_int == var_1359_int; // 0x18bb Eq
	if(var_1360_bool == 0) goto Label_6357; // 0x18bc JumpB
	var_1361_int = 0; var_1362_bool = 0; // 0x18bd PushV
	var_1361_int = 15; // 0x18be MovI
	var_1362_bool = 0; // 0x18bf MovB
	func_731(var_1361_int, var_1362_bool); // 0x18c0 Call
	var_1363_int = 0; var_1364_bool = 0; var_1365_int = 0; // 0x18c2 PushV
	var_1363_int = 15; // 0x18c3 MovI
	var_1364_bool = 0; // 0x18c4 MovB
	var_1365_int = 1; // 0x18c5 MovI
	func_748(var_1363_int, var_1364_bool, var_1365_int); // 0x18c6 Call
	var_1366_int = 0; var_1367_int = 0; var_1368_object = Obj(); var_1369_object = Obj(); var_1370_object = Obj(); // 0x18c8 PushV
	var_1366_int = 15; // 0x18c9 MovI
	var_1367_int = var_1353_int; // 0x18ca Mov
	var_1368_object = var_1355_object; // 0x18cb Mov
	var_1369_object = var_1356_object; // 0x18cc Mov
	var_1370_object = var_1357_object; // 0x18cd Mov
	func_557(var_1367_int, var_1368_object, var_1369_object, var_1370_object); // 0x18ce Call
	var_1371_object = Obj(); var_1372_int = 0; // 0x18d0 PushV
	var_1371_object = var_1358_object; // 0x18d1 Mov
	var_1372_int = 0; // 0x18d2 MovI
	func_229(var_1372_int); // 0x18d3 Call
	
Label_6357:
	var_1373_int = 0; var_1374_int = 0; // 0x18d5 PushV
	var_1373_int = 15; // 0x18d6 MovI
	var_1374_int = var_1354_int; // 0x18d7 Mov
	func_909(var_1373_int, var_1374_int); // 0x18d8 Call
	var_1375_int = 0; var_1376_int = 0; var_1377_int = 0; // 0x18da PushV
	var_1375_int = 15; // 0x18db MovI
	var_1376_int = var_1353_int; // 0x18dc Mov
	var_1377_int = var_1354_int; // 0x18dd Mov
	func_1122(var_1375_int, var_1376_int, var_1377_int); // 0x18de Call
	return 0; // 0x18e0 Return
}


func_8376(var_4887_int)
{
	var_4888_int = 0; var_4889_int = 0; // 0x20b8 PushV
	var_4890_int = 3181; // 0x20b9 PushI
	var_4891_int = 3180; // 0x20ba PushI
	AddMessage(var_4890_int, var_4891_int, var_4889_int); // 0x20bb Func
	var_4892_string = "player_mail"; // 0x20bd PushS
	var_4893_int = 1; // 0x20be PushI
	SetVariable(var_4892_string, var_4893_int); // 0x20bf Func
	var_4887_int = var_4889_int; // 0x20c1 Mov
	return 2; // 0x20c2 Return
}


func_189()
{
	var_491_int = 0; var_492_int = 0; var_493_object = Obj(); var_494_int = 0; var_495_int = 0; var_496_object = Obj(); // 0xbd PushV
	size(var_494_int); // 0xbe ObjFunc
	var_495_int = 0; // 0xc0 MovI
	
Label_193:
	var_497_bool = var_495_int < var_494_int; // 0xc1 LT
	if(var_497_bool == 0) goto Label_205; // 0xc2 JumpB
	get(var_496_object, var_495_int); // 0xc3 ObjFunc
	var_498_object = var_496_object; // 0xc5 Push
	if(var_498_object == 0) goto Label_201; // 0xc6 JumpB
	Remove(); // 0xc7 ObjFunc
	
Label_201:
	var_496_object = 0; // 0xc9 SetNull
	var_499_int = 1; // 0xca PushI
	var_495_int = var_495_int + var_499_int; // 0xcb Add2
	goto Label_193; // 0xcc Jump
	
Label_205:
	clear(); // 0xcd ObjFunc
	return 6; // 0xcf Return
}


func_11454(var_17_int)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; // 0x2cbe PushV
	var_28_string = "Disease update"; // 0x2cbf PushS
	Trace(var_28_string); // 0x2cc0 Func
	var_23_int = 0; // 0x2cc2 MovI
	var_29_int = 0; // 0x2cc3 PushI
	var_30_bool = var_17_int == var_29_int; // 0x2cc4 Eq
	if(var_30_bool == 0) goto Label_11464; // 0x2cc5 JumpB
	var_23_int = 0; // 0x2cc6 MovI
	goto Label_11518; // 0x2cc7 Jump
	
Label_11518:
	var_31_string = "Diseased regions : "; // 0x2cfe PushS
	var_32_int = var_31_string + var_23_int; // 0x2cff Add
	Trace(var_32_int); // 0x2d00 Func
	var_24_int = 0; // 0x2d02 MovI
	
Label_11523:
	var_33_int = 16; // 0x2d03 PushI
	var_34_bool = var_24_int < var_33_int; // 0x2d04 LT
	if(var_34_bool == 0) goto Label_11548; // 0x2d05 JumpB
	var_35_bool = 0; var_36_int = 0; // 0x2d06 PushV
	var_36_int = var_24_int; // 0x2d07 Mov
	func_357(var_35_bool, var_36_int); // 0x2d08 Call
	if(var_35_bool == 0) goto Label_11536; // 0x2d0a JumpB
	var_48_int = 0; // 0x2d0b PushV
	var_48_int = var_24_int; // 0x2d0c Mov
	func_407(var_48_int); // 0x2d0d Call
	goto Label_11545; // 0x2d0f Jump
	
Label_11545:
	var_60_int = 1; // 0x2d19 PushI
	var_24_int = var_24_int + var_60_int; // 0x2d1a Add2
	goto Label_11523; // 0x2d1b Jump
	
Label_11536:
	var_61_bool = 0; var_62_int = 0; // 0x2d10 PushV
	var_62_int = var_24_int; // 0x2d11 Mov
	func_391(var_61_bool, var_62_int); // 0x2d12 Call
	if(var_61_bool == 0) goto Label_11545; // 0x2d14 JumpB
	var_71_int = 0; // 0x2d15 PushV
	var_71_int = var_24_int; // 0x2d16 Mov
	func_339(var_71_int); // 0x2d17 Call
	
Label_11548:
	var_83_int = 0; // 0x2d1c PushV
	func_267(var_83_int); // 0x2d1d Call
	var_25_int = var_83_int; // 0x2d1e Mov
	var_94_bool = var_25_int < var_23_int; // 0x2d20 LT
	if(var_94_bool == 0) goto Label_11564; // 0x2d21 JumpB
	var_26_int = var_23_int - var_25_int; // 0x2d22 Sub2
	var_27_int = 0; // 0x2d23 MovI
	
Label_11556:
	var_95_bool = var_27_int < var_26_int; // 0x2d24 LT
	if(var_95_bool == 0) goto Label_11564; // 0x2d25 JumpB
	func_285(); // 0x2d27 Call
	var_157_int = 1; // 0x2d29 PushI
	var_27_int = var_27_int + var_157_int; // 0x2d2a Add2
	goto Label_11556; // 0x2d2b Jump
	
Label_11564:
	return 10; // 0x2d2c Return
	
Label_11464:
	var_158_int = 1; // 0x2cc8 PushI
	var_159_bool = var_17_int == var_158_int; // 0x2cc9 Eq
	if(var_159_bool == 0) goto Label_11469; // 0x2cca JumpB
	var_23_int = 0; // 0x2ccb MovI
	goto Label_11518; // 0x2ccc Jump
	
Label_11469:
	var_160_int = 2; // 0x2ccd PushI
	var_161_bool = var_17_int == var_160_int; // 0x2cce Eq
	if(var_161_bool == 0) goto Label_11474; // 0x2ccf JumpB
	var_23_int = 4; // 0x2cd0 MovI
	goto Label_11518; // 0x2cd1 Jump
	
Label_11474:
	var_162_int = 3; // 0x2cd2 PushI
	var_163_bool = var_17_int == var_162_int; // 0x2cd3 Eq
	if(var_163_bool == 0) goto Label_11479; // 0x2cd4 JumpB
	var_23_int = 4; // 0x2cd5 MovI
	goto Label_11518; // 0x2cd6 Jump
	
Label_11479:
	var_164_int = 4; // 0x2cd7 PushI
	var_165_bool = var_17_int == var_164_int; // 0x2cd8 Eq
	if(var_165_bool == 0) goto Label_11484; // 0x2cd9 JumpB
	var_23_int = 4; // 0x2cda MovI
	goto Label_11518; // 0x2cdb Jump
	
Label_11484:
	var_166_int = 5; // 0x2cdc PushI
	var_167_bool = var_17_int == var_166_int; // 0x2cdd Eq
	if(var_167_bool == 0) goto Label_11489; // 0x2cde JumpB
	var_23_int = 4; // 0x2cdf MovI
	goto Label_11518; // 0x2ce0 Jump
	
Label_11489:
	var_168_int = 6; // 0x2ce1 PushI
	var_169_bool = var_17_int == var_168_int; // 0x2ce2 Eq
	if(var_169_bool == 0) goto Label_11494; // 0x2ce3 JumpB
	var_23_int = 5; // 0x2ce4 MovI
	goto Label_11518; // 0x2ce5 Jump
	
Label_11494:
	var_170_int = 7; // 0x2ce6 PushI
	var_171_bool = var_17_int == var_170_int; // 0x2ce7 Eq
	if(var_171_bool == 0) goto Label_11499; // 0x2ce8 JumpB
	var_23_int = 6; // 0x2ce9 MovI
	goto Label_11518; // 0x2cea Jump
	
Label_11499:
	var_172_int = 8; // 0x2ceb PushI
	var_173_bool = var_17_int == var_172_int; // 0x2cec Eq
	if(var_173_bool == 0) goto Label_11504; // 0x2ced JumpB
	var_23_int = 7; // 0x2cee MovI
	goto Label_11518; // 0x2cef Jump
	
Label_11504:
	var_174_int = 9; // 0x2cf0 PushI
	var_175_bool = var_17_int == var_174_int; // 0x2cf1 Eq
	if(var_175_bool == 0) goto Label_11509; // 0x2cf2 JumpB
	var_23_int = 7; // 0x2cf3 MovI
	goto Label_11518; // 0x2cf4 Jump
	
Label_11509:
	var_176_int = 10; // 0x2cf5 PushI
	var_177_bool = var_17_int == var_176_int; // 0x2cf6 Eq
	if(var_177_bool == 0) goto Label_11514; // 0x2cf7 JumpB
	var_23_int = 7; // 0x2cf8 MovI
	goto Label_11518; // 0x2cf9 Jump
	
Label_11514:
	var_178_int = 11; // 0x2cfa PushI
	var_179_bool = var_17_int == var_178_int; // 0x2cfb Eq
	if(var_179_bool == 0) goto Label_11518; // 0x2cfc JumpB
	var_23_int = 7; // 0x2cfd MovI
}


func_9917(var_4879_bool)
{
	var_4882_int = 0; var_4883_string = ""; // 0x26be PushV
	var_4883_string = "d6KapellaVisit"; // 0x26bf MovS
	func_92(var_4882_int, var_4883_string); // 0x26c0 Call
	var_4884_int = 1; // 0x26c2 PushI
	var_4885_bool = var_4882_int == var_4884_int; // 0x26c3 Eq
	if(var_4885_bool == 0) goto Label_9927; // 0x26c4 JumpB
	var_4879_bool = 1; // 0x26c5 MovB
	return 0; // 0x26c6 Return
	
Label_9927:
	var_4879_bool = 0; // 0x26c7 MovB
	return 0; // 0x26c8 Return
}


func_7360(var_392_int, var_393_int, var_394_int)
{
	var_395_object = Obj(); var_396_object = Obj(); var_397_object = Obj(); var_398_object = Obj(); var_399_object = Obj(); var_400_object = Obj(); var_401_object = Obj(); var_402_object = Obj(); // 0x1cc0 PushV
	var_403_object = GlobalVars[12]; // 0x1cc1 PushGE
	get(var_399_object, var_392_int); // 0x1cc2 ObjFunc
	var_404_object = GlobalVars[13]; // 0x1cc4 PushGE
	get(var_400_object, var_392_int); // 0x1cc5 ObjFunc
	var_405_object = GlobalVars[14]; // 0x1cc7 PushGE
	get(var_401_object, var_392_int); // 0x1cc8 ObjFunc
	var_406_object = GlobalVars[17]; // 0x1cca PushGE
	get(var_402_object, var_392_int); // 0x1ccb ObjFunc
	var_407_int = 0; // 0x1ccd PushI
	var_408_bool = var_392_int == var_407_int; // 0x1cce Eq
	if(var_408_bool == 0) goto Label_7386; // 0x1ccf JumpB
	var_409_int = 0; var_410_int = 0; var_411_object = Obj(); var_412_object = Obj(); var_413_object = Obj(); var_414_object = Obj(); // 0x1cd0 PushV
	var_409_int = var_393_int; // 0x1cd1 Mov
	var_410_int = var_394_int; // 0x1cd2 Mov
	var_411_object = var_399_object; // 0x1cd3 Mov
	var_412_object = var_400_object; // 0x1cd4 Mov
	var_413_object = var_401_object; // 0x1cd5 Mov
	var_414_object = var_402_object; // 0x1cd6 Mov
	func_3854(var_409_int, var_410_int, var_411_object, var_412_object, var_413_object, var_414_object); // 0x1cd7 Call
	goto Label_7580; // 0x1cd9 Jump
	
Label_7580:
	return 8; // 0x1d9c Return
	
Label_7386:
	var_611_int = 1; // 0x1cda PushI
	var_612_bool = var_392_int == var_611_int; // 0x1cdb Eq
	if(var_612_bool == 0) goto Label_7399; // 0x1cdc JumpB
	var_613_int = 0; var_614_int = 0; var_615_object = Obj(); var_616_object = Obj(); var_617_object = Obj(); var_618_object = Obj(); // 0x1cdd PushV
	var_613_int = var_393_int; // 0x1cde Mov
	var_614_int = var_394_int; // 0x1cdf Mov
	var_615_object = var_399_object; // 0x1ce0 Mov
	var_616_object = var_400_object; // 0x1ce1 Mov
	var_617_object = var_401_object; // 0x1ce2 Mov
	var_618_object = var_402_object; // 0x1ce3 Mov
	func_4006(var_613_int, var_614_int, var_615_object, var_616_object, var_617_object, var_618_object); // 0x1ce4 Call
	goto Label_7580; // 0x1ce6 Jump
	
Label_7399:
	var_691_int = 2; // 0x1ce7 PushI
	var_692_bool = var_392_int == var_691_int; // 0x1ce8 Eq
	if(var_692_bool == 0) goto Label_7412; // 0x1ce9 JumpB
	var_693_int = 0; var_694_int = 0; var_695_object = Obj(); var_696_object = Obj(); var_697_object = Obj(); var_698_object = Obj(); // 0x1cea PushV
	var_693_int = var_393_int; // 0x1ceb Mov
	var_694_int = var_394_int; // 0x1cec Mov
	var_695_object = var_399_object; // 0x1ced Mov
	var_696_object = var_400_object; // 0x1cee Mov
	var_697_object = var_401_object; // 0x1cef Mov
	var_698_object = var_402_object; // 0x1cf0 Mov
	func_4197(var_693_int, var_694_int, var_695_object, var_696_object, var_697_object, var_698_object); // 0x1cf1 Call
	goto Label_7580; // 0x1cf3 Jump
	
Label_7412:
	var_834_int = 3; // 0x1cf4 PushI
	var_835_bool = var_392_int == var_834_int; // 0x1cf5 Eq
	if(var_835_bool == 0) goto Label_7425; // 0x1cf6 JumpB
	var_836_int = 0; var_837_int = 0; var_838_object = Obj(); var_839_object = Obj(); var_840_object = Obj(); var_841_object = Obj(); // 0x1cf7 PushV
	var_836_int = var_393_int; // 0x1cf8 Mov
	var_837_int = var_394_int; // 0x1cf9 Mov
	var_838_object = var_399_object; // 0x1cfa Mov
	var_839_object = var_400_object; // 0x1cfb Mov
	var_840_object = var_401_object; // 0x1cfc Mov
	var_841_object = var_402_object; // 0x1cfd Mov
	func_4370(var_836_int, var_837_int, var_838_object, var_839_object, var_840_object, var_841_object); // 0x1cfe Call
	goto Label_7580; // 0x1d00 Jump
	
Label_7425:
	var_876_int = 4; // 0x1d01 PushI
	var_877_bool = var_392_int == var_876_int; // 0x1d02 Eq
	if(var_877_bool == 0) goto Label_7438; // 0x1d03 JumpB
	var_878_int = 0; var_879_int = 0; var_880_object = Obj(); var_881_object = Obj(); var_882_object = Obj(); var_883_object = Obj(); // 0x1d04 PushV
	var_878_int = var_393_int; // 0x1d05 Mov
	var_879_int = var_394_int; // 0x1d06 Mov
	var_880_object = var_399_object; // 0x1d07 Mov
	var_881_object = var_400_object; // 0x1d08 Mov
	var_882_object = var_401_object; // 0x1d09 Mov
	var_883_object = var_402_object; // 0x1d0a Mov
	func_4552(var_878_int, var_879_int, var_880_object, var_881_object, var_882_object, var_883_object); // 0x1d0b Call
	goto Label_7580; // 0x1d0d Jump
	
Label_7438:
	var_915_int = 5; // 0x1d0e PushI
	var_916_bool = var_392_int == var_915_int; // 0x1d0f Eq
	if(var_916_bool == 0) goto Label_7451; // 0x1d10 JumpB
	var_917_int = 0; var_918_int = 0; var_919_object = Obj(); var_920_object = Obj(); var_921_object = Obj(); var_922_object = Obj(); // 0x1d11 PushV
	var_917_int = var_393_int; // 0x1d12 Mov
	var_918_int = var_394_int; // 0x1d13 Mov
	var_919_object = var_399_object; // 0x1d14 Mov
	var_920_object = var_400_object; // 0x1d15 Mov
	var_921_object = var_401_object; // 0x1d16 Mov
	var_922_object = var_402_object; // 0x1d17 Mov
	func_4752(var_917_int, var_918_int, var_919_object, var_920_object, var_921_object, var_922_object); // 0x1d18 Call
	goto Label_7580; // 0x1d1a Jump
	
Label_7451:
	var_942_int = 6; // 0x1d1b PushI
	var_943_bool = var_392_int == var_942_int; // 0x1d1c Eq
	if(var_943_bool == 0) goto Label_7464; // 0x1d1d JumpB
	var_944_int = 0; var_945_int = 0; var_946_object = Obj(); var_947_object = Obj(); var_948_object = Obj(); var_949_object = Obj(); // 0x1d1e PushV
	var_944_int = var_393_int; // 0x1d1f Mov
	var_945_int = var_394_int; // 0x1d20 Mov
	var_946_object = var_399_object; // 0x1d21 Mov
	var_947_object = var_400_object; // 0x1d22 Mov
	var_948_object = var_401_object; // 0x1d23 Mov
	var_949_object = var_402_object; // 0x1d24 Mov
	func_4874(var_944_int, var_945_int, var_946_object, var_947_object, var_948_object, var_949_object); // 0x1d25 Call
	goto Label_7580; // 0x1d27 Jump
	
Label_7464:
	var_966_int = 7; // 0x1d28 PushI
	var_967_bool = var_392_int == var_966_int; // 0x1d29 Eq
	if(var_967_bool == 0) goto Label_7477; // 0x1d2a JumpB
	var_968_int = 0; var_969_int = 0; var_970_object = Obj(); var_971_object = Obj(); var_972_object = Obj(); var_973_object = Obj(); // 0x1d2b PushV
	var_968_int = var_393_int; // 0x1d2c Mov
	var_969_int = var_394_int; // 0x1d2d Mov
	var_970_object = var_399_object; // 0x1d2e Mov
	var_971_object = var_400_object; // 0x1d2f Mov
	var_972_object = var_401_object; // 0x1d30 Mov
	var_973_object = var_402_object; // 0x1d31 Mov
	func_5020(var_968_int, var_969_int, var_970_object, var_971_object, var_972_object, var_973_object); // 0x1d32 Call
	goto Label_7580; // 0x1d34 Jump
	
Label_7477:
	var_1073_int = 8; // 0x1d35 PushI
	var_1074_bool = var_392_int == var_1073_int; // 0x1d36 Eq
	if(var_1074_bool == 0) goto Label_7490; // 0x1d37 JumpB
	var_1075_int = 0; var_1076_int = 0; var_1077_object = Obj(); var_1078_object = Obj(); var_1079_object = Obj(); var_1080_object = Obj(); // 0x1d38 PushV
	var_1075_int = var_393_int; // 0x1d39 Mov
	var_1076_int = var_394_int; // 0x1d3a Mov
	var_1077_object = var_399_object; // 0x1d3b Mov
	var_1078_object = var_400_object; // 0x1d3c Mov
	var_1079_object = var_401_object; // 0x1d3d Mov
	var_1080_object = var_402_object; // 0x1d3e Mov
	func_5175(var_1075_int, var_1076_int, var_1077_object, var_1078_object, var_1079_object, var_1080_object); // 0x1d3f Call
	goto Label_7580; // 0x1d41 Jump
	
Label_7490:
	var_1100_int = 9; // 0x1d42 PushI
	var_1101_bool = var_392_int == var_1100_int; // 0x1d43 Eq
	if(var_1101_bool == 0) goto Label_7503; // 0x1d44 JumpB
	var_1102_int = 0; var_1103_int = 0; var_1104_object = Obj(); var_1105_object = Obj(); var_1106_object = Obj(); var_1107_object = Obj(); // 0x1d45 PushV
	var_1102_int = var_393_int; // 0x1d46 Mov
	var_1103_int = var_394_int; // 0x1d47 Mov
	var_1104_object = var_399_object; // 0x1d48 Mov
	var_1105_object = var_400_object; // 0x1d49 Mov
	var_1106_object = var_401_object; // 0x1d4a Mov
	var_1107_object = var_402_object; // 0x1d4b Mov
	func_5348(var_1102_int, var_1103_int, var_1104_object, var_1105_object, var_1106_object, var_1107_object); // 0x1d4c Call
	goto Label_7580; // 0x1d4e Jump
	
Label_7503:
	var_1127_int = 10; // 0x1d4f PushI
	var_1128_bool = var_392_int == var_1127_int; // 0x1d50 Eq
	if(var_1128_bool == 0) goto Label_7516; // 0x1d51 JumpB
	var_1129_int = 0; var_1130_int = 0; var_1131_object = Obj(); var_1132_object = Obj(); var_1133_object = Obj(); var_1134_object = Obj(); // 0x1d52 PushV
	var_1129_int = var_393_int; // 0x1d53 Mov
	var_1130_int = var_394_int; // 0x1d54 Mov
	var_1131_object = var_399_object; // 0x1d55 Mov
	var_1132_object = var_400_object; // 0x1d56 Mov
	var_1133_object = var_401_object; // 0x1d57 Mov
	var_1134_object = var_402_object; // 0x1d58 Mov
	func_5521(var_1129_int, var_1130_int, var_1131_object, var_1132_object, var_1133_object, var_1134_object); // 0x1d59 Call
	goto Label_7580; // 0x1d5b Jump
	
Label_7516:
	var_1154_int = 11; // 0x1d5c PushI
	var_1155_bool = var_392_int == var_1154_int; // 0x1d5d Eq
	if(var_1155_bool == 0) goto Label_7529; // 0x1d5e JumpB
	var_1156_int = 0; var_1157_int = 0; var_1158_object = Obj(); var_1159_object = Obj(); var_1160_object = Obj(); var_1161_object = Obj(); // 0x1d5f PushV
	var_1156_int = var_393_int; // 0x1d60 Mov
	var_1157_int = var_394_int; // 0x1d61 Mov
	var_1158_object = var_399_object; // 0x1d62 Mov
	var_1159_object = var_400_object; // 0x1d63 Mov
	var_1160_object = var_401_object; // 0x1d64 Mov
	var_1161_object = var_402_object; // 0x1d65 Mov
	func_5697(var_1156_int, var_1157_int, var_1158_object, var_1159_object, var_1160_object, var_1161_object); // 0x1d66 Call
	goto Label_7580; // 0x1d68 Jump
	
Label_7529:
	var_1181_int = 12; // 0x1d69 PushI
	var_1182_bool = var_392_int == var_1181_int; // 0x1d6a Eq
	if(var_1182_bool == 0) goto Label_7542; // 0x1d6b JumpB
	var_1183_int = 0; var_1184_int = 0; var_1185_object = Obj(); var_1186_object = Obj(); var_1187_object = Obj(); var_1188_object = Obj(); // 0x1d6c PushV
	var_1183_int = var_393_int; // 0x1d6d Mov
	var_1184_int = var_394_int; // 0x1d6e Mov
	var_1185_object = var_399_object; // 0x1d6f Mov
	var_1186_object = var_400_object; // 0x1d70 Mov
	var_1187_object = var_401_object; // 0x1d71 Mov
	var_1188_object = var_402_object; // 0x1d72 Mov
	func_5855(var_1183_int, var_1184_int, var_1185_object, var_1186_object, var_1187_object, var_1188_object); // 0x1d73 Call
	goto Label_7580; // 0x1d75 Jump
	
Label_7542:
	var_1208_int = 13; // 0x1d76 PushI
	var_1209_bool = var_392_int == var_1208_int; // 0x1d77 Eq
	if(var_1209_bool == 0) goto Label_7555; // 0x1d78 JumpB
	var_1210_int = 0; var_1211_int = 0; var_1212_object = Obj(); var_1213_object = Obj(); var_1214_object = Obj(); var_1215_object = Obj(); // 0x1d79 PushV
	var_1210_int = var_393_int; // 0x1d7a Mov
	var_1211_int = var_394_int; // 0x1d7b Mov
	var_1212_object = var_399_object; // 0x1d7c Mov
	var_1213_object = var_400_object; // 0x1d7d Mov
	var_1214_object = var_401_object; // 0x1d7e Mov
	var_1215_object = var_402_object; // 0x1d7f Mov
	func_6022(var_1210_int, var_1211_int, var_1212_object, var_1213_object, var_1214_object, var_1215_object); // 0x1d80 Call
	goto Label_7580; // 0x1d82 Jump
	
Label_7555:
	var_1235_int = 14; // 0x1d83 PushI
	var_1236_bool = var_392_int == var_1235_int; // 0x1d84 Eq
	if(var_1236_bool == 0) goto Label_7568; // 0x1d85 JumpB
	var_1237_int = 0; var_1238_int = 0; var_1239_object = Obj(); var_1240_object = Obj(); var_1241_object = Obj(); var_1242_object = Obj(); // 0x1d86 PushV
	var_1237_int = var_393_int; // 0x1d87 Mov
	var_1238_int = var_394_int; // 0x1d88 Mov
	var_1239_object = var_399_object; // 0x1d89 Mov
	var_1240_object = var_400_object; // 0x1d8a Mov
	var_1241_object = var_401_object; // 0x1d8b Mov
	var_1242_object = var_402_object; // 0x1d8c Mov
	func_6186(var_1237_int, var_1238_int, var_1239_object, var_1240_object, var_1241_object, var_1242_object); // 0x1d8d Call
	goto Label_7580; // 0x1d8f Jump
	
Label_7568:
	var_1351_int = 15; // 0x1d90 PushI
	var_1352_bool = var_392_int == var_1351_int; // 0x1d91 Eq
	if(var_1352_bool == 0) goto Label_7580; // 0x1d92 JumpB
	var_1353_int = 0; var_1354_int = 0; var_1355_object = Obj(); var_1356_object = Obj(); var_1357_object = Obj(); var_1358_object = Obj(); // 0x1d93 PushV
	var_1353_int = var_393_int; // 0x1d94 Mov
	var_1354_int = var_394_int; // 0x1d95 Mov
	var_1355_object = var_399_object; // 0x1d96 Mov
	var_1356_object = var_400_object; // 0x1d97 Mov
	var_1357_object = var_401_object; // 0x1d98 Mov
	var_1358_object = var_402_object; // 0x1d99 Mov
	func_6329(var_1353_int, var_1354_int, var_1355_object, var_1356_object, var_1357_object, var_1358_object); // 0x1d9a Call
}


func_8387(var_4870_int)
{
	var_4871_int = 0; var_4872_int = 0; // 0x20c3 PushV
	var_4873_int = 3179; // 0x20c4 PushI
	var_4874_int = 3178; // 0x20c5 PushI
	AddMessage(var_4873_int, var_4874_int, var_4872_int); // 0x20c6 Func
	var_4875_string = "player_mail"; // 0x20c8 PushS
	var_4876_int = 1; // 0x20c9 PushI
	SetVariable(var_4875_string, var_4876_int); // 0x20ca Func
	var_4870_int = var_4872_int; // 0x20cc Mov
	return 2; // 0x20cd Return
}


func_9929(var_4862_bool)
{
	var_4865_int = 0; var_4866_string = ""; // 0x26ca PushV
	var_4866_string = "d6MariaVisit"; // 0x26cb MovS
	func_92(var_4865_int, var_4866_string); // 0x26cc Call
	var_4867_int = 1; // 0x26ce PushI
	var_4868_bool = var_4865_int == var_4867_int; // 0x26cf Eq
	if(var_4868_bool == 0) goto Label_9939; // 0x26d0 JumpB
	var_4862_bool = 1; // 0x26d1 MovB
	return 0; // 0x26d2 Return
	
Label_9939:
	var_4862_bool = 0; // 0x26d3 MovB
	return 0; // 0x26d4 Return
}


func_714(var_542_int, var_543_bool)
{
	var_544_object = Obj(); var_545_int = 0; var_546_object = Obj(); var_547_int = 0; // 0x2ca PushV
	GetMainOutdoorScene(var_546_object); // 0x2cb Func
	var_548_bool = var_546_object == 0; // 0x2cd NullEq
	if(var_548_bool == 0) goto Label_723; // 0x2ce JumpB
	var_549_string = "City manager: Can't find main outdoor scene"; // 0x2cf PushS
	Trace(var_549_string); // 0x2d0 Func
	return 4; // 0x2d2 Return
	
Label_723:
	var_550_int = 1; // 0x2d3 PushI
	var_547_int = var_542_int + var_550_int; // 0x2d4 Add2
	var_551_int = 100; // 0x2d5 PushI
	var_552_bool = 1; // 0x2d6 PushB
	EnableSubsets(var_547_int, var_551_int, var_543_bool, var_552_bool); // 0x2d7 ObjFunc
	return 4; // 0x2d9 Return
}


func_8398(var_3922_int)
{
	var_3923_int = 0; var_3924_int = 0; // 0x20ce PushV
	var_3925_int = 12530; // 0x20cf PushI
	var_3926_int = 12529; // 0x20d0 PushI
	AddMessage(var_3925_int, var_3926_int, var_3924_int); // 0x20d1 Func
	var_3927_string = "player_mail"; // 0x20d3 PushS
	var_3928_int = 1; // 0x20d4 PushI
	SetVariable(var_3927_string, var_3928_int); // 0x20d5 Func
	var_3922_int = var_3924_int; // 0x20d7 Mov
	return 2; // 0x20d8 Return
}


func_208(var_124_int)
{
	var_125_float = 0; var_126_float = 0; // 0xd0 PushV
	GetGameTime(var_126_float); // 0xd1 Func
	var_127_int = 1; // 0xd3 PushI
	var_128_int = 0; // 0xd4 PushV
	var_129_int = 24; // 0xd5 PushI
	var_128_int = var_126_float / var_126_float; // 0xd6 Div2
	var_124_int = var_127_int + var_128_int; // 0xd7 Add2
	return 2; // 0xd8 Return
}


func_9941(var_4896_bool)
{
	var_4899_int = 0; var_4900_string = ""; // 0x26d6 PushV
	var_4900_string = "d6BigVladVisit"; // 0x26d7 MovS
	func_92(var_4899_int, var_4900_string); // 0x26d8 Call
	var_4901_int = 1; // 0x26da PushI
	var_4902_bool = var_4899_int == var_4901_int; // 0x26db Eq
	if(var_4902_bool == 0) goto Label_9951; // 0x26dc JumpB
	var_4896_bool = 1; // 0x26dd MovB
	return 0; // 0x26de Return
	
Label_9951:
	var_4896_bool = 0; // 0x26df MovB
	return 0; // 0x26e0 Return
}


func_8920()
{
	var_4426_object = Obj(); var_4427_object = Obj(); var_4428_object = Obj(); var_4429_object = Obj(); // 0x22d8 PushV
	var_4430_object = Obj(); // 0x22d9 PushV
	func_10048(var_4430_object); // 0x22da Call
	var_4428_object = var_4430_object; // 0x22db Mov
	var_4431_string = "d3q01AlexandrGotoOspina"; // 0x22dd PushS
	FindMark(var_4429_object, var_4431_string); // 0x22de ObjFunc
	var_4432_object = var_4429_object; // 0x22e0 Push
	if(var_4432_object == 0) goto Label_8932; // 0x22e1 JumpB
	Remove(); // 0x22e2 ObjFunc
	
Label_8932:
	var_4433_string = "d3q01AlexandrGotoOspinaSelf"; // 0x22e4 PushS
	FindMark(var_4429_object, var_4433_string); // 0x22e5 ObjFunc
	var_4434_object = var_4429_object; // 0x22e7 Push
	if(var_4434_object == 0) goto Label_8939; // 0x22e8 JumpB
	Remove(); // 0x22e9 ObjFunc
	
Label_8939:
	var_4435_string = "d3q01BigVladAgreed"; // 0x22eb PushS
	FindMark(var_4429_object, var_4435_string); // 0x22ec ObjFunc
	var_4436_object = var_4429_object; // 0x22ee Push
	if(var_4436_object == 0) goto Label_8946; // 0x22ef JumpB
	Remove(); // 0x22f0 ObjFunc
	
Label_8946:
	var_4437_string = "d3q01BigVladAgreedSelf"; // 0x22f2 PushS
	FindMark(var_4429_object, var_4437_string); // 0x22f3 ObjFunc
	var_4438_object = var_4429_object; // 0x22f5 Push
	if(var_4438_object == 0) goto Label_8953; // 0x22f6 JumpB
	Remove(); // 0x22f7 ObjFunc
	
Label_8953:
	var_4439_string = "d3q01BigVladGotoGeorg"; // 0x22f9 PushS
	FindMark(var_4429_object, var_4439_string); // 0x22fa ObjFunc
	var_4440_object = var_4429_object; // 0x22fc Push
	if(var_4440_object == 0) goto Label_8960; // 0x22fd JumpB
	Remove(); // 0x22fe ObjFunc
	
Label_8960:
	var_4441_string = "d3q01BigVladGotoGeorgSelf"; // 0x2300 PushS
	FindMark(var_4429_object, var_4441_string); // 0x2301 ObjFunc
	var_4442_object = var_4429_object; // 0x2303 Push
	if(var_4442_object == 0) goto Label_8967; // 0x2304 JumpB
	Remove(); // 0x2305 ObjFunc
	
Label_8967:
	var_4443_string = "d3q01GeorgAgreed"; // 0x2307 PushS
	FindMark(var_4429_object, var_4443_string); // 0x2308 ObjFunc
	var_4444_object = var_4429_object; // 0x230a Push
	if(var_4444_object == 0) goto Label_8974; // 0x230b JumpB
	Remove(); // 0x230c ObjFunc
	
Label_8974:
	var_4445_string = "d3q01GeorgAgreedSelf"; // 0x230e PushS
	FindMark(var_4429_object, var_4445_string); // 0x230f ObjFunc
	var_4446_object = var_4429_object; // 0x2311 Push
	if(var_4446_object == 0) goto Label_8981; // 0x2312 JumpB
	Remove(); // 0x2313 ObjFunc
	
Label_8981:
	var_4447_string = "d3q01OspinaButchersWillHelpSelf"; // 0x2315 PushS
	FindMark(var_4429_object, var_4447_string); // 0x2316 ObjFunc
	var_4448_object = var_4429_object; // 0x2318 Push
	if(var_4448_object == 0) goto Label_8988; // 0x2319 JumpB
	Remove(); // 0x231a ObjFunc
	
Label_8988:
	var_4449_string = "d3q01OspinaGotoBigVlad"; // 0x231c PushS
	FindMark(var_4429_object, var_4449_string); // 0x231d ObjFunc
	var_4450_object = var_4429_object; // 0x231f Push
	if(var_4450_object == 0) goto Label_8995; // 0x2320 JumpB
	Remove(); // 0x2321 ObjFunc
	
Label_8995:
	var_4451_string = "d3q01OspinaGotoBigVladSelf"; // 0x2323 PushS
	FindMark(var_4429_object, var_4451_string); // 0x2324 ObjFunc
	var_4452_object = var_4429_object; // 0x2326 Push
	if(var_4452_object == 0) goto Label_9002; // 0x2327 JumpB
	Remove(); // 0x2328 ObjFunc
	
Label_9002:
	var_4453_string = "d3q01RubinGotoAlexandr"; // 0x232a PushS
	FindMark(var_4429_object, var_4453_string); // 0x232b ObjFunc
	var_4454_object = var_4429_object; // 0x232d Push
	if(var_4454_object == 0) goto Label_9009; // 0x232e JumpB
	Remove(); // 0x232f ObjFunc
	
Label_9009:
	var_4455_string = "d3q01RubinGotoAlexandrSelf"; // 0x2331 PushS
	FindMark(var_4429_object, var_4455_string); // 0x2332 ObjFunc
	var_4456_object = var_4429_object; // 0x2334 Push
	if(var_4456_object == 0) goto Label_9016; // 0x2335 JumpB
	Remove(); // 0x2336 ObjFunc
	
Label_9016:
	var_4457_string = "d3q02BigVladGotoHan"; // 0x2338 PushS
	FindMark(var_4429_object, var_4457_string); // 0x2339 ObjFunc
	var_4458_object = var_4429_object; // 0x233b Push
	if(var_4458_object == 0) goto Label_9023; // 0x233c JumpB
	Remove(); // 0x233d ObjFunc
	
Label_9023:
	var_4459_string = "d3q02GeorgGotoMishka"; // 0x233f PushS
	FindMark(var_4429_object, var_4459_string); // 0x2340 ObjFunc
	var_4460_object = var_4429_object; // 0x2342 Push
	if(var_4460_object == 0) goto Label_9030; // 0x2343 JumpB
	Remove(); // 0x2344 ObjFunc
	
Label_9030:
	var_4461_string = "d3q02GeorgGotoViktor"; // 0x2346 PushS
	FindMark(var_4429_object, var_4461_string); // 0x2347 ObjFunc
	var_4462_object = var_4429_object; // 0x2349 Push
	if(var_4462_object == 0) goto Label_9037; // 0x234a JumpB
	Remove(); // 0x234b ObjFunc
	
Label_9037:
	var_4463_string = "d3q02GeorgSelf"; // 0x234d PushS
	FindMark(var_4429_object, var_4463_string); // 0x234e ObjFunc
	var_4464_object = var_4429_object; // 0x2350 Push
	if(var_4464_object == 0) goto Label_9044; // 0x2351 JumpB
	Remove(); // 0x2352 ObjFunc
	
Label_9044:
	var_4465_string = "d3q02HanGotoViktor"; // 0x2354 PushS
	FindMark(var_4429_object, var_4465_string); // 0x2355 ObjFunc
	var_4466_object = var_4429_object; // 0x2357 Push
	if(var_4466_object == 0) goto Label_9051; // 0x2358 JumpB
	Remove(); // 0x2359 ObjFunc
	
Label_9051:
	var_4467_string = "d3q02MishkaGotoMladVlad"; // 0x235b PushS
	FindMark(var_4429_object, var_4467_string); // 0x235c ObjFunc
	var_4468_object = var_4429_object; // 0x235e Push
	if(var_4468_object == 0) goto Label_9058; // 0x235f JumpB
	Remove(); // 0x2360 ObjFunc
	
Label_9058:
	var_4469_string = "d3q02MladVladGotoBigVlad"; // 0x2362 PushS
	FindMark(var_4429_object, var_4469_string); // 0x2363 ObjFunc
	var_4470_object = var_4429_object; // 0x2365 Push
	if(var_4470_object == 0) goto Label_9065; // 0x2366 JumpB
	Remove(); // 0x2367 ObjFunc
	
Label_9065:
	var_4471_string = "d3q02ViktorGotoMladVlad"; // 0x2369 PushS
	FindMark(var_4429_object, var_4471_string); // 0x236a ObjFunc
	var_4472_object = var_4429_object; // 0x236c Push
	if(var_4472_object == 0) goto Label_9072; // 0x236d JumpB
	Remove(); // 0x236e ObjFunc
	
Label_9072:
	var_4473_string = "d3q02ViktorGotoMladVladSelf"; // 0x2370 PushS
	FindMark(var_4429_object, var_4473_string); // 0x2371 ObjFunc
	var_4474_object = var_4429_object; // 0x2373 Push
	if(var_4474_object == 0) goto Label_9079; // 0x2374 JumpB
	Remove(); // 0x2375 ObjFunc
	
Label_9079:
	var_4475_string = "d3q03KapellaBoyLocation"; // 0x2377 PushS
	FindMark(var_4429_object, var_4475_string); // 0x2378 ObjFunc
	var_4476_object = var_4429_object; // 0x237a Push
	if(var_4476_object == 0) goto Label_9086; // 0x237b JumpB
	Remove(); // 0x237c ObjFunc
	
Label_9086:
	var_4477_string = "d3q03KapellaBoyLocationSelf"; // 0x237e PushS
	FindMark(var_4429_object, var_4477_string); // 0x237f ObjFunc
	var_4478_object = var_4429_object; // 0x2381 Push
	if(var_4478_object == 0) goto Label_9093; // 0x2382 JumpB
	Remove(); // 0x2383 ObjFunc
	
Label_9093:
	var_4479_bool = 0; var_4480_int = 0; // 0x2385 PushV
	var_4480_int = 25; // 0x2386 MovI
	func_10031(var_4479_bool, var_4480_int); // 0x2387 Call
	var_4481_bool = 0; var_4482_int = 0; // 0x2389 PushV
	var_4482_int = 26; // 0x238a MovI
	func_10031(var_4481_bool, var_4482_int); // 0x238b Call
	var_4483_bool = 0; var_4484_int = 0; // 0x238d PushV
	var_4484_int = 27; // 0x238e MovI
	func_10031(var_4483_bool, var_4484_int); // 0x238f Call
	return 4; // 0x2391 Return
}


func_8409(var_4921_int)
{
	var_4922_int = 0; var_4923_int = 0; // 0x20d9 PushV
	var_4924_int = 15382; // 0x20da PushI
	var_4925_int = 15381; // 0x20db PushI
	AddMessage(var_4924_int, var_4925_int, var_4923_int); // 0x20dc Func
	var_4926_string = "player_mail"; // 0x20de PushS
	var_4927_int = 1; // 0x20df PushI
	SetVariable(var_4926_string, var_4927_int); // 0x20e0 Func
	var_4921_int = var_4923_int; // 0x20e2 Mov
	return 2; // 0x20e3 Return
}


func_2778(var_1703_int, var_1704_int, var_1705_int)
{
	var_1706_int = 0; var_1707_int = 0; var_1708_int = 0; var_1709_int = 0; // 0xada PushV
	var_1710_bool = 0; // 0xadb PushV
	var_1710_bool = 0; // 0xadc MovB
	var_1711_int = 8; // 0xadd PushI
	var_1712_bool = var_1705_int > var_1711_int; // 0xade GT
	if(var_1712_bool == 0) goto Label_2788; // 0xadf JumpB
	var_1713_int = 21; // 0xae0 PushI
	var_1714_bool = var_1705_int < var_1713_int; // 0xae1 LT
	if(var_1714_bool == 0) goto Label_2788; // 0xae2 JumpB
	var_1710_bool = 1; // 0xae3 MovB
	
Label_2788:
	if(var_1710_bool == 0) goto Label_2868; // 0xae4 JumpB
	var_1715_int = 0; var_1716_string = ""; var_1717_string = ""; var_1718_int = 0; // 0xae5 PushV
	var_1715_int = var_1703_int; // 0xae6 Mov
	var_1716_string = "pers_worker"; // 0xae7 MovS
	var_1717_string = "worker_d.xml"; // 0xae8 MovS
	var_1718_int = 2; // 0xae9 MovI
	func_438(var_1715_int, var_1716_string, var_1717_string, var_1718_int); // 0xaea Call
	var_1719_int = 0; var_1720_string = ""; var_1721_string = ""; var_1722_int = 0; // 0xaec PushV
	var_1719_int = var_1703_int; // 0xaed Mov
	var_1720_string = "pers_worker"; // 0xaee MovS
	var_1721_string = "worker2_d.xml"; // 0xaef MovS
	var_1722_int = 2; // 0xaf0 MovI
	func_438(var_1719_int, var_1720_string, var_1721_string, var_1722_int); // 0xaf1 Call
	var_1723_int = 0; var_1724_string = ""; var_1725_string = ""; var_1726_int = 0; // 0xaf3 PushV
	var_1723_int = var_1703_int; // 0xaf4 Mov
	var_1724_string = "pers_alkash"; // 0xaf5 MovS
	var_1725_string = "alkash_d.xml"; // 0xaf6 MovS
	var_1726_int = 1; // 0xaf7 MovI
	func_438(var_1723_int, var_1724_string, var_1725_string, var_1726_int); // 0xaf8 Call
	var_1727_int = 0; var_1728_string = ""; var_1729_string = ""; var_1730_int = 0; // 0xafa PushV
	var_1727_int = var_1703_int; // 0xafb Mov
	var_1728_string = "pers_woman"; // 0xafc MovS
	var_1729_string = "woman_d.xml"; // 0xafd MovS
	var_1730_int = 1; // 0xafe MovI
	func_438(var_1727_int, var_1728_string, var_1729_string, var_1730_int); // 0xaff Call
	var_1731_int = 0; var_1732_string = ""; var_1733_string = ""; var_1734_int = 0; // 0xb01 PushV
	var_1731_int = var_1703_int; // 0xb02 Mov
	var_1732_string = "pers_vaxxabit"; // 0xb03 MovS
	var_1733_string = "vaxxabit.xml"; // 0xb04 MovS
	var_1734_int = 1; // 0xb05 MovI
	func_438(var_1731_int, var_1732_string, var_1733_string, var_1734_int); // 0xb06 Call
	var_1735_int = 0; var_1736_string = ""; var_1737_string = ""; var_1738_int = 0; // 0xb08 PushV
	var_1735_int = var_1703_int; // 0xb09 Mov
	var_1736_string = "pers_vaxxabit"; // 0xb0a MovS
	var_1737_string = "vaxxabit_d.xml"; // 0xb0b MovS
	var_1738_int = 1; // 0xb0c MovI
	func_438(var_1735_int, var_1736_string, var_1737_string, var_1738_int); // 0xb0d Call
	var_1739_int = 0; var_1740_string = ""; var_1741_string = ""; var_1742_int = 0; // 0xb0f PushV
	var_1739_int = var_1703_int; // 0xb10 Mov
	var_1740_string = "pers_vaxxabitka"; // 0xb11 MovS
	var_1741_string = "vaxxabitka.xml"; // 0xb12 MovS
	var_1742_int = 1; // 0xb13 MovI
	func_438(var_1739_int, var_1740_string, var_1741_string, var_1742_int); // 0xb14 Call
	var_1743_int = 0; var_1744_string = ""; var_1745_string = ""; var_1746_int = 0; // 0xb16 PushV
	var_1743_int = var_1703_int; // 0xb17 Mov
	var_1744_string = "pers_vaxxabitka"; // 0xb18 MovS
	var_1745_string = "vaxxabitka_d.xml"; // 0xb19 MovS
	var_1746_int = 1; // 0xb1a MovI
	func_438(var_1743_int, var_1744_string, var_1745_string, var_1746_int); // 0xb1b Call
	var_1747_int = 0; var_1748_string = ""; var_1749_string = ""; var_1750_int = 0; // 0xb1d PushV
	var_1747_int = var_1703_int; // 0xb1e Mov
	var_1748_string = "fog"; // 0xb1f MovS
	var_1749_string = "fog.xml"; // 0xb20 MovS
	var_1750_int = 5; // 0xb21 MovI
	func_464(var_1747_int, var_1748_string, var_1749_string, var_1750_int); // 0xb22 Call
	var_1751_int = 2; // 0xb24 PushI
	var_1752_float = 0; var_1753_int = 0; // 0xb25 PushV
	var_1753_int = var_1704_int; // 0xb26 Mov
	func_1022(var_1752_float, var_1753_int); // 0xb27 Call
	var_1708_int = var_1751_int * var_1752_float; // 0xb29 Mult2
	var_1754_int = var_1708_int; // 0xb2a Push
	if(var_1754_int == 0) goto Label_2867; // 0xb2b JumpB
	var_1755_int = 0; var_1756_string = ""; var_1757_string = ""; var_1758_int = 0; // 0xb2c PushV
	var_1755_int = var_1703_int; // 0xb2d Mov
	var_1756_string = "pers_bomber"; // 0xb2e MovS
	var_1757_string = "bomber.xml"; // 0xb2f MovS
	var_1758_int = var_1708_int; // 0xb30 Mov
	func_438(var_1755_int, var_1756_string, var_1757_string, var_1758_int); // 0xb31 Call
	
Label_2867:
	goto Label_2932; // 0xb33 Jump
	
Label_2932:
	var_1759_int = 0; var_1760_string = ""; var_1761_string = ""; var_1762_int = 0; var_1763_int = 0; var_1764_int = 0; // 0xb74 PushV
	var_1759_int = var_1703_int; // 0xb75 Mov
	var_1760_string = "pers_worker"; // 0xb76 MovS
	var_1761_string = "agony1.xml"; // 0xb77 MovS
	var_1762_int = 2; // 0xb78 MovI
	var_1763_int = 4; // 0xb79 MovI
	var_1764_int = 4; // 0xb7a MovI
	func_451(var_1759_int, var_1760_string, var_1761_string, var_1762_int, var_1763_int, var_1764_int); // 0xb7b Call
	var_1765_int = 0; var_1766_string = ""; var_1767_string = ""; var_1768_int = 0; var_1769_int = 0; var_1770_int = 0; // 0xb7d PushV
	var_1765_int = var_1703_int; // 0xb7e Mov
	var_1766_string = "pers_unosha"; // 0xb7f MovS
	var_1767_string = "agony1.xml"; // 0xb80 MovS
	var_1768_int = 2; // 0xb81 MovI
	var_1769_int = 4; // 0xb82 MovI
	var_1770_int = 4; // 0xb83 MovI
	func_451(var_1765_int, var_1766_string, var_1767_string, var_1768_int, var_1769_int, var_1770_int); // 0xb84 Call
	var_1771_int = 0; var_1772_string = ""; var_1773_string = ""; var_1774_int = 0; var_1775_int = 0; var_1776_int = 0; // 0xb86 PushV
	var_1771_int = var_1703_int; // 0xb87 Mov
	var_1772_string = "pers_woman"; // 0xb88 MovS
	var_1773_string = "agony1.xml"; // 0xb89 MovS
	var_1774_int = 2; // 0xb8a MovI
	var_1775_int = 4; // 0xb8b MovI
	var_1776_int = 4; // 0xb8c MovI
	func_451(var_1771_int, var_1772_string, var_1773_string, var_1774_int, var_1775_int, var_1776_int); // 0xb8d Call
	var_1777_int = 0; var_1778_string = ""; var_1779_string = ""; var_1780_int = 0; var_1781_int = 0; var_1782_int = 0; // 0xb8f PushV
	var_1777_int = var_1703_int; // 0xb90 Mov
	var_1778_string = "pers_vaxxabitka"; // 0xb91 MovS
	var_1779_string = "agony1.xml"; // 0xb92 MovS
	var_1780_int = 2; // 0xb93 MovI
	var_1781_int = 4; // 0xb94 MovI
	var_1782_int = 4; // 0xb95 MovI
	func_451(var_1777_int, var_1778_string, var_1779_string, var_1780_int, var_1781_int, var_1782_int); // 0xb96 Call
	var_1783_int = 0; var_1784_string = ""; var_1785_string = ""; var_1786_int = 0; var_1787_int = 0; var_1788_int = 0; // 0xb98 PushV
	var_1783_int = var_1703_int; // 0xb99 Mov
	var_1784_string = "pers_wasted_girl"; // 0xb9a MovS
	var_1785_string = "agony1.xml"; // 0xb9b MovS
	var_1786_int = 2; // 0xb9c MovI
	var_1787_int = 4; // 0xb9d MovI
	var_1788_int = 4; // 0xb9e MovI
	func_451(var_1783_int, var_1784_string, var_1785_string, var_1786_int, var_1787_int, var_1788_int); // 0xb9f Call
	return 4; // 0xba1 Return
	
Label_2868:
	var_1789_int = 0; var_1790_string = ""; var_1791_string = ""; var_1792_int = 0; // 0xb34 PushV
	var_1789_int = var_1703_int; // 0xb35 Mov
	var_1790_string = "pers_worker"; // 0xb36 MovS
	var_1791_string = "worker_d.xml"; // 0xb37 MovS
	var_1792_int = 1; // 0xb38 MovI
	func_438(var_1789_int, var_1790_string, var_1791_string, var_1792_int); // 0xb39 Call
	var_1793_int = 0; var_1794_string = ""; var_1795_string = ""; var_1796_int = 0; // 0xb3b PushV
	var_1793_int = var_1703_int; // 0xb3c Mov
	var_1794_string = "pers_worker"; // 0xb3d MovS
	var_1795_string = "worker2_d.xml"; // 0xb3e MovS
	var_1796_int = 1; // 0xb3f MovI
	func_438(var_1793_int, var_1794_string, var_1795_string, var_1796_int); // 0xb40 Call
	var_1797_int = 0; var_1798_string = ""; var_1799_string = ""; var_1800_int = 0; // 0xb42 PushV
	var_1797_int = var_1703_int; // 0xb43 Mov
	var_1798_string = "pers_alkash"; // 0xb44 MovS
	var_1799_string = "alkash_d.xml"; // 0xb45 MovS
	var_1800_int = 1; // 0xb46 MovI
	func_438(var_1797_int, var_1798_string, var_1799_string, var_1800_int); // 0xb47 Call
	var_1801_int = 0; var_1802_string = ""; var_1803_string = ""; var_1804_int = 0; // 0xb49 PushV
	var_1801_int = var_1703_int; // 0xb4a Mov
	var_1802_string = "pers_woman"; // 0xb4b MovS
	var_1803_string = "woman_d.xml"; // 0xb4c MovS
	var_1804_int = 1; // 0xb4d MovI
	func_438(var_1801_int, var_1802_string, var_1803_string, var_1804_int); // 0xb4e Call
	var_1805_int = 0; var_1806_string = ""; var_1807_string = ""; var_1808_int = 0; // 0xb50 PushV
	var_1805_int = var_1703_int; // 0xb51 Mov
	var_1806_string = "pers_vaxxabit"; // 0xb52 MovS
	var_1807_string = "vaxxabit_d.xml"; // 0xb53 MovS
	var_1808_int = 1; // 0xb54 MovI
	func_438(var_1805_int, var_1806_string, var_1807_string, var_1808_int); // 0xb55 Call
	var_1809_int = 0; var_1810_string = ""; var_1811_string = ""; var_1812_int = 0; // 0xb57 PushV
	var_1809_int = var_1703_int; // 0xb58 Mov
	var_1810_string = "pers_vaxxabitka"; // 0xb59 MovS
	var_1811_string = "vaxxabitka_d.xml"; // 0xb5a MovS
	var_1812_int = 1; // 0xb5b MovI
	func_438(var_1809_int, var_1810_string, var_1811_string, var_1812_int); // 0xb5c Call
	var_1813_int = 0; var_1814_string = ""; var_1815_string = ""; var_1816_int = 0; // 0xb5e PushV
	var_1813_int = var_1703_int; // 0xb5f Mov
	var_1814_string = "fog"; // 0xb60 MovS
	var_1815_string = "fog.xml"; // 0xb61 MovS
	var_1816_int = 5; // 0xb62 MovI
	func_464(var_1813_int, var_1814_string, var_1815_string, var_1816_int); // 0xb63 Call
	var_1817_int = 2; // 0xb65 PushI
	var_1818_float = 0; var_1819_int = 0; // 0xb66 PushV
	var_1819_int = var_1704_int; // 0xb67 Mov
	func_1022(var_1818_float, var_1819_int); // 0xb68 Call
	var_1709_int = var_1817_int * var_1818_float; // 0xb6a Mult2
	var_1820_int = var_1709_int; // 0xb6b Push
	if(var_1820_int == 0) goto Label_2932; // 0xb6c JumpB
	var_1821_int = 0; var_1822_string = ""; var_1823_string = ""; var_1824_int = 0; // 0xb6d PushV
	var_1821_int = var_1703_int; // 0xb6e Mov
	var_1822_string = "pers_bomber"; // 0xb6f MovS
	var_1823_string = "bomber.xml"; // 0xb70 MovS
	var_1824_int = var_1709_int; // 0xb71 Mov
	func_438(var_1821_int, var_1822_string, var_1823_string, var_1824_int); // 0xb72 Call
}


func_731(var_353_int, var_354_bool)
{
	var_355_object = Obj(); var_356_int = 0; var_357_object = Obj(); var_358_int = 0; // 0x2db PushV
	GetMainOutdoorScene(var_357_object); // 0x2dc Func
	var_359_bool = var_357_object == 0; // 0x2de NullEq
	if(var_359_bool == 0) goto Label_740; // 0x2df JumpB
	var_360_string = "City manager: Can't find main outdoor scene"; // 0x2e0 PushS
	Trace(var_360_string); // 0x2e1 Func
	return 4; // 0x2e3 Return
	
Label_740:
	var_361_int = 1; // 0x2e4 PushI
	var_358_int = var_353_int + var_361_int; // 0x2e5 Add2
	var_362_int = 200; // 0x2e6 PushI
	var_363_bool = 0; // 0x2e7 PushB
	EnableSubsets(var_358_int, var_362_int, var_354_bool, var_363_bool); // 0x2e8 ObjFunc
	return 4; // 0x2ea Return
}


func_217(var_122_bool, var_123_int)
{
	var_124_int = 0; // 0xda PushV
	func_208(var_124_int); // 0xdb Call
	var_122_bool = var_124_int == var_123_int; // 0xdd Eq2
	return 0; // 0xde Return
}


func_4317()
{
	var_86_string = "house5_02"; // 0x10de PushS
	add(var_86_string); // 0x10df ObjFunc
	var_87_string = "dt_house1_union2_03l"; // 0x10e1 PushS
	add(var_87_string); // 0x10e2 ObjFunc
	var_88_string = "dt_house1_union2_03r"; // 0x10e4 PushS
	add(var_88_string); // 0x10e5 ObjFunc
	var_89_string = "dt_house1_union2_01l"; // 0x10e7 PushS
	add(var_89_string); // 0x10e8 ObjFunc
	var_90_string = "dt_house1_union2_01r"; // 0x10ea PushS
	add(var_90_string); // 0x10eb ObjFunc
	var_91_string = "house5_unoinl"; // 0x10ed PushS
	add(var_91_string); // 0x10ee ObjFunc
	var_92_string = "house5_unoinr"; // 0x10f0 PushS
	add(var_92_string); // 0x10f1 ObjFunc
	var_93_string = "dt_house_1_01"; // 0x10f3 PushS
	add(var_93_string); // 0x10f4 ObjFunc
	var_94_string = "house5_05"; // 0x10f6 PushS
	add(var_94_string); // 0x10f7 ObjFunc
	var_95_string = "house5_06"; // 0x10f9 PushS
	add(var_95_string); // 0x10fa ObjFunc
	var_96_string = "dt_house1_union2_02l"; // 0x10fc PushS
	add(var_96_string); // 0x10fd ObjFunc
	var_97_string = "dt_house1_union2_02r"; // 0x10ff PushS
	add(var_97_string); // 0x1100 ObjFunc
	var_98_string = "dt_house_1_02"; // 0x1102 PushS
	add(var_98_string); // 0x1103 ObjFunc
	var_99_string = "house5_unoin_solid01l"; // 0x1105 PushS
	add(var_99_string); // 0x1106 ObjFunc
	var_100_string = "house5_unoin_solid01r"; // 0x1108 PushS
	add(var_100_string); // 0x1109 ObjFunc
	var_101_string = "house5_03"; // 0x110b PushS
	add(var_101_string); // 0x110c ObjFunc
	var_102_string = "house5_04"; // 0x110e PushS
	add(var_102_string); // 0x110f ObjFunc
	return 0; // 0x1111 Return
}


func_223(var_347_string, var_348_int)
{
	var_349_string = "Region"; // 0xe0 PushS
	var_350_int = var_349_string + var_348_int; // 0xe1 Add
	var_351_string = "State"; // 0xe2 PushS
	var_347_string = var_350_int + var_351_string; // 0xe3 Add2
	return 0; // 0xe4 Return
}


func_5855(var_1183_int, var_1184_int, var_1185_object, var_1186_object, var_1187_object, var_1188_object)
{
	var_1189_int = 0; // 0x16e0 PushI
	var_1190_bool = var_1184_int == var_1189_int; // 0x16e1 Eq
	if(var_1190_bool == 0) goto Label_5883; // 0x16e2 JumpB
	var_1191_int = 0; var_1192_bool = 0; // 0x16e3 PushV
	var_1191_int = 12; // 0x16e4 MovI
	var_1192_bool = 0; // 0x16e5 MovB
	func_731(var_1191_int, var_1192_bool); // 0x16e6 Call
	var_1193_int = 0; var_1194_bool = 0; var_1195_int = 0; // 0x16e8 PushV
	var_1193_int = 12; // 0x16e9 MovI
	var_1194_bool = 0; // 0x16ea MovB
	var_1195_int = 1; // 0x16eb MovI
	func_748(var_1193_int, var_1194_bool, var_1195_int); // 0x16ec Call
	var_1196_int = 0; var_1197_int = 0; var_1198_object = Obj(); var_1199_object = Obj(); var_1200_object = Obj(); // 0x16ee PushV
	var_1196_int = 12; // 0x16ef MovI
	var_1197_int = var_1183_int; // 0x16f0 Mov
	var_1198_object = var_1185_object; // 0x16f1 Mov
	var_1199_object = var_1186_object; // 0x16f2 Mov
	var_1200_object = var_1187_object; // 0x16f3 Mov
	func_557(var_1197_int, var_1198_object, var_1199_object, var_1200_object); // 0x16f4 Call
	var_1201_object = Obj(); var_1202_int = 0; // 0x16f6 PushV
	var_1201_object = var_1188_object; // 0x16f7 Mov
	var_1202_int = 0; // 0x16f8 MovI
	func_229(var_1202_int); // 0x16f9 Call
	
Label_5883:
	var_1203_int = 0; var_1204_int = 0; // 0x16fb PushV
	var_1203_int = 12; // 0x16fc MovI
	var_1204_int = var_1184_int; // 0x16fd Mov
	func_842(var_1203_int, var_1204_int); // 0x16fe Call
	var_1205_int = 0; var_1206_int = 0; var_1207_int = 0; // 0x1700 PushV
	var_1205_int = 12; // 0x1701 MovI
	var_1206_int = var_1183_int; // 0x1702 Mov
	var_1207_int = var_1184_int; // 0x1703 Mov
	func_1270(var_1205_int, var_1206_int, var_1207_int); // 0x1704 Call
	return 0; // 0x1706 Return
}


func_6369(var_2649_int, var_2650_int, var_2651_object, var_2652_object, var_2653_object, var_2654_object)
{
	var_2655_int = 0; // 0x18e2 PushI
	var_2656_bool = var_2650_int == var_2655_int; // 0x18e3 Eq
	if(var_2656_bool == 0) goto Label_6397; // 0x18e4 JumpB
	var_2657_int = 0; var_2658_bool = 0; // 0x18e5 PushV
	var_2657_int = 15; // 0x18e6 MovI
	var_2658_bool = 1; // 0x18e7 MovB
	func_731(var_2657_int, var_2658_bool); // 0x18e8 Call
	var_2659_int = 0; var_2660_bool = 0; var_2661_int = 0; // 0x18ea PushV
	var_2659_int = 15; // 0x18eb MovI
	var_2660_bool = 1; // 0x18ec MovB
	var_2661_int = 1; // 0x18ed MovI
	func_748(var_2659_int, var_2660_bool, var_2661_int); // 0x18ee Call
	var_2662_int = 0; var_2663_int = 0; var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj(); // 0x18f0 PushV
	var_2662_int = 15; // 0x18f1 MovI
	var_2663_int = var_2649_int; // 0x18f2 Mov
	var_2664_object = var_2651_object; // 0x18f3 Mov
	var_2665_object = var_2652_object; // 0x18f4 Mov
	var_2666_object = var_2653_object; // 0x18f5 Mov
	func_576(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object); // 0x18f6 Call
	var_2667_object = Obj(); var_2668_int = 0; // 0x18f8 PushV
	var_2667_object = var_2654_object; // 0x18f9 Mov
	var_2668_int = 1; // 0x18fa MovI
	func_229(var_2668_int); // 0x18fb Call
	
Label_6397:
	var_2669_int = 0; var_2670_bool = 0; // 0x18fd PushV
	var_2669_int = 15; // 0x18fe MovI
	var_2670_bool = 0; // 0x18ff MovB
	func_714(var_2669_int, var_2670_bool); // 0x1900 Call
	var_2671_int = 0; var_2672_int = 0; var_2673_int = 0; // 0x1902 PushV
	var_2671_int = 15; // 0x1903 MovI
	var_2672_int = var_2649_int; // 0x1904 Mov
	var_2673_int = var_2650_int; // 0x1905 Mov
	func_1797(var_2671_int, var_2672_int, var_2673_int); // 0x1906 Call
	return 0; // 0x1908 Return
}


func_4832(var_3214_int, var_3215_int, var_3216_object, var_3217_object, var_3218_object, var_3219_object)
{
	var_3220_int = 0; // 0x12e1 PushI
	var_3221_bool = var_3215_int == var_3220_int; // 0x12e2 Eq
	if(var_3221_bool == 0) goto Label_4860; // 0x12e3 JumpB
	var_3222_int = 0; var_3223_bool = 0; // 0x12e4 PushV
	var_3222_int = 5; // 0x12e5 MovI
	var_3223_bool = 1; // 0x12e6 MovB
	func_731(var_3222_int, var_3223_bool); // 0x12e7 Call
	var_3224_int = 0; var_3225_bool = 0; var_3226_int = 0; // 0x12e9 PushV
	var_3224_int = 5; // 0x12ea MovI
	var_3225_bool = 1; // 0x12eb MovB
	var_3226_int = 1; // 0x12ec MovI
	func_748(var_3224_int, var_3225_bool, var_3226_int); // 0x12ed Call
	var_3227_int = 0; var_3228_int = 0; var_3229_object = Obj(); var_3230_object = Obj(); var_3231_object = Obj(); // 0x12ef PushV
	var_3227_int = 5; // 0x12f0 MovI
	var_3228_int = var_3214_int; // 0x12f1 Mov
	var_3229_object = var_3216_object; // 0x12f2 Mov
	var_3230_object = var_3217_object; // 0x12f3 Mov
	var_3231_object = var_3218_object; // 0x12f4 Mov
	func_655(var_3227_int, var_3228_int, var_3229_object, var_3230_object, var_3231_object); // 0x12f5 Call
	var_3232_object = Obj(); var_3233_int = 0; // 0x12f7 PushV
	var_3232_object = var_3219_object; // 0x12f8 Mov
	var_3233_int = 2; // 0x12f9 MovI
	func_229(var_3233_int); // 0x12fa Call
	
Label_4860:
	var_3234_int = 0; var_3235_bool = 0; // 0x12fc PushV
	var_3234_int = 5; // 0x12fd MovI
	var_3235_bool = 0; // 0x12fe MovB
	func_714(var_3234_int, var_3235_bool); // 0x12ff Call
	var_3236_int = 0; var_3237_int = 0; var_3238_int = 0; // 0x1301 PushV
	var_3236_int = 5; // 0x1302 MovI
	var_3237_int = var_3214_int; // 0x1303 Mov
	var_3238_int = var_3215_int; // 0x1304 Mov
	func_3338(var_3236_int, var_3237_int, var_3238_int); // 0x1305 Call
	return 0; // 0x1307 Return
}


func_9953(var_4913_bool)
{
	var_4916_int = 0; var_4917_string = ""; // 0x26e2 PushV
	var_4917_string = "d6ViktorVisit"; // 0x26e3 MovS
	func_92(var_4916_int, var_4917_string); // 0x26e4 Call
	var_4918_int = 1; // 0x26e6 PushI
	var_4919_bool = var_4916_int == var_4918_int; // 0x26e7 Eq
	if(var_4919_bool == 0) goto Label_9963; // 0x26e8 JumpB
	var_4913_bool = 1; // 0x26e9 MovB
	return 0; // 0x26ea Return
	
Label_9963:
	var_4913_bool = 0; // 0x26eb MovB
	return 0; // 0x26ec Return
}


func_5348(var_1102_int, var_1103_int, var_1104_object, var_1105_object, var_1106_object, var_1107_object)
{
	var_1108_int = 0; // 0x14e5 PushI
	var_1109_bool = var_1103_int == var_1108_int; // 0x14e6 Eq
	if(var_1109_bool == 0) goto Label_5376; // 0x14e7 JumpB
	var_1110_int = 0; var_1111_bool = 0; // 0x14e8 PushV
	var_1110_int = 9; // 0x14e9 MovI
	var_1111_bool = 0; // 0x14ea MovB
	func_731(var_1110_int, var_1111_bool); // 0x14eb Call
	var_1112_int = 0; var_1113_bool = 0; var_1114_int = 0; // 0x14ed PushV
	var_1112_int = 9; // 0x14ee MovI
	var_1113_bool = 0; // 0x14ef MovB
	var_1114_int = 1; // 0x14f0 MovI
	func_748(var_1112_int, var_1113_bool, var_1114_int); // 0x14f1 Call
	var_1115_int = 0; var_1116_int = 0; var_1117_object = Obj(); var_1118_object = Obj(); var_1119_object = Obj(); // 0x14f3 PushV
	var_1115_int = 9; // 0x14f4 MovI
	var_1116_int = var_1102_int; // 0x14f5 Mov
	var_1117_object = var_1104_object; // 0x14f6 Mov
	var_1118_object = var_1105_object; // 0x14f7 Mov
	var_1119_object = var_1106_object; // 0x14f8 Mov
	func_557(var_1116_int, var_1117_object, var_1118_object, var_1119_object); // 0x14f9 Call
	var_1120_object = Obj(); var_1121_int = 0; // 0x14fb PushV
	var_1120_object = var_1107_object; // 0x14fc Mov
	var_1121_int = 0; // 0x14fd MovI
	func_229(var_1121_int); // 0x14fe Call
	
Label_5376:
	var_1122_int = 0; var_1123_int = 0; // 0x1500 PushV
	var_1122_int = 9; // 0x1501 MovI
	var_1123_int = var_1103_int; // 0x1502 Mov
	func_872(var_1122_int, var_1123_int); // 0x1503 Call
	var_1124_int = 0; var_1125_int = 0; var_1126_int = 0; // 0x1505 PushV
	var_1124_int = 9; // 0x1506 MovI
	var_1125_int = var_1102_int; // 0x1507 Mov
	var_1126_int = var_1103_int; // 0x1508 Mov
	func_1270(var_1124_int, var_1125_int, var_1126_int); // 0x1509 Call
	return 0; // 0x150b Return
}


func_229(var_503_int)
{
	var_504_int = 0; var_505_string = ""; var_506_int = 0; var_507_string = ""; var_508_string = ""; var_509_object = Obj(); var_510_int = 0; var_511_string = ""; var_512_int = 0; var_513_string = ""; var_514_string = ""; var_515_object = Obj(); // 0xe5 PushV
	size(var_510_int); // 0xe6 ObjFunc
	var_516_int = 1; // 0xe8 PushI
	var_517_bool = var_503_int == var_516_int; // 0xe9 Eq
	if(var_517_bool == 0) goto Label_237; // 0xea JumpB
	var_511_string = "s_"; // 0xeb MovS
	goto Label_241; // 0xec Jump
	
Label_241:
	var_512_int = 0; // 0xf1 MovI
	
Label_242:
	var_518_bool = var_512_int < var_510_int; // 0xf2 LT
	if(var_518_bool == 0) goto Label_266; // 0xf3 JumpB
	get(var_513_string, var_512_int); // 0xf4 ObjFunc
	var_519_int = var_511_string + var_513_string; // 0xf6 Add
	var_520_string = ".isc"; // 0xf7 PushS
	var_514_string = var_519_int + var_520_string; // 0xf8 Add2
	GetSceneByName(var_515_object, var_513_string); // 0xf9 Func
	var_521_bool = var_515_object == 0; // 0xfb Not
	if(var_521_bool == 0) goto Label_260; // 0xfc JumpB
	var_522_string = "City manager: can't replace indoor scene ""; // 0xfd PushS
	var_523_int = var_522_string + var_513_string; // 0xfe Add
	var_524_string = "" because it doesn't exist"; // 0xff PushS
	var_525_int = var_523_int + var_524_string; // 0x100 Add
	Trace(var_525_int); // 0x101 Func
	goto Label_262; // 0x103 Jump
	
Label_262:
	var_515_object = 0; // 0x106 SetNull
	var_526_int = 3; // 0x107 PushI
	var_512_int = var_512_int + var_526_int; // 0x108 Add2
	goto Label_242; // 0x109 Jump
	
Label_260:
	ReplaceScene(var_515_object, var_514_string); // 0x104 Func
	
Label_266:
	return 12; // 0x10a Return
	
Label_237:
	var_527_int = 2; // 0xed PushI
	var_528_bool = var_503_int == var_527_int; // 0xee Eq
	if(var_528_bool == 0) goto Label_241; // 0xef JumpB
	var_511_string = "n_"; // 0xf0 MovS
}


func_8420(var_4510_int)
{
	var_4511_int = 0; var_4512_int = 0; // 0x20e4 PushV
	var_4513_int = 15433; // 0x20e5 PushI
	var_4514_int = 15432; // 0x20e6 PushI
	AddMessage(var_4513_int, var_4514_int, var_4512_int); // 0x20e7 Func
	var_4515_string = "player_mail"; // 0x20e9 PushS
	var_4516_int = 1; // 0x20ea PushI
	SetVariable(var_4515_string, var_4516_int); // 0x20eb Func
	var_4510_int = var_4512_int; // 0x20ed Mov
	return 2; // 0x20ee Return
}


func_748(var_419_int, var_420_bool, var_421_int)
{
	var_422_string = ""; var_423_object = Obj(); var_424_int = 0; var_425_string = ""; var_426_object = Obj(); var_427_int = 0; var_428_object = Obj(); var_429_string = ""; var_430_object = Obj(); var_431_int = 0; var_432_string = ""; var_433_object = Obj(); var_434_int = 0; var_435_object = Obj(); // 0x2ec PushV
	var_436_string = "street_rags"; // 0x2ed PushS
	var_437_int = 1; // 0x2ee PushI
	var_438_int = var_419_int + var_437_int; // 0x2ef Add
	var_429_string = var_436_string + var_438_int; // 0x2f0 Add2
	var_439_bool = var_420_bool; // 0x2f1 Push
	if(var_439_bool == 0) goto Label_788; // 0x2f2 JumpB
	GetMainOutdoorScene(var_430_object); // 0x2f3 Func
	var_440_bool = var_430_object == 0; // 0x2f5 NullEq
	if(var_440_bool == 0) goto Label_763; // 0x2f6 JumpB
	var_441_string = "City manager: Can't find main outdoor scene"; // 0x2f7 PushS
	Trace(var_441_string); // 0x2f8 Func
	return 14; // 0x2fa Return
	
Label_763:
	var_431_int = 1; // 0x2fb MovI
	
Label_764:
	var_442_bool = var_431_int <= var_421_int; // 0x2fc LE
	if(var_442_bool == 0) goto Label_786; // 0x2fd JumpB
	var_443_string = "_"; // 0x2fe PushS
	var_444_int = var_429_string + var_443_string; // 0x2ff Add
	var_432_string = var_444_int + var_431_int; // 0x300 Add2
	FindActor(var_433_object, var_432_string); // 0x301 Func
	var_445_bool = var_433_object == 0; // 0x303 Not
	if(var_445_bool == 0) goto Label_779; // 0x304 JumpB
	var_446_cvector = CVector(0.0, 0.0, 0.0); // 0x305 PushVec
	var_447_cvector = CVector(0.0, 0.0, 1.0); // 0x306 PushVec
	var_448_string = "do_invis.xml"; // 0x307 PushS
	AddActor(var_433_object, var_432_string, var_430_object, var_446_cvector, var_447_cvector, var_448_string); // 0x308 Func
	goto Label_782; // 0x30a Jump
	
Label_782:
	var_433_object = 0; // 0x30e SetNull
	var_449_int = 1; // 0x30f PushI
	var_431_int = var_431_int + var_449_int; // 0x310 Add2
	goto Label_764; // 0x311 Jump
	
Label_779:
	var_450_bool = 0; // 0x30b PushB
	RemoveOnUnload(var_450_bool); // 0x30c ObjFunc
	
Label_786:
	var_430_object = 0; // 0x312 SetNull
	goto Label_804; // 0x313 Jump
	
Label_804:
	return 14; // 0x324 Return
	
Label_788:
	var_434_int = 1; // 0x314 MovI
	
Label_789:
	var_451_bool = var_434_int <= var_421_int; // 0x315 LE
	if(var_451_bool == 0) goto Label_804; // 0x316 JumpB
	var_452_string = "_"; // 0x317 PushS
	var_453_int = var_429_string + var_452_string; // 0x318 Add
	var_454_int = var_453_int + var_434_int; // 0x319 Add
	FindActor(var_435_object, var_454_int); // 0x31a Func
	var_455_object = var_435_object; // 0x31c Push
	if(var_455_object == 0) goto Label_800; // 0x31d JumpB
	RemoveOnUnload(); // 0x31e ObjFunc
	
Label_800:
	var_435_object = 0; // 0x320 SetNull
	var_456_int = 1; // 0x321 PushI
	var_434_int = var_434_int + var_456_int; // 0x322 Add2
	goto Label_789; // 0x323 Jump
}


func_9965(var_4502_bool)
{
	var_4505_int = 0; var_4506_string = ""; // 0x26ee PushV
	var_4506_string = "d7AglajaVisit"; // 0x26ef MovS
	func_92(var_4505_int, var_4506_string); // 0x26f0 Call
	var_4507_int = 1; // 0x26f2 PushI
	var_4508_bool = var_4505_int == var_4507_int; // 0x26f3 Eq
	if(var_4508_bool == 0) goto Label_9975; // 0x26f4 JumpB
	var_4502_bool = 1; // 0x26f5 MovB
	return 0; // 0x26f6 Return
	
Label_9975:
	var_4502_bool = 0; // 0x26f7 MovB
	return 0; // 0x26f8 Return
}


func_8431(var_4519_int)
{
	var_4520_int = 0; var_4521_int = 0; // 0x20ef PushV
	var_4522_int = 15439; // 0x20f0 PushI
	var_4523_int = 15438; // 0x20f1 PushI
	AddMessage(var_4522_int, var_4523_int, var_4521_int); // 0x20f2 Func
	var_4524_string = "player_mail"; // 0x20f4 PushS
	var_4525_int = 1; // 0x20f5 PushI
	SetVariable(var_4524_string, var_4525_int); // 0x20f6 Func
	var_4519_int = var_4521_int; // 0x20f8 Mov
	return 2; // 0x20f9 Return
}


func_1270(var_990_int, var_991_int, var_992_int)
{
	var_993_bool = 0; // 0x4f7 PushV
	var_993_bool = 0; // 0x4f8 MovB
	var_994_int = 8; // 0x4f9 PushI
	var_995_bool = var_992_int > var_994_int; // 0x4fa GT
	if(var_995_bool == 0) goto Label_1280; // 0x4fb JumpB
	var_996_int = 21; // 0x4fc PushI
	var_997_bool = var_992_int < var_996_int; // 0x4fd LT
	if(var_997_bool == 0) goto Label_1280; // 0x4fe JumpB
	var_993_bool = 1; // 0x4ff MovB
	
Label_1280:
	if(var_993_bool == 0) goto Label_1357; // 0x500 JumpB
	var_998_int = 0; var_999_string = ""; var_1000_string = ""; var_1001_int = 0; // 0x501 PushV
	var_998_int = var_990_int; // 0x502 Mov
	var_999_string = "pers_woman"; // 0x503 MovS
	var_1000_string = "woman.xml"; // 0x504 MovS
	var_1001_int = 2; // 0x505 MovI
	func_438(var_998_int, var_999_string, var_1000_string, var_1001_int); // 0x506 Call
	var_1002_int = 0; var_1003_string = ""; var_1004_string = ""; var_1005_int = 0; // 0x508 PushV
	var_1002_int = var_990_int; // 0x509 Mov
	var_1003_string = "pers_unosha"; // 0x50a MovS
	var_1004_string = "unosha.xml"; // 0x50b MovS
	var_1005_int = 1; // 0x50c MovI
	func_438(var_1002_int, var_1003_string, var_1004_string, var_1005_int); // 0x50d Call
	var_1006_int = 0; var_1007_string = ""; var_1008_string = ""; var_1009_int = 0; // 0x50f PushV
	var_1006_int = var_990_int; // 0x510 Mov
	var_1007_string = "pers_unosha"; // 0x511 MovS
	var_1008_string = "unosha2.xml"; // 0x512 MovS
	var_1009_int = 1; // 0x513 MovI
	func_438(var_1006_int, var_1007_string, var_1008_string, var_1009_int); // 0x514 Call
	var_1010_int = 0; var_1011_string = ""; var_1012_string = ""; var_1013_int = 0; // 0x516 PushV
	var_1010_int = var_990_int; // 0x517 Mov
	var_1011_string = "pers_boy"; // 0x518 MovS
	var_1012_string = "boy.xml"; // 0x519 MovS
	var_1013_int = 2; // 0x51a MovI
	func_438(var_1010_int, var_1011_string, var_1012_string, var_1013_int); // 0x51b Call
	var_1014_int = 0; var_1015_string = ""; var_1016_string = ""; var_1017_int = 0; // 0x51d PushV
	var_1014_int = var_990_int; // 0x51e Mov
	var_1015_string = "pers_girl"; // 0x51f MovS
	var_1016_string = "girl.xml"; // 0x520 MovS
	var_1017_int = 1; // 0x521 MovI
	func_438(var_1014_int, var_1015_string, var_1016_string, var_1017_int); // 0x522 Call
	var_1018_int = 0; var_1019_string = ""; var_1020_string = ""; var_1021_int = 0; // 0x524 PushV
	var_1018_int = var_990_int; // 0x525 Mov
	var_1019_string = "pers_girl"; // 0x526 MovS
	var_1020_string = "girl2.xml"; // 0x527 MovS
	var_1021_int = 1; // 0x528 MovI
	func_438(var_1018_int, var_1019_string, var_1020_string, var_1021_int); // 0x529 Call
	var_1022_int = 0; var_1023_string = ""; var_1024_string = ""; var_1025_int = 0; // 0x52b PushV
	var_1022_int = var_990_int; // 0x52c Mov
	var_1023_string = "pers_littleboy"; // 0x52d MovS
	var_1024_string = "littleboy.xml"; // 0x52e MovS
	var_1025_int = 1; // 0x52f MovI
	func_438(var_1022_int, var_1023_string, var_1024_string, var_1025_int); // 0x530 Call
	var_1026_int = 0; var_1027_string = ""; var_1028_string = ""; var_1029_int = 0; // 0x532 PushV
	var_1026_int = var_990_int; // 0x533 Mov
	var_1027_string = "pers_littlegirl"; // 0x534 MovS
	var_1028_string = "littlegirl.xml"; // 0x535 MovS
	var_1029_int = 1; // 0x536 MovI
	func_438(var_1026_int, var_1027_string, var_1028_string, var_1029_int); // 0x537 Call
	var_1030_int = 0; var_1031_string = ""; var_1032_string = ""; var_1033_int = 0; // 0x539 PushV
	var_1030_int = var_990_int; // 0x53a Mov
	var_1031_string = "pers_alkash"; // 0x53b MovS
	var_1032_string = "alkash.xml"; // 0x53c MovS
	var_1033_int = 1; // 0x53d MovI
	func_438(var_1030_int, var_1031_string, var_1032_string, var_1033_int); // 0x53e Call
	var_1034_int = 1; // 0x540 PushI
	var_1035_int = var_991_int + var_1034_int; // 0x541 Add
	var_1036_int = 3; // 0x542 PushI
	var_1037_bool = var_1035_int >= var_1036_int; // 0x543 GE
	if(var_1037_bool == 0) goto Label_1349; // 0x544 JumpB
	
Label_1349:
	var_1038_int = 0; var_1039_string = ""; var_1040_string = ""; var_1041_int = 0; // 0x545 PushV
	var_1038_int = var_990_int; // 0x546 Mov
	var_1039_string = "pers_dog"; // 0x547 MovS
	var_1040_string = "dog.xml"; // 0x548 MovS
	var_1041_int = 1; // 0x549 MovI
	func_438(var_1038_int, var_1039_string, var_1040_string, var_1041_int); // 0x54a Call
	goto Label_1397; // 0x54c Jump
	
Label_1397:
	var_1042_bool = 0; var_1043_int = 0; var_1044_int = 0; // 0x575 PushV
	var_1043_int = var_991_int; // 0x576 Mov
	var_1044_int = var_992_int; // 0x577 Mov
	func_1112(var_1042_bool, var_1043_int, var_1044_int); // 0x578 Call
	if(var_1042_bool == 0) goto Label_1410; // 0x57a JumpB
	var_1045_int = 0; var_1046_string = ""; var_1047_string = ""; var_1048_int = 0; // 0x57b PushV
	var_1045_int = var_990_int; // 0x57c Mov
	var_1046_string = "pers_soldat"; // 0x57d MovS
	var_1047_string = "soldier_marauder.xml"; // 0x57e MovS
	var_1048_int = 2; // 0x57f MovI
	func_438(var_1045_int, var_1046_string, var_1047_string, var_1048_int); // 0x580 Call
	
Label_1410:
	return 0; // 0x582 Return
	
Label_1357:
	var_1049_int = 0; var_1050_string = ""; var_1051_string = ""; var_1052_int = 0; // 0x54d PushV
	var_1049_int = var_990_int; // 0x54e Mov
	var_1050_string = "pers_woman"; // 0x54f MovS
	var_1051_string = "woman.xml"; // 0x550 MovS
	var_1052_int = 1; // 0x551 MovI
	func_438(var_1049_int, var_1050_string, var_1051_string, var_1052_int); // 0x552 Call
	var_1053_int = 0; var_1054_string = ""; var_1055_string = ""; var_1056_int = 0; // 0x554 PushV
	var_1053_int = var_990_int; // 0x555 Mov
	var_1054_string = "pers_unosha"; // 0x556 MovS
	var_1055_string = "unosha.xml"; // 0x557 MovS
	var_1056_int = 1; // 0x558 MovI
	func_438(var_1053_int, var_1054_string, var_1055_string, var_1056_int); // 0x559 Call
	var_1057_int = 0; var_1058_string = ""; var_1059_string = ""; var_1060_int = 0; // 0x55b PushV
	var_1057_int = var_990_int; // 0x55c Mov
	var_1058_string = "pers_unosha"; // 0x55d MovS
	var_1059_string = "unosha2.xml"; // 0x55e MovS
	var_1060_int = 1; // 0x55f MovI
	func_438(var_1057_int, var_1058_string, var_1059_string, var_1060_int); // 0x560 Call
	var_1061_int = 0; var_1062_string = ""; var_1063_string = ""; var_1064_int = 0; // 0x562 PushV
	var_1061_int = var_990_int; // 0x563 Mov
	var_1062_string = "pers_alkash"; // 0x564 MovS
	var_1063_string = "alkash.xml"; // 0x565 MovS
	var_1064_int = 2; // 0x566 MovI
	func_438(var_1061_int, var_1062_string, var_1063_string, var_1064_int); // 0x567 Call
	var_1065_int = 1; // 0x569 PushI
	var_1066_int = var_991_int + var_1065_int; // 0x56a Add
	var_1067_int = 3; // 0x56b PushI
	var_1068_bool = var_1066_int >= var_1067_int; // 0x56c GE
	if(var_1068_bool == 0) goto Label_1390; // 0x56d JumpB
	
Label_1390:
	var_1069_int = 0; var_1070_string = ""; var_1071_string = ""; var_1072_int = 0; // 0x56e PushV
	var_1069_int = var_990_int; // 0x56f Mov
	var_1070_string = "pers_dog"; // 0x570 MovS
	var_1071_string = "dog.xml"; // 0x571 MovS
	var_1072_int = 1; // 0x572 MovI
	func_438(var_1069_int, var_1070_string, var_1071_string, var_1072_int); // 0x573 Call
}


func_9977(var_4528_bool)
{
	var_4531_int = 0; var_4532_string = ""; // 0x26fa PushV
	var_4532_string = "d11AglajaVisit"; // 0x26fb MovS
	func_92(var_4531_int, var_4532_string); // 0x26fc Call
	var_4533_int = 1; // 0x26fe PushI
	var_4534_bool = var_4531_int == var_4533_int; // 0x26ff Eq
	if(var_4534_bool == 0) goto Label_9987; // 0x2700 JumpB
	var_4528_bool = 1; // 0x2701 MovB
	return 0; // 0x2702 Return
	
Label_9987:
	var_4528_bool = 0; // 0x2703 MovB
	return 0; // 0x2704 Return
}


func_8442(var_4930_int)
{
	var_4931_int = 0; var_4932_int = 0; // 0x20fa PushV
	var_4933_int = 15431; // 0x20fb PushI
	var_4934_int = 15430; // 0x20fc PushI
	AddMessage(var_4933_int, var_4934_int, var_4932_int); // 0x20fd Func
	var_4935_string = "player_mail"; // 0x20ff PushS
	var_4936_int = 1; // 0x2100 PushI
	SetVariable(var_4935_string, var_4936_int); // 0x2101 Func
	var_4930_int = var_4932_int; // 0x2103 Mov
	return 2; // 0x2104 Return
}


func_11007()
{
	var_3917_object = GlobalVars[18]; // 0x2aff PushGE
	var_3917_object = 0; // 0x2b00 SetNull
	GlobalVars[18] = var_3917_object; // 0x2b01 PopGE
	var_3918_object = Obj(); var_3919_object = Obj(); // 0x2b02 PushV
	var_3920_object = GlobalVars[18]; // 0x2b03 PushGE
	var_3918_object = var_3920_object; // 0x2b04 Mov
	var_3921_object = GlobalVars[18]; // 0x2b06 PushGE
	var_3919_object = var_3921_object; // 0x2b07 Mov
	func_8516(); // 0x2b09 Call
	var_3932_object = Obj(); var_3933_object = Obj(); // 0x2b0b PushV
	var_3934_object = GlobalVars[18]; // 0x2b0c PushGE
	var_3932_object = var_3934_object; // 0x2b0d Mov
	var_3935_object = GlobalVars[18]; // 0x2b0f PushGE
	var_3933_object = var_3935_object; // 0x2b10 Mov
	func_8460(); // 0x2b12 Call
	var_3938_object = Obj(); var_3939_object = Obj(); // 0x2b14 PushV
	var_3940_object = GlobalVars[18]; // 0x2b15 PushGE
	var_3938_object = var_3940_object; // 0x2b16 Mov
	var_3941_object = GlobalVars[18]; // 0x2b18 PushGE
	var_3939_object = var_3941_object; // 0x2b19 Mov
	func_8467(); // 0x2b1b Call
	var_3944_object = Obj(); var_3945_object = Obj(); // 0x2b1d PushV
	var_3946_object = GlobalVars[18]; // 0x2b1e PushGE
	var_3944_object = var_3946_object; // 0x2b1f Mov
	var_3947_object = GlobalVars[18]; // 0x2b21 PushGE
	var_3945_object = var_3947_object; // 0x2b22 Mov
	func_8481(); // 0x2b24 Call
	var_3973_object = Obj(); var_3974_object = Obj(); // 0x2b26 PushV
	var_3975_object = GlobalVars[18]; // 0x2b27 PushGE
	var_3973_object = var_3975_object; // 0x2b28 Mov
	var_3976_object = GlobalVars[18]; // 0x2b2a PushGE
	var_3974_object = var_3976_object; // 0x2b2b Mov
	func_8486(); // 0x2b2d Call
	var_3979_object = Obj(); var_3980_object = Obj(); // 0x2b2f PushV
	var_3981_object = GlobalVars[18]; // 0x2b30 PushGE
	var_3979_object = var_3981_object; // 0x2b31 Mov
	var_3982_object = GlobalVars[18]; // 0x2b33 PushGE
	var_3980_object = var_3982_object; // 0x2b34 Mov
	func_9695(); // 0x2b36 Call
	var_3985_int = 0; // 0x2b38 PushV
	func_8255(var_3985_int); // 0x2b39 Call
	var_3992_object = Obj(); var_3993_string = ""; // 0x2b3b PushV
	var_3993_string = "volonteers_danko"; // 0x2b3c MovS
	func_97(var_3992_object, var_3993_string); // 0x2b3d Call
	var_4000_int = 45003; // 0x2b3f PushI
	var_4001_float = 24.0; // 0x2b40 PushF
	SetTimeEvent(var_4000_int, var_4001_float); // 0x2b41 Func
	var_4002_int = 45015; // 0x2b43 PushI
	var_4003_float = 129.0; // 0x2b44 PushF
	SetTimeEvent(var_4002_int, var_4003_float); // 0x2b45 Func
	var_4004_int = 45013; // 0x2b47 PushI
	var_4005_float = 144.0; // 0x2b48 PushF
	SetTimeEvent(var_4004_int, var_4005_float); // 0x2b49 Func
	var_4006_int = 45028; // 0x2b4b PushI
	var_4007_float = 239.0; // 0x2b4c PushF
	SetTimeEvent(var_4006_int, var_4007_float); // 0x2b4d Func
	var_4008_int = 45029; // 0x2b4f PushI
	var_4009_float = 263.0; // 0x2b50 PushF
	SetTimeEvent(var_4008_int, var_4009_float); // 0x2b51 Func
	var_4010_int = 45026; // 0x2b53 PushI
	var_4011_float = 191.0; // 0x2b54 PushF
	SetTimeEvent(var_4010_int, var_4011_float); // 0x2b55 Func
	var_4012_int = 45027; // 0x2b57 PushI
	var_4013_float = 215.0; // 0x2b58 PushF
	SetTimeEvent(var_4012_int, var_4013_float); // 0x2b59 Func
	var_4014_int = 45012; // 0x2b5b PushI
	var_4015_float = 120.0; // 0x2b5c PushF
	SetTimeEvent(var_4014_int, var_4015_float); // 0x2b5d Func
	var_4016_int = 45016; // 0x2b5f PushI
	var_4017_float = 168.0; // 0x2b60 PushF
	SetTimeEvent(var_4016_int, var_4017_float); // 0x2b61 Func
	var_4018_int = 45022; // 0x2b63 PushI
	var_4019_float = 95.0; // 0x2b64 PushF
	SetTimeEvent(var_4018_int, var_4019_float); // 0x2b65 Func
	var_4020_int = 45023; // 0x2b67 PushI
	var_4021_float = 119.0; // 0x2b68 PushF
	SetTimeEvent(var_4020_int, var_4021_float); // 0x2b69 Func
	var_4022_int = 45031; // 0x2b6b PushI
	var_4023_float = 240.0; // 0x2b6c PushF
	SetTimeEvent(var_4022_int, var_4023_float); // 0x2b6d Func
	var_4024_int = 45032; // 0x2b6f PushI
	var_4025_float = 245.0; // 0x2b70 PushF
	SetTimeEvent(var_4024_int, var_4025_float); // 0x2b71 Func
	var_4026_int = 45011; // 0x2b73 PushI
	var_4027_float = 96.0; // 0x2b74 PushF
	SetTimeEvent(var_4026_int, var_4027_float); // 0x2b75 Func
	var_4028_int = 45024; // 0x2b77 PushI
	var_4029_float = 143.0; // 0x2b78 PushF
	SetTimeEvent(var_4028_int, var_4029_float); // 0x2b79 Func
	var_4030_int = 45025; // 0x2b7b PushI
	var_4031_float = 167.0; // 0x2b7c PushF
	SetTimeEvent(var_4030_int, var_4031_float); // 0x2b7d Func
	var_4032_int = 45020; // 0x2b7f PushI
	var_4033_float = 47.0; // 0x2b80 PushF
	SetTimeEvent(var_4032_int, var_4033_float); // 0x2b81 Func
	var_4034_int = 45021; // 0x2b83 PushI
	var_4035_float = 71.0; // 0x2b84 PushF
	SetTimeEvent(var_4034_int, var_4035_float); // 0x2b85 Func
	var_4036_int = 45008; // 0x2b87 PushI
	var_4037_float = 10.0; // 0x2b88 PushF
	SetTimeEvent(var_4036_int, var_4037_float); // 0x2b89 Func
	var_4038_int = 45054; // 0x2b8b PushI
	var_4039_float = 272.0; // 0x2b8c PushF
	SetTimeEvent(var_4038_int, var_4039_float); // 0x2b8d Func
	var_4040_int = 45056; // 0x2b8f PushI
	var_4041_float = 266.0; // 0x2b90 PushF
	SetTimeEvent(var_4040_int, var_4041_float); // 0x2b91 Func
	var_4042_int = 45017; // 0x2b93 PushI
	var_4043_float = 196.0; // 0x2b94 PushF
	SetTimeEvent(var_4042_int, var_4043_float); // 0x2b95 Func
	var_4044_int = 45019; // 0x2b97 PushI
	var_4045_float = 23.0; // 0x2b98 PushF
	SetTimeEvent(var_4044_int, var_4045_float); // 0x2b99 Func
	var_4046_int = 45007; // 0x2b9b PushI
	var_4047_float = 17.92; // 0x2b9c PushF
	SetTimeEvent(var_4046_int, var_4047_float); // 0x2b9d Func
	var_4048_int = 45006; // 0x2b9f PushI
	var_4049_float = 72.0; // 0x2ba0 PushF
	SetTimeEvent(var_4048_int, var_4049_float); // 0x2ba1 Func
	var_4050_int = 45049; // 0x2ba3 PushI
	var_4051_float = 152.07001; // 0x2ba4 PushF
	SetTimeEvent(var_4050_int, var_4051_float); // 0x2ba5 Func
	var_4052_int = 45050; // 0x2ba7 PushI
	var_4053_float = 174.0; // 0x2ba8 PushF
	SetTimeEvent(var_4052_int, var_4053_float); // 0x2ba9 Func
	var_4054_int = 45051; // 0x2bab PushI
	var_4055_float = 249.35001; // 0x2bac PushF
	SetTimeEvent(var_4054_int, var_4055_float); // 0x2bad Func
	var_4056_int = 45052; // 0x2baf PushI
	var_4057_float = 276.0; // 0x2bb0 PushF
	SetTimeEvent(var_4056_int, var_4057_float); // 0x2bb1 Func
	var_4058_int = 45053; // 0x2bb3 PushI
	var_4059_float = 279.0; // 0x2bb4 PushF
	SetTimeEvent(var_4058_int, var_4059_float); // 0x2bb5 Func
	var_4060_int = 45038; // 0x2bb7 PushI
	var_4061_float = 35.0; // 0x2bb8 PushF
	SetTimeEvent(var_4060_int, var_4061_float); // 0x2bb9 Func
	var_4062_int = 45039; // 0x2bbb PushI
	var_4063_float = 60.0; // 0x2bbc PushF
	SetTimeEvent(var_4062_int, var_4063_float); // 0x2bbd Func
	var_4064_int = 45040; // 0x2bbf PushI
	var_4065_float = 55.0; // 0x2bc0 PushF
	SetTimeEvent(var_4064_int, var_4065_float); // 0x2bc1 Func
	var_4066_int = 45041; // 0x2bc3 PushI
	var_4067_float = 80.0; // 0x2bc4 PushF
	SetTimeEvent(var_4066_int, var_4067_float); // 0x2bc5 Func
	var_4068_int = 45010; // 0x2bc7 PushI
	var_4069_float = 16.0; // 0x2bc8 PushF
	SetTimeEvent(var_4068_int, var_4069_float); // 0x2bc9 Func
	var_4070_int = 45033; // 0x2bcb PushI
	var_4071_float = 32.0; // 0x2bcc PushF
	SetTimeEvent(var_4070_int, var_4071_float); // 0x2bcd Func
	var_4072_int = 45034; // 0x2bcf PushI
	var_4073_float = 41.0; // 0x2bd0 PushF
	SetTimeEvent(var_4072_int, var_4073_float); // 0x2bd1 Func
	var_4074_int = 45035; // 0x2bd3 PushI
	var_4075_float = 253.0; // 0x2bd4 PushF
	SetTimeEvent(var_4074_int, var_4075_float); // 0x2bd5 Func
	var_4076_int = 45036; // 0x2bd7 PushI
	var_4077_float = 255.0; // 0x2bd8 PushF
	SetTimeEvent(var_4076_int, var_4077_float); // 0x2bd9 Func
	var_4078_int = 45042; // 0x2bdb PushI
	var_4079_float = 264.0; // 0x2bdc PushF
	SetTimeEvent(var_4078_int, var_4079_float); // 0x2bdd Func
	var_4080_int = 45009; // 0x2bdf PushI
	var_4081_float = 23.5; // 0x2be0 PushF
	SetTimeEvent(var_4080_int, var_4081_float); // 0x2be1 Func
	var_4082_int = 45043; // 0x2be3 PushI
	var_4083_float = 108.0; // 0x2be4 PushF
	SetTimeEvent(var_4082_int, var_4083_float); // 0x2be5 Func
	var_4084_int = 45044; // 0x2be7 PushI
	var_4085_float = 127.0; // 0x2be8 PushF
	SetTimeEvent(var_4084_int, var_4085_float); // 0x2be9 Func
	var_4086_int = 45045; // 0x2beb PushI
	var_4087_float = 127.5; // 0x2bec PushF
	SetTimeEvent(var_4086_int, var_4087_float); // 0x2bed Func
	var_4088_int = 45046; // 0x2bef PushI
	var_4089_float = 128.0; // 0x2bf0 PushF
	SetTimeEvent(var_4088_int, var_4089_float); // 0x2bf1 Func
	var_4090_int = 45047; // 0x2bf3 PushI
	var_4091_float = 132.44; // 0x2bf4 PushF
	SetTimeEvent(var_4090_int, var_4091_float); // 0x2bf5 Func
	var_4092_int = 45048; // 0x2bf7 PushI
	var_4093_float = 154.0; // 0x2bf8 PushF
	SetTimeEvent(var_4092_int, var_4093_float); // 0x2bf9 Func
	var_4094_int = 45018; // 0x2bfb PushI
	var_4095_float = 216.0; // 0x2bfc PushF
	SetTimeEvent(var_4094_int, var_4095_float); // 0x2bfd Func
	var_4096_int = 45005; // 0x2bff PushI
	var_4097_float = 48.0; // 0x2c00 PushF
	SetTimeEvent(var_4096_int, var_4097_float); // 0x2c01 Func
	return 0; // 0x2c03 Return
}


func_8453()
{
	var_4612_string = ""; var_4613_bool = 0; // 0x2106 PushV
	var_4612_string = "warehouse_rubin@door1"; // 0x2107 MovS
	var_4613_bool = 0; // 0x2108 MovB
	func_137(var_4612_string, var_4613_bool); // 0x2109 Call
	return 0; // 0x210b Return
}


func_9477()
{
	var_3935_object = Obj(); var_3936_object = Obj(); var_3937_object = Obj(); var_3938_object = Obj(); // 0x2505 PushV
	var_3939_object = Obj(); // 0x2506 PushV
	func_10048(var_3939_object); // 0x2507 Call
	var_3937_object = var_3939_object; // 0x2508 Mov
	var_3940_string = "d6q01AlexandrGotoJulia"; // 0x250a PushS
	FindMark(var_3938_object, var_3940_string); // 0x250b ObjFunc
	var_3941_object = var_3938_object; // 0x250d Push
	if(var_3941_object == 0) goto Label_9489; // 0x250e JumpB
	Remove(); // 0x250f ObjFunc
	
Label_9489:
	var_3942_string = "d6q01AlexandrGotoKaterina"; // 0x2511 PushS
	FindMark(var_3938_object, var_3942_string); // 0x2512 ObjFunc
	var_3943_object = var_3938_object; // 0x2514 Push
	if(var_3943_object == 0) goto Label_9496; // 0x2515 JumpB
	Remove(); // 0x2516 ObjFunc
	
Label_9496:
	var_3944_string = "d6q01AlexandrGotoLara"; // 0x2518 PushS
	FindMark(var_3938_object, var_3944_string); // 0x2519 ObjFunc
	var_3945_object = var_3938_object; // 0x251b Push
	if(var_3945_object == 0) goto Label_9503; // 0x251c JumpB
	Remove(); // 0x251d ObjFunc
	
Label_9503:
	var_3946_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x251f PushS
	FindMark(var_3938_object, var_3946_string); // 0x2520 ObjFunc
	var_3947_object = var_3938_object; // 0x2522 Push
	if(var_3947_object == 0) goto Label_9510; // 0x2523 JumpB
	Remove(); // 0x2524 ObjFunc
	
Label_9510:
	var_3948_string = "d6q01BigVladGotoAnna"; // 0x2526 PushS
	FindMark(var_3938_object, var_3948_string); // 0x2527 ObjFunc
	var_3949_object = var_3938_object; // 0x2529 Push
	if(var_3949_object == 0) goto Label_9517; // 0x252a JumpB
	Remove(); // 0x252b ObjFunc
	
Label_9517:
	var_3950_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x252d PushS
	FindMark(var_3938_object, var_3950_string); // 0x252e ObjFunc
	var_3951_object = var_3938_object; // 0x2530 Push
	if(var_3951_object == 0) goto Label_9524; // 0x2531 JumpB
	Remove(); // 0x2532 ObjFunc
	
Label_9524:
	var_3952_string = "d6q01BigVladGotoOspina"; // 0x2534 PushS
	FindMark(var_3938_object, var_3952_string); // 0x2535 ObjFunc
	var_3953_object = var_3938_object; // 0x2537 Push
	if(var_3953_object == 0) goto Label_9531; // 0x2538 JumpB
	Remove(); // 0x2539 ObjFunc
	
Label_9531:
	var_3954_string = "d6q01KaterinaGotoLaska"; // 0x253b PushS
	FindMark(var_3938_object, var_3954_string); // 0x253c ObjFunc
	var_3955_object = var_3938_object; // 0x253e Push
	if(var_3955_object == 0) goto Label_9538; // 0x253f JumpB
	Remove(); // 0x2540 ObjFunc
	
Label_9538:
	var_3956_string = "d6q01KaterinagotoLaskaSelf"; // 0x2542 PushS
	FindMark(var_3938_object, var_3956_string); // 0x2543 ObjFunc
	var_3957_object = var_3938_object; // 0x2545 Push
	if(var_3957_object == 0) goto Label_9545; // 0x2546 JumpB
	Remove(); // 0x2547 ObjFunc
	
Label_9545:
	var_3958_string = "d6q01KillerIsKlara"; // 0x2549 PushS
	FindMark(var_3938_object, var_3958_string); // 0x254a ObjFunc
	var_3959_object = var_3938_object; // 0x254c Push
	if(var_3959_object == 0) goto Label_9552; // 0x254d JumpB
	Remove(); // 0x254e ObjFunc
	
Label_9552:
	var_3960_string = "d6q01LaskaGotoAlbinos"; // 0x2550 PushS
	FindMark(var_3938_object, var_3960_string); // 0x2551 ObjFunc
	var_3961_object = var_3938_object; // 0x2553 Push
	if(var_3961_object == 0) goto Label_9559; // 0x2554 JumpB
	Remove(); // 0x2555 ObjFunc
	
Label_9559:
	var_3962_string = "d6q01ViktorGotoAlexandr"; // 0x2557 PushS
	FindMark(var_3938_object, var_3962_string); // 0x2558 ObjFunc
	var_3963_object = var_3938_object; // 0x255a Push
	if(var_3963_object == 0) goto Label_9566; // 0x255b JumpB
	Remove(); // 0x255c ObjFunc
	
Label_9566:
	var_3964_string = "d6q01ViktorGotoAlxBigSelf"; // 0x255e PushS
	FindMark(var_3938_object, var_3964_string); // 0x255f ObjFunc
	var_3965_object = var_3938_object; // 0x2561 Push
	if(var_3965_object == 0) goto Label_9573; // 0x2562 JumpB
	Remove(); // 0x2563 ObjFunc
	
Label_9573:
	var_3966_string = "d6q01ViktorGotoBigVlad"; // 0x2565 PushS
	FindMark(var_3938_object, var_3966_string); // 0x2566 ObjFunc
	var_3967_object = var_3938_object; // 0x2568 Push
	if(var_3967_object == 0) goto Label_9580; // 0x2569 JumpB
	Remove(); // 0x256a ObjFunc
	
Label_9580:
	var_3968_string = "d6q02BigVlad"; // 0x256c PushS
	FindMark(var_3938_object, var_3968_string); // 0x256d ObjFunc
	var_3969_object = var_3938_object; // 0x256f Push
	if(var_3969_object == 0) goto Label_9587; // 0x2570 JumpB
	Remove(); // 0x2571 ObjFunc
	
Label_9587:
	var_3970_string = "d6q02KapellaGotoMladVlad"; // 0x2573 PushS
	FindMark(var_3938_object, var_3970_string); // 0x2574 ObjFunc
	var_3971_object = var_3938_object; // 0x2576 Push
	if(var_3971_object == 0) goto Label_9594; // 0x2577 JumpB
	Remove(); // 0x2578 ObjFunc
	
Label_9594:
	var_3972_string = "d6q02MladVladGotoBigVlad"; // 0x257a PushS
	FindMark(var_3938_object, var_3972_string); // 0x257b ObjFunc
	var_3973_object = var_3938_object; // 0x257d Push
	if(var_3973_object == 0) goto Label_9601; // 0x257e JumpB
	Remove(); // 0x257f ObjFunc
	
Label_9601:
	var_3974_string = "d6q02MladVladGotoBigVladSelf"; // 0x2581 PushS
	FindMark(var_3938_object, var_3974_string); // 0x2582 ObjFunc
	var_3975_object = var_3938_object; // 0x2584 Push
	if(var_3975_object == 0) goto Label_9608; // 0x2585 JumpB
	Remove(); // 0x2586 ObjFunc
	
Label_9608:
	var_3976_bool = 0; var_3977_int = 0; // 0x2588 PushV
	var_3977_int = 111; // 0x2589 MovI
	func_10031(var_3976_bool, var_3977_int); // 0x258a Call
	var_3978_bool = 0; var_3979_int = 0; // 0x258c PushV
	var_3979_int = 102; // 0x258d MovI
	func_10031(var_3978_bool, var_3979_int); // 0x258e Call
	var_3980_bool = 0; var_3981_int = 0; // 0x2590 PushV
	var_3981_int = 107; // 0x2591 MovI
	func_10031(var_3980_bool, var_3981_int); // 0x2592 Call
	return 4; // 0x2594 Return
}


func_9989(var_3963_object)
{
	var_3964_object = Obj(); var_3965_object = Obj(); // 0x2705 PushV
	GetDiaryRoot(var_3965_object); // 0x2706 Func
	var_3966_bool = var_3965_object == 0; // 0x2708 Not
	if(var_3966_bool == 0) goto Label_9999; // 0x2709 JumpB
	var_3967_string = "Can't retrieve diary root"; // 0x270a PushS
	Trace(var_3967_string); // 0x270b Func
	var_3963_object = 0; // 0x270d MovB
	return 2; // 0x270e Return
	
Label_9999:
	var_3963_object = var_3965_object; // 0x270f Mov
	return 2; // 0x2710 Return
}


func_1797(var_2494_int, var_2495_int, var_2496_int)
{
	var_2497_int = 0; var_2498_int = 0; var_2499_int = 0; var_2500_int = 0; // 0x705 PushV
	var_2501_bool = 0; // 0x706 PushV
	var_2501_bool = 0; // 0x707 MovB
	var_2502_int = 8; // 0x708 PushI
	var_2503_bool = var_2496_int > var_2502_int; // 0x709 GT
	if(var_2503_bool == 0) goto Label_1807; // 0x70a JumpB
	var_2504_int = 21; // 0x70b PushI
	var_2505_bool = var_2496_int < var_2504_int; // 0x70c LT
	if(var_2505_bool == 0) goto Label_1807; // 0x70d JumpB
	var_2501_bool = 1; // 0x70e MovB
	
Label_1807:
	if(var_2501_bool == 0) goto Label_1915; // 0x70f JumpB
	var_2506_int = 0; var_2507_string = ""; var_2508_string = ""; var_2509_int = 0; // 0x710 PushV
	var_2506_int = var_2494_int; // 0x711 Mov
	var_2507_string = "pers_wasted_girl"; // 0x712 MovS
	var_2508_string = "wasted_girl_d.xml"; // 0x713 MovS
	var_2509_int = 1; // 0x714 MovI
	func_438(var_2506_int, var_2507_string, var_2508_string, var_2509_int); // 0x715 Call
	var_2510_int = 0; var_2511_string = ""; var_2512_string = ""; var_2513_int = 0; // 0x717 PushV
	var_2510_int = var_2494_int; // 0x718 Mov
	var_2511_string = "pers_wasted_male"; // 0x719 MovS
	var_2512_string = "wasted_male_d.xml"; // 0x71a MovS
	var_2513_int = 1; // 0x71b MovI
	func_438(var_2510_int, var_2511_string, var_2512_string, var_2513_int); // 0x71c Call
	var_2514_int = 0; var_2515_string = ""; var_2516_string = ""; var_2517_int = 0; // 0x71e PushV
	var_2514_int = var_2494_int; // 0x71f Mov
	var_2515_string = "pers_woman"; // 0x720 MovS
	var_2516_string = "woman_d.xml"; // 0x721 MovS
	var_2517_int = 1; // 0x722 MovI
	func_438(var_2514_int, var_2515_string, var_2516_string, var_2517_int); // 0x723 Call
	var_2518_int = 0; var_2519_string = ""; var_2520_string = ""; var_2521_int = 0; // 0x725 PushV
	var_2518_int = var_2494_int; // 0x726 Mov
	var_2519_string = "pers_unosha"; // 0x727 MovS
	var_2520_string = "unosha_d.xml"; // 0x728 MovS
	var_2521_int = 1; // 0x729 MovI
	func_438(var_2518_int, var_2519_string, var_2520_string, var_2521_int); // 0x72a Call
	var_2522_int = 0; var_2523_string = ""; var_2524_string = ""; var_2525_int = 0; // 0x72c PushV
	var_2522_int = var_2494_int; // 0x72d Mov
	var_2523_string = "pers_unosha"; // 0x72e MovS
	var_2524_string = "unosha2_d.xml"; // 0x72f MovS
	var_2525_int = 1; // 0x730 MovI
	func_438(var_2522_int, var_2523_string, var_2524_string, var_2525_int); // 0x731 Call
	var_2526_int = 0; var_2527_string = ""; var_2528_string = ""; var_2529_int = 0; // 0x733 PushV
	var_2526_int = var_2494_int; // 0x734 Mov
	var_2527_string = "pers_boy"; // 0x735 MovS
	var_2528_string = "boy_d.xml"; // 0x736 MovS
	var_2529_int = 1; // 0x737 MovI
	func_438(var_2526_int, var_2527_string, var_2528_string, var_2529_int); // 0x738 Call
	var_2530_int = 0; var_2531_string = ""; var_2532_string = ""; var_2533_int = 0; // 0x73a PushV
	var_2530_int = var_2494_int; // 0x73b Mov
	var_2531_string = "pers_girl"; // 0x73c MovS
	var_2532_string = "girl_d.xml"; // 0x73d MovS
	var_2533_int = 1; // 0x73e MovI
	func_438(var_2530_int, var_2531_string, var_2532_string, var_2533_int); // 0x73f Call
	var_2534_int = 0; var_2535_string = ""; var_2536_string = ""; var_2537_int = 0; // 0x741 PushV
	var_2534_int = var_2494_int; // 0x742 Mov
	var_2535_string = "pers_girl"; // 0x743 MovS
	var_2536_string = "girl2_d.xml"; // 0x744 MovS
	var_2537_int = 1; // 0x745 MovI
	func_438(var_2534_int, var_2535_string, var_2536_string, var_2537_int); // 0x746 Call
	var_2538_int = 0; var_2539_string = ""; var_2540_string = ""; var_2541_int = 0; // 0x748 PushV
	var_2538_int = var_2494_int; // 0x749 Mov
	var_2539_string = "pers_vaxxabit"; // 0x74a MovS
	var_2540_string = "vaxxabit.xml"; // 0x74b MovS
	var_2541_int = 1; // 0x74c MovI
	func_438(var_2538_int, var_2539_string, var_2540_string, var_2541_int); // 0x74d Call
	var_2542_int = 0; var_2543_string = ""; var_2544_string = ""; var_2545_int = 0; // 0x74f PushV
	var_2542_int = var_2494_int; // 0x750 Mov
	var_2543_string = "pers_vaxxabit"; // 0x751 MovS
	var_2544_string = "vaxxabit_d.xml"; // 0x752 MovS
	var_2545_int = 1; // 0x753 MovI
	func_438(var_2542_int, var_2543_string, var_2544_string, var_2545_int); // 0x754 Call
	var_2546_int = 0; var_2547_string = ""; var_2548_string = ""; var_2549_int = 0; // 0x756 PushV
	var_2546_int = var_2494_int; // 0x757 Mov
	var_2547_string = "pers_vaxxabitka"; // 0x758 MovS
	var_2548_string = "vaxxabitka.xml"; // 0x759 MovS
	var_2549_int = 1; // 0x75a MovI
	func_438(var_2546_int, var_2547_string, var_2548_string, var_2549_int); // 0x75b Call
	var_2550_int = 0; var_2551_string = ""; var_2552_string = ""; var_2553_int = 0; // 0x75d PushV
	var_2550_int = var_2494_int; // 0x75e Mov
	var_2551_string = "pers_vaxxabitka"; // 0x75f MovS
	var_2552_string = "vaxxabitka_d.xml"; // 0x760 MovS
	var_2553_int = 1; // 0x761 MovI
	func_438(var_2550_int, var_2551_string, var_2552_string, var_2553_int); // 0x762 Call
	var_2554_int = 0; var_2555_string = ""; var_2556_string = ""; var_2557_int = 0; // 0x764 PushV
	var_2554_int = var_2494_int; // 0x765 Mov
	var_2555_string = "fog"; // 0x766 MovS
	var_2556_string = "fog.xml"; // 0x767 MovS
	var_2557_int = 6; // 0x768 MovI
	func_464(var_2554_int, var_2555_string, var_2556_string, var_2557_int); // 0x769 Call
	var_2558_int = 1; // 0x76b PushI
	var_2559_float = 0; var_2560_int = 0; // 0x76c PushV
	var_2560_int = var_2495_int; // 0x76d Mov
	func_1022(var_2559_float, var_2560_int); // 0x76e Call
	var_2499_int = var_2558_int * var_2559_float; // 0x770 Mult2
	var_2561_int = var_2499_int; // 0x771 Push
	if(var_2561_int == 0) goto Label_1914; // 0x772 JumpB
	var_2562_int = 0; var_2563_string = ""; var_2564_string = ""; var_2565_int = 0; // 0x773 PushV
	var_2562_int = var_2494_int; // 0x774 Mov
	var_2563_string = "pers_bomber"; // 0x775 MovS
	var_2564_string = "bomber.xml"; // 0x776 MovS
	var_2565_int = var_2499_int; // 0x777 Mov
	func_438(var_2562_int, var_2563_string, var_2564_string, var_2565_int); // 0x778 Call
	
Label_1914:
	goto Label_1993; // 0x77a Jump
	
Label_1993:
	var_2566_int = 0; var_2567_string = ""; var_2568_string = ""; var_2569_int = 0; var_2570_int = 0; var_2571_int = 0; // 0x7c9 PushV
	var_2566_int = var_2494_int; // 0x7ca Mov
	var_2567_string = "pers_worker"; // 0x7cb MovS
	var_2568_string = "agony1.xml"; // 0x7cc MovS
	var_2569_int = 2; // 0x7cd MovI
	var_2570_int = 4; // 0x7ce MovI
	var_2571_int = 4; // 0x7cf MovI
	func_451(var_2566_int, var_2567_string, var_2568_string, var_2569_int, var_2570_int, var_2571_int); // 0x7d0 Call
	var_2572_int = 0; var_2573_string = ""; var_2574_string = ""; var_2575_int = 0; var_2576_int = 0; var_2577_int = 0; // 0x7d2 PushV
	var_2572_int = var_2494_int; // 0x7d3 Mov
	var_2573_string = "pers_unosha"; // 0x7d4 MovS
	var_2574_string = "agony1.xml"; // 0x7d5 MovS
	var_2575_int = 2; // 0x7d6 MovI
	var_2576_int = 4; // 0x7d7 MovI
	var_2577_int = 4; // 0x7d8 MovI
	func_451(var_2572_int, var_2573_string, var_2574_string, var_2575_int, var_2576_int, var_2577_int); // 0x7d9 Call
	var_2578_int = 0; var_2579_string = ""; var_2580_string = ""; var_2581_int = 0; var_2582_int = 0; var_2583_int = 0; // 0x7db PushV
	var_2578_int = var_2494_int; // 0x7dc Mov
	var_2579_string = "pers_woman"; // 0x7dd MovS
	var_2580_string = "agony1.xml"; // 0x7de MovS
	var_2581_int = 2; // 0x7df MovI
	var_2582_int = 4; // 0x7e0 MovI
	var_2583_int = 4; // 0x7e1 MovI
	func_451(var_2578_int, var_2579_string, var_2580_string, var_2581_int, var_2582_int, var_2583_int); // 0x7e2 Call
	var_2584_int = 0; var_2585_string = ""; var_2586_string = ""; var_2587_int = 0; var_2588_int = 0; var_2589_int = 0; // 0x7e4 PushV
	var_2584_int = var_2494_int; // 0x7e5 Mov
	var_2585_string = "pers_vaxxabitka"; // 0x7e6 MovS
	var_2586_string = "agony1.xml"; // 0x7e7 MovS
	var_2587_int = 2; // 0x7e8 MovI
	var_2588_int = 4; // 0x7e9 MovI
	var_2589_int = 4; // 0x7ea MovI
	func_451(var_2584_int, var_2585_string, var_2586_string, var_2587_int, var_2588_int, var_2589_int); // 0x7eb Call
	var_2590_int = 0; var_2591_string = ""; var_2592_string = ""; var_2593_int = 0; var_2594_int = 0; var_2595_int = 0; // 0x7ed PushV
	var_2590_int = var_2494_int; // 0x7ee Mov
	var_2591_string = "pers_wasted_girl"; // 0x7ef MovS
	var_2592_string = "agony1.xml"; // 0x7f0 MovS
	var_2593_int = 2; // 0x7f1 MovI
	var_2594_int = 4; // 0x7f2 MovI
	var_2595_int = 4; // 0x7f3 MovI
	func_451(var_2590_int, var_2591_string, var_2592_string, var_2593_int, var_2594_int, var_2595_int); // 0x7f4 Call
	var_2596_bool = 0; var_2597_int = 0; var_2598_int = 0; // 0x7f6 PushV
	var_2597_int = var_2495_int; // 0x7f7 Mov
	var_2598_int = var_2496_int; // 0x7f8 Mov
	func_1112(var_2596_bool, var_2597_int, var_2598_int); // 0x7f9 Call
	if(var_2596_bool == 0) goto Label_2051; // 0x7fb JumpB
	var_2599_int = 0; var_2600_string = ""; var_2601_string = ""; var_2602_int = 0; // 0x7fc PushV
	var_2599_int = var_2494_int; // 0x7fd Mov
	var_2600_string = "pers_soldat"; // 0x7fe MovS
	var_2601_string = "soldier_marauder.xml"; // 0x7ff MovS
	var_2602_int = 2; // 0x800 MovI
	func_438(var_2599_int, var_2600_string, var_2601_string, var_2602_int); // 0x801 Call
	
Label_2051:
	return 4; // 0x803 Return
	
Label_1915:
	var_2603_int = 0; var_2604_string = ""; var_2605_string = ""; var_2606_int = 0; // 0x77b PushV
	var_2603_int = var_2494_int; // 0x77c Mov
	var_2604_string = "pers_wasted_girl"; // 0x77d MovS
	var_2605_string = "wasted_girl_d.xml"; // 0x77e MovS
	var_2606_int = 1; // 0x77f MovI
	func_438(var_2603_int, var_2604_string, var_2605_string, var_2606_int); // 0x780 Call
	var_2607_int = 0; var_2608_string = ""; var_2609_string = ""; var_2610_int = 0; // 0x782 PushV
	var_2607_int = var_2494_int; // 0x783 Mov
	var_2608_string = "pers_wasted_male"; // 0x784 MovS
	var_2609_string = "wasted_male_d.xml"; // 0x785 MovS
	var_2610_int = 1; // 0x786 MovI
	func_438(var_2607_int, var_2608_string, var_2609_string, var_2610_int); // 0x787 Call
	var_2611_int = 0; var_2612_string = ""; var_2613_string = ""; var_2614_int = 0; // 0x789 PushV
	var_2611_int = var_2494_int; // 0x78a Mov
	var_2612_string = "pers_unosha"; // 0x78b MovS
	var_2613_string = "unosha_d.xml"; // 0x78c MovS
	var_2614_int = 1; // 0x78d MovI
	func_438(var_2611_int, var_2612_string, var_2613_string, var_2614_int); // 0x78e Call
	var_2615_int = 0; var_2616_string = ""; var_2617_string = ""; var_2618_int = 0; // 0x790 PushV
	var_2615_int = var_2494_int; // 0x791 Mov
	var_2616_string = "pers_unosha"; // 0x792 MovS
	var_2617_string = "unosha2_d.xml"; // 0x793 MovS
	var_2618_int = 1; // 0x794 MovI
	func_438(var_2615_int, var_2616_string, var_2617_string, var_2618_int); // 0x795 Call
	var_2619_int = 0; var_2620_string = ""; var_2621_string = ""; var_2622_int = 0; // 0x797 PushV
	var_2619_int = var_2494_int; // 0x798 Mov
	var_2620_string = "pers_vaxxabit"; // 0x799 MovS
	var_2621_string = "vaxxabit.xml"; // 0x79a MovS
	var_2622_int = 1; // 0x79b MovI
	func_438(var_2619_int, var_2620_string, var_2621_string, var_2622_int); // 0x79c Call
	var_2623_int = 0; var_2624_string = ""; var_2625_string = ""; var_2626_int = 0; // 0x79e PushV
	var_2623_int = var_2494_int; // 0x79f Mov
	var_2624_string = "pers_vaxxabit"; // 0x7a0 MovS
	var_2625_string = "vaxxabit_d.xml"; // 0x7a1 MovS
	var_2626_int = 1; // 0x7a2 MovI
	func_438(var_2623_int, var_2624_string, var_2625_string, var_2626_int); // 0x7a3 Call
	var_2627_int = 0; var_2628_string = ""; var_2629_string = ""; var_2630_int = 0; // 0x7a5 PushV
	var_2627_int = var_2494_int; // 0x7a6 Mov
	var_2628_string = "pers_vaxxabitka"; // 0x7a7 MovS
	var_2629_string = "vaxxabitka.xml"; // 0x7a8 MovS
	var_2630_int = 1; // 0x7a9 MovI
	func_438(var_2627_int, var_2628_string, var_2629_string, var_2630_int); // 0x7aa Call
	var_2631_int = 0; var_2632_string = ""; var_2633_string = ""; var_2634_int = 0; // 0x7ac PushV
	var_2631_int = var_2494_int; // 0x7ad Mov
	var_2632_string = "pers_vaxxabitka"; // 0x7ae MovS
	var_2633_string = "vaxxabitka_d.xml"; // 0x7af MovS
	var_2634_int = 1; // 0x7b0 MovI
	func_438(var_2631_int, var_2632_string, var_2633_string, var_2634_int); // 0x7b1 Call
	var_2635_int = 0; var_2636_string = ""; var_2637_string = ""; var_2638_int = 0; // 0x7b3 PushV
	var_2635_int = var_2494_int; // 0x7b4 Mov
	var_2636_string = "fog"; // 0x7b5 MovS
	var_2637_string = "fog.xml"; // 0x7b6 MovS
	var_2638_int = 6; // 0x7b7 MovI
	func_464(var_2635_int, var_2636_string, var_2637_string, var_2638_int); // 0x7b8 Call
	var_2639_int = 1; // 0x7ba PushI
	var_2640_float = 0; var_2641_int = 0; // 0x7bb PushV
	var_2641_int = var_2495_int; // 0x7bc Mov
	func_1022(var_2640_float, var_2641_int); // 0x7bd Call
	var_2500_int = var_2639_int * var_2640_float; // 0x7bf Mult2
	var_2642_int = var_2500_int; // 0x7c0 Push
	if(var_2642_int == 0) goto Label_1993; // 0x7c1 JumpB
	var_2643_int = 0; var_2644_string = ""; var_2645_string = ""; var_2646_int = 0; // 0x7c2 PushV
	var_2643_int = var_2494_int; // 0x7c3 Mov
	var_2644_string = "pers_bomber"; // 0x7c4 MovS
	var_2645_string = "bomber.xml"; // 0x7c5 MovS
	var_2646_int = var_2500_int; // 0x7c6 Mov
	func_438(var_2643_int, var_2644_string, var_2645_string, var_2646_int); // 0x7c7 Call
}


func_2310(var_1849_int, var_1850_int, var_1851_int)
{
	var_1852_int = 0; var_1853_int = 0; var_1854_int = 0; var_1855_int = 0; // 0x906 PushV
	var_1856_bool = 0; // 0x907 PushV
	var_1856_bool = 0; // 0x908 MovB
	var_1857_int = 8; // 0x909 PushI
	var_1858_bool = var_1851_int > var_1857_int; // 0x90a GT
	if(var_1858_bool == 0) goto Label_2320; // 0x90b JumpB
	var_1859_int = 21; // 0x90c PushI
	var_1860_bool = var_1851_int < var_1859_int; // 0x90d LT
	if(var_1860_bool == 0) goto Label_2320; // 0x90e JumpB
	var_1856_bool = 1; // 0x90f MovB
	
Label_2320:
	if(var_1856_bool == 0) goto Label_2431; // 0x910 JumpB
	var_1861_int = 0; var_1862_string = ""; var_1863_string = ""; var_1864_int = 0; // 0x911 PushV
	var_1861_int = var_1849_int; // 0x912 Mov
	var_1862_string = "pers_woman"; // 0x913 MovS
	var_1863_string = "woman_d.xml"; // 0x914 MovS
	var_1864_int = 1; // 0x915 MovI
	func_438(var_1861_int, var_1862_string, var_1863_string, var_1864_int); // 0x916 Call
	var_1865_int = 0; var_1866_string = ""; var_1867_string = ""; var_1868_int = 0; // 0x918 PushV
	var_1865_int = var_1849_int; // 0x919 Mov
	var_1866_string = "pers_unosha"; // 0x91a MovS
	var_1867_string = "unosha_d.xml"; // 0x91b MovS
	var_1868_int = 1; // 0x91c MovI
	func_438(var_1865_int, var_1866_string, var_1867_string, var_1868_int); // 0x91d Call
	var_1869_int = 0; var_1870_string = ""; var_1871_string = ""; var_1872_int = 0; // 0x91f PushV
	var_1869_int = var_1849_int; // 0x920 Mov
	var_1870_string = "pers_unosha"; // 0x921 MovS
	var_1871_string = "unosha2_d.xml"; // 0x922 MovS
	var_1872_int = 1; // 0x923 MovI
	func_438(var_1869_int, var_1870_string, var_1871_string, var_1872_int); // 0x924 Call
	var_1873_int = 0; var_1874_string = ""; var_1875_string = ""; var_1876_int = 0; // 0x926 PushV
	var_1873_int = var_1849_int; // 0x927 Mov
	var_1874_string = "pers_worker"; // 0x928 MovS
	var_1875_string = "worker_d.xml"; // 0x929 MovS
	var_1876_int = 1; // 0x92a MovI
	func_438(var_1873_int, var_1874_string, var_1875_string, var_1876_int); // 0x92b Call
	var_1877_int = 0; var_1878_string = ""; var_1879_string = ""; var_1880_int = 0; // 0x92d PushV
	var_1877_int = var_1849_int; // 0x92e Mov
	var_1878_string = "pers_worker"; // 0x92f MovS
	var_1879_string = "worker2_d.xml"; // 0x930 MovS
	var_1880_int = 1; // 0x931 MovI
	func_438(var_1877_int, var_1878_string, var_1879_string, var_1880_int); // 0x932 Call
	var_1881_int = 0; var_1882_string = ""; var_1883_string = ""; var_1884_int = 0; // 0x934 PushV
	var_1881_int = var_1849_int; // 0x935 Mov
	var_1882_string = "pers_alkash"; // 0x936 MovS
	var_1883_string = "alkash_d.xml"; // 0x937 MovS
	var_1884_int = 1; // 0x938 MovI
	func_438(var_1881_int, var_1882_string, var_1883_string, var_1884_int); // 0x939 Call
	var_1885_int = 0; var_1886_string = ""; var_1887_string = ""; var_1888_int = 0; // 0x93b PushV
	var_1885_int = var_1849_int; // 0x93c Mov
	var_1886_string = "pers_vaxxabit"; // 0x93d MovS
	var_1887_string = "vaxxabit.xml"; // 0x93e MovS
	var_1888_int = 1; // 0x93f MovI
	func_438(var_1885_int, var_1886_string, var_1887_string, var_1888_int); // 0x940 Call
	var_1889_int = 0; var_1890_string = ""; var_1891_string = ""; var_1892_int = 0; // 0x942 PushV
	var_1889_int = var_1849_int; // 0x943 Mov
	var_1890_string = "pers_vaxxabit"; // 0x944 MovS
	var_1891_string = "vaxxabit_d.xml"; // 0x945 MovS
	var_1892_int = 1; // 0x946 MovI
	func_438(var_1889_int, var_1890_string, var_1891_string, var_1892_int); // 0x947 Call
	var_1893_int = 0; var_1894_string = ""; var_1895_string = ""; var_1896_int = 0; // 0x949 PushV
	var_1893_int = var_1849_int; // 0x94a Mov
	var_1894_string = "pers_vaxxabitka"; // 0x94b MovS
	var_1895_string = "vaxxabitka.xml"; // 0x94c MovS
	var_1896_int = 1; // 0x94d MovI
	func_438(var_1893_int, var_1894_string, var_1895_string, var_1896_int); // 0x94e Call
	var_1897_int = 0; var_1898_string = ""; var_1899_string = ""; var_1900_int = 0; // 0x950 PushV
	var_1897_int = var_1849_int; // 0x951 Mov
	var_1898_string = "pers_vaxxabitka"; // 0x952 MovS
	var_1899_string = "vaxxabitka_d.xml"; // 0x953 MovS
	var_1900_int = 1; // 0x954 MovI
	func_438(var_1897_int, var_1898_string, var_1899_string, var_1900_int); // 0x955 Call
	var_1901_int = 1; // 0x957 PushI
	var_1902_int = var_1850_int + var_1901_int; // 0x958 Add
	var_1903_int = 3; // 0x959 PushI
	var_1904_bool = var_1902_int >= var_1903_int; // 0x95a GE
	if(var_1904_bool == 0) goto Label_2396; // 0x95b JumpB
	
Label_2396:
	var_1905_int = 1; // 0x95c PushI
	var_1906_int = var_1850_int + var_1905_int; // 0x95d Add
	var_1907_int = 7; // 0x95e PushI
	var_1908_bool = var_1906_int >= var_1907_int; // 0x95f GE
	if(var_1908_bool == 0) goto Label_2408; // 0x960 JumpB
	var_1909_int = 0; var_1910_string = ""; var_1911_string = ""; var_1912_int = 0; // 0x961 PushV
	var_1909_int = var_1849_int; // 0x962 Mov
	var_1910_string = "pers_butcher"; // 0x963 MovS
	var_1911_string = "butcher_d.xml"; // 0x964 MovS
	var_1912_int = 2; // 0x965 MovI
	func_438(var_1909_int, var_1910_string, var_1911_string, var_1912_int); // 0x966 Call
	
Label_2408:
	var_1913_int = 0; var_1914_string = ""; var_1915_string = ""; var_1916_int = 0; // 0x968 PushV
	var_1913_int = var_1849_int; // 0x969 Mov
	var_1914_string = "fog"; // 0x96a MovS
	var_1915_string = "fog.xml"; // 0x96b MovS
	var_1916_int = 5; // 0x96c MovI
	func_464(var_1913_int, var_1914_string, var_1915_string, var_1916_int); // 0x96d Call
	var_1917_int = 1; // 0x96f PushI
	var_1918_float = 0; var_1919_int = 0; // 0x970 PushV
	var_1919_int = var_1850_int; // 0x971 Mov
	func_1022(var_1918_float, var_1919_int); // 0x972 Call
	var_1854_int = var_1917_int * var_1918_float; // 0x974 Mult2
	var_1920_int = var_1854_int; // 0x975 Push
	if(var_1920_int == 0) goto Label_2430; // 0x976 JumpB
	var_1921_int = 0; var_1922_string = ""; var_1923_string = ""; var_1924_int = 0; // 0x977 PushV
	var_1921_int = var_1849_int; // 0x978 Mov
	var_1922_string = "pers_bomber"; // 0x979 MovS
	var_1923_string = "bomber.xml"; // 0x97a MovS
	var_1924_int = var_1854_int; // 0x97b Mov
	func_438(var_1921_int, var_1922_string, var_1923_string, var_1924_int); // 0x97c Call
	
Label_2430:
	goto Label_2533; // 0x97e Jump
	
Label_2533:
	var_1925_int = 0; var_1926_string = ""; var_1927_string = ""; var_1928_int = 0; var_1929_int = 0; var_1930_int = 0; // 0x9e5 PushV
	var_1925_int = var_1849_int; // 0x9e6 Mov
	var_1926_string = "pers_worker"; // 0x9e7 MovS
	var_1927_string = "agony1.xml"; // 0x9e8 MovS
	var_1928_int = 2; // 0x9e9 MovI
	var_1929_int = 4; // 0x9ea MovI
	var_1930_int = 4; // 0x9eb MovI
	func_451(var_1925_int, var_1926_string, var_1927_string, var_1928_int, var_1929_int, var_1930_int); // 0x9ec Call
	var_1931_int = 0; var_1932_string = ""; var_1933_string = ""; var_1934_int = 0; var_1935_int = 0; var_1936_int = 0; // 0x9ee PushV
	var_1931_int = var_1849_int; // 0x9ef Mov
	var_1932_string = "pers_unosha"; // 0x9f0 MovS
	var_1933_string = "agony1.xml"; // 0x9f1 MovS
	var_1934_int = 2; // 0x9f2 MovI
	var_1935_int = 4; // 0x9f3 MovI
	var_1936_int = 4; // 0x9f4 MovI
	func_451(var_1931_int, var_1932_string, var_1933_string, var_1934_int, var_1935_int, var_1936_int); // 0x9f5 Call
	var_1937_int = 0; var_1938_string = ""; var_1939_string = ""; var_1940_int = 0; var_1941_int = 0; var_1942_int = 0; // 0x9f7 PushV
	var_1937_int = var_1849_int; // 0x9f8 Mov
	var_1938_string = "pers_woman"; // 0x9f9 MovS
	var_1939_string = "agony1.xml"; // 0x9fa MovS
	var_1940_int = 2; // 0x9fb MovI
	var_1941_int = 4; // 0x9fc MovI
	var_1942_int = 4; // 0x9fd MovI
	func_451(var_1937_int, var_1938_string, var_1939_string, var_1940_int, var_1941_int, var_1942_int); // 0x9fe Call
	var_1943_int = 0; var_1944_string = ""; var_1945_string = ""; var_1946_int = 0; var_1947_int = 0; var_1948_int = 0; // 0xa00 PushV
	var_1943_int = var_1849_int; // 0xa01 Mov
	var_1944_string = "pers_vaxxabitka"; // 0xa02 MovS
	var_1945_string = "agony1.xml"; // 0xa03 MovS
	var_1946_int = 2; // 0xa04 MovI
	var_1947_int = 4; // 0xa05 MovI
	var_1948_int = 4; // 0xa06 MovI
	func_451(var_1943_int, var_1944_string, var_1945_string, var_1946_int, var_1947_int, var_1948_int); // 0xa07 Call
	var_1949_int = 0; var_1950_string = ""; var_1951_string = ""; var_1952_int = 0; var_1953_int = 0; var_1954_int = 0; // 0xa09 PushV
	var_1949_int = var_1849_int; // 0xa0a Mov
	var_1950_string = "pers_wasted_girl"; // 0xa0b MovS
	var_1951_string = "agony1.xml"; // 0xa0c MovS
	var_1952_int = 2; // 0xa0d MovI
	var_1953_int = 4; // 0xa0e MovI
	var_1954_int = 4; // 0xa0f MovI
	func_451(var_1949_int, var_1950_string, var_1951_string, var_1952_int, var_1953_int, var_1954_int); // 0xa10 Call
	var_1955_bool = 0; var_1956_int = 0; var_1957_int = 0; // 0xa12 PushV
	var_1956_int = var_1850_int; // 0xa13 Mov
	var_1957_int = var_1851_int; // 0xa14 Mov
	func_1112(var_1955_bool, var_1956_int, var_1957_int); // 0xa15 Call
	if(var_1955_bool == 0) goto Label_2591; // 0xa17 JumpB
	var_1958_int = 0; var_1959_string = ""; var_1960_string = ""; var_1961_int = 0; // 0xa18 PushV
	var_1958_int = var_1849_int; // 0xa19 Mov
	var_1959_string = "pers_soldat"; // 0xa1a MovS
	var_1960_string = "soldier_marauder.xml"; // 0xa1b MovS
	var_1961_int = 2; // 0xa1c MovI
	func_438(var_1958_int, var_1959_string, var_1960_string, var_1961_int); // 0xa1d Call
	
Label_2591:
	return 4; // 0xa1f Return
	
Label_2431:
	var_1962_int = 0; var_1963_string = ""; var_1964_string = ""; var_1965_int = 0; // 0x97f PushV
	var_1962_int = var_1849_int; // 0x980 Mov
	var_1963_string = "pers_unosha"; // 0x981 MovS
	var_1964_string = "unosha_d.xml"; // 0x982 MovS
	var_1965_int = 1; // 0x983 MovI
	func_438(var_1962_int, var_1963_string, var_1964_string, var_1965_int); // 0x984 Call
	var_1966_int = 0; var_1967_string = ""; var_1968_string = ""; var_1969_int = 0; // 0x986 PushV
	var_1966_int = var_1849_int; // 0x987 Mov
	var_1967_string = "pers_unosha"; // 0x988 MovS
	var_1968_string = "unosha2_d.xml"; // 0x989 MovS
	var_1969_int = 1; // 0x98a MovI
	func_438(var_1966_int, var_1967_string, var_1968_string, var_1969_int); // 0x98b Call
	var_1970_int = 0; var_1971_string = ""; var_1972_string = ""; var_1973_int = 0; // 0x98d PushV
	var_1970_int = var_1849_int; // 0x98e Mov
	var_1971_string = "pers_worker"; // 0x98f MovS
	var_1972_string = "worker_d.xml"; // 0x990 MovS
	var_1973_int = 1; // 0x991 MovI
	func_438(var_1970_int, var_1971_string, var_1972_string, var_1973_int); // 0x992 Call
	var_1974_int = 0; var_1975_string = ""; var_1976_string = ""; var_1977_int = 0; // 0x994 PushV
	var_1974_int = var_1849_int; // 0x995 Mov
	var_1975_string = "pers_worker"; // 0x996 MovS
	var_1976_string = "worker2_d.xml"; // 0x997 MovS
	var_1977_int = 1; // 0x998 MovI
	func_438(var_1974_int, var_1975_string, var_1976_string, var_1977_int); // 0x999 Call
	var_1978_int = 0; var_1979_string = ""; var_1980_string = ""; var_1981_int = 0; // 0x99b PushV
	var_1978_int = var_1849_int; // 0x99c Mov
	var_1979_string = "pers_alkash"; // 0x99d MovS
	var_1980_string = "alkash_d.xml"; // 0x99e MovS
	var_1981_int = 1; // 0x99f MovI
	func_438(var_1978_int, var_1979_string, var_1980_string, var_1981_int); // 0x9a0 Call
	var_1982_int = 0; var_1983_string = ""; var_1984_string = ""; var_1985_int = 0; // 0x9a2 PushV
	var_1982_int = var_1849_int; // 0x9a3 Mov
	var_1983_string = "pers_vaxxabit"; // 0x9a4 MovS
	var_1984_string = "vaxxabit.xml"; // 0x9a5 MovS
	var_1985_int = 1; // 0x9a6 MovI
	func_438(var_1982_int, var_1983_string, var_1984_string, var_1985_int); // 0x9a7 Call
	var_1986_int = 0; var_1987_string = ""; var_1988_string = ""; var_1989_int = 0; // 0x9a9 PushV
	var_1986_int = var_1849_int; // 0x9aa Mov
	var_1987_string = "pers_vaxxabit"; // 0x9ab MovS
	var_1988_string = "vaxxabit_d.xml"; // 0x9ac MovS
	var_1989_int = 1; // 0x9ad MovI
	func_438(var_1986_int, var_1987_string, var_1988_string, var_1989_int); // 0x9ae Call
	var_1990_int = 0; var_1991_string = ""; var_1992_string = ""; var_1993_int = 0; // 0x9b0 PushV
	var_1990_int = var_1849_int; // 0x9b1 Mov
	var_1991_string = "pers_vaxxabitka"; // 0x9b2 MovS
	var_1992_string = "vaxxabitka.xml"; // 0x9b3 MovS
	var_1993_int = 1; // 0x9b4 MovI
	func_438(var_1990_int, var_1991_string, var_1992_string, var_1993_int); // 0x9b5 Call
	var_1994_int = 0; var_1995_string = ""; var_1996_string = ""; var_1997_int = 0; // 0x9b7 PushV
	var_1994_int = var_1849_int; // 0x9b8 Mov
	var_1995_string = "pers_vaxxabitka"; // 0x9b9 MovS
	var_1996_string = "vaxxabitka_d.xml"; // 0x9ba MovS
	var_1997_int = 1; // 0x9bb MovI
	func_438(var_1994_int, var_1995_string, var_1996_string, var_1997_int); // 0x9bc Call
	var_1998_int = 1; // 0x9be PushI
	var_1999_int = var_1850_int + var_1998_int; // 0x9bf Add
	var_2000_int = 3; // 0x9c0 PushI
	var_2001_bool = var_1999_int >= var_2000_int; // 0x9c1 GE
	if(var_2001_bool == 0) goto Label_2499; // 0x9c2 JumpB
	
Label_2499:
	var_2002_int = 1; // 0x9c3 PushI
	var_2003_int = var_1850_int + var_2002_int; // 0x9c4 Add
	var_2004_int = 7; // 0x9c5 PushI
	var_2005_bool = var_2003_int >= var_2004_int; // 0x9c6 GE
	if(var_2005_bool == 0) goto Label_2511; // 0x9c7 JumpB
	var_2006_int = 0; var_2007_string = ""; var_2008_string = ""; var_2009_int = 0; // 0x9c8 PushV
	var_2006_int = var_1849_int; // 0x9c9 Mov
	var_2007_string = "pers_butcher"; // 0x9ca MovS
	var_2008_string = "butcher_d.xml"; // 0x9cb MovS
	var_2009_int = 2; // 0x9cc MovI
	func_438(var_2006_int, var_2007_string, var_2008_string, var_2009_int); // 0x9cd Call
	
Label_2511:
	var_2010_int = 0; var_2011_string = ""; var_2012_string = ""; var_2013_int = 0; // 0x9cf PushV
	var_2010_int = var_1849_int; // 0x9d0 Mov
	var_2011_string = "fog"; // 0x9d1 MovS
	var_2012_string = "fog.xml"; // 0x9d2 MovS
	var_2013_int = 4; // 0x9d3 MovI
	func_464(var_2010_int, var_2011_string, var_2012_string, var_2013_int); // 0x9d4 Call
	var_2014_int = 1; // 0x9d6 PushI
	var_2015_float = 0; var_2016_int = 0; // 0x9d7 PushV
	var_2016_int = var_1850_int; // 0x9d8 Mov
	func_1022(var_2015_float, var_2016_int); // 0x9d9 Call
	var_1855_int = var_2014_int * var_2015_float; // 0x9db Mult2
	var_2017_int = var_1855_int; // 0x9dc Push
	if(var_2017_int == 0) goto Label_2533; // 0x9dd JumpB
	var_2018_int = 0; var_2019_string = ""; var_2020_string = ""; var_2021_int = 0; // 0x9de PushV
	var_2018_int = var_1849_int; // 0x9df Mov
	var_2019_string = "pers_bomber"; // 0x9e0 MovS
	var_2020_string = "bomber.xml"; // 0x9e1 MovS
	var_2021_int = var_1855_int; // 0x9e2 Mov
	func_438(var_2018_int, var_2019_string, var_2020_string, var_2021_int); // 0x9e3 Call
}


func_5895(var_2418_int, var_2419_int, var_2420_object, var_2421_object, var_2422_object, var_2423_object)
{
	var_2424_int = 0; // 0x1708 PushI
	var_2425_bool = var_2419_int == var_2424_int; // 0x1709 Eq
	if(var_2425_bool == 0) goto Label_5923; // 0x170a JumpB
	var_2426_int = 0; var_2427_bool = 0; // 0x170b PushV
	var_2426_int = 12; // 0x170c MovI
	var_2427_bool = 1; // 0x170d MovB
	func_731(var_2426_int, var_2427_bool); // 0x170e Call
	var_2428_int = 0; var_2429_bool = 0; var_2430_int = 0; // 0x1710 PushV
	var_2428_int = 12; // 0x1711 MovI
	var_2429_bool = 1; // 0x1712 MovB
	var_2430_int = 1; // 0x1713 MovI
	func_748(var_2428_int, var_2429_bool, var_2430_int); // 0x1714 Call
	var_2431_int = 0; var_2432_int = 0; var_2433_object = Obj(); var_2434_object = Obj(); var_2435_object = Obj(); // 0x1716 PushV
	var_2431_int = 12; // 0x1717 MovI
	var_2432_int = var_2418_int; // 0x1718 Mov
	var_2433_object = var_2420_object; // 0x1719 Mov
	var_2434_object = var_2421_object; // 0x171a Mov
	var_2435_object = var_2422_object; // 0x171b Mov
	func_576(var_2431_int, var_2432_int, var_2433_object, var_2434_object, var_2435_object); // 0x171c Call
	var_2436_object = Obj(); var_2437_int = 0; // 0x171e PushV
	var_2436_object = var_2423_object; // 0x171f Mov
	var_2437_int = 1; // 0x1720 MovI
	func_229(var_2437_int); // 0x1721 Call
	
Label_5923:
	var_2438_int = 0; var_2439_bool = 0; // 0x1723 PushV
	var_2438_int = 12; // 0x1724 MovI
	var_2439_bool = 0; // 0x1725 MovB
	func_714(var_2438_int, var_2439_bool); // 0x1726 Call
	var_2440_int = 0; var_2441_int = 0; var_2442_int = 0; // 0x1728 PushV
	var_2440_int = 12; // 0x1729 MovI
	var_2441_int = var_2418_int; // 0x172a Mov
	var_2442_int = var_2419_int; // 0x172b Mov
	func_2052(var_2440_int, var_2441_int, var_2442_int); // 0x172c Call
	return 0; // 0x172e Return
}


func_4872()
{
	return 0; // 0x1309 Return
}


func_6409(var_3697_int, var_3698_int, var_3699_object, var_3700_object, var_3701_object, var_3702_object)
{
	var_3703_int = 0; // 0x190a PushI
	var_3704_bool = var_3698_int == var_3703_int; // 0x190b Eq
	if(var_3704_bool == 0) goto Label_6437; // 0x190c JumpB
	var_3705_int = 0; var_3706_bool = 0; // 0x190d PushV
	var_3705_int = 15; // 0x190e MovI
	var_3706_bool = 1; // 0x190f MovB
	func_731(var_3705_int, var_3706_bool); // 0x1910 Call
	var_3707_int = 0; var_3708_bool = 0; var_3709_int = 0; // 0x1912 PushV
	var_3707_int = 15; // 0x1913 MovI
	var_3708_bool = 1; // 0x1914 MovB
	var_3709_int = 1; // 0x1915 MovI
	func_748(var_3707_int, var_3708_bool, var_3709_int); // 0x1916 Call
	var_3710_int = 0; var_3711_int = 0; var_3712_object = Obj(); var_3713_object = Obj(); var_3714_object = Obj(); // 0x1918 PushV
	var_3710_int = 15; // 0x1919 MovI
	var_3711_int = var_3697_int; // 0x191a Mov
	var_3712_object = var_3699_object; // 0x191b Mov
	var_3713_object = var_3700_object; // 0x191c Mov
	var_3714_object = var_3701_object; // 0x191d Mov
	func_576(var_3710_int, var_3711_int, var_3712_object, var_3713_object, var_3714_object); // 0x191e Call
	var_3715_object = Obj(); var_3716_int = 0; // 0x1920 PushV
	var_3715_object = var_3702_object; // 0x1921 Mov
	var_3716_int = 1; // 0x1922 MovI
	func_229(var_3716_int); // 0x1923 Call
	
Label_6437:
	var_3717_int = 0; var_3718_bool = 0; // 0x1925 PushV
	var_3717_int = 15; // 0x1926 MovI
	var_3718_bool = 0; // 0x1927 MovB
	func_714(var_3717_int, var_3718_bool); // 0x1928 Call
	var_3719_int = 0; var_3720_int = 0; var_3721_int = 0; // 0x192a PushV
	var_3719_int = 15; // 0x192b MovI
	var_3720_int = var_3697_int; // 0x192c Mov
	var_3721_int = var_3698_int; // 0x192d Mov
	func_2978(var_3719_int, var_3720_int, var_3721_int); // 0x192e Call
	return 0; // 0x1930 Return
}


func_3338(var_3047_int, var_3048_int, var_3049_int)
{
	var_3050_int = 0; var_3051_int = 0; var_3052_int = 0; var_3053_int = 0; var_3054_int = 0; var_3055_int = 0; var_3056_int = 0; var_3057_int = 0; // 0xd0a PushV
	var_3058_bool = 0; // 0xd0b PushV
	var_3058_bool = 0; // 0xd0c MovB
	var_3059_int = 8; // 0xd0d PushI
	var_3060_bool = var_3049_int > var_3059_int; // 0xd0e GT
	if(var_3060_bool == 0) goto Label_3348; // 0xd0f JumpB
	var_3061_int = 21; // 0xd10 PushI
	var_3062_bool = var_3049_int < var_3061_int; // 0xd11 LT
	if(var_3062_bool == 0) goto Label_3348; // 0xd12 JumpB
	var_3058_bool = 1; // 0xd13 MovB
	
Label_3348:
	if(var_3058_bool == 0) goto Label_3427; // 0xd14 JumpB
	var_3063_int = 0; var_3064_string = ""; var_3065_string = ""; var_3066_int = 0; // 0xd15 PushV
	var_3063_int = var_3047_int; // 0xd16 Mov
	var_3064_string = "pers_woman"; // 0xd17 MovS
	var_3065_string = "woman.xml"; // 0xd18 MovS
	var_3066_int = 1; // 0xd19 MovI
	func_438(var_3063_int, var_3064_string, var_3065_string, var_3066_int); // 0xd1a Call
	var_3067_int = 0; var_3068_string = ""; var_3069_string = ""; var_3070_int = 0; // 0xd1c PushV
	var_3067_int = var_3047_int; // 0xd1d Mov
	var_3068_string = "pers_unosha"; // 0xd1e MovS
	var_3069_string = "unosha.xml"; // 0xd1f MovS
	var_3070_int = 1; // 0xd20 MovI
	func_438(var_3067_int, var_3068_string, var_3069_string, var_3070_int); // 0xd21 Call
	var_3071_int = 0; var_3072_string = ""; var_3073_string = ""; var_3074_int = 0; // 0xd23 PushV
	var_3071_int = var_3047_int; // 0xd24 Mov
	var_3072_string = "pers_unosha"; // 0xd25 MovS
	var_3073_string = "unosha2.xml"; // 0xd26 MovS
	var_3074_int = 1; // 0xd27 MovI
	func_438(var_3071_int, var_3072_string, var_3073_string, var_3074_int); // 0xd28 Call
	var_3075_int = 0; var_3076_string = ""; var_3077_string = ""; var_3078_int = 0; // 0xd2a PushV
	var_3075_int = var_3047_int; // 0xd2b Mov
	var_3076_string = "pers_boy"; // 0xd2c MovS
	var_3077_string = "boy.xml"; // 0xd2d MovS
	var_3078_int = 1; // 0xd2e MovI
	func_438(var_3075_int, var_3076_string, var_3077_string, var_3078_int); // 0xd2f Call
	var_3079_int = 1; // 0xd31 PushI
	var_3080_int = var_3048_int + var_3079_int; // 0xd32 Add
	var_3081_int = 2; // 0xd33 PushI
	var_3082_bool = var_3080_int >= var_3081_int; // 0xd34 GE
	if(var_3082_bool == 0) goto Label_3389; // 0xd35 JumpB
	var_3083_int = 0; var_3084_string = ""; var_3085_string = ""; var_3086_int = 0; // 0xd36 PushV
	var_3083_int = var_3047_int; // 0xd37 Mov
	var_3084_string = "pers_patrool"; // 0xd38 MovS
	var_3085_string = "patrol.xml"; // 0xd39 MovS
	var_3086_int = 2; // 0xd3a MovI
	func_438(var_3083_int, var_3084_string, var_3085_string, var_3086_int); // 0xd3b Call
	
Label_3389:
	var_3087_int = 0; var_3088_string = ""; var_3089_string = ""; var_3090_int = 0; // 0xd3d PushV
	var_3087_int = var_3047_int; // 0xd3e Mov
	var_3088_string = "pers_rat"; // 0xd3f MovS
	var_3089_string = "rat.xml"; // 0xd40 MovS
	var_3090_int = 3; // 0xd41 MovI
	func_438(var_3087_int, var_3088_string, var_3089_string, var_3090_int); // 0xd42 Call
	var_3091_int = 1; // 0xd44 PushI
	var_3092_float = 0; var_3093_int = 0; // 0xd45 PushV
	var_3093_int = var_3048_int; // 0xd46 Mov
	func_932(var_3092_float, var_3093_int); // 0xd47 Call
	var_3054_int = var_3091_int * var_3092_float; // 0xd49 Mult2
	var_3094_int = var_3054_int; // 0xd4a Push
	if(var_3094_int == 0) goto Label_3411; // 0xd4b JumpB
	var_3095_int = 0; var_3096_string = ""; var_3097_string = ""; var_3098_int = 0; // 0xd4c PushV
	var_3095_int = var_3047_int; // 0xd4d Mov
	var_3096_string = "pers_grabitel"; // 0xd4e MovS
	var_3097_string = "grabitel.xml"; // 0xd4f MovS
	var_3098_int = var_3054_int; // 0xd50 Mov
	func_438(var_3095_int, var_3096_string, var_3097_string, var_3098_int); // 0xd51 Call
	
Label_3411:
	var_3099_int = 1; // 0xd53 PushI
	var_3100_float = 0; var_3101_int = 0; // 0xd54 PushV
	var_3101_int = var_3048_int; // 0xd55 Mov
	func_1022(var_3100_float, var_3101_int); // 0xd56 Call
	var_3055_int = var_3099_int * var_3100_float; // 0xd58 Mult2
	var_3102_int = var_3055_int; // 0xd59 Push
	if(var_3102_int == 0) goto Label_3426; // 0xd5a JumpB
	var_3103_int = 0; var_3104_string = ""; var_3105_string = ""; var_3106_int = 0; // 0xd5b PushV
	var_3103_int = var_3047_int; // 0xd5c Mov
	var_3104_string = "pers_bomber"; // 0xd5d MovS
	var_3105_string = "bomber.xml"; // 0xd5e MovS
	var_3106_int = var_3055_int; // 0xd5f Mov
	func_438(var_3103_int, var_3104_string, var_3105_string, var_3106_int); // 0xd60 Call
	
Label_3426:
	goto Label_3504; // 0xd62 Jump
	
Label_3504:
	var_3107_bool = 0; var_3108_int = 0; var_3109_int = 0; // 0xdb0 PushV
	var_3108_int = var_3048_int; // 0xdb1 Mov
	var_3109_int = var_3049_int; // 0xdb2 Mov
	func_1112(var_3107_bool, var_3108_int, var_3109_int); // 0xdb3 Call
	if(var_3107_bool == 0) goto Label_3517; // 0xdb5 JumpB
	var_3110_int = 0; var_3111_string = ""; var_3112_string = ""; var_3113_int = 0; // 0xdb6 PushV
	var_3110_int = var_3047_int; // 0xdb7 Mov
	var_3111_string = "pers_soldat"; // 0xdb8 MovS
	var_3112_string = "soldier_marauder.xml"; // 0xdb9 MovS
	var_3113_int = 2; // 0xdba MovI
	func_438(var_3110_int, var_3111_string, var_3112_string, var_3113_int); // 0xdbb Call
	
Label_3517:
	return 8; // 0xdbd Return
	
Label_3427:
	var_3114_int = 0; var_3115_string = ""; var_3116_string = ""; var_3117_int = 0; // 0xd63 PushV
	var_3114_int = var_3047_int; // 0xd64 Mov
	var_3115_string = "pers_woman"; // 0xd65 MovS
	var_3116_string = "woman.xml"; // 0xd66 MovS
	var_3117_int = 1; // 0xd67 MovI
	func_438(var_3114_int, var_3115_string, var_3116_string, var_3117_int); // 0xd68 Call
	var_3118_int = 0; var_3119_string = ""; var_3120_string = ""; var_3121_int = 0; // 0xd6a PushV
	var_3118_int = var_3047_int; // 0xd6b Mov
	var_3119_string = "pers_unosha"; // 0xd6c MovS
	var_3120_string = "unosha.xml"; // 0xd6d MovS
	var_3121_int = 1; // 0xd6e MovI
	func_438(var_3118_int, var_3119_string, var_3120_string, var_3121_int); // 0xd6f Call
	var_3122_int = 0; var_3123_string = ""; var_3124_string = ""; var_3125_int = 0; // 0xd71 PushV
	var_3122_int = var_3047_int; // 0xd72 Mov
	var_3123_string = "pers_unosha"; // 0xd73 MovS
	var_3124_string = "unosha2.xml"; // 0xd74 MovS
	var_3125_int = 1; // 0xd75 MovI
	func_438(var_3122_int, var_3123_string, var_3124_string, var_3125_int); // 0xd76 Call
	var_3126_int = 0; var_3127_string = ""; var_3128_string = ""; var_3129_int = 0; // 0xd78 PushV
	var_3126_int = var_3047_int; // 0xd79 Mov
	var_3127_string = "pers_boy"; // 0xd7a MovS
	var_3128_string = "boy.xml"; // 0xd7b MovS
	var_3129_int = 1; // 0xd7c MovI
	func_438(var_3126_int, var_3127_string, var_3128_string, var_3129_int); // 0xd7d Call
	var_3130_int = 1; // 0xd7f PushI
	var_3131_int = var_3048_int + var_3130_int; // 0xd80 Add
	var_3132_int = 2; // 0xd81 PushI
	var_3133_bool = var_3131_int >= var_3132_int; // 0xd82 GE
	if(var_3133_bool == 0) goto Label_3467; // 0xd83 JumpB
	var_3134_int = 0; var_3135_string = ""; var_3136_string = ""; var_3137_int = 0; // 0xd84 PushV
	var_3134_int = var_3047_int; // 0xd85 Mov
	var_3135_string = "pers_patrool"; // 0xd86 MovS
	var_3136_string = "patrol.xml"; // 0xd87 MovS
	var_3137_int = 2; // 0xd88 MovI
	func_438(var_3134_int, var_3135_string, var_3136_string, var_3137_int); // 0xd89 Call
	
Label_3467:
	var_3138_int = 0; var_3139_string = ""; var_3140_string = ""; var_3141_int = 0; // 0xd8b PushV
	var_3138_int = var_3047_int; // 0xd8c Mov
	var_3139_string = "pers_rat"; // 0xd8d MovS
	var_3140_string = "rat.xml"; // 0xd8e MovS
	var_3141_int = 3; // 0xd8f MovI
	func_438(var_3138_int, var_3139_string, var_3140_string, var_3141_int); // 0xd90 Call
	var_3142_int = 2; // 0xd92 PushI
	var_3143_float = 0; var_3144_int = 0; // 0xd93 PushV
	var_3144_int = var_3048_int; // 0xd94 Mov
	func_932(var_3143_float, var_3144_int); // 0xd95 Call
	var_3056_int = var_3142_int * var_3143_float; // 0xd97 Mult2
	var_3145_int = var_3056_int; // 0xd98 Push
	if(var_3145_int == 0) goto Label_3489; // 0xd99 JumpB
	var_3146_int = 0; var_3147_string = ""; var_3148_string = ""; var_3149_int = 0; // 0xd9a PushV
	var_3146_int = var_3047_int; // 0xd9b Mov
	var_3147_string = "pers_grabitel"; // 0xd9c MovS
	var_3148_string = "grabitel.xml"; // 0xd9d MovS
	var_3149_int = var_3056_int; // 0xd9e Mov
	func_438(var_3146_int, var_3147_string, var_3148_string, var_3149_int); // 0xd9f Call
	
Label_3489:
	var_3150_int = 1; // 0xda1 PushI
	var_3151_float = 0; var_3152_int = 0; // 0xda2 PushV
	var_3152_int = var_3048_int; // 0xda3 Mov
	func_1022(var_3151_float, var_3152_int); // 0xda4 Call
	var_3057_int = var_3150_int * var_3151_float; // 0xda6 Mult2
	var_3153_int = var_3057_int; // 0xda7 Push
	if(var_3153_int == 0) goto Label_3504; // 0xda8 JumpB
	var_3154_int = 0; var_3155_string = ""; var_3156_string = ""; var_3157_int = 0; // 0xda9 PushV
	var_3154_int = var_3047_int; // 0xdaa Mov
	var_3155_string = "pers_bomber"; // 0xdab MovS
	var_3156_string = "bomber.xml"; // 0xdac MovS
	var_3157_int = var_3057_int; // 0xdad Mov
	func_438(var_3154_int, var_3155_string, var_3156_string, var_3157_int); // 0xdae Call
}


func_4874(var_944_int, var_945_int, var_946_object, var_947_object, var_948_object, var_949_object)
{
	var_950_int = 0; // 0x130b PushI
	var_951_bool = var_945_int == var_950_int; // 0x130c Eq
	if(var_951_bool == 0) goto Label_4902; // 0x130d JumpB
	var_952_int = 0; var_953_bool = 0; // 0x130e PushV
	var_952_int = 6; // 0x130f MovI
	var_953_bool = 0; // 0x1310 MovB
	func_731(var_952_int, var_953_bool); // 0x1311 Call
	var_954_int = 0; var_955_bool = 0; var_956_int = 0; // 0x1313 PushV
	var_954_int = 6; // 0x1314 MovI
	var_955_bool = 0; // 0x1315 MovB
	var_956_int = 1; // 0x1316 MovI
	func_748(var_954_int, var_955_bool, var_956_int); // 0x1317 Call
	var_957_int = 0; var_958_int = 0; var_959_object = Obj(); var_960_object = Obj(); var_961_object = Obj(); // 0x1319 PushV
	var_957_int = 6; // 0x131a MovI
	var_958_int = var_944_int; // 0x131b Mov
	var_959_object = var_946_object; // 0x131c Mov
	var_960_object = var_947_object; // 0x131d Mov
	var_961_object = var_948_object; // 0x131e Mov
	func_557(var_958_int, var_959_object, var_960_object, var_961_object); // 0x131f Call
	var_962_object = Obj(); var_963_int = 0; // 0x1321 PushV
	var_962_object = var_949_object; // 0x1322 Mov
	var_963_int = 0; // 0x1323 MovI
	func_229(var_963_int); // 0x1324 Call
	
Label_4902:
	var_964_int = 0; var_965_int = 0; // 0x1326 PushV
	var_964_int = 6; // 0x1327 MovI
	var_965_int = var_945_int; // 0x1328 Mov
	func_872(var_964_int, var_965_int); // 0x1329 Call
	return 0; // 0x132b Return
}


func_3852()
{
	return 0; // 0xf0d Return
}


func_5388(var_2337_int, var_2338_int, var_2339_object, var_2340_object, var_2341_object, var_2342_object)
{
	var_2343_int = 0; // 0x150d PushI
	var_2344_bool = var_2338_int == var_2343_int; // 0x150e Eq
	if(var_2344_bool == 0) goto Label_5416; // 0x150f JumpB
	var_2345_int = 0; var_2346_bool = 0; // 0x1510 PushV
	var_2345_int = 9; // 0x1511 MovI
	var_2346_bool = 1; // 0x1512 MovB
	func_731(var_2345_int, var_2346_bool); // 0x1513 Call
	var_2347_int = 0; var_2348_bool = 0; var_2349_int = 0; // 0x1515 PushV
	var_2347_int = 9; // 0x1516 MovI
	var_2348_bool = 1; // 0x1517 MovB
	var_2349_int = 1; // 0x1518 MovI
	func_748(var_2347_int, var_2348_bool, var_2349_int); // 0x1519 Call
	var_2350_int = 0; var_2351_int = 0; var_2352_object = Obj(); var_2353_object = Obj(); var_2354_object = Obj(); // 0x151b PushV
	var_2350_int = 9; // 0x151c MovI
	var_2351_int = var_2337_int; // 0x151d Mov
	var_2352_object = var_2339_object; // 0x151e Mov
	var_2353_object = var_2340_object; // 0x151f Mov
	var_2354_object = var_2341_object; // 0x1520 Mov
	func_576(var_2350_int, var_2351_int, var_2352_object, var_2353_object, var_2354_object); // 0x1521 Call
	var_2355_object = Obj(); var_2356_int = 0; // 0x1523 PushV
	var_2355_object = var_2342_object; // 0x1524 Mov
	var_2356_int = 1; // 0x1525 MovI
	func_229(var_2356_int); // 0x1526 Call
	
Label_5416:
	var_2357_int = 0; var_2358_bool = 0; // 0x1528 PushV
	var_2357_int = 9; // 0x1529 MovI
	var_2358_bool = 0; // 0x152a MovB
	func_714(var_2357_int, var_2358_bool); // 0x152b Call
	var_2359_int = 0; var_2360_int = 0; var_2361_int = 0; // 0x152d PushV
	var_2359_int = 9; // 0x152e MovI
	var_2360_int = var_2337_int; // 0x152f Mov
	var_2361_int = var_2338_int; // 0x1530 Mov
	func_2052(var_2359_int, var_2360_int, var_2361_int); // 0x1531 Call
	return 0; // 0x1533 Return
}


func_3854(var_409_int, var_410_int, var_411_object, var_412_object, var_413_object, var_414_object)
{
	var_415_int = 0; // 0xf0f PushI
	var_416_bool = var_410_int == var_415_int; // 0xf10 Eq
	if(var_416_bool == 0) goto Label_3882; // 0xf11 JumpB
	var_417_int = 0; var_418_bool = 0; // 0xf12 PushV
	var_417_int = 0; // 0xf13 MovI
	var_418_bool = 0; // 0xf14 MovB
	func_731(var_417_int, var_418_bool); // 0xf15 Call
	var_419_int = 0; var_420_bool = 0; var_421_int = 0; // 0xf17 PushV
	var_419_int = 0; // 0xf18 MovI
	var_420_bool = 0; // 0xf19 MovB
	var_421_int = 1; // 0xf1a MovI
	func_748(var_419_int, var_420_bool, var_421_int); // 0xf1b Call
	var_457_int = 0; var_458_int = 0; var_459_object = Obj(); var_460_object = Obj(); var_461_object = Obj(); // 0xf1d PushV
	var_457_int = 0; // 0xf1e MovI
	var_458_int = var_409_int; // 0xf1f Mov
	var_459_object = var_411_object; // 0xf20 Mov
	var_460_object = var_412_object; // 0xf21 Mov
	var_461_object = var_413_object; // 0xf22 Mov
	func_557(var_458_int, var_459_object, var_460_object, var_461_object); // 0xf23 Call
	var_502_object = Obj(); var_503_int = 0; // 0xf25 PushV
	var_502_object = var_414_object; // 0xf26 Mov
	var_503_int = 0; // 0xf27 MovI
	func_229(var_503_int); // 0xf28 Call
	
Label_3882:
	var_529_int = 0; var_530_int = 0; // 0xf2a PushV
	var_529_int = 0; // 0xf2b MovI
	var_530_int = var_410_int; // 0xf2c Mov
	func_872(var_529_int, var_530_int); // 0xf2d Call
	var_555_int = 0; var_556_int = 0; var_557_int = 0; // 0xf2f PushV
	var_555_int = 0; // 0xf30 MovI
	var_556_int = var_409_int; // 0xf31 Mov
	var_557_int = var_410_int; // 0xf32 Mov
	func_1607(var_556_int, var_557_int); // 0xf33 Call
	return 0; // 0xf35 Return
}


func_8460()
{
	var_3936_string = ""; var_3937_bool = 0; // 0x210d PushV
	var_3936_string = "warehouse_rubin@door1"; // 0x210e MovS
	var_3937_bool = 1; // 0x210f MovB
	func_137(var_3936_string, var_3937_bool); // 0x2110 Call
	return 0; // 0x2112 Return
}


func_267(var_83_int)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x10b PushV
	var_86_int = 0; // 0x10c MovI
	var_87_int = 0; // 0x10d MovI
	
Label_270:
	var_88_int = 16; // 0x10e PushI
	var_89_bool = var_87_int < var_88_int; // 0x10f LT
	if(var_89_bool == 0) goto Label_283; // 0x110 JumpB
	var_90_bool = 0; var_91_int = 0; // 0x111 PushV
	var_91_int = var_87_int; // 0x112 Mov
	func_357(var_90_bool, var_91_int); // 0x113 Call
	if(var_90_bool == 0) goto Label_280; // 0x115 JumpB
	var_92_int = 1; // 0x116 PushI
	var_86_int = var_86_int + var_92_int; // 0x117 Add2
	
Label_280:
	var_93_int = 1; // 0x118 PushI
	var_87_int = var_87_int + var_93_int; // 0x119 Add2
	goto Label_270; // 0x11a Jump
	
Label_283:
	var_83_int = var_86_int; // 0x11b Mov
	return 4; // 0x11c Return
}


func_4370(var_836_int, var_837_int, var_838_object, var_839_object, var_840_object, var_841_object)
{
	var_842_int = 0; // 0x1113 PushI
	var_843_bool = var_837_int == var_842_int; // 0x1114 Eq
	if(var_843_bool == 0) goto Label_4398; // 0x1115 JumpB
	var_844_int = 0; var_845_bool = 0; // 0x1116 PushV
	var_844_int = 13; // 0x1117 MovI
	var_845_bool = 0; // 0x1118 MovB
	func_731(var_844_int, var_845_bool); // 0x1119 Call
	var_846_int = 0; var_847_bool = 0; var_848_int = 0; // 0x111b PushV
	var_846_int = 13; // 0x111c MovI
	var_847_bool = 0; // 0x111d MovB
	var_848_int = 1; // 0x111e MovI
	func_748(var_846_int, var_847_bool, var_848_int); // 0x111f Call
	var_849_int = 0; var_850_int = 0; var_851_object = Obj(); var_852_object = Obj(); var_853_object = Obj(); // 0x1121 PushV
	var_849_int = 13; // 0x1122 MovI
	var_850_int = var_836_int; // 0x1123 Mov
	var_851_object = var_838_object; // 0x1124 Mov
	var_852_object = var_839_object; // 0x1125 Mov
	var_853_object = var_840_object; // 0x1126 Mov
	func_557(var_850_int, var_851_object, var_852_object, var_853_object); // 0x1127 Call
	var_854_object = Obj(); var_855_int = 0; // 0x1129 PushV
	var_854_object = var_841_object; // 0x112a Mov
	var_855_int = 0; // 0x112b MovI
	func_229(var_855_int); // 0x112c Call
	
Label_4398:
	var_856_int = 0; var_857_int = 0; // 0x112e PushV
	var_856_int = 3; // 0x112f MovI
	var_857_int = var_837_int; // 0x1130 Mov
	func_805(var_856_int, var_857_int); // 0x1131 Call
	var_873_int = 0; var_874_int = 0; var_875_int = 0; // 0x1133 PushV
	var_873_int = 3; // 0x1134 MovI
	var_874_int = var_836_int; // 0x1135 Mov
	var_875_int = var_837_int; // 0x1136 Mov
	func_1411(var_873_int, var_874_int, var_875_int); // 0x1137 Call
	return 0; // 0x1139 Return
}


func_10002(var_3954_bool, var_3955_object, var_3956_int)
{
	var_3957_object = Obj(); var_3958_object = Obj(); var_3959_int = 0; var_3960_object = Obj(); var_3961_object = Obj(); var_3962_int = 0; // 0x2712 PushV
	var_3963_object = Obj(); // 0x2713 PushV
	func_9989(var_3963_object); // 0x2714 Call
	var_3960_object = var_3963_object; // 0x2715 Mov
	Find(var_3956_int, var_3961_object); // 0x2717 ObjFunc
	var_3968_bool = var_3961_object == 0; // 0x2719 Not
	if(var_3968_bool == 0) goto Label_10017; // 0x271a JumpB
	var_3969_string = "Can't find diary parent with id: "; // 0x271b PushS
	var_3970_int = var_3969_string + var_3956_int; // 0x271c Add
	Trace(var_3970_int); // 0x271d Func
	var_3954_bool = 0; // 0x271f MovB
	return 6; // 0x2720 Return
	
Label_10017:
	AddChild(var_3955_object); // 0x2721 ObjFunc
	var_3971_string = "player_diary"; // 0x2723 PushS
	var_3972_int = 1; // 0x2724 PushI
	SetVariable(var_3971_string, var_3972_int); // 0x2725 Func
	GetCategory(var_3962_int); // 0x2727 ObjFunc
	SetDiarySection(var_3962_int); // 0x2729 Func
	var_3954_bool = 0; // 0x272b MovB
	return 6; // 0x272c Return
}


func_8467()
{
	var_3942_string = ""; var_3943_bool = 0; // 0x2114 PushV
	var_3942_string = "theater@door1"; // 0x2115 MovS
	var_3943_bool = 1; // 0x2116 MovB
	func_137(var_3942_string, var_3943_bool); // 0x2117 Call
	return 0; // 0x2119 Return
}


func_8474()
{
	var_4418_string = ""; var_4419_bool = 0; // 0x211b PushV
	var_4418_string = "theater@door1"; // 0x211c MovS
	var_4419_bool = 0; // 0x211d MovB
	func_137(var_4418_string, var_4419_bool); // 0x211e Call
	return 0; // 0x2120 Return
}


func_285()
{
	var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x11d PushV
	var_102_int = 16; // 0x11e PushI
	irand(var_99_int, var_102_int); // 0x11f Func
	var_100_int = 0; // 0x121 MovI
	
Label_290:
	var_103_int = 16; // 0x122 PushI
	var_104_bool = var_100_int < var_103_int; // 0x123 LT
	if(var_104_bool == 0) goto Label_322; // 0x124 JumpB
	var_105_int = var_100_int + var_99_int; // 0x125 Add
	var_106_int = 16; // 0x126 PushI
	var_101_int = var_105_int % var_106_int; // 0x127 Mod2
	var_107_bool = 0; // 0x128 PushV
	var_107_bool = 0; // 0x129 MovB
	var_108_bool = 0; var_109_int = 0; // 0x12a PushV
	var_109_int = var_101_int; // 0x12b Mov
	func_323(var_108_bool, var_109_int); // 0x12c Call
	if(var_108_bool == 0) goto Label_309; // 0x12e JumpB
	var_118_bool = 0; var_119_int = 0; // 0x12f PushV
	var_119_int = var_101_int; // 0x130 Mov
	func_11400(var_118_bool, var_119_int); // 0x131 Call
	if(var_118_bool == 0) goto Label_309; // 0x133 JumpB
	var_107_bool = 1; // 0x134 MovB
	
Label_309:
	if(var_107_bool == 0) goto Label_319; // 0x135 JumpB
	var_142_int = 0; // 0x136 PushV
	var_142_int = var_101_int; // 0x137 Mov
	func_373(var_142_int); // 0x138 Call
	var_154_string = "Diseased Region: "; // 0x13a PushS
	var_155_int = var_154_string + var_101_int; // 0x13b Add
	Trace(var_155_int); // 0x13c Func
	return 6; // 0x13e Return
	
Label_319:
	var_156_int = 1; // 0x13f PushI
	var_100_int = var_100_int + var_156_int; // 0x140 Add2
	goto Label_290; // 0x141 Jump
	
Label_322:
	return 6; // 0x142 Return
}


func_8481()
{
	func_10126(); // 0x2123 Call
	return 0; // 0x2125 Return
}


func_805(var_856_int, var_857_int)
{
	var_858_bool = 0; // 0x326 PushV
	var_858_bool = 1; // 0x327 MovB
	var_859_bool = 0; // 0x328 PushV
	var_859_bool = 1; // 0x329 MovB
	var_860_int = 20; // 0x32a PushI
	var_861_bool = var_857_int >= var_860_int; // 0x32b GE
	if(var_861_bool == 0) goto Label_817; // 0x32c JumpB
	var_862_int = 2; // 0x32d PushI
	var_863_bool = var_857_int < var_862_int; // 0x32e LT
	if(var_863_bool == 0) goto Label_817; // 0x32f JumpB
	var_859_bool = 0; // 0x330 MovB
	
Label_817:
	if(var_859_bool == 0) goto Label_829; // 0x331 JumpB
	var_864_bool = 0; // 0x332 PushV
	var_864_bool = 0; // 0x333 MovB
	var_865_int = 6; // 0x334 PushI
	var_866_bool = var_857_int >= var_865_int; // 0x335 GE
	if(var_866_bool == 0) goto Label_827; // 0x336 JumpB
	var_867_int = 10; // 0x337 PushI
	var_868_bool = var_857_int < var_867_int; // 0x338 LT
	if(var_868_bool == 0) goto Label_827; // 0x339 JumpB
	var_864_bool = 1; // 0x33a MovB
	
Label_827:
	if(var_864_bool == 0) goto Label_829; // 0x33b JumpB
	var_858_bool = 0; // 0x33c MovB
	
Label_829:
	if(var_858_bool == 0) goto Label_836; // 0x33d JumpB
	var_869_int = 0; var_870_bool = 0; // 0x33e PushV
	var_869_int = var_856_int; // 0x33f Mov
	var_870_bool = 1; // 0x340 MovB
	func_714(var_869_int, var_870_bool); // 0x341 Call
	goto Label_841; // 0x343 Jump
	
Label_841:
	return 0; // 0x349 Return
	
Label_836:
	var_871_int = 0; var_872_bool = 0; // 0x344 PushV
	var_871_int = var_856_int; // 0x345 Mov
	var_872_bool = 0; // 0x346 MovB
	func_714(var_871_int, var_872_bool); // 0x347 Call
}


func_8486()
{
	var_3977_string = ""; var_3978_bool = 0; // 0x2127 PushV
	var_3977_string = "termitnik@door1"; // 0x2128 MovS
	var_3978_bool = 1; // 0x2129 MovB
	func_137(var_3977_string, var_3978_bool); // 0x212a Call
	return 0; // 0x212c Return
}


func_4908(var_2105_int, var_2106_int, var_2107_object, var_2108_object, var_2109_object, var_2110_object)
{
	var_2111_int = 0; // 0x132d PushI
	var_2112_bool = var_2106_int == var_2111_int; // 0x132e Eq
	if(var_2112_bool == 0) goto Label_4936; // 0x132f JumpB
	var_2113_int = 0; var_2114_bool = 0; // 0x1330 PushV
	var_2113_int = 6; // 0x1331 MovI
	var_2114_bool = 1; // 0x1332 MovB
	func_731(var_2113_int, var_2114_bool); // 0x1333 Call
	var_2115_int = 0; var_2116_bool = 0; var_2117_int = 0; // 0x1335 PushV
	var_2115_int = 6; // 0x1336 MovI
	var_2116_bool = 1; // 0x1337 MovB
	var_2117_int = 1; // 0x1338 MovI
	func_748(var_2115_int, var_2116_bool, var_2117_int); // 0x1339 Call
	var_2118_int = 0; var_2119_int = 0; var_2120_object = Obj(); var_2121_object = Obj(); var_2122_object = Obj(); // 0x133b PushV
	var_2118_int = 6; // 0x133c MovI
	var_2119_int = var_2105_int; // 0x133d Mov
	var_2120_object = var_2107_object; // 0x133e Mov
	var_2121_object = var_2108_object; // 0x133f Mov
	var_2122_object = var_2109_object; // 0x1340 Mov
	func_576(var_2118_int, var_2119_int, var_2120_object, var_2121_object, var_2122_object); // 0x1341 Call
	var_2123_object = Obj(); var_2124_int = 0; // 0x1343 PushV
	var_2123_object = var_2110_object; // 0x1344 Mov
	var_2124_int = 1; // 0x1345 MovI
	func_229(var_2124_int); // 0x1346 Call
	
Label_4936:
	var_2125_int = 0; var_2126_bool = 0; // 0x1348 PushV
	var_2125_int = 6; // 0x1349 MovI
	var_2126_bool = 0; // 0x134a MovB
	func_714(var_2125_int, var_2126_bool); // 0x134b Call
	return 0; // 0x134d Return
}


func_11565(var_3724_int)
{
	var_3725_object = Obj(); var_3726_object = Obj(); var_3727_object = Obj(); var_3728_object = Obj(); var_3729_object = Obj(); var_3730_object = Obj(); var_3731_object = Obj(); var_3732_object = Obj(); var_3733_object = Obj(); var_3734_object = Obj(); // 0x2d2d PushV
	var_3735_int = 1; // 0x2d2e PushI
	var_3736_bool = var_3724_int == var_3735_int; // 0x2d2f Eq
	if(var_3736_bool == 0) goto Label_11580; // 0x2d30 JumpB
	var_3737_string = "Special diseased house: r4_house_2_02"; // 0x2d31 PushS
	Trace(var_3737_string); // 0x2d32 Func
	var_3738_string = "r4_house_2_02"; // 0x2d34 PushS
	GetSceneByName(var_3730_object, var_3738_string); // 0x2d35 Func
	var_3739_string = "s_r4_house_2_02.isc"; // 0x2d37 PushS
	ReplaceScene(var_3730_object, var_3739_string); // 0x2d38 Func
	var_3730_object = 0; // 0x2d3a SetNull
	goto Label_11635; // 0x2d3b Jump
	
Label_11635:
	return 10; // 0x2d73 Return
	
Label_11580:
	var_3740_int = 3; // 0x2d3c PushI
	var_3741_bool = var_3724_int == var_3740_int; // 0x2d3d Eq
	if(var_3741_bool == 0) goto Label_11594; // 0x2d3e JumpB
	var_3742_string = "Special diseased house: house7_03"; // 0x2d3f PushS
	Trace(var_3742_string); // 0x2d40 Func
	var_3743_string = "house7_03"; // 0x2d42 PushS
	GetSceneByName(var_3731_object, var_3743_string); // 0x2d43 Func
	var_3744_string = "s_house7_03.isc"; // 0x2d45 PushS
	ReplaceScene(var_3731_object, var_3744_string); // 0x2d46 Func
	var_3731_object = 0; // 0x2d48 SetNull
	goto Label_11635; // 0x2d49 Jump
	
Label_11594:
	var_3745_int = 5; // 0x2d4a PushI
	var_3746_bool = var_3724_int == var_3745_int; // 0x2d4b Eq
	if(var_3746_bool == 0) goto Label_11608; // 0x2d4c JumpB
	var_3747_string = "Special house: sobor (with corpses)"; // 0x2d4d PushS
	Trace(var_3747_string); // 0x2d4e Func
	var_3748_string = "sobor"; // 0x2d50 PushS
	GetSceneByName(var_3732_object, var_3748_string); // 0x2d51 Func
	var_3749_string = "sobor_trup.isc"; // 0x2d53 PushS
	ReplaceScene(var_3732_object, var_3749_string); // 0x2d54 Func
	var_3732_object = 0; // 0x2d56 SetNull
	goto Label_11635; // 0x2d57 Jump
	
Label_11608:
	var_3750_int = 6; // 0x2d58 PushI
	var_3751_bool = var_3724_int == var_3750_int; // 0x2d59 Eq
	if(var_3751_bool == 0) goto Label_11622; // 0x2d5a JumpB
	var_3752_string = "Special house: sobor (normal)"; // 0x2d5b PushS
	Trace(var_3752_string); // 0x2d5c Func
	var_3753_string = "sobor"; // 0x2d5e PushS
	GetSceneByName(var_3733_object, var_3753_string); // 0x2d5f Func
	var_3754_string = "sobor.isc"; // 0x2d61 PushS
	ReplaceScene(var_3733_object, var_3754_string); // 0x2d62 Func
	var_3733_object = 0; // 0x2d64 SetNull
	goto Label_11635; // 0x2d65 Jump
	
Label_11622:
	var_3755_int = 7; // 0x2d66 PushI
	var_3756_bool = var_3724_int == var_3755_int; // 0x2d67 Eq
	if(var_3756_bool == 0) goto Label_11635; // 0x2d68 JumpB
	var_3757_string = "Special diseased house: r4_house_2_02"; // 0x2d69 PushS
	Trace(var_3757_string); // 0x2d6a Func
	var_3758_string = "r4_house_2_02"; // 0x2d6c PushS
	GetSceneByName(var_3734_object, var_3758_string); // 0x2d6d Func
	var_3759_string = "s_r4_house_2_02.isc"; // 0x2d6f PushS
	ReplaceScene(var_3734_object, var_3759_string); // 0x2d70 Func
	var_3734_object = 0; // 0x2d72 SetNull
}


func_8493()
{
	var_4777_string = ""; var_4778_bool = 0; // 0x212e PushV
	var_4777_string = "termitnik@door1"; // 0x212f MovS
	var_4778_bool = 0; // 0x2130 MovB
	func_137(var_4777_string, var_4778_bool); // 0x2131 Call
	return 0; // 0x2133 Return
}


func_5935(var_3508_int, var_3509_int, var_3510_object, var_3511_object, var_3512_object, var_3513_object)
{
	var_3514_int = 0; // 0x1730 PushI
	var_3515_bool = var_3509_int == var_3514_int; // 0x1731 Eq
	if(var_3515_bool == 0) goto Label_5963; // 0x1732 JumpB
	var_3516_int = 0; var_3517_bool = 0; // 0x1733 PushV
	var_3516_int = 12; // 0x1734 MovI
	var_3517_bool = 1; // 0x1735 MovB
	func_731(var_3516_int, var_3517_bool); // 0x1736 Call
	var_3518_int = 0; var_3519_bool = 0; var_3520_int = 0; // 0x1738 PushV
	var_3518_int = 12; // 0x1739 MovI
	var_3519_bool = 1; // 0x173a MovB
	var_3520_int = 1; // 0x173b MovI
	func_748(var_3518_int, var_3519_bool, var_3520_int); // 0x173c Call
	var_3521_int = 0; var_3522_int = 0; var_3523_object = Obj(); var_3524_object = Obj(); var_3525_object = Obj(); // 0x173e PushV
	var_3521_int = 12; // 0x173f MovI
	var_3522_int = var_3508_int; // 0x1740 Mov
	var_3523_object = var_3510_object; // 0x1741 Mov
	var_3524_object = var_3511_object; // 0x1742 Mov
	var_3525_object = var_3512_object; // 0x1743 Mov
	func_655(var_3521_int, var_3522_int, var_3523_object, var_3524_object, var_3525_object); // 0x1744 Call
	var_3526_object = Obj(); var_3527_int = 0; // 0x1746 PushV
	var_3526_object = var_3513_object; // 0x1747 Mov
	var_3527_int = 2; // 0x1748 MovI
	func_229(var_3527_int); // 0x1749 Call
	
Label_5963:
	var_3528_int = 0; var_3529_bool = 0; // 0x174b PushV
	var_3528_int = 12; // 0x174c MovI
	var_3529_bool = 0; // 0x174d MovB
	func_714(var_3528_int, var_3529_bool); // 0x174e Call
	var_3530_int = 0; var_3531_int = 0; var_3532_int = 0; // 0x1750 PushV
	var_3530_int = 12; // 0x1751 MovI
	var_3531_int = var_3508_int; // 0x1752 Mov
	var_3532_int = var_3509_int; // 0x1753 Mov
	func_3158(var_3530_int, var_3531_int, var_3532_int); // 0x1754 Call
	return 0; // 0x1756 Return
}


func_10031(var_3870_bool, var_3871_int)
{
	var_3872_object = Obj(); var_3873_object = Obj(); var_3874_object = Obj(); var_3875_object = Obj(); // 0x272f PushV
	var_3876_object = Obj(); // 0x2730 PushV
	func_9989(var_3876_object); // 0x2731 Call
	var_3874_object = var_3876_object; // 0x2732 Mov
	Find(var_3871_int, var_3875_object); // 0x2734 ObjFunc
	var_3881_bool = var_3875_object == 0; // 0x2736 Not
	if(var_3881_bool == 0) goto Label_10042; // 0x2737 JumpB
	var_3870_bool = 0; // 0x2738 MovB
	return 4; // 0x2739 Return
	
Label_10042:
	Remove(); // 0x273a ObjFunc
	var_3870_bool = 1; // 0x273c MovB
	return 4; // 0x273d Return
}


func_5428(var_3427_int, var_3428_int, var_3429_object, var_3430_object, var_3431_object, var_3432_object)
{
	var_3433_int = 0; // 0x1535 PushI
	var_3434_bool = var_3428_int == var_3433_int; // 0x1536 Eq
	if(var_3434_bool == 0) goto Label_5456; // 0x1537 JumpB
	var_3435_int = 0; var_3436_bool = 0; // 0x1538 PushV
	var_3435_int = 9; // 0x1539 MovI
	var_3436_bool = 1; // 0x153a MovB
	func_731(var_3435_int, var_3436_bool); // 0x153b Call
	var_3437_int = 0; var_3438_bool = 0; var_3439_int = 0; // 0x153d PushV
	var_3437_int = 9; // 0x153e MovI
	var_3438_bool = 1; // 0x153f MovB
	var_3439_int = 1; // 0x1540 MovI
	func_748(var_3437_int, var_3438_bool, var_3439_int); // 0x1541 Call
	var_3440_int = 0; var_3441_int = 0; var_3442_object = Obj(); var_3443_object = Obj(); var_3444_object = Obj(); // 0x1543 PushV
	var_3440_int = 9; // 0x1544 MovI
	var_3441_int = var_3427_int; // 0x1545 Mov
	var_3442_object = var_3429_object; // 0x1546 Mov
	var_3443_object = var_3430_object; // 0x1547 Mov
	var_3444_object = var_3431_object; // 0x1548 Mov
	func_655(var_3440_int, var_3441_int, var_3442_object, var_3443_object, var_3444_object); // 0x1549 Call
	var_3445_object = Obj(); var_3446_int = 0; // 0x154b PushV
	var_3445_object = var_3432_object; // 0x154c Mov
	var_3446_int = 2; // 0x154d MovI
	func_229(var_3446_int); // 0x154e Call
	
Label_5456:
	var_3447_int = 0; var_3448_bool = 0; // 0x1550 PushV
	var_3447_int = 9; // 0x1551 MovI
	var_3448_bool = 0; // 0x1552 MovB
	func_714(var_3447_int, var_3448_bool); // 0x1553 Call
	var_3449_int = 0; var_3450_int = 0; var_3451_int = 0; // 0x1555 PushV
	var_3449_int = 9; // 0x1556 MovI
	var_3450_int = var_3427_int; // 0x1557 Mov
	var_3451_int = var_3428_int; // 0x1558 Mov
	func_3158(var_3449_int, var_3450_int, var_3451_int); // 0x1559 Call
	return 0; // 0x155b Return
}


func_8500()
{
	var_4699_string = "resque_list"; // 0x2135 PushS
	var_4700_int = 1; // 0x2136 PushI
	SetVariable(var_4699_string, var_4700_int); // 0x2137 Func
	func_11280(); // 0x213a Call
	return 0; // 0x213c Return
}


func_3894(var_1406_int, var_1407_int, var_1408_object, var_1409_object, var_1410_object, var_1411_object)
{
	var_1412_int = 0; // 0xf37 PushI
	var_1413_bool = var_1407_int == var_1412_int; // 0xf38 Eq
	if(var_1413_bool == 0) goto Label_3922; // 0xf39 JumpB
	var_1414_int = 0; var_1415_bool = 0; // 0xf3a PushV
	var_1414_int = 0; // 0xf3b MovI
	var_1415_bool = 1; // 0xf3c MovB
	func_731(var_1414_int, var_1415_bool); // 0xf3d Call
	var_1416_int = 0; var_1417_bool = 0; var_1418_int = 0; // 0xf3f PushV
	var_1416_int = 0; // 0xf40 MovI
	var_1417_bool = 1; // 0xf41 MovB
	var_1418_int = 1; // 0xf42 MovI
	func_748(var_1416_int, var_1417_bool, var_1418_int); // 0xf43 Call
	var_1419_int = 0; var_1420_int = 0; var_1421_object = Obj(); var_1422_object = Obj(); var_1423_object = Obj(); // 0xf45 PushV
	var_1419_int = 0; // 0xf46 MovI
	var_1420_int = var_1406_int; // 0xf47 Mov
	var_1421_object = var_1408_object; // 0xf48 Mov
	var_1422_object = var_1409_object; // 0xf49 Mov
	var_1423_object = var_1410_object; // 0xf4a Mov
	func_576(var_1419_int, var_1420_int, var_1421_object, var_1422_object, var_1423_object); // 0xf4b Call
	var_1509_object = Obj(); var_1510_int = 0; // 0xf4d PushV
	var_1509_object = var_1411_object; // 0xf4e Mov
	var_1510_int = 1; // 0xf4f MovI
	func_229(var_1510_int); // 0xf50 Call
	
Label_3922:
	var_1511_int = 0; var_1512_bool = 0; // 0xf52 PushV
	var_1511_int = 0; // 0xf53 MovI
	var_1512_bool = 0; // 0xf54 MovB
	func_714(var_1511_int, var_1512_bool); // 0xf55 Call
	var_1513_int = 0; var_1514_int = 0; var_1515_int = 0; // 0xf57 PushV
	var_1513_int = 0; // 0xf58 MovI
	var_1514_int = var_1406_int; // 0xf59 Mov
	var_1515_int = var_1407_int; // 0xf5a Mov
	func_2592(var_1513_int, var_1514_int, var_1515_int); // 0xf5b Call
	return 0; // 0xf5d Return
}


func_4410(var_2024_int, var_2025_int, var_2026_object, var_2027_object, var_2028_object, var_2029_object)
{
	var_2030_int = 0; // 0x113b PushI
	var_2031_bool = var_2025_int == var_2030_int; // 0x113c Eq
	if(var_2031_bool == 0) goto Label_4438; // 0x113d JumpB
	var_2032_int = 0; var_2033_bool = 0; // 0x113e PushV
	var_2032_int = 13; // 0x113f MovI
	var_2033_bool = 1; // 0x1140 MovB
	func_731(var_2032_int, var_2033_bool); // 0x1141 Call
	var_2034_int = 0; var_2035_bool = 0; var_2036_int = 0; // 0x1143 PushV
	var_2034_int = 13; // 0x1144 MovI
	var_2035_bool = 1; // 0x1145 MovB
	var_2036_int = 1; // 0x1146 MovI
	func_748(var_2034_int, var_2035_bool, var_2036_int); // 0x1147 Call
	var_2037_int = 0; var_2038_int = 0; var_2039_object = Obj(); var_2040_object = Obj(); var_2041_object = Obj(); // 0x1149 PushV
	var_2037_int = 13; // 0x114a MovI
	var_2038_int = var_2024_int; // 0x114b Mov
	var_2039_object = var_2026_object; // 0x114c Mov
	var_2040_object = var_2027_object; // 0x114d Mov
	var_2041_object = var_2028_object; // 0x114e Mov
	func_576(var_2037_int, var_2038_int, var_2039_object, var_2040_object, var_2041_object); // 0x114f Call
	var_2042_object = Obj(); var_2043_int = 0; // 0x1151 PushV
	var_2042_object = var_2029_object; // 0x1152 Mov
	var_2043_int = 1; // 0x1153 MovI
	func_229(var_2043_int); // 0x1154 Call
	
Label_4438:
	var_2044_int = 0; var_2045_bool = 0; // 0x1156 PushV
	var_2044_int = 3; // 0x1157 MovI
	var_2045_bool = 0; // 0x1158 MovB
	func_714(var_2044_int, var_2045_bool); // 0x1159 Call
	var_2046_int = 0; var_2047_int = 0; var_2048_int = 0; // 0x115b PushV
	var_2046_int = 3; // 0x115c MovI
	var_2047_int = var_2024_int; // 0x115d Mov
	var_2048_int = var_2025_int; // 0x115e Mov
	func_2310(var_2046_int, var_2047_int, var_2048_int); // 0x115f Call
	return 0; // 0x1161 Return
}


func_8509()
{
	var_4800_string = ""; var_4801_bool = 0; // 0x213e PushV
	var_4800_string = "factory@door1"; // 0x213f MovS
	var_4801_bool = 0; // 0x2140 MovB
	func_137(var_4800_string, var_4801_bool); // 0x2141 Call
	return 0; // 0x2143 Return
}


func_10048(var_3815_object)
{
	var_3816_object = Obj(); var_3817_object = Obj(); var_3818_object = Obj(); var_3819_object = Obj(); // 0x2740 PushV
	GetMainOutdoorScene(var_3818_object); // 0x2741 Func
	var_3820_bool = var_3818_object == 0; // 0x2743 NullEq
	if(var_3820_bool == 0) goto Label_10059; // 0x2744 JumpB
	var_3821_string = "Can't find main outdoor scene"; // 0x2745 PushS
	Trace(var_3821_string); // 0x2746 Func
	var_3819_object = 0; // 0x2748 SetNull
	var_3815_object = var_3819_object; // 0x2749 Mov
	return 4; // 0x274a Return
	
Label_10059:
	GetMap(var_3819_object); // 0x274b ObjFunc
	var_3815_object = var_3819_object; // 0x274d Mov
	return 4; // 0x274e Return
}


func_323(var_382_bool, var_383_int)
{
	var_384_int = 0; var_385_int = 0; // 0x143 PushV
	var_386_string = ""; var_387_int = 0; // 0x144 PushV
	var_387_int = var_383_int; // 0x145 Mov
	func_223(var_386_string, var_387_int); // 0x146 Call
	GetVariable(var_386_string, var_385_int); // 0x148 Func
	var_388_int = 3; // 0x14a PushI
	var_389_int = var_385_int & var_388_int; // 0x14b And
	var_390_int = 0; // 0x14c PushI
	var_391_bool = var_389_int == var_390_int; // 0x14d Eq
	if(var_391_bool == 0) goto Label_337; // 0x14e JumpB
	var_382_bool = 1; // 0x14f MovB
	return 2; // 0x150 Return
	
Label_337:
	var_382_bool = 0; // 0x151 MovB
	return 2; // 0x152 Return
}


func_8516()
{
	var_3922_string = ""; var_3923_bool = 0; // 0x2145 PushV
	var_3922_string = "icot_eva@door1"; // 0x2146 MovS
	var_3923_bool = 1; // 0x2147 MovB
	func_137(var_3922_string, var_3923_bool); // 0x2148 Call
	return 0; // 0x214a Return
}


func_842(var_898_int, var_899_int)
{
	var_900_bool = 0; // 0x34b PushV
	var_900_bool = 1; // 0x34c MovB
	var_901_int = 20; // 0x34d PushI
	var_902_bool = var_899_int >= var_901_int; // 0x34e GE
	if(var_902_bool == 0) goto Label_859; // 0x34f JumpB
	var_903_bool = 0; // 0x350 PushV
	var_903_bool = 0; // 0x351 MovB
	var_904_int = 6; // 0x352 PushI
	var_905_bool = var_899_int >= var_904_int; // 0x353 GE
	if(var_905_bool == 0) goto Label_857; // 0x354 JumpB
	var_906_int = 10; // 0x355 PushI
	var_907_bool = var_899_int < var_906_int; // 0x356 LT
	if(var_907_bool == 0) goto Label_857; // 0x357 JumpB
	var_903_bool = 1; // 0x358 MovB
	
Label_857:
	if(var_903_bool == 0) goto Label_859; // 0x359 JumpB
	var_900_bool = 0; // 0x35a MovB
	
Label_859:
	if(var_900_bool == 0) goto Label_866; // 0x35b JumpB
	var_908_int = 0; var_909_bool = 0; // 0x35c PushV
	var_908_int = var_898_int; // 0x35d Mov
	var_909_bool = 1; // 0x35e MovB
	func_714(var_908_int, var_909_bool); // 0x35f Call
	goto Label_871; // 0x361 Jump
	
Label_871:
	return 0; // 0x367 Return
	
Label_866:
	var_910_int = 0; var_911_bool = 0; // 0x362 PushV
	var_910_int = var_898_int; // 0x363 Mov
	var_911_bool = 0; // 0x364 MovB
	func_714(var_910_int, var_911_bool); // 0x365 Call
}


func_8523()
{
	var_3811_object = Obj(); var_3812_object = Obj(); var_3813_object = Obj(); var_3814_object = Obj(); // 0x214b PushV
	var_3815_object = Obj(); // 0x214c PushV
	func_10048(var_3815_object); // 0x214d Call
	var_3813_object = var_3815_object; // 0x214e Mov
	var_3822_string = "d1AlexandrAboutKaterina"; // 0x2150 PushS
	FindMark(var_3814_object, var_3822_string); // 0x2151 ObjFunc
	var_3823_object = var_3814_object; // 0x2153 Push
	if(var_3823_object == 0) goto Label_8535; // 0x2154 JumpB
	Remove(); // 0x2155 ObjFunc
	
Label_8535:
	var_3824_string = "d1q01EvaAboutMark"; // 0x2157 PushS
	FindMark(var_3814_object, var_3824_string); // 0x2158 ObjFunc
	var_3825_object = var_3814_object; // 0x215a Push
	if(var_3825_object == 0) goto Label_8542; // 0x215b JumpB
	Remove(); // 0x215c ObjFunc
	
Label_8542:
	var_3826_string = "d1EvaGotoMaria"; // 0x215e PushS
	FindMark(var_3814_object, var_3826_string); // 0x215f ObjFunc
	var_3827_object = var_3814_object; // 0x2161 Push
	if(var_3827_object == 0) goto Label_8549; // 0x2162 JumpB
	Remove(); // 0x2163 ObjFunc
	
Label_8549:
	var_3828_string = "d1q01EvaGotoSimon"; // 0x2165 PushS
	FindMark(var_3814_object, var_3828_string); // 0x2166 ObjFunc
	var_3829_object = var_3814_object; // 0x2168 Push
	if(var_3829_object == 0) goto Label_8556; // 0x2169 JumpB
	Remove(); // 0x216a ObjFunc
	
Label_8556:
	var_3830_string = "d1EvaInfo"; // 0x216c PushS
	FindMark(var_3814_object, var_3830_string); // 0x216d ObjFunc
	var_3831_object = var_3814_object; // 0x216f Push
	if(var_3831_object == 0) goto Label_8563; // 0x2170 JumpB
	Remove(); // 0x2171 ObjFunc
	
Label_8563:
	var_3832_string = "d1GeorgAboutAlexandr"; // 0x2173 PushS
	FindMark(var_3814_object, var_3832_string); // 0x2174 ObjFunc
	var_3833_object = var_3814_object; // 0x2176 Push
	if(var_3833_object == 0) goto Label_8570; // 0x2177 JumpB
	Remove(); // 0x2178 ObjFunc
	
Label_8570:
	var_3834_string = "d1GeorgAboutBigVlad"; // 0x217a PushS
	FindMark(var_3814_object, var_3834_string); // 0x217b ObjFunc
	var_3835_object = var_3814_object; // 0x217d Push
	if(var_3835_object == 0) goto Label_8577; // 0x217e JumpB
	Remove(); // 0x217f ObjFunc
	
Label_8577:
	var_3836_string = "d1GeorgGotoViktor"; // 0x2181 PushS
	FindMark(var_3814_object, var_3836_string); // 0x2182 ObjFunc
	var_3837_object = var_3814_object; // 0x2184 Push
	if(var_3837_object == 0) goto Label_8584; // 0x2185 JumpB
	Remove(); // 0x2186 ObjFunc
	
Label_8584:
	var_3838_string = "d1GeorgInfo"; // 0x2188 PushS
	FindMark(var_3814_object, var_3838_string); // 0x2189 ObjFunc
	var_3839_object = var_3814_object; // 0x218b Push
	if(var_3839_object == 0) goto Label_8591; // 0x218c JumpB
	Remove(); // 0x218d ObjFunc
	
Label_8591:
	var_3840_string = "d1q01GrifAboutRubin"; // 0x218f PushS
	FindMark(var_3814_object, var_3840_string); // 0x2190 ObjFunc
	var_3841_object = var_3814_object; // 0x2192 Push
	if(var_3841_object == 0) goto Label_8598; // 0x2193 JumpB
	Remove(); // 0x2194 ObjFunc
	
Label_8598:
	var_3842_string = "d1q01MarkAboutJulia"; // 0x2196 PushS
	FindMark(var_3814_object, var_3842_string); // 0x2197 ObjFunc
	var_3843_object = var_3814_object; // 0x2199 Push
	if(var_3843_object == 0) goto Label_8605; // 0x219a JumpB
	Remove(); // 0x219b ObjFunc
	
Label_8605:
	var_3844_string = "d1q01MarkAboutLara"; // 0x219d PushS
	FindMark(var_3814_object, var_3844_string); // 0x219e ObjFunc
	var_3845_object = var_3814_object; // 0x21a0 Push
	if(var_3845_object == 0) goto Label_8612; // 0x21a1 JumpB
	Remove(); // 0x21a2 ObjFunc
	
Label_8612:
	var_3846_string = "d1q01NotkinAboutRubin"; // 0x21a4 PushS
	FindMark(var_3814_object, var_3846_string); // 0x21a5 ObjFunc
	var_3847_object = var_3814_object; // 0x21a7 Push
	if(var_3847_object == 0) goto Label_8619; // 0x21a8 JumpB
	Remove(); // 0x21a9 ObjFunc
	
Label_8619:
	var_3848_string = "d1q02AnnaGotoLaska"; // 0x21ab PushS
	FindMark(var_3814_object, var_3848_string); // 0x21ac ObjFunc
	var_3849_object = var_3814_object; // 0x21ae Push
	if(var_3849_object == 0) goto Label_8626; // 0x21af JumpB
	Remove(); // 0x21b0 ObjFunc
	
Label_8626:
	var_3850_string = "d1q02ViktorGotoAnna"; // 0x21b2 PushS
	FindMark(var_3814_object, var_3850_string); // 0x21b3 ObjFunc
	var_3851_object = var_3814_object; // 0x21b5 Push
	if(var_3851_object == 0) goto Label_8633; // 0x21b6 JumpB
	Remove(); // 0x21b7 ObjFunc
	
Label_8633:
	var_3852_string = "d1BigVladAboutKapella"; // 0x21b9 PushS
	FindMark(var_3814_object, var_3852_string); // 0x21ba ObjFunc
	var_3853_object = var_3814_object; // 0x21bc Push
	if(var_3853_object == 0) goto Label_8640; // 0x21bd JumpB
	Remove(); // 0x21be ObjFunc
	
Label_8640:
	var_3854_string = "d1BigVladAboutMladVlad"; // 0x21c0 PushS
	FindMark(var_3814_object, var_3854_string); // 0x21c1 ObjFunc
	var_3855_object = var_3814_object; // 0x21c3 Push
	if(var_3855_object == 0) goto Label_8647; // 0x21c4 JumpB
	Remove(); // 0x21c5 ObjFunc
	
Label_8647:
	var_3856_string = "d1EvaAboutKapella"; // 0x21c7 PushS
	FindMark(var_3814_object, var_3856_string); // 0x21c8 ObjFunc
	var_3857_object = var_3814_object; // 0x21ca Push
	if(var_3857_object == 0) goto Label_8654; // 0x21cb JumpB
	Remove(); // 0x21cc ObjFunc
	
Label_8654:
	var_3858_string = "d1q03KapellaGotoOspina"; // 0x21ce PushS
	FindMark(var_3814_object, var_3858_string); // 0x21cf ObjFunc
	var_3859_object = var_3814_object; // 0x21d1 Push
	if(var_3859_object == 0) goto Label_8661; // 0x21d2 JumpB
	Remove(); // 0x21d3 ObjFunc
	
Label_8661:
	var_3860_string = "d1q03MladVladGotoOspina"; // 0x21d5 PushS
	FindMark(var_3814_object, var_3860_string); // 0x21d6 ObjFunc
	var_3861_object = var_3814_object; // 0x21d8 Push
	if(var_3861_object == 0) goto Label_8668; // 0x21d9 JumpB
	Remove(); // 0x21da ObjFunc
	
Label_8668:
	var_3862_string = "d1EvaAboutKaterina"; // 0x21dc PushS
	FindMark(var_3814_object, var_3862_string); // 0x21dd ObjFunc
	var_3863_object = var_3814_object; // 0x21df Push
	if(var_3863_object == 0) goto Label_8675; // 0x21e0 JumpB
	Remove(); // 0x21e1 ObjFunc
	
Label_8675:
	var_3864_string = "d1q04KaterinaGotoMishka"; // 0x21e3 PushS
	FindMark(var_3814_object, var_3864_string); // 0x21e4 ObjFunc
	var_3865_object = var_3814_object; // 0x21e6 Push
	if(var_3865_object == 0) goto Label_8682; // 0x21e7 JumpB
	Remove(); // 0x21e8 ObjFunc
	
Label_8682:
	var_3866_string = "d1q04MishkaGotoSpi4ka"; // 0x21ea PushS
	FindMark(var_3814_object, var_3866_string); // 0x21eb ObjFunc
	var_3867_object = var_3814_object; // 0x21ed Push
	if(var_3867_object == 0) goto Label_8689; // 0x21ee JumpB
	Remove(); // 0x21ef ObjFunc
	
Label_8689:
	var_3868_string = "d1q04Spi4kaGotoPowderHouse"; // 0x21f1 PushS
	FindMark(var_3814_object, var_3868_string); // 0x21f2 ObjFunc
	var_3869_object = var_3814_object; // 0x21f4 Push
	if(var_3869_object == 0) goto Label_8696; // 0x21f5 JumpB
	Remove(); // 0x21f6 ObjFunc
	
Label_8696:
	var_3870_bool = 0; var_3871_int = 0; // 0x21f8 PushV
	var_3871_int = 2; // 0x21f9 MovI
	func_10031(var_3870_bool, var_3871_int); // 0x21fa Call
	var_3882_bool = 0; var_3883_int = 0; // 0x21fc PushV
	var_3883_int = 7; // 0x21fd MovI
	func_10031(var_3882_bool, var_3883_int); // 0x21fe Call
	var_3884_bool = 0; var_3885_int = 0; // 0x2200 PushV
	var_3885_int = 37; // 0x2201 MovI
	func_10031(var_3884_bool, var_3885_int); // 0x2202 Call
	var_3886_bool = 0; var_3887_int = 0; // 0x2204 PushV
	var_3887_int = 43; // 0x2205 MovI
	func_10031(var_3886_bool, var_3887_int); // 0x2206 Call
	var_3888_string = "Day1 cleanup"; // 0x2208 PushS
	Trace(var_3888_string); // 0x2209 Func
	return 4; // 0x220b Return
}


func_4942(var_3241_int, var_3242_int, var_3243_object, var_3244_object, var_3245_object, var_3246_object)
{
	var_3247_int = 0; // 0x134f PushI
	var_3248_bool = var_3242_int == var_3247_int; // 0x1350 Eq
	if(var_3248_bool == 0) goto Label_4970; // 0x1351 JumpB
	var_3249_int = 0; var_3250_bool = 0; // 0x1352 PushV
	var_3249_int = 6; // 0x1353 MovI
	var_3250_bool = 1; // 0x1354 MovB
	func_731(var_3249_int, var_3250_bool); // 0x1355 Call
	var_3251_int = 0; var_3252_bool = 0; var_3253_int = 0; // 0x1357 PushV
	var_3251_int = 6; // 0x1358 MovI
	var_3252_bool = 1; // 0x1359 MovB
	var_3253_int = 1; // 0x135a MovI
	func_748(var_3251_int, var_3252_bool, var_3253_int); // 0x135b Call
	var_3254_int = 0; var_3255_int = 0; var_3256_object = Obj(); var_3257_object = Obj(); var_3258_object = Obj(); // 0x135d PushV
	var_3254_int = 6; // 0x135e MovI
	var_3255_int = var_3241_int; // 0x135f Mov
	var_3256_object = var_3243_object; // 0x1360 Mov
	var_3257_object = var_3244_object; // 0x1361 Mov
	var_3258_object = var_3245_object; // 0x1362 Mov
	func_655(var_3254_int, var_3255_int, var_3256_object, var_3257_object, var_3258_object); // 0x1363 Call
	var_3259_object = Obj(); var_3260_int = 0; // 0x1365 PushV
	var_3259_object = var_3246_object; // 0x1366 Mov
	var_3260_int = 2; // 0x1367 MovI
	func_229(var_3260_int); // 0x1368 Call
	
Label_4970:
	var_3261_int = 0; var_3262_bool = 0; // 0x136a PushV
	var_3261_int = 6; // 0x136b MovI
	var_3262_bool = 0; // 0x136c MovB
	func_714(var_3261_int, var_3262_bool); // 0x136d Call
	return 0; // 0x136f Return
}


func_10065(var_3588_bool, var_3589_int)
{
	var_3591_int = 0; var_3592_int = 0; var_3593_int = 0; var_3594_int = 0; // 0x2751 PushV
	var_3595_bool = 0; // 0x2752 PushV
	var_3595_bool = 0; // 0x2753 MovB
	var_3596_int = 40000; // 0x2754 PushI
	var_3597_bool = var_3589_int > var_3596_int; // 0x2755 GT
	if(var_3597_bool == 0) goto Label_10075; // 0x2756 JumpB
	var_3598_int = 40288; // 0x2757 PushI
	var_3599_bool = var_3589_int < var_3598_int; // 0x2758 LT
	if(var_3599_bool == 0) goto Label_10075; // 0x2759 JumpB
	var_3595_bool = 1; // 0x275a MovB
	
Label_10075:
	if(var_3595_bool == 0) goto Label_10098; // 0x275b JumpB
	var_3600_int = 40000; // 0x275c PushI
	var_3601_int = var_3589_int - var_3600_int; // 0x275d Sub
	var_3602_int = 24; // 0x275e PushI
	var_3593_int = var_3601_int / var_3601_int; // 0x275f Div2
	var_3603_int = 40000; // 0x2760 PushI
	var_3604_int = var_3589_int - var_3603_int; // 0x2761 Sub
	var_3605_int = 24; // 0x2762 PushI
	var_3594_int = var_3604_int % var_3605_int; // 0x2763 Mod2
	var_3606_int = 0; var_3607_int = 0; // 0x2764 PushV
	var_3608_int = 1; // 0x2765 PushI
	var_3606_int = var_3593_int + var_3608_int; // 0x2766 Add2
	var_3607_int = var_3594_int; // 0x2767 Mov
	func_7115(var_3606_int, var_3607_int); // 0x2768 Call
	var_3775_int = 0; var_3776_int = 0; // 0x276a PushV
	var_3777_int = 1; // 0x276b PushI
	var_3775_int = var_3593_int + var_3777_int; // 0x276c Add2
	var_3776_int = var_3594_int; // 0x276d Mov
	func_11445(var_3775_int, var_3776_int); // 0x276e Call
	var_3588_bool = 1; // 0x2770 MovB
	return 4; // 0x2771 Return
	
Label_10098:
	var_3588_bool = 0; // 0x2772 MovB
	return 4; // 0x2773 Return
}


func_339(var_71_int)
{
	var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_int = 0; // 0x153 PushV
	var_76_string = ""; var_77_int = 0; // 0x154 PushV
	var_77_int = var_71_int; // 0x155 Mov
	func_223(var_76_string, var_77_int); // 0x156 Call
	GetVariable(var_76_string, var_74_int); // 0x158 Func
	var_78_int = 252; // 0x15a PushI
	var_79_int = var_74_int & var_78_int; // 0x15b And
	var_80_int = 0; // 0x15c PushI
	var_75_int = var_79_int | var_80_int; // 0x15d Or2
	var_81_string = ""; var_82_int = 0; // 0x15e PushV
	var_82_int = var_71_int; // 0x15f Mov
	func_223(var_81_string, var_82_int); // 0x160 Call
	SetVariable(var_81_string, var_75_int); // 0x162 Func
	return 4; // 0x164 Return
}


func_5975()
{
	var_258_string = "r7_house2_01"; // 0x1758 PushS
	add(var_258_string); // 0x1759 ObjFunc
	var_259_string = "r7_house2_02"; // 0x175b PushS
	add(var_259_string); // 0x175c ObjFunc
	var_260_string = "r7_house2_03"; // 0x175e PushS
	add(var_260_string); // 0x175f ObjFunc
	var_261_string = "r7_house2_04"; // 0x1761 PushS
	add(var_261_string); // 0x1762 ObjFunc
	var_262_string = "r7_house3_03_i2"; // 0x1764 PushS
	add(var_262_string); // 0x1765 ObjFunc
	var_263_string = "r7_house3_03"; // 0x1767 PushS
	add(var_263_string); // 0x1768 ObjFunc
	var_264_string = "r7_house3_04_i2"; // 0x176a PushS
	add(var_264_string); // 0x176b ObjFunc
	var_265_string = "r7_house3_04"; // 0x176d PushS
	add(var_265_string); // 0x176e ObjFunc
	var_266_string = "r7_house3_05_i2"; // 0x1770 PushS
	add(var_266_string); // 0x1771 ObjFunc
	var_267_string = "r7_house3_05"; // 0x1773 PushS
	add(var_267_string); // 0x1774 ObjFunc
	var_268_string = "r7_house3_06_i2"; // 0x1776 PushS
	add(var_268_string); // 0x1777 ObjFunc
	var_269_string = "r7_house3_01_i2"; // 0x1779 PushS
	add(var_269_string); // 0x177a ObjFunc
	var_270_string = "r7_house3_01"; // 0x177c PushS
	add(var_270_string); // 0x177d ObjFunc
	var_271_string = "r7_house3_02_i2"; // 0x177f PushS
	add(var_271_string); // 0x1780 ObjFunc
	var_272_string = "r7_house3_02"; // 0x1782 PushS
	add(var_272_string); // 0x1783 ObjFunc
	return 0; // 0x1785 Return
}


func_5468()
{
	var_205_string = "r4_house_2_02"; // 0x155d PushS
	add(var_205_string); // 0x155e ObjFunc
	var_206_string = "r4_house3_03_i2"; // 0x1560 PushS
	add(var_206_string); // 0x1561 ObjFunc
	var_207_string = "r4_house3_03"; // 0x1563 PushS
	add(var_207_string); // 0x1564 ObjFunc
	var_208_string = "r4_house4_02_i2"; // 0x1566 PushS
	add(var_208_string); // 0x1567 ObjFunc
	var_209_string = "r4_house4_02"; // 0x1569 PushS
	add(var_209_string); // 0x156a ObjFunc
	var_210_string = "r4_house4_01_i2"; // 0x156c PushS
	add(var_210_string); // 0x156d ObjFunc
	var_211_string = "r4_house4_01"; // 0x156f PushS
	add(var_211_string); // 0x1570 ObjFunc
	var_212_string = "r4_house3_02_i2"; // 0x1572 PushS
	add(var_212_string); // 0x1573 ObjFunc
	var_213_string = "r4_house3_02"; // 0x1575 PushS
	add(var_213_string); // 0x1576 ObjFunc
	var_214_string = "r4_house_2_01"; // 0x1578 PushS
	add(var_214_string); // 0x1579 ObjFunc
	var_215_string = "r4_house3_01_i2"; // 0x157b PushS
	add(var_215_string); // 0x157c ObjFunc
	var_216_string = "r4_house3_01"; // 0x157e PushS
	add(var_216_string); // 0x157f ObjFunc
	var_217_string = "r4_house7_01"; // 0x1581 PushS
	add(var_217_string); // 0x1582 ObjFunc
	var_218_string = "r4_House6_01"; // 0x1584 PushS
	add(var_218_string); // 0x1585 ObjFunc
	var_219_string = "r4_house_2_03"; // 0x1587 PushS
	add(var_219_string); // 0x1588 ObjFunc
	var_220_string = "r4_House6_03"; // 0x158a PushS
	add(var_220_string); // 0x158b ObjFunc
	var_221_string = "r4_house_2_04"; // 0x158d PushS
	add(var_221_string); // 0x158e ObjFunc
	return 0; // 0x1590 Return
}


func_7005()
{
	var_3789_object = Obj(); var_3790_object = Obj(); // 0x1b5d PushV
	GetMainOutdoorScene(var_3790_object); // 0x1b5e Func
	var_3791_object = GlobalVars[0]; // 0x1b60 PushGE
	var_3792_object = Obj(); var_3793_object = Obj(); var_3794_int = 0; // 0x1b61 PushV
	var_3793_object = var_3790_object; // 0x1b62 Mov
	var_3794_int = 1; // 0x1b63 MovI
	func_6562(var_3792_object, var_3793_object, var_3794_int); // 0x1b64 Call
	var_3791_object = var_3792_object; // 0x1b65 Mov
	GlobalVars[0] = var_3791_object; // 0x1b67 PopGE
	var_3817_object = GlobalVars[1]; // 0x1b68 PushGE
	var_3818_object = Obj(); var_3819_object = Obj(); var_3820_int = 0; // 0x1b69 PushV
	var_3819_object = var_3790_object; // 0x1b6a Mov
	var_3820_int = 2; // 0x1b6b MovI
	func_6562(var_3818_object, var_3819_object, var_3820_int); // 0x1b6c Call
	var_3817_object = var_3818_object; // 0x1b6d Mov
	GlobalVars[1] = var_3817_object; // 0x1b6f PopGE
	var_3821_object = GlobalVars[2]; // 0x1b70 PushGE
	var_3822_object = Obj(); var_3823_object = Obj(); var_3824_int = 0; // 0x1b71 PushV
	var_3823_object = var_3790_object; // 0x1b72 Mov
	var_3824_int = 3; // 0x1b73 MovI
	func_6562(var_3822_object, var_3823_object, var_3824_int); // 0x1b74 Call
	var_3821_object = var_3822_object; // 0x1b75 Mov
	GlobalVars[2] = var_3821_object; // 0x1b77 PopGE
	var_3825_object = GlobalVars[3]; // 0x1b78 PushGE
	var_3826_object = Obj(); var_3827_object = Obj(); var_3828_int = 0; // 0x1b79 PushV
	var_3827_object = var_3790_object; // 0x1b7a Mov
	var_3828_int = 4; // 0x1b7b MovI
	func_6562(var_3826_object, var_3827_object, var_3828_int); // 0x1b7c Call
	var_3825_object = var_3826_object; // 0x1b7d Mov
	GlobalVars[3] = var_3825_object; // 0x1b7f PopGE
	var_3829_object = GlobalVars[4]; // 0x1b80 PushGE
	var_3830_object = Obj(); var_3831_object = Obj(); var_3832_int = 0; // 0x1b81 PushV
	var_3831_object = var_3790_object; // 0x1b82 Mov
	var_3832_int = 5; // 0x1b83 MovI
	func_6562(var_3830_object, var_3831_object, var_3832_int); // 0x1b84 Call
	var_3829_object = var_3830_object; // 0x1b85 Mov
	GlobalVars[4] = var_3829_object; // 0x1b87 PopGE
	var_3833_object = GlobalVars[5]; // 0x1b88 PushGE
	var_3834_object = Obj(); var_3835_object = Obj(); var_3836_int = 0; // 0x1b89 PushV
	var_3835_object = var_3790_object; // 0x1b8a Mov
	var_3836_int = 6; // 0x1b8b MovI
	func_6562(var_3834_object, var_3835_object, var_3836_int); // 0x1b8c Call
	var_3833_object = var_3834_object; // 0x1b8d Mov
	GlobalVars[5] = var_3833_object; // 0x1b8f PopGE
	var_3837_object = GlobalVars[6]; // 0x1b90 PushGE
	var_3838_object = Obj(); var_3839_object = Obj(); var_3840_int = 0; // 0x1b91 PushV
	var_3839_object = var_3790_object; // 0x1b92 Mov
	var_3840_int = 1; // 0x1b93 MovI
	func_6576(var_3838_object, var_3839_object, var_3840_int); // 0x1b94 Call
	var_3837_object = var_3838_object; // 0x1b95 Mov
	GlobalVars[6] = var_3837_object; // 0x1b97 PopGE
	var_3847_object = GlobalVars[7]; // 0x1b98 PushGE
	var_3848_object = Obj(); var_3849_object = Obj(); var_3850_int = 0; // 0x1b99 PushV
	var_3849_object = var_3790_object; // 0x1b9a Mov
	var_3850_int = 2; // 0x1b9b MovI
	func_6576(var_3848_object, var_3849_object, var_3850_int); // 0x1b9c Call
	var_3847_object = var_3848_object; // 0x1b9d Mov
	GlobalVars[7] = var_3847_object; // 0x1b9f PopGE
	var_3851_object = GlobalVars[8]; // 0x1ba0 PushGE
	var_3852_object = Obj(); var_3853_object = Obj(); var_3854_int = 0; // 0x1ba1 PushV
	var_3853_object = var_3790_object; // 0x1ba2 Mov
	var_3854_int = 3; // 0x1ba3 MovI
	func_6576(var_3852_object, var_3853_object, var_3854_int); // 0x1ba4 Call
	var_3851_object = var_3852_object; // 0x1ba5 Mov
	GlobalVars[8] = var_3851_object; // 0x1ba7 PopGE
	var_3855_object = GlobalVars[9]; // 0x1ba8 PushGE
	var_3856_object = Obj(); var_3857_object = Obj(); var_3858_int = 0; // 0x1ba9 PushV
	var_3857_object = var_3790_object; // 0x1baa Mov
	var_3858_int = 4; // 0x1bab MovI
	func_6576(var_3856_object, var_3857_object, var_3858_int); // 0x1bac Call
	var_3855_object = var_3856_object; // 0x1bad Mov
	GlobalVars[9] = var_3855_object; // 0x1baf PopGE
	var_3859_object = GlobalVars[10]; // 0x1bb0 PushGE
	var_3860_object = Obj(); var_3861_object = Obj(); var_3862_int = 0; // 0x1bb1 PushV
	var_3861_object = var_3790_object; // 0x1bb2 Mov
	var_3862_int = 5; // 0x1bb3 MovI
	func_6576(var_3860_object, var_3861_object, var_3862_int); // 0x1bb4 Call
	var_3859_object = var_3860_object; // 0x1bb5 Mov
	GlobalVars[10] = var_3859_object; // 0x1bb7 PopGE
	var_3863_object = GlobalVars[11]; // 0x1bb8 PushGE
	var_3864_object = Obj(); var_3865_object = Obj(); var_3866_int = 0; // 0x1bb9 PushV
	var_3865_object = var_3790_object; // 0x1bba Mov
	var_3866_int = 6; // 0x1bbb MovI
	func_6576(var_3864_object, var_3865_object, var_3866_int); // 0x1bbc Call
	var_3863_object = var_3864_object; // 0x1bbd Mov
	GlobalVars[11] = var_3863_object; // 0x1bbf PopGE
	var_3867_object = GlobalVars[16]; // 0x1bc0 PushGE
	var_3868_object = Obj(); // 0x1bc1 PushV
	func_86(var_3868_object); // 0x1bc2 Call
	var_3867_object = var_3868_object; // 0x1bc3 Mov
	GlobalVars[16] = var_3867_object; // 0x1bc5 PopGE
	func_6688(); // 0x1bc7 Call
	return 2; // 0x1bc9 Return
}


func_3934(var_2691_int, var_2692_int, var_2693_object, var_2694_object, var_2695_object, var_2696_object)
{
	var_2697_int = 0; // 0xf5f PushI
	var_2698_bool = var_2692_int == var_2697_int; // 0xf60 Eq
	if(var_2698_bool == 0) goto Label_3962; // 0xf61 JumpB
	var_2699_int = 0; var_2700_bool = 0; // 0xf62 PushV
	var_2699_int = 0; // 0xf63 MovI
	var_2700_bool = 1; // 0xf64 MovB
	func_731(var_2699_int, var_2700_bool); // 0xf65 Call
	var_2701_int = 0; var_2702_bool = 0; var_2703_int = 0; // 0xf67 PushV
	var_2701_int = 0; // 0xf68 MovI
	var_2702_bool = 1; // 0xf69 MovB
	var_2703_int = 1; // 0xf6a MovI
	func_748(var_2701_int, var_2702_bool, var_2703_int); // 0xf6b Call
	var_2704_int = 0; var_2705_int = 0; var_2706_object = Obj(); var_2707_object = Obj(); var_2708_object = Obj(); // 0xf6d PushV
	var_2704_int = 0; // 0xf6e MovI
	var_2705_int = var_2691_int; // 0xf6f Mov
	var_2706_object = var_2693_object; // 0xf70 Mov
	var_2707_object = var_2694_object; // 0xf71 Mov
	var_2708_object = var_2695_object; // 0xf72 Mov
	func_655(var_2704_int, var_2705_int, var_2706_object, var_2707_object, var_2708_object); // 0xf73 Call
	var_2743_object = Obj(); var_2744_int = 0; // 0xf75 PushV
	var_2743_object = var_2696_object; // 0xf76 Mov
	var_2744_int = 2; // 0xf77 MovI
	func_229(var_2744_int); // 0xf78 Call
	
Label_3962:
	var_2745_int = 0; var_2746_bool = 0; // 0xf7a PushV
	var_2745_int = 0; // 0xf7b MovI
	var_2746_bool = 0; // 0xf7c MovB
	func_714(var_2745_int, var_2746_bool); // 0xf7d Call
	var_2747_int = 0; var_2748_int = 0; var_2749_int = 0; // 0xf7f PushV
	var_2747_int = 0; // 0xf80 MovI
	var_2748_int = var_2691_int; // 0xf81 Mov
	var_2749_int = var_2692_int; // 0xf82 Mov
	func_3518(var_2747_int, var_2748_int, var_2749_int); // 0xf83 Call
	return 0; // 0xf85 Return
}


func_4450(var_3160_int, var_3161_int, var_3162_object, var_3163_object, var_3164_object, var_3165_object)
{
	var_3166_int = 0; // 0x1163 PushI
	var_3167_bool = var_3161_int == var_3166_int; // 0x1164 Eq
	if(var_3167_bool == 0) goto Label_4478; // 0x1165 JumpB
	var_3168_int = 0; var_3169_bool = 0; // 0x1166 PushV
	var_3168_int = 13; // 0x1167 MovI
	var_3169_bool = 1; // 0x1168 MovB
	func_731(var_3168_int, var_3169_bool); // 0x1169 Call
	var_3170_int = 0; var_3171_bool = 0; var_3172_int = 0; // 0x116b PushV
	var_3170_int = 13; // 0x116c MovI
	var_3171_bool = 1; // 0x116d MovB
	var_3172_int = 1; // 0x116e MovI
	func_748(var_3170_int, var_3171_bool, var_3172_int); // 0x116f Call
	var_3173_int = 0; var_3174_int = 0; var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); // 0x1171 PushV
	var_3173_int = 13; // 0x1172 MovI
	var_3174_int = var_3160_int; // 0x1173 Mov
	var_3175_object = var_3162_object; // 0x1174 Mov
	var_3176_object = var_3163_object; // 0x1175 Mov
	var_3177_object = var_3164_object; // 0x1176 Mov
	func_655(var_3173_int, var_3174_int, var_3175_object, var_3176_object, var_3177_object); // 0x1177 Call
	var_3178_object = Obj(); var_3179_int = 0; // 0x1179 PushV
	var_3178_object = var_3165_object; // 0x117a Mov
	var_3179_int = 2; // 0x117b MovI
	func_229(var_3179_int); // 0x117c Call
	
Label_4478:
	var_3180_int = 0; var_3181_bool = 0; // 0x117e PushV
	var_3180_int = 3; // 0x117f MovI
	var_3181_bool = 0; // 0x1180 MovB
	func_714(var_3180_int, var_3181_bool); // 0x1181 Call
	var_3182_int = 0; var_3183_int = 0; var_3184_int = 0; // 0x1183 PushV
	var_3182_int = 3; // 0x1184 MovI
	var_3183_int = var_3160_int; // 0x1185 Mov
	var_3184_int = var_3161_int; // 0x1186 Mov
	func_3338(var_3182_int, var_3183_int, var_3184_int); // 0x1187 Call
	return 0; // 0x1189 Return
}


func_8035(var_4405_int)
{
	var_4406_int = 0; var_4407_int = 0; // 0x1f63 PushV
	var_4408_int = 14087; // 0x1f64 PushI
	var_4409_int = 14086; // 0x1f65 PushI
	AddMessage(var_4408_int, var_4409_int, var_4407_int); // 0x1f66 Func
	var_4410_string = "player_mail"; // 0x1f68 PushS
	var_4411_int = 1; // 0x1f69 PushI
	SetVariable(var_4410_string, var_4411_int); // 0x1f6a Func
	var_4405_int = var_4407_int; // 0x1f6c Mov
	return 2; // 0x1f6d Return
}


func_357(var_1379_bool, var_1380_int)
{
	var_1381_int = 0; var_1382_int = 0; // 0x165 PushV
	var_1383_string = ""; var_1384_int = 0; // 0x166 PushV
	var_1384_int = var_1380_int; // 0x167 Mov
	func_223(var_1383_string, var_1384_int); // 0x168 Call
	GetVariable(var_1383_string, var_1382_int); // 0x16a Func
	var_1385_int = 3; // 0x16c PushI
	var_1386_int = var_1382_int & var_1385_int; // 0x16d And
	var_1387_int = 1; // 0x16e PushI
	var_1388_bool = var_1386_int == var_1387_int; // 0x16f Eq
	if(var_1388_bool == 0) goto Label_371; // 0x170 JumpB
	var_1379_bool = 1; // 0x171 MovB
	return 2; // 0x172 Return
	
Label_371:
	var_1379_bool = 0; // 0x173 MovB
	return 2; // 0x174 Return
}


func_872(var_529_int, var_530_int)
{
	var_531_bool = 0; // 0x369 PushV
	var_531_bool = 1; // 0x36a MovB
	var_532_bool = 0; // 0x36b PushV
	var_532_bool = 1; // 0x36c MovB
	var_533_int = 22; // 0x36d PushI
	var_534_bool = var_530_int >= var_533_int; // 0x36e GE
	if(var_534_bool == 0) goto Label_884; // 0x36f JumpB
	var_535_int = 4; // 0x370 PushI
	var_536_bool = var_530_int < var_535_int; // 0x371 LT
	if(var_536_bool == 0) goto Label_884; // 0x372 JumpB
	var_532_bool = 0; // 0x373 MovB
	
Label_884:
	if(var_532_bool == 0) goto Label_896; // 0x374 JumpB
	var_537_bool = 0; // 0x375 PushV
	var_537_bool = 0; // 0x376 MovB
	var_538_int = 6; // 0x377 PushI
	var_539_bool = var_530_int >= var_538_int; // 0x378 GE
	if(var_539_bool == 0) goto Label_894; // 0x379 JumpB
	var_540_int = 8; // 0x37a PushI
	var_541_bool = var_530_int < var_540_int; // 0x37b LT
	if(var_541_bool == 0) goto Label_894; // 0x37c JumpB
	var_537_bool = 1; // 0x37d MovB
	
Label_894:
	if(var_537_bool == 0) goto Label_896; // 0x37e JumpB
	var_531_bool = 0; // 0x37f MovB
	
Label_896:
	if(var_531_bool == 0) goto Label_903; // 0x380 JumpB
	var_542_int = 0; var_543_bool = 0; // 0x381 PushV
	var_542_int = var_529_int; // 0x382 Mov
	var_543_bool = 1; // 0x383 MovB
	func_714(var_542_int, var_543_bool); // 0x384 Call
	goto Label_908; // 0x386 Jump
	
Label_908:
	return 0; // 0x38c Return
	
Label_903:
	var_553_int = 0; var_554_bool = 0; // 0x387 PushV
	var_553_int = var_529_int; // 0x388 Mov
	var_554_bool = 0; // 0x389 MovB
	func_714(var_553_int, var_554_bool); // 0x38a Call
}


func_8046(var_4327_int)
{
	var_4328_int = 0; var_4329_int = 0; // 0x1f6e PushV
	var_4330_int = 14089; // 0x1f6f PushI
	var_4331_int = 14088; // 0x1f70 PushI
	AddMessage(var_4330_int, var_4331_int, var_4329_int); // 0x1f71 Func
	var_4332_string = "player_mail"; // 0x1f73 PushS
	var_4333_int = 1; // 0x1f74 PushI
	SetVariable(var_4332_string, var_4333_int); // 0x1f75 Func
	var_4327_int = var_4329_int; // 0x1f77 Mov
	return 2; // 0x1f78 Return
}


func_4976()
{
	var_157_string = "House6_02"; // 0x1371 PushS
	add(var_157_string); // 0x1372 ObjFunc
	var_158_string = "House6_01"; // 0x1374 PushS
	add(var_158_string); // 0x1375 ObjFunc
	var_159_string = "house_2_01"; // 0x1377 PushS
	add(var_159_string); // 0x1378 ObjFunc
	var_160_string = "house7_03"; // 0x137a PushS
	add(var_160_string); // 0x137b ObjFunc
	var_161_string = "house7_02"; // 0x137d PushS
	add(var_161_string); // 0x137e ObjFunc
	var_162_string = "house3_01_i2"; // 0x1380 PushS
	add(var_162_string); // 0x1381 ObjFunc
	var_163_string = "house3_01"; // 0x1383 PushS
	add(var_163_string); // 0x1384 ObjFunc
	var_164_string = "house_2_03"; // 0x1386 PushS
	add(var_164_string); // 0x1387 ObjFunc
	var_165_string = "house_2_02"; // 0x1389 PushS
	add(var_165_string); // 0x138a ObjFunc
	var_166_string = "house4_01_i2"; // 0x138c PushS
	add(var_166_string); // 0x138d ObjFunc
	var_167_string = "house4_01"; // 0x138f PushS
	add(var_167_string); // 0x1390 ObjFunc
	var_168_string = "House6_05"; // 0x1392 PushS
	add(var_168_string); // 0x1393 ObjFunc
	var_169_string = "House6_04"; // 0x1395 PushS
	add(var_169_string); // 0x1396 ObjFunc
	var_170_string = "House6_03"; // 0x1398 PushS
	add(var_170_string); // 0x1399 ObjFunc
	return 0; // 0x139b Return
}


func_10100()
{
	var_3776_float = 0; var_3777_int = 0; var_3778_float = 0; var_3779_float = 0; var_3780_int = 0; var_3781_float = 0; // 0x2774 PushV
	GetGameTime(var_3779_float); // 0x2775 Func
	var_3780_int = 1; // 0x2777 MovI
	
Label_10104:
	var_3782_int = 288; // 0x2778 PushI
	var_3783_bool = var_3780_int < var_3782_int; // 0x2779 LT
	if(var_3783_bool == 0) goto Label_10119; // 0x277a JumpB
	var_3784_float = 1.0; // 0x277b PushF
	var_3781_float = var_3784_float * var_3780_int; // 0x277c Mult2
	var_3785_bool = var_3781_float < var_3779_float; // 0x277d LT
	if(var_3785_bool == 0) goto Label_10112; // 0x277e JumpB
	goto Label_10116; // 0x277f Jump
	
Label_10116:
	var_3786_int = 1; // 0x2784 PushI
	var_3780_int = var_3780_int + var_3786_int; // 0x2785 Add2
	goto Label_10104; // 0x2786 Jump
	
Label_10112:
	var_3787_int = 40000; // 0x2780 PushI
	var_3788_int = var_3787_int + var_3780_int; // 0x2781 Add
	SetTimeEvent(var_3788_int, var_3781_float); // 0x2782 Func
	
Label_10119:
	func_7005(); // 0x2788 Call
	func_11395(); // 0x278b Call
	return 6; // 0x278d Return
}


func_373(var_142_int)
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; // 0x175 PushV
	var_147_string = ""; var_148_int = 0; // 0x176 PushV
	var_148_int = var_142_int; // 0x177 Mov
	func_223(var_147_string, var_148_int); // 0x178 Call
	GetVariable(var_147_string, var_145_int); // 0x17a Func
	var_149_int = 252; // 0x17c PushI
	var_150_int = var_145_int & var_149_int; // 0x17d And
	var_151_int = 1; // 0x17e PushI
	var_146_int = var_150_int | var_151_int; // 0x17f Or2
	var_152_string = ""; var_153_int = 0; // 0x180 PushV
	var_153_int = var_142_int; // 0x181 Mov
	func_223(var_152_string, var_153_int); // 0x182 Call
	SetVariable(var_152_string, var_146_int); // 0x184 Func
	return 4; // 0x186 Return
}


func_11636(var_3907_object, var_3909_cvector, var_3910_cvector)
{
	var_3911_object = Obj(); var_3912_object = Obj(); // 0x2d74 PushV
	var_3913_string = "pers_butcher"; // 0x2d75 PushS
	var_3914_string = "Danko_arena_manager.xml"; // 0x2d76 PushS
	AddStationaryActor(var_3912_object, var_3909_cvector, var_3910_cvector, var_3913_string, var_3914_string); // 0x2d77 ObjFunc
	var_3907_object = var_3912_object; // 0x2d79 Mov
	return 2; // 0x2d7a Return
}


func_8057(var_4336_int)
{
	var_4337_int = 0; var_4338_int = 0; // 0x1f79 PushV
	var_4339_int = 14091; // 0x1f7a PushI
	var_4340_int = 14090; // 0x1f7b PushI
	AddMessage(var_4339_int, var_4340_int, var_4338_int); // 0x1f7c Func
	var_4341_string = "player_mail"; // 0x1f7e PushS
	var_4342_int = 1; // 0x1f7f PushI
	SetVariable(var_4341_string, var_4342_int); // 0x1f80 Func
	var_4336_int = var_4338_int; // 0x1f82 Mov
	return 2; // 0x1f83 Return
}


func_1411(var_715_int, var_716_int, var_717_int)
{
	var_718_bool = 0; // 0x584 PushV
	var_718_bool = 0; // 0x585 MovB
	var_719_int = 8; // 0x586 PushI
	var_720_bool = var_717_int > var_719_int; // 0x587 GT
	if(var_720_bool == 0) goto Label_1421; // 0x588 JumpB
	var_721_int = 21; // 0x589 PushI
	var_722_bool = var_717_int < var_721_int; // 0x58a LT
	if(var_722_bool == 0) goto Label_1421; // 0x58b JumpB
	var_718_bool = 1; // 0x58c MovB
	
Label_1421:
	if(var_718_bool == 0) goto Label_1503; // 0x58d JumpB
	var_723_int = 0; var_724_string = ""; var_725_string = ""; var_726_int = 0; // 0x58e PushV
	var_723_int = var_715_int; // 0x58f Mov
	var_724_string = "pers_woman"; // 0x590 MovS
	var_725_string = "woman.xml"; // 0x591 MovS
	var_726_int = 3; // 0x592 MovI
	func_438(var_723_int, var_724_string, var_725_string, var_726_int); // 0x593 Call
	var_727_int = 0; var_728_string = ""; var_729_string = ""; var_730_int = 0; // 0x595 PushV
	var_727_int = var_715_int; // 0x596 Mov
	var_728_string = "pers_unosha"; // 0x597 MovS
	var_729_string = "unosha.xml"; // 0x598 MovS
	var_730_int = 1; // 0x599 MovI
	func_438(var_727_int, var_728_string, var_729_string, var_730_int); // 0x59a Call
	var_731_int = 0; var_732_string = ""; var_733_string = ""; var_734_int = 0; // 0x59c PushV
	var_731_int = var_715_int; // 0x59d Mov
	var_732_string = "pers_unosha"; // 0x59e MovS
	var_733_string = "unosha2.xml"; // 0x59f MovS
	var_734_int = 1; // 0x5a0 MovI
	func_438(var_731_int, var_732_string, var_733_string, var_734_int); // 0x5a1 Call
	var_735_int = 0; var_736_string = ""; var_737_string = ""; var_738_int = 0; // 0x5a3 PushV
	var_735_int = var_715_int; // 0x5a4 Mov
	var_736_string = "pers_worker"; // 0x5a5 MovS
	var_737_string = "worker.xml"; // 0x5a6 MovS
	var_738_int = 2; // 0x5a7 MovI
	func_438(var_735_int, var_736_string, var_737_string, var_738_int); // 0x5a8 Call
	var_739_int = 0; var_740_string = ""; var_741_string = ""; var_742_int = 0; // 0x5aa PushV
	var_739_int = var_715_int; // 0x5ab Mov
	var_740_string = "pers_worker"; // 0x5ac MovS
	var_741_string = "worker2.xml"; // 0x5ad MovS
	var_742_int = 2; // 0x5ae MovI
	func_438(var_739_int, var_740_string, var_741_string, var_742_int); // 0x5af Call
	var_743_int = 0; var_744_string = ""; var_745_string = ""; var_746_int = 0; // 0x5b1 PushV
	var_743_int = var_715_int; // 0x5b2 Mov
	var_744_string = "pers_alkash"; // 0x5b3 MovS
	var_745_string = "alkash.xml"; // 0x5b4 MovS
	var_746_int = 2; // 0x5b5 MovI
	func_438(var_743_int, var_744_string, var_745_string, var_746_int); // 0x5b6 Call
	var_747_int = 0; var_748_string = ""; var_749_string = ""; var_750_int = 0; // 0x5b8 PushV
	var_747_int = var_715_int; // 0x5b9 Mov
	var_748_string = "pers_girl"; // 0x5ba MovS
	var_749_string = "girl.xml"; // 0x5bb MovS
	var_750_int = 1; // 0x5bc MovI
	func_438(var_747_int, var_748_string, var_749_string, var_750_int); // 0x5bd Call
	var_751_int = 0; var_752_string = ""; var_753_string = ""; var_754_int = 0; // 0x5bf PushV
	var_751_int = var_715_int; // 0x5c0 Mov
	var_752_string = "pers_girl"; // 0x5c1 MovS
	var_753_string = "girl2.xml"; // 0x5c2 MovS
	var_754_int = 1; // 0x5c3 MovI
	func_438(var_751_int, var_752_string, var_753_string, var_754_int); // 0x5c4 Call
	var_755_int = 1; // 0x5c6 PushI
	var_756_int = var_716_int + var_755_int; // 0x5c7 Add
	var_757_int = 3; // 0x5c8 PushI
	var_758_bool = var_756_int >= var_757_int; // 0x5c9 GE
	if(var_758_bool == 0) goto Label_1483; // 0x5ca JumpB
	
Label_1483:
	var_759_int = 1; // 0x5cb PushI
	var_760_int = var_716_int + var_759_int; // 0x5cc Add
	var_761_int = 7; // 0x5cd PushI
	var_762_bool = var_760_int >= var_761_int; // 0x5ce GE
	if(var_762_bool == 0) goto Label_1495; // 0x5cf JumpB
	var_763_int = 0; var_764_string = ""; var_765_string = ""; var_766_int = 0; // 0x5d0 PushV
	var_763_int = var_715_int; // 0x5d1 Mov
	var_764_string = "pers_butcher"; // 0x5d2 MovS
	var_765_string = "butcher.xml"; // 0x5d3 MovS
	var_766_int = 2; // 0x5d4 MovI
	func_438(var_763_int, var_764_string, var_765_string, var_766_int); // 0x5d5 Call
	
Label_1495:
	var_767_int = 0; var_768_string = ""; var_769_string = ""; var_770_int = 0; // 0x5d7 PushV
	var_767_int = var_715_int; // 0x5d8 Mov
	var_768_string = "pers_dog"; // 0x5d9 MovS
	var_769_string = "dog.xml"; // 0x5da MovS
	var_770_int = 1; // 0x5db MovI
	func_438(var_767_int, var_768_string, var_769_string, var_770_int); // 0x5dc Call
	goto Label_1569; // 0x5de Jump
	
Label_1569:
	var_771_bool = 0; // 0x621 PushV
	var_771_bool = 0; // 0x622 MovB
	var_772_bool = 0; // 0x623 PushV
	var_772_bool = 0; // 0x624 MovB
	var_773_int = 0; // 0x625 PushI
	var_774_bool = var_716_int == var_773_int; // 0x626 Eq
	if(var_774_bool == 0) goto Label_1580; // 0x627 JumpB
	var_775_int = 12; // 0x628 PushI
	var_776_bool = var_717_int > var_775_int; // 0x629 GT
	if(var_776_bool == 0) goto Label_1580; // 0x62a JumpB
	var_772_bool = 1; // 0x62b MovB
	
Label_1580:
	if(var_772_bool == 0) goto Label_1585; // 0x62c JumpB
	var_777_int = 22; // 0x62d PushI
	var_778_bool = var_717_int < var_777_int; // 0x62e LT
	if(var_778_bool == 0) goto Label_1585; // 0x62f JumpB
	var_771_bool = 1; // 0x630 MovB
	
Label_1585:
	if(var_771_bool == 0) goto Label_1593; // 0x631 JumpB
	var_779_int = 0; var_780_string = ""; var_781_string = ""; var_782_int = 0; // 0x632 PushV
	var_779_int = var_715_int; // 0x633 Mov
	var_780_string = "pers_woman"; // 0x634 MovS
	var_781_string = "woman_killme.xml"; // 0x635 MovS
	var_782_int = 1; // 0x636 MovI
	func_438(var_779_int, var_780_string, var_781_string, var_782_int); // 0x637 Call
	
Label_1593:
	var_783_bool = 0; var_784_int = 0; var_785_int = 0; // 0x639 PushV
	var_784_int = var_716_int; // 0x63a Mov
	var_785_int = var_717_int; // 0x63b Mov
	func_1112(var_783_bool, var_784_int, var_785_int); // 0x63c Call
	if(var_783_bool == 0) goto Label_1606; // 0x63e JumpB
	var_790_int = 0; var_791_string = ""; var_792_string = ""; var_793_int = 0; // 0x63f PushV
	var_790_int = var_715_int; // 0x640 Mov
	var_791_string = "pers_soldat"; // 0x641 MovS
	var_792_string = "soldier_marauder.xml"; // 0x642 MovS
	var_793_int = 2; // 0x643 MovI
	func_438(var_790_int, var_791_string, var_792_string, var_793_int); // 0x644 Call
	
Label_1606:
	return 0; // 0x646 Return
	
Label_1503:
	var_794_int = 0; var_795_string = ""; var_796_string = ""; var_797_int = 0; // 0x5df PushV
	var_794_int = var_715_int; // 0x5e0 Mov
	var_795_string = "pers_woman"; // 0x5e1 MovS
	var_796_string = "woman.xml"; // 0x5e2 MovS
	var_797_int = 1; // 0x5e3 MovI
	func_438(var_794_int, var_795_string, var_796_string, var_797_int); // 0x5e4 Call
	var_798_int = 0; var_799_string = ""; var_800_string = ""; var_801_int = 0; // 0x5e6 PushV
	var_798_int = var_715_int; // 0x5e7 Mov
	var_799_string = "pers_unosha"; // 0x5e8 MovS
	var_800_string = "unosha.xml"; // 0x5e9 MovS
	var_801_int = 1; // 0x5ea MovI
	func_438(var_798_int, var_799_string, var_800_string, var_801_int); // 0x5eb Call
	var_802_int = 0; var_803_string = ""; var_804_string = ""; var_805_int = 0; // 0x5ed PushV
	var_802_int = var_715_int; // 0x5ee Mov
	var_803_string = "pers_unosha"; // 0x5ef MovS
	var_804_string = "unosha2.xml"; // 0x5f0 MovS
	var_805_int = 1; // 0x5f1 MovI
	func_438(var_802_int, var_803_string, var_804_string, var_805_int); // 0x5f2 Call
	var_806_int = 0; var_807_string = ""; var_808_string = ""; var_809_int = 0; // 0x5f4 PushV
	var_806_int = var_715_int; // 0x5f5 Mov
	var_807_string = "pers_worker"; // 0x5f6 MovS
	var_808_string = "worker.xml"; // 0x5f7 MovS
	var_809_int = 1; // 0x5f8 MovI
	func_438(var_806_int, var_807_string, var_808_string, var_809_int); // 0x5f9 Call
	var_810_int = 0; var_811_string = ""; var_812_string = ""; var_813_int = 0; // 0x5fb PushV
	var_810_int = var_715_int; // 0x5fc Mov
	var_811_string = "pers_worker"; // 0x5fd MovS
	var_812_string = "worker2.xml"; // 0x5fe MovS
	var_813_int = 1; // 0x5ff MovI
	func_438(var_810_int, var_811_string, var_812_string, var_813_int); // 0x600 Call
	var_814_int = 0; var_815_string = ""; var_816_string = ""; var_817_int = 0; // 0x602 PushV
	var_814_int = var_715_int; // 0x603 Mov
	var_815_string = "pers_alkash"; // 0x604 MovS
	var_816_string = "alkash.xml"; // 0x605 MovS
	var_817_int = 3; // 0x606 MovI
	func_438(var_814_int, var_815_string, var_816_string, var_817_int); // 0x607 Call
	var_818_int = 1; // 0x609 PushI
	var_819_int = var_716_int + var_818_int; // 0x60a Add
	var_820_int = 3; // 0x60b PushI
	var_821_bool = var_819_int >= var_820_int; // 0x60c GE
	if(var_821_bool == 0) goto Label_1550; // 0x60d JumpB
	
Label_1550:
	var_822_int = 1; // 0x60e PushI
	var_823_int = var_716_int + var_822_int; // 0x60f Add
	var_824_int = 7; // 0x610 PushI
	var_825_bool = var_823_int >= var_824_int; // 0x611 GE
	if(var_825_bool == 0) goto Label_1562; // 0x612 JumpB
	var_826_int = 0; var_827_string = ""; var_828_string = ""; var_829_int = 0; // 0x613 PushV
	var_826_int = var_715_int; // 0x614 Mov
	var_827_string = "pers_butcher"; // 0x615 MovS
	var_828_string = "butcher.xml"; // 0x616 MovS
	var_829_int = 3; // 0x617 MovI
	func_438(var_826_int, var_827_string, var_828_string, var_829_int); // 0x618 Call
	
Label_1562:
	var_830_int = 0; var_831_string = ""; var_832_string = ""; var_833_int = 0; // 0x61a PushV
	var_830_int = var_715_int; // 0x61b Mov
	var_831_string = "pers_dog"; // 0x61c MovS
	var_832_string = "dog.xml"; // 0x61d MovS
	var_833_int = 1; // 0x61e MovI
	func_438(var_830_int, var_831_string, var_832_string, var_833_int); // 0x61f Call
}


func_8068(var_4165_int)
{
	var_4166_int = 0; var_4167_int = 0; // 0x1f84 PushV
	var_4168_int = 14093; // 0x1f85 PushI
	var_4169_int = 14092; // 0x1f86 PushI
	AddMessage(var_4168_int, var_4169_int, var_4167_int); // 0x1f87 Func
	var_4170_string = "player_mail"; // 0x1f89 PushS
	var_4171_int = 1; // 0x1f8a PushI
	SetVariable(var_4170_string, var_4171_int); // 0x1f8b Func
	var_4165_int = var_4167_int; // 0x1f8d Mov
	return 2; // 0x1f8e Return
}


func_3974()
{
	var_49_string = "dt_house3_05_i2"; // 0xf87 PushS
	add(var_49_string); // 0xf88 ObjFunc
	var_50_string = "dt_house3_05"; // 0xf8a PushS
	add(var_50_string); // 0xf8b ObjFunc
	var_51_string = "dt_house_1_10"; // 0xf8d PushS
	add(var_51_string); // 0xf8e ObjFunc
	var_52_string = "house5_10"; // 0xf90 PushS
	add(var_52_string); // 0xf91 ObjFunc
	var_53_string = "house5_07"; // 0xf93 PushS
	add(var_53_string); // 0xf94 ObjFunc
	var_54_string = "dt_house_1_03"; // 0xf96 PushS
	add(var_54_string); // 0xf97 ObjFunc
	var_55_string = "dt_house1_union2_04l"; // 0xf99 PushS
	add(var_55_string); // 0xf9a ObjFunc
	var_56_string = "dt_house1_union2_04r"; // 0xf9c PushS
	add(var_56_string); // 0xf9d ObjFunc
	var_57_string = "house5_22"; // 0xf9f PushS
	add(var_57_string); // 0xfa0 ObjFunc
	var_58_string = "house5_08"; // 0xfa2 PushS
	add(var_58_string); // 0xfa3 ObjFunc
	return 0; // 0xfa5 Return
}


func_6022(var_1210_int, var_1211_int, var_1212_object, var_1213_object, var_1214_object, var_1215_object)
{
	var_1216_int = 0; // 0x1787 PushI
	var_1217_bool = var_1211_int == var_1216_int; // 0x1788 Eq
	if(var_1217_bool == 0) goto Label_6050; // 0x1789 JumpB
	var_1218_int = 0; var_1219_bool = 0; // 0x178a PushV
	var_1218_int = 13; // 0x178b MovI
	var_1219_bool = 0; // 0x178c MovB
	func_731(var_1218_int, var_1219_bool); // 0x178d Call
	var_1220_int = 0; var_1221_bool = 0; var_1222_int = 0; // 0x178f PushV
	var_1220_int = 13; // 0x1790 MovI
	var_1221_bool = 0; // 0x1791 MovB
	var_1222_int = 1; // 0x1792 MovI
	func_748(var_1220_int, var_1221_bool, var_1222_int); // 0x1793 Call
	var_1223_int = 0; var_1224_int = 0; var_1225_object = Obj(); var_1226_object = Obj(); var_1227_object = Obj(); // 0x1795 PushV
	var_1223_int = 13; // 0x1796 MovI
	var_1224_int = var_1210_int; // 0x1797 Mov
	var_1225_object = var_1212_object; // 0x1798 Mov
	var_1226_object = var_1213_object; // 0x1799 Mov
	var_1227_object = var_1214_object; // 0x179a Mov
	func_557(var_1224_int, var_1225_object, var_1226_object, var_1227_object); // 0x179b Call
	var_1228_object = Obj(); var_1229_int = 0; // 0x179d PushV
	var_1228_object = var_1215_object; // 0x179e Mov
	var_1229_int = 0; // 0x179f MovI
	func_229(var_1229_int); // 0x17a0 Call
	
Label_6050:
	var_1230_int = 0; var_1231_int = 0; // 0x17a2 PushV
	var_1230_int = 13; // 0x17a3 MovI
	var_1231_int = var_1211_int; // 0x17a4 Mov
	func_872(var_1230_int, var_1231_int); // 0x17a5 Call
	var_1232_int = 0; var_1233_int = 0; var_1234_int = 0; // 0x17a7 PushV
	var_1232_int = 13; // 0x17a8 MovI
	var_1233_int = var_1210_int; // 0x17a9 Mov
	var_1234_int = var_1211_int; // 0x17aa Mov
	func_1270(var_1232_int, var_1233_int, var_1234_int); // 0x17ab Call
	return 0; // 0x17ad Return
}


func_391(var_61_bool, var_62_int)
{
	var_63_int = 0; var_64_int = 0; // 0x187 PushV
	var_65_string = ""; var_66_int = 0; // 0x188 PushV
	var_66_int = var_62_int; // 0x189 Mov
	func_223(var_65_string, var_66_int); // 0x18a Call
	GetVariable(var_65_string, var_64_int); // 0x18c Func
	var_67_int = 3; // 0x18e PushI
	var_68_int = var_64_int & var_67_int; // 0x18f And
	var_69_int = 2; // 0x190 PushI
	var_70_bool = var_68_int == var_69_int; // 0x191 Eq
	if(var_70_bool == 0) goto Label_405; // 0x192 JumpB
	var_61_bool = 1; // 0x193 MovB
	return 2; // 0x194 Return
	
Label_405:
	var_61_bool = 0; // 0x195 MovB
	return 2; // 0x196 Return
}


func_4490()
{
	var_105_string = "dt_house3_09_i2"; // 0x118b PushS
	add(var_105_string); // 0x118c ObjFunc
	var_106_string = "dt_house3_09"; // 0x118e PushS
	add(var_106_string); // 0x118f ObjFunc
	var_107_string = "house1_se_03l"; // 0x1191 PushS
	add(var_107_string); // 0x1192 ObjFunc
	var_108_string = "house1_se_03r"; // 0x1194 PushS
	add(var_108_string); // 0x1195 ObjFunc
	var_109_string = "house1_se_01l"; // 0x1197 PushS
	add(var_109_string); // 0x1198 ObjFunc
	var_110_string = "house1_se_01r"; // 0x119a PushS
	add(var_110_string); // 0x119b ObjFunc
	var_111_string = "house1_se_04l"; // 0x119d PushS
	add(var_111_string); // 0x119e ObjFunc
	var_112_string = "house1_se_04r"; // 0x11a0 PushS
	add(var_112_string); // 0x11a1 ObjFunc
	var_113_string = "house5_11"; // 0x11a3 PushS
	add(var_113_string); // 0x11a4 ObjFunc
	var_114_string = "house5_09"; // 0x11a6 PushS
	add(var_114_string); // 0x11a7 ObjFunc
	var_115_string = "dt_house_1_04"; // 0x11a9 PushS
	add(var_115_string); // 0x11aa ObjFunc
	var_116_string = "house5_13"; // 0x11ac PushS
	add(var_116_string); // 0x11ad ObjFunc
	var_117_string = "house5_12"; // 0x11af PushS
	add(var_117_string); // 0x11b0 ObjFunc
	var_118_string = "house5_14"; // 0x11b2 PushS
	add(var_118_string); // 0x11b3 ObjFunc
	var_119_string = "house5_unoin03l"; // 0x11b5 PushS
	add(var_119_string); // 0x11b6 ObjFunc
	var_120_string = "house5_unoin03r"; // 0x11b8 PushS
	add(var_120_string); // 0x11b9 ObjFunc
	var_121_string = "house5_unoin02l"; // 0x11bb PushS
	add(var_121_string); // 0x11bc ObjFunc
	var_122_string = "house5_unoin02r"; // 0x11be PushS
	add(var_122_string); // 0x11bf ObjFunc
	var_123_string = "house5_unoin01l"; // 0x11c1 PushS
	add(var_123_string); // 0x11c2 ObjFunc
	var_124_string = "house5_unoin01r"; // 0x11c4 PushS
	add(var_124_string); // 0x11c5 ObjFunc
	return 0; // 0x11c7 Return
}


func_909(var_1257_int, var_1258_int)
{
	var_1259_bool = 0; // 0x38e PushV
	var_1259_bool = 1; // 0x38f MovB
	var_1260_int = 22; // 0x390 PushI
	var_1261_bool = var_1258_int >= var_1260_int; // 0x391 GE
	if(var_1261_bool == 0) goto Label_919; // 0x392 JumpB
	var_1262_int = 6; // 0x393 PushI
	var_1263_bool = var_1258_int < var_1262_int; // 0x394 LT
	if(var_1263_bool == 0) goto Label_919; // 0x395 JumpB
	var_1259_bool = 0; // 0x396 MovB
	
Label_919:
	if(var_1259_bool == 0) goto Label_926; // 0x397 JumpB
	var_1264_int = 0; var_1265_bool = 0; // 0x398 PushV
	var_1264_int = var_1257_int; // 0x399 Mov
	var_1265_bool = 1; // 0x39a MovB
	func_714(var_1264_int, var_1265_bool); // 0x39b Call
	goto Label_931; // 0x39d Jump
	
Label_931:
	return 0; // 0x3a3 Return
	
Label_926:
	var_1266_int = 0; var_1267_bool = 0; // 0x39e PushV
	var_1266_int = var_1257_int; // 0x39f Mov
	var_1267_bool = 0; // 0x3a0 MovB
	func_714(var_1266_int, var_1267_bool); // 0x3a1 Call
}


func_10126()
{
	var_3948_object = Obj(); var_3949_object = Obj(); // 0x278e PushV
	var_3950_string = "Adding diary entry"; // 0x278f PushS
	Trace(var_3950_string); // 0x2790 Func
	var_3951_int = 30; // 0x2792 PushI
	var_3952_int = 0; // 0x2793 PushI
	var_3953_int = 4079; // 0x2794 PushI
	CreateDiaryEntry(var_3949_object, var_3951_int, var_3952_int, var_3953_int); // 0x2795 Func
	var_3954_bool = 0; var_3955_object = Obj(); var_3956_int = 0; // 0x2797 PushV
	var_3955_object = var_3949_object; // 0x2798 Mov
	var_3956_int = -1; // 0x2799 MovI
	func_10002(var_3954_bool, var_3955_object, var_3956_int); // 0x279a Call
	return 2; // 0x279c Return
}


func_8079(var_4174_int)
{
	var_4175_int = 0; var_4176_int = 0; // 0x1f8f PushV
	var_4177_int = 14095; // 0x1f90 PushI
	var_4178_int = 14094; // 0x1f91 PushI
	AddMessage(var_4177_int, var_4178_int, var_4176_int); // 0x1f92 Func
	var_4179_string = "player_mail"; // 0x1f94 PushS
	var_4180_int = 1; // 0x1f95 PushI
	SetVariable(var_4179_string, var_4180_int); // 0x1f96 Func
	var_4174_int = var_4176_int; // 0x1f98 Mov
	return 2; // 0x1f99 Return
}


func_6545(var_3795_object, var_3797_string, var_3798_string, var_3799_string)
{
	var_3804_bool = 0; var_3805_cvector = CVector(0,0,0); var_3806_cvector = CVector(0,0,0); var_3807_object = Obj(); var_3808_bool = 0; var_3809_cvector = CVector(0,0,0); var_3810_cvector = CVector(0,0,0); var_3811_object = Obj(); // 0x1991 PushV
	var_3812_string = "pt_guard_"; // 0x1992 PushS
	var_3813_int = var_3812_string + var_3797_string; // 0x1993 Add
	GetLocator(var_3813_int, var_3808_bool, var_3809_cvector, var_3810_cvector); // 0x1994 ObjFunc
	var_3814_bool = var_3808_bool == 0; // 0x1996 Not
	if(var_3814_bool == 0) goto Label_6557; // 0x1997 JumpB
	var_3815_string = "Locator doesn't exist for guard "; // 0x1998 PushS
	var_3816_int = var_3815_string + var_3797_string; // 0x1999 Add
	Trace(var_3816_int); // 0x199a Func
	goto Label_6559; // 0x199c Jump
	
Label_6559:
	var_3795_object = var_3811_object; // 0x199f Mov
	return 8; // 0x19a0 Return
	
Label_6557:
	AddStationaryActor(var_3811_object, var_3809_cvector, var_3810_cvector, var_3798_string, var_3799_string); // 0x199d ObjFunc
}


func_5521(var_1129_int, var_1130_int, var_1131_object, var_1132_object, var_1133_object, var_1134_object)
{
	var_1135_int = 0; // 0x1592 PushI
	var_1136_bool = var_1130_int == var_1135_int; // 0x1593 Eq
	if(var_1136_bool == 0) goto Label_5549; // 0x1594 JumpB
	var_1137_int = 0; var_1138_bool = 0; // 0x1595 PushV
	var_1137_int = 10; // 0x1596 MovI
	var_1138_bool = 0; // 0x1597 MovB
	func_731(var_1137_int, var_1138_bool); // 0x1598 Call
	var_1139_int = 0; var_1140_bool = 0; var_1141_int = 0; // 0x159a PushV
	var_1139_int = 10; // 0x159b MovI
	var_1140_bool = 0; // 0x159c MovB
	var_1141_int = 1; // 0x159d MovI
	func_748(var_1139_int, var_1140_bool, var_1141_int); // 0x159e Call
	var_1142_int = 0; var_1143_int = 0; var_1144_object = Obj(); var_1145_object = Obj(); var_1146_object = Obj(); // 0x15a0 PushV
	var_1142_int = 10; // 0x15a1 MovI
	var_1143_int = var_1129_int; // 0x15a2 Mov
	var_1144_object = var_1131_object; // 0x15a3 Mov
	var_1145_object = var_1132_object; // 0x15a4 Mov
	var_1146_object = var_1133_object; // 0x15a5 Mov
	func_557(var_1143_int, var_1144_object, var_1145_object, var_1146_object); // 0x15a6 Call
	var_1147_object = Obj(); var_1148_int = 0; // 0x15a8 PushV
	var_1147_object = var_1134_object; // 0x15a9 Mov
	var_1148_int = 0; // 0x15aa MovI
	func_229(var_1148_int); // 0x15ab Call
	
Label_5549:
	var_1149_int = 0; var_1150_int = 0; // 0x15ad PushV
	var_1149_int = 10; // 0x15ae MovI
	var_1150_int = var_1130_int; // 0x15af Mov
	func_805(var_1149_int, var_1150_int); // 0x15b0 Call
	var_1151_int = 0; var_1152_int = 0; var_1153_int = 0; // 0x15b2 PushV
	var_1151_int = 10; // 0x15b3 MovI
	var_1152_int = var_1129_int; // 0x15b4 Mov
	var_1153_int = var_1130_int; // 0x15b5 Mov
	func_1270(var_1151_int, var_1152_int, var_1153_int); // 0x15b6 Call
	return 0; // 0x15b8 Return
}


func_9108()
{
	var_4223_object = Obj(); var_4224_object = Obj(); var_4225_object = Obj(); var_4226_object = Obj(); // 0x2394 PushV
	var_4227_object = Obj(); // 0x2395 PushV
	func_10048(var_4227_object); // 0x2396 Call
	var_4225_object = var_4227_object; // 0x2397 Mov
	var_4228_string = "d4q01BigVladGotoLara"; // 0x2399 PushS
	FindMark(var_4226_object, var_4228_string); // 0x239a ObjFunc
	var_4229_object = var_4226_object; // 0x239c Push
	if(var_4229_object == 0) goto Label_9120; // 0x239d JumpB
	Remove(); // 0x239e ObjFunc
	
Label_9120:
	var_4230_string = "d4q01BigVladGotoLaraSelf"; // 0x23a0 PushS
	FindMark(var_4226_object, var_4230_string); // 0x23a1 ObjFunc
	var_4231_object = var_4226_object; // 0x23a3 Push
	if(var_4231_object == 0) goto Label_9127; // 0x23a4 JumpB
	Remove(); // 0x23a5 ObjFunc
	
Label_9127:
	var_4232_string = "d4q01BigVladGotoSklad"; // 0x23a7 PushS
	FindMark(var_4226_object, var_4232_string); // 0x23a8 ObjFunc
	var_4233_object = var_4226_object; // 0x23aa Push
	if(var_4233_object == 0) goto Label_9134; // 0x23ab JumpB
	Remove(); // 0x23ac ObjFunc
	
Label_9134:
	var_4234_string = "d4q01BigVladGotoSobor"; // 0x23ae PushS
	FindMark(var_4226_object, var_4234_string); // 0x23af ObjFunc
	var_4235_object = var_4226_object; // 0x23b1 Push
	if(var_4235_object == 0) goto Label_9141; // 0x23b2 JumpB
	Remove(); // 0x23b3 ObjFunc
	
Label_9141:
	var_4236_string = "d4q01BigVladGotoSoborAndTheaterSelf"; // 0x23b5 PushS
	FindMark(var_4226_object, var_4236_string); // 0x23b6 ObjFunc
	var_4237_object = var_4226_object; // 0x23b8 Push
	if(var_4237_object == 0) goto Label_9148; // 0x23b9 JumpB
	Remove(); // 0x23ba ObjFunc
	
Label_9148:
	var_4238_string = "d4q01BigVladGotoTheater"; // 0x23bc PushS
	FindMark(var_4226_object, var_4238_string); // 0x23bd ObjFunc
	var_4239_object = var_4226_object; // 0x23bf Push
	if(var_4239_object == 0) goto Label_9155; // 0x23c0 JumpB
	Remove(); // 0x23c1 ObjFunc
	
Label_9155:
	var_4240_string = "d4q01LaraGotoMladVlad"; // 0x23c3 PushS
	FindMark(var_4226_object, var_4240_string); // 0x23c4 ObjFunc
	var_4241_object = var_4226_object; // 0x23c6 Push
	if(var_4241_object == 0) goto Label_9162; // 0x23c7 JumpB
	Remove(); // 0x23c8 ObjFunc
	
Label_9162:
	var_4242_string = "d4q01LaraGotoMladVladSelf"; // 0x23ca PushS
	FindMark(var_4226_object, var_4242_string); // 0x23cb ObjFunc
	var_4243_object = var_4226_object; // 0x23cd Push
	if(var_4243_object == 0) goto Label_9169; // 0x23ce JumpB
	Remove(); // 0x23cf ObjFunc
	
Label_9169:
	var_4244_string = "d4q01LaraGotoOspina"; // 0x23d1 PushS
	FindMark(var_4226_object, var_4244_string); // 0x23d2 ObjFunc
	var_4245_object = var_4226_object; // 0x23d4 Push
	if(var_4245_object == 0) goto Label_9176; // 0x23d5 JumpB
	Remove(); // 0x23d6 ObjFunc
	
Label_9176:
	var_4246_string = "d4q01LaraGotoOspinaSelf"; // 0x23d8 PushS
	FindMark(var_4226_object, var_4246_string); // 0x23d9 ObjFunc
	var_4247_object = var_4226_object; // 0x23db Push
	if(var_4247_object == 0) goto Label_9183; // 0x23dc JumpB
	Remove(); // 0x23dd ObjFunc
	
Label_9183:
	var_4248_string = "d4q01MladVladGotoBigVlad"; // 0x23df PushS
	FindMark(var_4226_object, var_4248_string); // 0x23e0 ObjFunc
	var_4249_object = var_4226_object; // 0x23e2 Push
	if(var_4249_object == 0) goto Label_9190; // 0x23e3 JumpB
	Remove(); // 0x23e4 ObjFunc
	
Label_9190:
	var_4250_string = "d4q01MladVladGotoBigVladSelf"; // 0x23e6 PushS
	FindMark(var_4226_object, var_4250_string); // 0x23e7 ObjFunc
	var_4251_object = var_4226_object; // 0x23e9 Push
	if(var_4251_object == 0) goto Label_9197; // 0x23ea JumpB
	Remove(); // 0x23eb ObjFunc
	
Label_9197:
	var_4252_string = "d4q01MladVladGotoOspina"; // 0x23ed PushS
	FindMark(var_4226_object, var_4252_string); // 0x23ee ObjFunc
	var_4253_object = var_4226_object; // 0x23f0 Push
	if(var_4253_object == 0) goto Label_9204; // 0x23f1 JumpB
	Remove(); // 0x23f2 ObjFunc
	
Label_9204:
	var_4254_string = "d4q01OspinaGotoLara"; // 0x23f4 PushS
	FindMark(var_4226_object, var_4254_string); // 0x23f5 ObjFunc
	var_4255_object = var_4226_object; // 0x23f7 Push
	if(var_4255_object == 0) goto Label_9211; // 0x23f8 JumpB
	Remove(); // 0x23f9 ObjFunc
	
Label_9211:
	var_4256_string = "d4q01WastedMale"; // 0x23fb PushS
	FindMark(var_4226_object, var_4256_string); // 0x23fc ObjFunc
	var_4257_object = var_4226_object; // 0x23fe Push
	if(var_4257_object == 0) goto Label_9218; // 0x23ff JumpB
	Remove(); // 0x2400 ObjFunc
	
Label_9218:
	var_4258_string = "d4q01Whitemask"; // 0x2402 PushS
	FindMark(var_4226_object, var_4258_string); // 0x2403 ObjFunc
	var_4259_object = var_4226_object; // 0x2405 Push
	if(var_4259_object == 0) goto Label_9225; // 0x2406 JumpB
	Remove(); // 0x2407 ObjFunc
	
Label_9225:
	var_4260_string = "d4q02BirdmaskNearHome"; // 0x2409 PushS
	FindMark(var_4226_object, var_4260_string); // 0x240a ObjFunc
	var_4261_object = var_4226_object; // 0x240c Push
	if(var_4261_object == 0) goto Label_9232; // 0x240d JumpB
	Remove(); // 0x240e ObjFunc
	
Label_9232:
	var_4262_string = "d4q02MladVladGotoAJLSelf"; // 0x2410 PushS
	FindMark(var_4226_object, var_4262_string); // 0x2411 ObjFunc
	var_4263_object = var_4226_object; // 0x2413 Push
	if(var_4263_object == 0) goto Label_9239; // 0x2414 JumpB
	Remove(); // 0x2415 ObjFunc
	
Label_9239:
	var_4264_string = "d4q02MladVladGotoAnna"; // 0x2417 PushS
	FindMark(var_4226_object, var_4264_string); // 0x2418 ObjFunc
	var_4265_object = var_4226_object; // 0x241a Push
	if(var_4265_object == 0) goto Label_9246; // 0x241b JumpB
	Remove(); // 0x241c ObjFunc
	
Label_9246:
	var_4266_string = "d4q02MladVladGotoJulia"; // 0x241e PushS
	FindMark(var_4226_object, var_4266_string); // 0x241f ObjFunc
	var_4267_object = var_4226_object; // 0x2421 Push
	if(var_4267_object == 0) goto Label_9253; // 0x2422 JumpB
	Remove(); // 0x2423 ObjFunc
	
Label_9253:
	var_4268_string = "d4q02MladVladGotoLara"; // 0x2425 PushS
	FindMark(var_4226_object, var_4268_string); // 0x2426 ObjFunc
	var_4269_object = var_4226_object; // 0x2428 Push
	if(var_4269_object == 0) goto Label_9260; // 0x2429 JumpB
	Remove(); // 0x242a ObjFunc
	
Label_9260:
	var_4270_string = "d4q03AlexandrAboutVolnica"; // 0x242c PushS
	FindMark(var_4226_object, var_4270_string); // 0x242d ObjFunc
	var_4271_object = var_4226_object; // 0x242f Push
	if(var_4271_object == 0) goto Label_9267; // 0x2430 JumpB
	Remove(); // 0x2431 ObjFunc
	
Label_9267:
	var_4272_string = "d4q03AlexandrGotoGrif"; // 0x2433 PushS
	FindMark(var_4226_object, var_4272_string); // 0x2434 ObjFunc
	var_4273_object = var_4226_object; // 0x2436 Push
	if(var_4273_object == 0) goto Label_9274; // 0x2437 JumpB
	Remove(); // 0x2438 ObjFunc
	
Label_9274:
	var_4274_string = "d4q03AlexandrGotoGrifSelf"; // 0x243a PushS
	FindMark(var_4226_object, var_4274_string); // 0x243b ObjFunc
	var_4275_object = var_4226_object; // 0x243d Push
	if(var_4275_object == 0) goto Label_9281; // 0x243e JumpB
	Remove(); // 0x243f ObjFunc
	
Label_9281:
	var_4276_string = "d4q03GrifGotoAlexandr"; // 0x2441 PushS
	FindMark(var_4226_object, var_4276_string); // 0x2442 ObjFunc
	var_4277_object = var_4226_object; // 0x2444 Push
	if(var_4277_object == 0) goto Label_9288; // 0x2445 JumpB
	Remove(); // 0x2446 ObjFunc
	
Label_9288:
	var_4278_string = "d4q03GrifGotoAlexandrSelf"; // 0x2448 PushS
	FindMark(var_4226_object, var_4278_string); // 0x2449 ObjFunc
	var_4279_object = var_4226_object; // 0x244b Push
	if(var_4279_object == 0) goto Label_9295; // 0x244c JumpB
	Remove(); // 0x244d ObjFunc
	
Label_9295:
	var_4280_bool = 0; var_4281_int = 0; // 0x244f PushV
	var_4281_int = 20; // 0x2450 MovI
	func_10031(var_4280_bool, var_4281_int); // 0x2451 Call
	var_4282_bool = 0; var_4283_int = 0; // 0x2453 PushV
	var_4283_int = 21; // 0x2454 MovI
	func_10031(var_4282_bool, var_4283_int); // 0x2455 Call
	var_4284_bool = 0; var_4285_int = 0; // 0x2457 PushV
	var_4285_int = 22; // 0x2458 MovI
	func_10031(var_4284_bool, var_4285_int); // 0x2459 Call
	return 4; // 0x245b Return
}


func_9623()
{
	var_4123_object = Obj(); var_4124_object = Obj(); var_4125_object = Obj(); var_4126_object = Obj(); // 0x2597 PushV
	var_4127_object = Obj(); // 0x2598 PushV
	func_10048(var_4127_object); // 0x2599 Call
	var_4125_object = var_4127_object; // 0x259a Mov
	var_4128_string = "d7q01AglajaFindLierSelf"; // 0x259c PushS
	FindMark(var_4126_object, var_4128_string); // 0x259d ObjFunc
	var_4129_object = var_4126_object; // 0x259f Push
	if(var_4129_object == 0) goto Label_9635; // 0x25a0 JumpB
	Remove(); // 0x25a1 ObjFunc
	
Label_9635:
	var_4130_string = "d7q01AglajaGotoBirdmaskSelf"; // 0x25a3 PushS
	FindMark(var_4126_object, var_4130_string); // 0x25a4 ObjFunc
	var_4131_object = var_4126_object; // 0x25a6 Push
	if(var_4131_object == 0) goto Label_9642; // 0x25a7 JumpB
	Remove(); // 0x25a8 ObjFunc
	
Label_9642:
	var_4132_string = "d7q01BirdmaskD"; // 0x25aa PushS
	FindMark(var_4126_object, var_4132_string); // 0x25ab ObjFunc
	var_4133_object = var_4126_object; // 0x25ad Push
	if(var_4133_object == 0) goto Label_9649; // 0x25ae JumpB
	Remove(); // 0x25af ObjFunc
	
Label_9649:
	var_4134_string = "d7q01BirdmaskM"; // 0x25b1 PushS
	FindMark(var_4126_object, var_4134_string); // 0x25b2 ObjFunc
	var_4135_object = var_4126_object; // 0x25b4 Push
	if(var_4135_object == 0) goto Label_9656; // 0x25b5 JumpB
	Remove(); // 0x25b6 ObjFunc
	
Label_9656:
	var_4136_string = "d7q01BirdmaskU"; // 0x25b8 PushS
	FindMark(var_4126_object, var_4136_string); // 0x25b9 ObjFunc
	var_4137_object = var_4126_object; // 0x25bb Push
	if(var_4137_object == 0) goto Label_9663; // 0x25bc JumpB
	Remove(); // 0x25bd ObjFunc
	
Label_9663:
	var_4138_string = "d7q02AlexandrGotoPetr"; // 0x25bf PushS
	FindMark(var_4126_object, var_4138_string); // 0x25c0 ObjFunc
	var_4139_object = var_4126_object; // 0x25c2 Push
	if(var_4139_object == 0) goto Label_9670; // 0x25c3 JumpB
	Remove(); // 0x25c4 ObjFunc
	
Label_9670:
	var_4140_string = "d7q02MarkGotoAlexandr"; // 0x25c6 PushS
	FindMark(var_4126_object, var_4140_string); // 0x25c7 ObjFunc
	var_4141_object = var_4126_object; // 0x25c9 Push
	if(var_4141_object == 0) goto Label_9677; // 0x25ca JumpB
	Remove(); // 0x25cb ObjFunc
	
Label_9677:
	var_4142_string = "d7q02MarkGotoCemetery"; // 0x25cd PushS
	FindMark(var_4126_object, var_4142_string); // 0x25ce ObjFunc
	var_4143_object = var_4126_object; // 0x25d0 Push
	if(var_4143_object == 0) goto Label_9684; // 0x25d1 JumpB
	Remove(); // 0x25d2 ObjFunc
	
Label_9684:
	var_4144_bool = 0; var_4145_int = 0; // 0x25d4 PushV
	var_4145_int = 165; // 0x25d5 MovI
	func_10031(var_4144_bool, var_4145_int); // 0x25d6 Call
	var_4146_bool = 0; var_4147_int = 0; // 0x25d8 PushV
	var_4147_int = 170; // 0x25d9 MovI
	func_10031(var_4146_bool, var_4147_int); // 0x25da Call
	return 4; // 0x25dc Return
}


func_407(var_48_int)
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x197 PushV
	var_53_string = ""; var_54_int = 0; // 0x198 PushV
	var_54_int = var_48_int; // 0x199 Mov
	func_223(var_53_string, var_54_int); // 0x19a Call
	GetVariable(var_53_string, var_51_int); // 0x19c Func
	var_55_int = 252; // 0x19e PushI
	var_56_int = var_51_int & var_55_int; // 0x19f And
	var_57_int = 2; // 0x1a0 PushI
	var_52_int = var_56_int | var_57_int; // 0x1a1 Or2
	var_58_string = ""; var_59_int = 0; // 0x1a2 PushV
	var_59_int = var_48_int; // 0x1a3 Mov
	func_223(var_58_string, var_59_int); // 0x1a4 Call
	SetVariable(var_58_string, var_52_int); // 0x1a6 Func
	return 4; // 0x1a8 Return
}


func_8090(var_4309_int)
{
	var_4310_int = 0; var_4311_int = 0; // 0x1f9a PushV
	var_4312_int = 14097; // 0x1f9b PushI
	var_4313_int = 14096; // 0x1f9c PushI
	AddMessage(var_4312_int, var_4313_int, var_4311_int); // 0x1f9d Func
	var_4314_string = "player_mail"; // 0x1f9f PushS
	var_4315_int = 1; // 0x1fa0 PushI
	SetVariable(var_4314_string, var_4315_int); // 0x1fa1 Func
	var_4309_int = var_4311_int; // 0x1fa3 Mov
	return 2; // 0x1fa4 Return
}


func_5020(var_968_int, var_969_int, var_970_object, var_971_object, var_972_object, var_973_object)
{
	var_974_int = 0; // 0x139d PushI
	var_975_bool = var_969_int == var_974_int; // 0x139e Eq
	if(var_975_bool == 0) goto Label_5048; // 0x139f JumpB
	var_976_int = 0; var_977_bool = 0; // 0x13a0 PushV
	var_976_int = 7; // 0x13a1 MovI
	var_977_bool = 0; // 0x13a2 MovB
	func_731(var_976_int, var_977_bool); // 0x13a3 Call
	var_978_int = 0; var_979_bool = 0; var_980_int = 0; // 0x13a5 PushV
	var_978_int = 7; // 0x13a6 MovI
	var_979_bool = 0; // 0x13a7 MovB
	var_980_int = 1; // 0x13a8 MovI
	func_748(var_978_int, var_979_bool, var_980_int); // 0x13a9 Call
	var_981_int = 0; var_982_int = 0; var_983_object = Obj(); var_984_object = Obj(); var_985_object = Obj(); // 0x13ab PushV
	var_981_int = 7; // 0x13ac MovI
	var_982_int = var_968_int; // 0x13ad Mov
	var_983_object = var_970_object; // 0x13ae Mov
	var_984_object = var_971_object; // 0x13af Mov
	var_985_object = var_972_object; // 0x13b0 Mov
	func_557(var_982_int, var_983_object, var_984_object, var_985_object); // 0x13b1 Call
	var_986_object = Obj(); var_987_int = 0; // 0x13b3 PushV
	var_986_object = var_973_object; // 0x13b4 Mov
	var_987_int = 0; // 0x13b5 MovI
	func_229(var_987_int); // 0x13b6 Call
	
Label_5048:
	var_988_int = 0; var_989_int = 0; // 0x13b8 PushV
	var_988_int = 7; // 0x13b9 MovI
	var_989_int = var_969_int; // 0x13ba Mov
	func_842(var_988_int, var_989_int); // 0x13bb Call
	var_990_int = 0; var_991_int = 0; var_992_int = 0; // 0x13bd PushV
	var_990_int = 7; // 0x13be MovI
	var_991_int = var_968_int; // 0x13bf Mov
	var_992_int = var_969_int; // 0x13c0 Mov
	func_1270(var_990_int, var_991_int, var_992_int); // 0x13c1 Call
	return 0; // 0x13c3 Return
}


func_10142(var_3783_int)
{
	var_3785_int = 0; var_3786_int = 0; var_3787_int = 0; var_3788_int = 0; var_3789_int = 0; var_3790_int = 0; var_3791_int = 0; var_3792_int = 0; var_3793_int = 0; var_3794_int = 0; var_3795_int = 0; var_3796_int = 0; var_3797_int = 0; var_3798_int = 0; var_3799_int = 0; var_3800_int = 0; var_3801_int = 0; var_3802_int = 0; var_3803_int = 0; var_3804_int = 0; // 0x279e PushV
	var_3805_int = 45003; // 0x279f PushI
	var_3806_bool = var_3783_int == var_3805_int; // 0x27a0 Eq
	if(var_3806_bool == 0) goto Label_10168; // 0x27a1 JumpB
	var_3807_object = Obj(); var_3808_object = Obj(); // 0x27a2 PushV
	var_3809_object = GlobalVars[18]; // 0x27a3 PushGE
	var_3807_object = var_3809_object; // 0x27a4 Mov
	var_3810_object = GlobalVars[18]; // 0x27a6 PushGE
	var_3808_object = var_3810_object; // 0x27a7 Mov
	func_8523(); // 0x27a9 Call
	var_3889_int = 0; // 0x27ab PushV
	func_8222(var_3889_int); // 0x27ac Call
	var_3896_object = Obj(); var_3897_string = ""; // 0x27ae PushV
	var_3897_string = "quest_d2_01"; // 0x27af MovS
	func_97(var_3896_object, var_3897_string); // 0x27b0 Call
	var_3904_bool = 0; var_3905_string = ""; var_3906_string = ""; var_3907_string = ""; // 0x27b2 PushV
	var_3905_string = "volonteers_danko"; // 0x27b3 MovS
	var_3906_string = "update"; // 0x27b4 MovS
	var_3907_string = ""; // 0x27b5 MovS
	func_165(var_3904_bool, var_3905_string, var_3906_string, var_3907_string); // 0x27b6 Call
	
Label_10168:
	var_3911_int = 45015; // 0x27b8 PushI
	var_3912_bool = var_3783_int == var_3911_int; // 0x27b9 Eq
	if(var_3912_bool == 0) goto Label_10181; // 0x27ba JumpB
	var_3913_bool = 0; var_3914_object = Obj(); // 0x27bb PushV
	var_3915_object = GlobalVars[18]; // 0x27bc PushGE
	var_3914_object = var_3915_object; // 0x27bd Mov
	func_9816(var_3914_object); // 0x27bf Call
	if(var_3913_bool == 0) goto Label_10181; // 0x27c1 JumpB
	var_3922_int = 0; // 0x27c2 PushV
	func_8398(var_3922_int); // 0x27c3 Call
	
Label_10181:
	var_3929_int = 45013; // 0x27c5 PushI
	var_3930_bool = var_3783_int == var_3929_int; // 0x27c6 Eq
	if(var_3930_bool == 0) goto Label_10219; // 0x27c7 JumpB
	var_3931_object = Obj(); var_3932_object = Obj(); // 0x27c8 PushV
	var_3933_object = GlobalVars[18]; // 0x27c9 PushGE
	var_3931_object = var_3933_object; // 0x27ca Mov
	var_3934_object = GlobalVars[18]; // 0x27cc PushGE
	var_3932_object = var_3934_object; // 0x27cd Mov
	func_9477(); // 0x27cf Call
	var_3982_bool = 0; var_3983_string = ""; // 0x27d1 PushV
	var_3983_string = "quest_d6_01"; // 0x27d2 MovS
	func_177(var_3982_bool, var_3983_string); // 0x27d3 Call
	var_3987_object = Obj(); var_3988_string = ""; // 0x27d5 PushV
	var_3988_string = "quest_d7_01"; // 0x27d6 MovS
	func_97(var_3987_object, var_3988_string); // 0x27d7 Call
	var_3989_string = "d6q01"; // 0x27d9 PushS
	GetVariable(var_3989_string, var_3795_int); // 0x27da Func
	var_3990_int = 1000; // 0x27dc PushI
	var_3991_bool = var_3795_int == var_3990_int; // 0x27dd Eq
	if(var_3991_bool == 0) goto Label_10213; // 0x27de JumpB
	var_3992_bool = 0; var_3993_string = ""; var_3994_string = ""; var_3995_string = ""; // 0x27df PushV
	var_3993_string = "volonteers_danko"; // 0x27e0 MovS
	var_3994_string = "rescue_locked"; // 0x27e1 MovS
	var_3995_string = ""; // 0x27e2 MovS
	func_165(var_3992_bool, var_3993_string, var_3994_string, var_3995_string); // 0x27e3 Call
	
Label_10213:
	var_3996_bool = 0; var_3997_string = ""; var_3998_string = ""; var_3999_string = ""; // 0x27e5 PushV
	var_3997_string = "volonteers_danko"; // 0x27e6 MovS
	var_3998_string = "update"; // 0x27e7 MovS
	var_3999_string = ""; // 0x27e8 MovS
	func_165(var_3996_bool, var_3997_string, var_3998_string, var_3999_string); // 0x27e9 Call
	
Label_10219:
	var_4000_int = 45028; // 0x27eb PushI
	var_4001_bool = var_3783_int == var_4000_int; // 0x27ec Eq
	if(var_4001_bool == 0) goto Label_10225; // 0x27ed JumpB
	var_4002_int = 0; // 0x27ee PushV
	func_8134(var_4002_int); // 0x27ef Call
	
Label_10225:
	var_4009_int = 45029; // 0x27f1 PushI
	var_4010_bool = var_3783_int == var_4009_int; // 0x27f2 Eq
	if(var_4010_bool == 0) goto Label_10231; // 0x27f3 JumpB
	var_4011_int = 0; // 0x27f4 PushV
	func_8145(var_4011_int); // 0x27f5 Call
	
Label_10231:
	var_4018_int = 45026; // 0x27f7 PushI
	var_4019_bool = var_3783_int == var_4018_int; // 0x27f8 Eq
	if(var_4019_bool == 0) goto Label_10237; // 0x27f9 JumpB
	var_4020_int = 0; // 0x27fa PushV
	func_8112(var_4020_int); // 0x27fb Call
	
Label_10237:
	var_4027_int = 45027; // 0x27fd PushI
	var_4028_bool = var_3783_int == var_4027_int; // 0x27fe Eq
	if(var_4028_bool == 0) goto Label_10243; // 0x27ff JumpB
	var_4029_int = 0; // 0x2800 PushV
	func_8123(var_4029_int); // 0x2801 Call
	
Label_10243:
	var_4036_int = 45012; // 0x2803 PushI
	var_4037_bool = var_3783_int == var_4036_int; // 0x2804 Eq
	if(var_4037_bool == 0) goto Label_10284; // 0x2805 JumpB
	var_4038_object = Obj(); var_4039_object = Obj(); // 0x2806 PushV
	var_4040_object = GlobalVars[18]; // 0x2807 PushGE
	var_4038_object = var_4040_object; // 0x2808 Mov
	var_4041_object = GlobalVars[18]; // 0x280a PushGE
	var_4039_object = var_4041_object; // 0x280b Mov
	func_9310(); // 0x280d Call
	var_4095_int = 0; // 0x280f PushV
	func_8354(var_4095_int); // 0x2810 Call
	var_4102_bool = 0; var_4103_string = ""; // 0x2812 PushV
	var_4103_string = "quest_d5_01"; // 0x2813 MovS
	func_177(var_4102_bool, var_4103_string); // 0x2814 Call
	var_4104_object = Obj(); var_4105_string = ""; // 0x2816 PushV
	var_4105_string = "quest_d6_01"; // 0x2817 MovS
	func_97(var_4104_object, var_4105_string); // 0x2818 Call
	var_4106_string = "d5q01"; // 0x281a PushS
	GetVariable(var_4106_string, var_3796_int); // 0x281b Func
	var_4107_int = 1000; // 0x281d PushI
	var_4108_bool = var_3796_int == var_4107_int; // 0x281e Eq
	if(var_4108_bool == 0) goto Label_10278; // 0x281f JumpB
	var_4109_bool = 0; var_4110_string = ""; var_4111_string = ""; var_4112_string = ""; // 0x2820 PushV
	var_4110_string = "volonteers_danko"; // 0x2821 MovS
	var_4111_string = "rescue_locked"; // 0x2822 MovS
	var_4112_string = ""; // 0x2823 MovS
	func_165(var_4109_bool, var_4110_string, var_4111_string, var_4112_string); // 0x2824 Call
	
Label_10278:
	var_4113_bool = 0; var_4114_string = ""; var_4115_string = ""; var_4116_string = ""; // 0x2826 PushV
	var_4114_string = "volonteers_danko"; // 0x2827 MovS
	var_4115_string = "update"; // 0x2828 MovS
	var_4116_string = ""; // 0x2829 MovS
	func_165(var_4113_bool, var_4114_string, var_4115_string, var_4116_string); // 0x282a Call
	
Label_10284:
	var_4117_int = 45016; // 0x282c PushI
	var_4118_bool = var_3783_int == var_4117_int; // 0x282d Eq
	if(var_4118_bool == 0) goto Label_10322; // 0x282e JumpB
	var_4119_object = Obj(); var_4120_object = Obj(); // 0x282f PushV
	var_4121_object = GlobalVars[18]; // 0x2830 PushGE
	var_4119_object = var_4121_object; // 0x2831 Mov
	var_4122_object = GlobalVars[18]; // 0x2833 PushGE
	var_4120_object = var_4122_object; // 0x2834 Mov
	func_9623(); // 0x2836 Call
	var_4148_bool = 0; var_4149_string = ""; // 0x2838 PushV
	var_4149_string = "quest_d7_01"; // 0x2839 MovS
	func_177(var_4148_bool, var_4149_string); // 0x283a Call
	var_4150_object = Obj(); var_4151_string = ""; // 0x283c PushV
	var_4151_string = "quest_d8_01"; // 0x283d MovS
	func_97(var_4150_object, var_4151_string); // 0x283e Call
	var_4152_string = "d7q01"; // 0x2840 PushS
	GetVariable(var_4152_string, var_3797_int); // 0x2841 Func
	var_4153_int = 1000; // 0x2843 PushI
	var_4154_bool = var_3797_int == var_4153_int; // 0x2844 Eq
	if(var_4154_bool == 0) goto Label_10316; // 0x2845 JumpB
	var_4155_bool = 0; var_4156_string = ""; var_4157_string = ""; var_4158_string = ""; // 0x2846 PushV
	var_4156_string = "volonteers_danko"; // 0x2847 MovS
	var_4157_string = "rescue_locked"; // 0x2848 MovS
	var_4158_string = ""; // 0x2849 MovS
	func_165(var_4155_bool, var_4156_string, var_4157_string, var_4158_string); // 0x284a Call
	
Label_10316:
	var_4159_bool = 0; var_4160_string = ""; var_4161_string = ""; var_4162_string = ""; // 0x284c PushV
	var_4160_string = "volonteers_danko"; // 0x284d MovS
	var_4161_string = "update"; // 0x284e MovS
	var_4162_string = ""; // 0x284f MovS
	func_165(var_4159_bool, var_4160_string, var_4161_string, var_4162_string); // 0x2850 Call
	
Label_10322:
	var_4163_int = 45022; // 0x2852 PushI
	var_4164_bool = var_3783_int == var_4163_int; // 0x2853 Eq
	if(var_4164_bool == 0) goto Label_10328; // 0x2854 JumpB
	var_4165_int = 0; // 0x2855 PushV
	func_8068(var_4165_int); // 0x2856 Call
	
Label_10328:
	var_4172_int = 45023; // 0x2858 PushI
	var_4173_bool = var_3783_int == var_4172_int; // 0x2859 Eq
	if(var_4173_bool == 0) goto Label_10334; // 0x285a JumpB
	var_4174_int = 0; // 0x285b PushV
	func_8079(var_4174_int); // 0x285c Call
	
Label_10334:
	var_4181_int = 45031; // 0x285e PushI
	var_4182_bool = var_3783_int == var_4181_int; // 0x285f Eq
	if(var_4182_bool == 0) goto Label_10372; // 0x2860 JumpB
	var_4183_object = Obj(); var_4184_object = Obj(); // 0x2861 PushV
	var_4185_object = GlobalVars[18]; // 0x2862 PushGE
	var_4183_object = var_4185_object; // 0x2863 Mov
	var_4186_object = GlobalVars[18]; // 0x2865 PushGE
	var_4184_object = var_4186_object; // 0x2866 Mov
	func_9728(); // 0x2868 Call
	var_4198_bool = 0; var_4199_string = ""; // 0x286a PushV
	var_4199_string = "quest_d10_01"; // 0x286b MovS
	func_177(var_4198_bool, var_4199_string); // 0x286c Call
	var_4200_object = Obj(); var_4201_string = ""; // 0x286e PushV
	var_4201_string = "quest_d11_01"; // 0x286f MovS
	func_97(var_4200_object, var_4201_string); // 0x2870 Call
	var_4202_string = "d10q01"; // 0x2872 PushS
	GetVariable(var_4202_string, var_3798_int); // 0x2873 Func
	var_4203_int = 1000; // 0x2875 PushI
	var_4204_bool = var_3798_int == var_4203_int; // 0x2876 Eq
	if(var_4204_bool == 0) goto Label_10366; // 0x2877 JumpB
	var_4205_bool = 0; var_4206_string = ""; var_4207_string = ""; var_4208_string = ""; // 0x2878 PushV
	var_4206_string = "volonteers_danko"; // 0x2879 MovS
	var_4207_string = "rescue_locked"; // 0x287a MovS
	var_4208_string = ""; // 0x287b MovS
	func_165(var_4205_bool, var_4206_string, var_4207_string, var_4208_string); // 0x287c Call
	
Label_10366:
	var_4209_bool = 0; var_4210_string = ""; var_4211_string = ""; var_4212_string = ""; // 0x287e PushV
	var_4210_string = "volonteers_danko"; // 0x287f MovS
	var_4211_string = "update"; // 0x2880 MovS
	var_4212_string = ""; // 0x2881 MovS
	func_165(var_4209_bool, var_4210_string, var_4211_string, var_4212_string); // 0x2882 Call
	
Label_10372:
	var_4213_int = 45032; // 0x2884 PushI
	var_4214_bool = var_3783_int == var_4213_int; // 0x2885 Eq
	if(var_4214_bool == 0) goto Label_10379; // 0x2886 JumpB
	var_4215_object = Obj(); var_4216_string = ""; // 0x2887 PushV
	var_4216_string = "quest_d11_02"; // 0x2888 MovS
	func_97(var_4215_object, var_4216_string); // 0x2889 Call
	
Label_10379:
	var_4217_int = 45011; // 0x288b PushI
	var_4218_bool = var_3783_int == var_4217_int; // 0x288c Eq
	if(var_4218_bool == 0) goto Label_10417; // 0x288d JumpB
	var_4219_object = Obj(); var_4220_object = Obj(); // 0x288e PushV
	var_4221_object = GlobalVars[18]; // 0x288f PushGE
	var_4219_object = var_4221_object; // 0x2890 Mov
	var_4222_object = GlobalVars[18]; // 0x2892 PushGE
	var_4220_object = var_4222_object; // 0x2893 Mov
	func_9108(); // 0x2895 Call
	var_4286_bool = 0; var_4287_string = ""; // 0x2897 PushV
	var_4287_string = "quest_d4_01"; // 0x2898 MovS
	func_177(var_4286_bool, var_4287_string); // 0x2899 Call
	var_4288_object = Obj(); var_4289_string = ""; // 0x289b PushV
	var_4289_string = "quest_d5_01"; // 0x289c MovS
	func_108(var_4288_object, var_4289_string); // 0x289d Call
	var_4296_string = "d4q01"; // 0x289f PushS
	GetVariable(var_4296_string, var_3799_int); // 0x28a0 Func
	var_4297_int = 1000; // 0x28a2 PushI
	var_4298_bool = var_3799_int == var_4297_int; // 0x28a3 Eq
	if(var_4298_bool == 0) goto Label_10411; // 0x28a4 JumpB
	var_4299_bool = 0; var_4300_string = ""; var_4301_string = ""; var_4302_string = ""; // 0x28a5 PushV
	var_4300_string = "volonteers_danko"; // 0x28a6 MovS
	var_4301_string = "rescue_locked"; // 0x28a7 MovS
	var_4302_string = ""; // 0x28a8 MovS
	func_165(var_4299_bool, var_4300_string, var_4301_string, var_4302_string); // 0x28a9 Call
	
Label_10411:
	var_4303_bool = 0; var_4304_string = ""; var_4305_string = ""; var_4306_string = ""; // 0x28ab PushV
	var_4304_string = "volonteers_danko"; // 0x28ac MovS
	var_4305_string = "update"; // 0x28ad MovS
	var_4306_string = ""; // 0x28ae MovS
	func_165(var_4303_bool, var_4304_string, var_4305_string, var_4306_string); // 0x28af Call
	
Label_10417:
	var_4307_int = 45024; // 0x28b1 PushI
	var_4308_bool = var_3783_int == var_4307_int; // 0x28b2 Eq
	if(var_4308_bool == 0) goto Label_10423; // 0x28b3 JumpB
	var_4309_int = 0; // 0x28b4 PushV
	func_8090(var_4309_int); // 0x28b5 Call
	
Label_10423:
	var_4316_int = 45025; // 0x28b7 PushI
	var_4317_bool = var_3783_int == var_4316_int; // 0x28b8 Eq
	if(var_4317_bool == 0) goto Label_10429; // 0x28b9 JumpB
	var_4318_int = 0; // 0x28ba PushV
	func_8101(var_4318_int); // 0x28bb Call
	
Label_10429:
	var_4325_int = 45020; // 0x28bd PushI
	var_4326_bool = var_3783_int == var_4325_int; // 0x28be Eq
	if(var_4326_bool == 0) goto Label_10435; // 0x28bf JumpB
	var_4327_int = 0; // 0x28c0 PushV
	func_8046(var_4327_int); // 0x28c1 Call
	
Label_10435:
	var_4334_int = 45021; // 0x28c3 PushI
	var_4335_bool = var_3783_int == var_4334_int; // 0x28c4 Eq
	if(var_4335_bool == 0) goto Label_10441; // 0x28c5 JumpB
	var_4336_int = 0; // 0x28c6 PushV
	func_8057(var_4336_int); // 0x28c7 Call
	
Label_10441:
	var_4343_int = 45008; // 0x28c9 PushI
	var_4344_bool = var_3783_int == var_4343_int; // 0x28ca Eq
	if(var_4344_bool == 0) goto Label_10454; // 0x28cb JumpB
	var_4345_bool = 0; var_4346_object = Obj(); // 0x28cc PushV
	var_4347_object = GlobalVars[18]; // 0x28cd PushGE
	var_4346_object = var_4347_object; // 0x28ce Mov
	func_9792(var_4346_object); // 0x28d0 Call
	if(var_4345_bool == 0) goto Label_10454; // 0x28d2 JumpB
	var_4352_int = 0; // 0x28d3 PushV
	func_8244(var_4352_int); // 0x28d4 Call
	
Label_10454:
	var_4359_int = 45054; // 0x28d6 PushI
	var_4360_bool = var_3783_int == var_4359_int; // 0x28d7 Eq
	if(var_4360_bool == 0) goto Label_10460; // 0x28d8 JumpB
	var_4361_int = 0; // 0x28d9 PushV
	func_8189(var_4361_int); // 0x28da Call
	
Label_10460:
	var_4368_int = 45056; // 0x28dc PushI
	var_4369_bool = var_3783_int == var_4368_int; // 0x28dd Eq
	if(var_4369_bool == 0) goto Label_10481; // 0x28de JumpB
	var_4370_object = Obj(); var_4371_object = Obj(); // 0x28df PushV
	var_4372_object = GlobalVars[18]; // 0x28e0 PushGE
	var_4370_object = var_4372_object; // 0x28e1 Mov
	var_4373_object = GlobalVars[18]; // 0x28e3 PushGE
	var_4371_object = var_4373_object; // 0x28e4 Mov
	func_9778(); // 0x28e6 Call
	var_4376_object = Obj(); var_4377_object = Obj(); // 0x28e8 PushV
	var_4378_object = GlobalVars[18]; // 0x28e9 PushGE
	var_4376_object = var_4378_object; // 0x28ea Mov
	var_4379_object = GlobalVars[18]; // 0x28ec PushGE
	var_4377_object = var_4379_object; // 0x28ed Mov
	func_9785(); // 0x28ef Call
	
Label_10481:
	var_4386_int = 45017; // 0x28f1 PushI
	var_4387_bool = var_3783_int == var_4386_int; // 0x28f2 Eq
	if(var_4387_bool == 0) goto Label_10510; // 0x28f3 JumpB
	var_4388_bool = 0; var_4389_string = ""; // 0x28f4 PushV
	var_4389_string = "quest_d8_01"; // 0x28f5 MovS
	func_177(var_4388_bool, var_4389_string); // 0x28f6 Call
	var_4390_object = Obj(); var_4391_string = ""; // 0x28f8 PushV
	var_4391_string = "quest_d9_01"; // 0x28f9 MovS
	func_97(var_4390_object, var_4391_string); // 0x28fa Call
	var_4392_string = "d8q01"; // 0x28fc PushS
	GetVariable(var_4392_string, var_3800_int); // 0x28fd Func
	var_4393_int = 1000; // 0x28ff PushI
	var_4394_bool = var_3800_int == var_4393_int; // 0x2900 Eq
	if(var_4394_bool == 0) goto Label_10504; // 0x2901 JumpB
	var_4395_bool = 0; var_4396_string = ""; var_4397_string = ""; var_4398_string = ""; // 0x2902 PushV
	var_4396_string = "volonteers_danko"; // 0x2903 MovS
	var_4397_string = "rescue_locked"; // 0x2904 MovS
	var_4398_string = ""; // 0x2905 MovS
	func_165(var_4395_bool, var_4396_string, var_4397_string, var_4398_string); // 0x2906 Call
	
Label_10504:
	var_4399_bool = 0; var_4400_string = ""; var_4401_string = ""; var_4402_string = ""; // 0x2908 PushV
	var_4400_string = "volonteers_danko"; // 0x2909 MovS
	var_4401_string = "update"; // 0x290a MovS
	var_4402_string = ""; // 0x290b MovS
	func_165(var_4399_bool, var_4400_string, var_4401_string, var_4402_string); // 0x290c Call
	
Label_10510:
	var_4403_int = 45019; // 0x290e PushI
	var_4404_bool = var_3783_int == var_4403_int; // 0x290f Eq
	if(var_4404_bool == 0) goto Label_10516; // 0x2910 JumpB
	var_4405_int = 0; // 0x2911 PushV
	func_8035(var_4405_int); // 0x2912 Call
	
Label_10516:
	var_4412_int = 45007; // 0x2914 PushI
	var_4413_bool = var_3783_int == var_4412_int; // 0x2915 Eq
	if(var_4413_bool == 0) goto Label_10528; // 0x2916 JumpB
	var_4414_object = Obj(); var_4415_object = Obj(); // 0x2917 PushV
	var_4416_object = GlobalVars[18]; // 0x2918 PushGE
	var_4414_object = var_4416_object; // 0x2919 Mov
	var_4417_object = GlobalVars[18]; // 0x291b PushGE
	var_4415_object = var_4417_object; // 0x291c Mov
	func_8474(); // 0x291e Call
	
Label_10528:
	var_4420_int = 45006; // 0x2920 PushI
	var_4421_bool = var_3783_int == var_4420_int; // 0x2921 Eq
	if(var_4421_bool == 0) goto Label_10566; // 0x2922 JumpB
	var_4422_object = Obj(); var_4423_object = Obj(); // 0x2923 PushV
	var_4424_object = GlobalVars[18]; // 0x2924 PushGE
	var_4422_object = var_4424_object; // 0x2925 Mov
	var_4425_object = GlobalVars[18]; // 0x2927 PushGE
	var_4423_object = var_4425_object; // 0x2928 Mov
	func_8920(); // 0x292a Call
	var_4485_bool = 0; var_4486_string = ""; // 0x292c PushV
	var_4486_string = "quest_d3_01"; // 0x292d MovS
	func_177(var_4485_bool, var_4486_string); // 0x292e Call
	var_4487_object = Obj(); var_4488_string = ""; // 0x2930 PushV
	var_4488_string = "quest_d4_01"; // 0x2931 MovS
	func_97(var_4487_object, var_4488_string); // 0x2932 Call
	var_4489_string = "d3q01"; // 0x2934 PushS
	GetVariable(var_4489_string, var_3801_int); // 0x2935 Func
	var_4490_int = 1000; // 0x2937 PushI
	var_4491_bool = var_3801_int == var_4490_int; // 0x2938 Eq
	if(var_4491_bool == 0) goto Label_10560; // 0x2939 JumpB
	var_4492_bool = 0; var_4493_string = ""; var_4494_string = ""; var_4495_string = ""; // 0x293a PushV
	var_4493_string = "volonteers_danko"; // 0x293b MovS
	var_4494_string = "rescue_locked"; // 0x293c MovS
	var_4495_string = ""; // 0x293d MovS
	func_165(var_4492_bool, var_4493_string, var_4494_string, var_4495_string); // 0x293e Call
	
Label_10560:
	var_4496_bool = 0; var_4497_string = ""; var_4498_string = ""; var_4499_string = ""; // 0x2940 PushV
	var_4497_string = "volonteers_danko"; // 0x2941 MovS
	var_4498_string = "update"; // 0x2942 MovS
	var_4499_string = ""; // 0x2943 MovS
	func_165(var_4496_bool, var_4497_string, var_4498_string, var_4499_string); // 0x2944 Call
	
Label_10566:
	var_4500_int = 45049; // 0x2946 PushI
	var_4501_bool = var_3783_int == var_4500_int; // 0x2947 Eq
	if(var_4501_bool == 0) goto Label_10580; // 0x2948 JumpB
	var_4502_bool = 0; var_4503_object = Obj(); // 0x2949 PushV
	var_4504_object = GlobalVars[18]; // 0x294a PushGE
	var_4503_object = var_4504_object; // 0x294b Mov
	func_9965(var_4503_object); // 0x294d Call
	var_4509_bool = var_4502_bool == 0; // 0x294f Not
	if(var_4509_bool == 0) goto Label_10580; // 0x2950 JumpB
	var_4510_int = 0; // 0x2951 PushV
	func_8420(var_4510_int); // 0x2952 Call
	
Label_10580:
	var_4517_int = 45050; // 0x2954 PushI
	var_4518_bool = var_3783_int == var_4517_int; // 0x2955 Eq
	if(var_4518_bool == 0) goto Label_10586; // 0x2956 JumpB
	var_4519_int = 0; // 0x2957 PushV
	func_8431(var_4519_int); // 0x2958 Call
	
Label_10586:
	var_4526_int = 45051; // 0x295a PushI
	var_4527_bool = var_3783_int == var_4526_int; // 0x295b Eq
	if(var_4527_bool == 0) goto Label_10600; // 0x295c JumpB
	var_4528_bool = 0; var_4529_object = Obj(); // 0x295d PushV
	var_4530_object = GlobalVars[18]; // 0x295e PushGE
	var_4529_object = var_4530_object; // 0x295f Mov
	func_9977(var_4529_object); // 0x2961 Call
	var_4535_bool = var_4528_bool == 0; // 0x2963 Not
	if(var_4535_bool == 0) goto Label_10600; // 0x2964 JumpB
	var_4536_int = 0; // 0x2965 PushV
	func_8156(var_4536_int); // 0x2966 Call
	
Label_10600:
	var_4543_int = 45052; // 0x2968 PushI
	var_4544_bool = var_3783_int == var_4543_int; // 0x2969 Eq
	if(var_4544_bool == 0) goto Label_10624; // 0x296a JumpB
	var_4545_object = Obj(); var_4546_object = Obj(); // 0x296b PushV
	var_4547_object = GlobalVars[18]; // 0x296c PushGE
	var_4545_object = var_4547_object; // 0x296d Mov
	var_4548_object = GlobalVars[18]; // 0x296f PushGE
	var_4546_object = var_4548_object; // 0x2970 Mov
	func_9702(); // 0x2972 Call
	var_4551_object = Obj(); var_4552_object = Obj(); // 0x2974 PushV
	var_4553_object = GlobalVars[18]; // 0x2975 PushGE
	var_4551_object = var_4553_object; // 0x2976 Mov
	var_4554_object = GlobalVars[18]; // 0x2978 PushGE
	var_4552_object = var_4554_object; // 0x2979 Mov
	func_9764(); // 0x297b Call
	var_4558_int = 0; // 0x297d PushV
	func_8200(var_4558_int); // 0x297e Call
	
Label_10624:
	var_4565_int = 45053; // 0x2980 PushI
	var_4566_bool = var_3783_int == var_4565_int; // 0x2981 Eq
	if(var_4566_bool == 0) goto Label_10648; // 0x2982 JumpB
	var_4567_object = Obj(); var_4568_object = Obj(); // 0x2983 PushV
	var_4569_object = GlobalVars[18]; // 0x2984 PushGE
	var_4567_object = var_4569_object; // 0x2985 Mov
	var_4570_object = GlobalVars[18]; // 0x2987 PushGE
	var_4568_object = var_4570_object; // 0x2988 Mov
	func_8474(); // 0x298a Call
	var_4571_object = Obj(); var_4572_object = Obj(); // 0x298c PushV
	var_4573_object = GlobalVars[18]; // 0x298d PushGE
	var_4571_object = var_4573_object; // 0x298e Mov
	var_4574_object = GlobalVars[18]; // 0x2990 PushGE
	var_4572_object = var_4574_object; // 0x2991 Mov
	func_9771(); // 0x2993 Call
	var_4578_int = 0; // 0x2995 PushV
	func_8211(var_4578_int); // 0x2996 Call
	
Label_10648:
	var_4585_int = 45038; // 0x2998 PushI
	var_4586_bool = var_3783_int == var_4585_int; // 0x2999 Eq
	if(var_4586_bool == 0) goto Label_10662; // 0x299a JumpB
	var_4587_bool = 0; var_4588_object = Obj(); // 0x299b PushV
	var_4589_object = GlobalVars[18]; // 0x299c PushGE
	var_4588_object = var_4589_object; // 0x299d Mov
	func_9864(var_4588_object); // 0x299f Call
	var_4590_bool = var_4587_bool == 0; // 0x29a1 Not
	if(var_4590_bool == 0) goto Label_10662; // 0x29a2 JumpB
	var_4591_int = 0; // 0x29a3 PushV
	func_8277(var_4591_int); // 0x29a4 Call
	
Label_10662:
	var_4598_int = 45039; // 0x29a6 PushI
	var_4599_bool = var_3783_int == var_4598_int; // 0x29a7 Eq
	if(var_4599_bool == 0) goto Label_10685; // 0x29a8 JumpB
	var_4600_bool = 0; var_4601_object = Obj(); // 0x29a9 PushV
	var_4602_object = GlobalVars[18]; // 0x29aa PushGE
	var_4601_object = var_4602_object; // 0x29ab Mov
	func_9869(var_4601_object); // 0x29ad Call
	var_4607_bool = var_4600_bool == 0; // 0x29af Not
	if(var_4607_bool == 0) goto Label_10685; // 0x29b0 JumpB
	var_4608_object = Obj(); var_4609_object = Obj(); // 0x29b1 PushV
	var_4610_object = GlobalVars[18]; // 0x29b2 PushGE
	var_4608_object = var_4610_object; // 0x29b3 Mov
	var_4611_object = GlobalVars[18]; // 0x29b5 PushGE
	var_4609_object = var_4611_object; // 0x29b6 Mov
	func_8453(); // 0x29b8 Call
	var_4614_int = 0; // 0x29ba PushV
	func_8321(var_4614_int); // 0x29bb Call
	
Label_10685:
	var_4621_int = 45040; // 0x29bd PushI
	var_4622_bool = var_3783_int == var_4621_int; // 0x29be Eq
	if(var_4622_bool == 0) goto Label_10699; // 0x29bf JumpB
	var_4623_bool = 0; var_4624_object = Obj(); // 0x29c0 PushV
	var_4625_object = GlobalVars[18]; // 0x29c1 PushGE
	var_4624_object = var_4625_object; // 0x29c2 Mov
	func_9881(var_4624_object); // 0x29c4 Call
	var_4630_bool = var_4623_bool == 0; // 0x29c6 Not
	if(var_4630_bool == 0) goto Label_10699; // 0x29c7 JumpB
	var_4631_int = 0; // 0x29c8 PushV
	func_8310(var_4631_int); // 0x29c9 Call
	
Label_10699:
	var_4638_int = 45041; // 0x29cb PushI
	var_4639_bool = var_3783_int == var_4638_int; // 0x29cc Eq
	if(var_4639_bool == 0) goto Label_10713; // 0x29cd JumpB
	var_4640_bool = 0; var_4641_object = Obj(); // 0x29ce PushV
	var_4642_object = GlobalVars[18]; // 0x29cf PushGE
	var_4641_object = var_4642_object; // 0x29d0 Mov
	func_9893(var_4641_object); // 0x29d2 Call
	var_4647_bool = var_4640_bool == 0; // 0x29d4 Not
	if(var_4647_bool == 0) goto Label_10713; // 0x29d5 JumpB
	var_4648_int = 0; // 0x29d6 PushV
	func_8332(var_4648_int); // 0x29d7 Call
	
Label_10713:
	var_4655_int = 45010; // 0x29d9 PushI
	var_4656_bool = var_3783_int == var_4655_int; // 0x29da Eq
	if(var_4656_bool == 0) goto Label_10727; // 0x29db JumpB
	var_4657_bool = 0; var_4658_object = Obj(); // 0x29dc PushV
	var_4659_object = GlobalVars[18]; // 0x29dd PushGE
	var_4658_object = var_4659_object; // 0x29de Mov
	func_9804(var_4658_object); // 0x29e0 Call
	var_4664_bool = var_4657_bool == 0; // 0x29e2 Not
	if(var_4664_bool == 0) goto Label_10727; // 0x29e3 JumpB
	var_4665_int = 0; // 0x29e4 PushV
	func_8266(var_4665_int); // 0x29e5 Call
	
Label_10727:
	var_4672_int = 45033; // 0x29e7 PushI
	var_4673_bool = var_3783_int == var_4672_int; // 0x29e8 Eq
	if(var_4673_bool == 0) goto Label_10741; // 0x29e9 JumpB
	var_4674_bool = 0; var_4675_object = Obj(); // 0x29ea PushV
	var_4676_object = GlobalVars[18]; // 0x29eb PushGE
	var_4675_object = var_4676_object; // 0x29ec Mov
	func_9828(var_4675_object); // 0x29ee Call
	var_4681_bool = var_4674_bool == 0; // 0x29f0 Not
	if(var_4681_bool == 0) goto Label_10741; // 0x29f1 JumpB
	var_4682_int = 0; // 0x29f2 PushV
	func_8288(var_4682_int); // 0x29f3 Call
	
Label_10741:
	var_4689_int = 45034; // 0x29f5 PushI
	var_4690_bool = var_3783_int == var_4689_int; // 0x29f6 Eq
	if(var_4690_bool == 0) goto Label_10764; // 0x29f7 JumpB
	var_4691_bool = 0; var_4692_object = Obj(); // 0x29f8 PushV
	var_4693_object = GlobalVars[18]; // 0x29f9 PushGE
	var_4692_object = var_4693_object; // 0x29fa Mov
	func_9828(var_4692_object); // 0x29fc Call
	var_4694_bool = var_4691_bool == 0; // 0x29fe Not
	if(var_4694_bool == 0) goto Label_10764; // 0x29ff JumpB
	var_4695_object = Obj(); var_4696_object = Obj(); // 0x2a00 PushV
	var_4697_object = GlobalVars[18]; // 0x2a01 PushGE
	var_4695_object = var_4697_object; // 0x2a02 Mov
	var_4698_object = GlobalVars[18]; // 0x2a04 PushGE
	var_4696_object = var_4698_object; // 0x2a05 Mov
	func_8500(); // 0x2a07 Call
	var_4756_int = 0; // 0x2a09 PushV
	func_8299(var_4756_int); // 0x2a0a Call
	
Label_10764:
	var_4763_int = 45035; // 0x2a0c PushI
	var_4764_bool = var_3783_int == var_4763_int; // 0x2a0d Eq
	if(var_4764_bool == 0) goto Label_10787; // 0x2a0e JumpB
	var_4765_bool = 0; var_4766_object = Obj(); // 0x2a0f PushV
	var_4767_object = GlobalVars[18]; // 0x2a10 PushGE
	var_4766_object = var_4767_object; // 0x2a11 Mov
	func_9852(var_4766_object); // 0x2a13 Call
	var_4772_bool = var_4765_bool == 0; // 0x2a15 Not
	if(var_4772_bool == 0) goto Label_10787; // 0x2a16 JumpB
	var_4773_object = Obj(); var_4774_object = Obj(); // 0x2a17 PushV
	var_4775_object = GlobalVars[18]; // 0x2a18 PushGE
	var_4773_object = var_4775_object; // 0x2a19 Mov
	var_4776_object = GlobalVars[18]; // 0x2a1b PushGE
	var_4774_object = var_4776_object; // 0x2a1c Mov
	func_8493(); // 0x2a1e Call
	var_4779_int = 0; // 0x2a20 PushV
	func_8178(var_4779_int); // 0x2a21 Call
	
Label_10787:
	var_4786_int = 45036; // 0x2a23 PushI
	var_4787_bool = var_3783_int == var_4786_int; // 0x2a24 Eq
	if(var_4787_bool == 0) goto Label_10810; // 0x2a25 JumpB
	var_4788_bool = 0; var_4789_object = Obj(); // 0x2a26 PushV
	var_4790_object = GlobalVars[18]; // 0x2a27 PushGE
	var_4789_object = var_4790_object; // 0x2a28 Mov
	func_9840(var_4789_object); // 0x2a2a Call
	var_4795_bool = var_4788_bool == 0; // 0x2a2c Not
	if(var_4795_bool == 0) goto Label_10810; // 0x2a2d JumpB
	var_4796_object = Obj(); var_4797_object = Obj(); // 0x2a2e PushV
	var_4798_object = GlobalVars[18]; // 0x2a2f PushGE
	var_4796_object = var_4798_object; // 0x2a30 Mov
	var_4799_object = GlobalVars[18]; // 0x2a32 PushGE
	var_4797_object = var_4799_object; // 0x2a33 Mov
	func_8509(); // 0x2a35 Call
	var_4802_int = 0; // 0x2a37 PushV
	func_8167(var_4802_int); // 0x2a38 Call
	
Label_10810:
	var_4809_int = 45042; // 0x2a3a PushI
	var_4810_bool = var_3783_int == var_4809_int; // 0x2a3b Eq
	if(var_4810_bool == 0) goto Label_10848; // 0x2a3c JumpB
	var_4811_object = Obj(); var_4812_object = Obj(); // 0x2a3d PushV
	var_4813_object = GlobalVars[18]; // 0x2a3e PushGE
	var_4811_object = var_4813_object; // 0x2a3f Mov
	var_4814_object = GlobalVars[18]; // 0x2a41 PushGE
	var_4812_object = var_4814_object; // 0x2a42 Mov
	func_9754(); // 0x2a44 Call
	var_4819_bool = 0; var_4820_string = ""; // 0x2a46 PushV
	var_4820_string = "quest_d11_01"; // 0x2a47 MovS
	func_177(var_4819_bool, var_4820_string); // 0x2a48 Call
	var_4821_object = Obj(); var_4822_string = ""; // 0x2a4a PushV
	var_4822_string = "quest_d12_01"; // 0x2a4b MovS
	func_97(var_4821_object, var_4822_string); // 0x2a4c Call
	var_4823_string = "d11q01"; // 0x2a4e PushS
	GetVariable(var_4823_string, var_3802_int); // 0x2a4f Func
	var_4824_int = 1000; // 0x2a51 PushI
	var_4825_bool = var_3802_int == var_4824_int; // 0x2a52 Eq
	if(var_4825_bool == 0) goto Label_10842; // 0x2a53 JumpB
	var_4826_bool = 0; var_4827_string = ""; var_4828_string = ""; var_4829_string = ""; // 0x2a54 PushV
	var_4827_string = "volonteers_danko"; // 0x2a55 MovS
	var_4828_string = "rescue_locked"; // 0x2a56 MovS
	var_4829_string = ""; // 0x2a57 MovS
	func_165(var_4826_bool, var_4827_string, var_4828_string, var_4829_string); // 0x2a58 Call
	
Label_10842:
	var_4830_bool = 0; var_4831_string = ""; var_4832_string = ""; var_4833_string = ""; // 0x2a5a PushV
	var_4831_string = "volonteers_danko"; // 0x2a5b MovS
	var_4832_string = "update"; // 0x2a5c MovS
	var_4833_string = ""; // 0x2a5d MovS
	func_165(var_4830_bool, var_4831_string, var_4832_string, var_4833_string); // 0x2a5e Call
	
Label_10848:
	var_4834_int = 45009; // 0x2a60 PushI
	var_4835_bool = var_3783_int == var_4834_int; // 0x2a61 Eq
	if(var_4835_bool == 0) goto Label_10854; // 0x2a62 JumpB
	var_4836_int = 0; // 0x2a63 PushV
	func_8233(var_4836_int); // 0x2a64 Call
	
Label_10854:
	var_4843_int = 45043; // 0x2a66 PushI
	var_4844_bool = var_3783_int == var_4843_int; // 0x2a67 Eq
	if(var_4844_bool == 0) goto Label_10868; // 0x2a68 JumpB
	var_4845_bool = 0; var_4846_object = Obj(); // 0x2a69 PushV
	var_4847_object = GlobalVars[18]; // 0x2a6a PushGE
	var_4846_object = var_4847_object; // 0x2a6b Mov
	func_9905(var_4846_object); // 0x2a6d Call
	var_4852_bool = var_4845_bool == 0; // 0x2a6f Not
	if(var_4852_bool == 0) goto Label_10868; // 0x2a70 JumpB
	var_4853_int = 0; // 0x2a71 PushV
	func_8343(var_4853_int); // 0x2a72 Call
	
Label_10868:
	var_4860_int = 45044; // 0x2a74 PushI
	var_4861_bool = var_3783_int == var_4860_int; // 0x2a75 Eq
	if(var_4861_bool == 0) goto Label_10882; // 0x2a76 JumpB
	var_4862_bool = 0; var_4863_object = Obj(); // 0x2a77 PushV
	var_4864_object = GlobalVars[18]; // 0x2a78 PushGE
	var_4863_object = var_4864_object; // 0x2a79 Mov
	func_9929(var_4863_object); // 0x2a7b Call
	var_4869_bool = var_4862_bool == 0; // 0x2a7d Not
	if(var_4869_bool == 0) goto Label_10882; // 0x2a7e JumpB
	var_4870_int = 0; // 0x2a7f PushV
	func_8387(var_4870_int); // 0x2a80 Call
	
Label_10882:
	var_4877_int = 45045; // 0x2a82 PushI
	var_4878_bool = var_3783_int == var_4877_int; // 0x2a83 Eq
	if(var_4878_bool == 0) goto Label_10896; // 0x2a84 JumpB
	var_4879_bool = 0; var_4880_object = Obj(); // 0x2a85 PushV
	var_4881_object = GlobalVars[18]; // 0x2a86 PushGE
	var_4880_object = var_4881_object; // 0x2a87 Mov
	func_9917(var_4880_object); // 0x2a89 Call
	var_4886_bool = var_4879_bool == 0; // 0x2a8b Not
	if(var_4886_bool == 0) goto Label_10896; // 0x2a8c JumpB
	var_4887_int = 0; // 0x2a8d PushV
	func_8376(var_4887_int); // 0x2a8e Call
	
Label_10896:
	var_4894_int = 45046; // 0x2a90 PushI
	var_4895_bool = var_3783_int == var_4894_int; // 0x2a91 Eq
	if(var_4895_bool == 0) goto Label_10910; // 0x2a92 JumpB
	var_4896_bool = 0; var_4897_object = Obj(); // 0x2a93 PushV
	var_4898_object = GlobalVars[18]; // 0x2a94 PushGE
	var_4897_object = var_4898_object; // 0x2a95 Mov
	func_9941(var_4897_object); // 0x2a97 Call
	var_4903_bool = var_4896_bool == 0; // 0x2a99 Not
	if(var_4903_bool == 0) goto Label_10910; // 0x2a9a JumpB
	var_4904_int = 0; // 0x2a9b PushV
	func_8365(var_4904_int); // 0x2a9c Call
	
Label_10910:
	var_4911_int = 45047; // 0x2a9e PushI
	var_4912_bool = var_3783_int == var_4911_int; // 0x2a9f Eq
	if(var_4912_bool == 0) goto Label_10924; // 0x2aa0 JumpB
	var_4913_bool = 0; var_4914_object = Obj(); // 0x2aa1 PushV
	var_4915_object = GlobalVars[18]; // 0x2aa2 PushGE
	var_4914_object = var_4915_object; // 0x2aa3 Mov
	func_9953(var_4914_object); // 0x2aa5 Call
	var_4920_bool = var_4913_bool == 0; // 0x2aa7 Not
	if(var_4920_bool == 0) goto Label_10924; // 0x2aa8 JumpB
	var_4921_int = 0; // 0x2aa9 PushV
	func_8409(var_4921_int); // 0x2aaa Call
	
Label_10924:
	var_4928_int = 45048; // 0x2aac PushI
	var_4929_bool = var_3783_int == var_4928_int; // 0x2aad Eq
	if(var_4929_bool == 0) goto Label_10930; // 0x2aae JumpB
	var_4930_int = 0; // 0x2aaf PushV
	func_8442(var_4930_int); // 0x2ab0 Call
	
Label_10930:
	var_4937_int = 45018; // 0x2ab2 PushI
	var_4938_bool = var_3783_int == var_4937_int; // 0x2ab3 Eq
	if(var_4938_bool == 0) goto Label_10968; // 0x2ab4 JumpB
	var_4939_object = Obj(); var_4940_object = Obj(); // 0x2ab5 PushV
	var_4941_object = GlobalVars[18]; // 0x2ab6 PushGE
	var_4939_object = var_4941_object; // 0x2ab7 Mov
	var_4942_object = GlobalVars[18]; // 0x2ab9 PushGE
	var_4940_object = var_4942_object; // 0x2aba Mov
	func_9709(); // 0x2abc Call
	var_4952_bool = 0; var_4953_string = ""; // 0x2abe PushV
	var_4953_string = "quest_d9_01"; // 0x2abf MovS
	func_177(var_4952_bool, var_4953_string); // 0x2ac0 Call
	var_4954_object = Obj(); var_4955_string = ""; // 0x2ac2 PushV
	var_4955_string = "quest_d10_01"; // 0x2ac3 MovS
	func_97(var_4954_object, var_4955_string); // 0x2ac4 Call
	var_4956_string = "d9q01"; // 0x2ac6 PushS
	GetVariable(var_4956_string, var_3803_int); // 0x2ac7 Func
	var_4957_int = 1000; // 0x2ac9 PushI
	var_4958_bool = var_3803_int == var_4957_int; // 0x2aca Eq
	if(var_4958_bool == 0) goto Label_10962; // 0x2acb JumpB
	var_4959_bool = 0; var_4960_string = ""; var_4961_string = ""; var_4962_string = ""; // 0x2acc PushV
	var_4960_string = "volonteers_danko"; // 0x2acd MovS
	var_4961_string = "rescue_locked"; // 0x2ace MovS
	var_4962_string = ""; // 0x2acf MovS
	func_165(var_4959_bool, var_4960_string, var_4961_string, var_4962_string); // 0x2ad0 Call
	
Label_10962:
	var_4963_bool = 0; var_4964_string = ""; var_4965_string = ""; var_4966_string = ""; // 0x2ad2 PushV
	var_4964_string = "volonteers_danko"; // 0x2ad3 MovS
	var_4965_string = "update"; // 0x2ad4 MovS
	var_4966_string = ""; // 0x2ad5 MovS
	func_165(var_4963_bool, var_4964_string, var_4965_string, var_4966_string); // 0x2ad6 Call
	
Label_10968:
	var_4967_int = 45005; // 0x2ad8 PushI
	var_4968_bool = var_3783_int == var_4967_int; // 0x2ad9 Eq
	if(var_4968_bool == 0) goto Label_11006; // 0x2ada JumpB
	var_4969_object = Obj(); var_4970_object = Obj(); // 0x2adb PushV
	var_4971_object = GlobalVars[18]; // 0x2adc PushGE
	var_4969_object = var_4971_object; // 0x2add Mov
	var_4972_object = GlobalVars[18]; // 0x2adf PushGE
	var_4970_object = var_4972_object; // 0x2ae0 Mov
	func_8718(); // 0x2ae2 Call
	var_5036_bool = 0; var_5037_string = ""; // 0x2ae4 PushV
	var_5037_string = "quest_d2_01"; // 0x2ae5 MovS
	func_177(var_5036_bool, var_5037_string); // 0x2ae6 Call
	var_5038_object = Obj(); var_5039_string = ""; // 0x2ae8 PushV
	var_5039_string = "quest_d3_01"; // 0x2ae9 MovS
	func_97(var_5038_object, var_5039_string); // 0x2aea Call
	var_5040_string = "d2q01"; // 0x2aec PushS
	GetVariable(var_5040_string, var_3804_int); // 0x2aed Func
	var_5041_int = 1000; // 0x2aef PushI
	var_5042_bool = var_3804_int == var_5041_int; // 0x2af0 Eq
	if(var_5042_bool == 0) goto Label_11000; // 0x2af1 JumpB
	var_5043_bool = 0; var_5044_string = ""; var_5045_string = ""; var_5046_string = ""; // 0x2af2 PushV
	var_5044_string = "volonteers_danko"; // 0x2af3 MovS
	var_5045_string = "rescue_locked"; // 0x2af4 MovS
	var_5046_string = ""; // 0x2af5 MovS
	func_165(var_5043_bool, var_5044_string, var_5045_string, var_5046_string); // 0x2af6 Call
	
Label_11000:
	var_5047_bool = 0; var_5048_string = ""; var_5049_string = ""; var_5050_string = ""; // 0x2af8 PushV
	var_5048_string = "volonteers_danko"; // 0x2af9 MovS
	var_5049_string = "update"; // 0x2afa MovS
	var_5050_string = ""; // 0x2afb MovS
	func_165(var_5047_bool, var_5048_string, var_5049_string, var_5050_string); // 0x2afc Call
	
Label_11006:
	return 20; // 0x2afe Return
}


func_7585(var_1389_int, var_1390_int, var_1391_int)
{
	var_1392_object = Obj(); var_1393_object = Obj(); var_1394_object = Obj(); var_1395_object = Obj(); var_1396_object = Obj(); var_1397_object = Obj(); var_1398_object = Obj(); var_1399_object = Obj(); // 0x1da1 PushV
	var_1400_object = GlobalVars[12]; // 0x1da2 PushGE
	get(var_1396_object, var_1389_int); // 0x1da3 ObjFunc
	var_1401_object = GlobalVars[13]; // 0x1da5 PushGE
	get(var_1397_object, var_1389_int); // 0x1da6 ObjFunc
	var_1402_object = GlobalVars[14]; // 0x1da8 PushGE
	get(var_1398_object, var_1389_int); // 0x1da9 ObjFunc
	var_1403_object = GlobalVars[17]; // 0x1dab PushGE
	get(var_1399_object, var_1389_int); // 0x1dac ObjFunc
	var_1404_int = 0; // 0x1dae PushI
	var_1405_bool = var_1389_int == var_1404_int; // 0x1daf Eq
	if(var_1405_bool == 0) goto Label_7611; // 0x1db0 JumpB
	var_1406_int = 0; var_1407_int = 0; var_1408_object = Obj(); var_1409_object = Obj(); var_1410_object = Obj(); var_1411_object = Obj(); // 0x1db1 PushV
	var_1406_int = var_1390_int; // 0x1db2 Mov
	var_1407_int = var_1391_int; // 0x1db3 Mov
	var_1408_object = var_1396_object; // 0x1db4 Mov
	var_1409_object = var_1397_object; // 0x1db5 Mov
	var_1410_object = var_1398_object; // 0x1db6 Mov
	var_1411_object = var_1399_object; // 0x1db7 Mov
	func_3894(var_1406_int, var_1407_int, var_1408_object, var_1409_object, var_1410_object, var_1411_object); // 0x1db8 Call
	goto Label_7805; // 0x1dba Jump
	
Label_7805:
	return 8; // 0x1e7d Return
	
Label_7611:
	var_1679_int = 1; // 0x1dbb PushI
	var_1680_bool = var_1389_int == var_1679_int; // 0x1dbc Eq
	if(var_1680_bool == 0) goto Label_7624; // 0x1dbd JumpB
	var_1681_int = 0; var_1682_int = 0; var_1683_object = Obj(); var_1684_object = Obj(); var_1685_object = Obj(); var_1686_object = Obj(); // 0x1dbe PushV
	var_1681_int = var_1390_int; // 0x1dbf Mov
	var_1682_int = var_1391_int; // 0x1dc0 Mov
	var_1683_object = var_1396_object; // 0x1dc1 Mov
	var_1684_object = var_1397_object; // 0x1dc2 Mov
	var_1685_object = var_1398_object; // 0x1dc3 Mov
	var_1686_object = var_1399_object; // 0x1dc4 Mov
	func_4046(var_1681_int, var_1682_int, var_1683_object, var_1684_object, var_1685_object, var_1686_object); // 0x1dc5 Call
	goto Label_7805; // 0x1dc7 Jump
	
Label_7624:
	var_1825_int = 2; // 0x1dc8 PushI
	var_1826_bool = var_1389_int == var_1825_int; // 0x1dc9 Eq
	if(var_1826_bool == 0) goto Label_7637; // 0x1dca JumpB
	var_1827_int = 0; var_1828_int = 0; var_1829_object = Obj(); var_1830_object = Obj(); var_1831_object = Obj(); var_1832_object = Obj(); // 0x1dcb PushV
	var_1827_int = var_1390_int; // 0x1dcc Mov
	var_1828_int = var_1391_int; // 0x1dcd Mov
	var_1829_object = var_1396_object; // 0x1dce Mov
	var_1830_object = var_1397_object; // 0x1dcf Mov
	var_1831_object = var_1398_object; // 0x1dd0 Mov
	var_1832_object = var_1399_object; // 0x1dd1 Mov
	func_4237(var_1827_int, var_1828_int, var_1829_object, var_1830_object, var_1831_object, var_1832_object); // 0x1dd2 Call
	goto Label_7805; // 0x1dd4 Jump
	
Label_7637:
	var_2022_int = 3; // 0x1dd5 PushI
	var_2023_bool = var_1389_int == var_2022_int; // 0x1dd6 Eq
	if(var_2023_bool == 0) goto Label_7650; // 0x1dd7 JumpB
	var_2024_int = 0; var_2025_int = 0; var_2026_object = Obj(); var_2027_object = Obj(); var_2028_object = Obj(); var_2029_object = Obj(); // 0x1dd8 PushV
	var_2024_int = var_1390_int; // 0x1dd9 Mov
	var_2025_int = var_1391_int; // 0x1dda Mov
	var_2026_object = var_1396_object; // 0x1ddb Mov
	var_2027_object = var_1397_object; // 0x1ddc Mov
	var_2028_object = var_1398_object; // 0x1ddd Mov
	var_2029_object = var_1399_object; // 0x1dde Mov
	func_4410(var_2024_int, var_2025_int, var_2026_object, var_2027_object, var_2028_object, var_2029_object); // 0x1ddf Call
	goto Label_7805; // 0x1de1 Jump
	
Label_7650:
	var_2049_int = 4; // 0x1de2 PushI
	var_2050_bool = var_1389_int == var_2049_int; // 0x1de3 Eq
	if(var_2050_bool == 0) goto Label_7663; // 0x1de4 JumpB
	var_2051_int = 0; var_2052_int = 0; var_2053_object = Obj(); var_2054_object = Obj(); var_2055_object = Obj(); var_2056_object = Obj(); // 0x1de5 PushV
	var_2051_int = var_1390_int; // 0x1de6 Mov
	var_2052_int = var_1391_int; // 0x1de7 Mov
	var_2053_object = var_1396_object; // 0x1de8 Mov
	var_2054_object = var_1397_object; // 0x1de9 Mov
	var_2055_object = var_1398_object; // 0x1dea Mov
	var_2056_object = var_1399_object; // 0x1deb Mov
	func_4592(var_2051_int, var_2052_int, var_2053_object, var_2054_object, var_2055_object, var_2056_object); // 0x1dec Call
	goto Label_7805; // 0x1dee Jump
	
Label_7663:
	var_2076_int = 5; // 0x1def PushI
	var_2077_bool = var_1389_int == var_2076_int; // 0x1df0 Eq
	if(var_2077_bool == 0) goto Label_7676; // 0x1df1 JumpB
	var_2078_int = 0; var_2079_int = 0; var_2080_object = Obj(); var_2081_object = Obj(); var_2082_object = Obj(); var_2083_object = Obj(); // 0x1df2 PushV
	var_2078_int = var_1390_int; // 0x1df3 Mov
	var_2079_int = var_1391_int; // 0x1df4 Mov
	var_2080_object = var_1396_object; // 0x1df5 Mov
	var_2081_object = var_1397_object; // 0x1df6 Mov
	var_2082_object = var_1398_object; // 0x1df7 Mov
	var_2083_object = var_1399_object; // 0x1df8 Mov
	func_4792(var_2078_int, var_2079_int, var_2080_object, var_2081_object, var_2082_object, var_2083_object); // 0x1df9 Call
	goto Label_7805; // 0x1dfb Jump
	
Label_7676:
	var_2103_int = 6; // 0x1dfc PushI
	var_2104_bool = var_1389_int == var_2103_int; // 0x1dfd Eq
	if(var_2104_bool == 0) goto Label_7689; // 0x1dfe JumpB
	var_2105_int = 0; var_2106_int = 0; var_2107_object = Obj(); var_2108_object = Obj(); var_2109_object = Obj(); var_2110_object = Obj(); // 0x1dff PushV
	var_2105_int = var_1390_int; // 0x1e00 Mov
	var_2106_int = var_1391_int; // 0x1e01 Mov
	var_2107_object = var_1396_object; // 0x1e02 Mov
	var_2108_object = var_1397_object; // 0x1e03 Mov
	var_2109_object = var_1398_object; // 0x1e04 Mov
	var_2110_object = var_1399_object; // 0x1e05 Mov
	func_4908(var_2105_int, var_2106_int, var_2107_object, var_2108_object, var_2109_object, var_2110_object); // 0x1e06 Call
	goto Label_7805; // 0x1e08 Jump
	
Label_7689:
	var_2127_int = 7; // 0x1e09 PushI
	var_2128_bool = var_1389_int == var_2127_int; // 0x1e0a Eq
	if(var_2128_bool == 0) goto Label_7702; // 0x1e0b JumpB
	var_2129_int = 0; var_2130_int = 0; var_2131_object = Obj(); var_2132_object = Obj(); var_2133_object = Obj(); var_2134_object = Obj(); // 0x1e0c PushV
	var_2129_int = var_1390_int; // 0x1e0d Mov
	var_2130_int = var_1391_int; // 0x1e0e Mov
	var_2131_object = var_1396_object; // 0x1e0f Mov
	var_2132_object = var_1397_object; // 0x1e10 Mov
	var_2133_object = var_1398_object; // 0x1e11 Mov
	var_2134_object = var_1399_object; // 0x1e12 Mov
	func_5060(var_2129_int, var_2130_int, var_2131_object, var_2132_object, var_2133_object, var_2134_object); // 0x1e13 Call
	goto Label_7805; // 0x1e15 Jump
	
Label_7702:
	var_2308_int = 8; // 0x1e16 PushI
	var_2309_bool = var_1389_int == var_2308_int; // 0x1e17 Eq
	if(var_2309_bool == 0) goto Label_7715; // 0x1e18 JumpB
	var_2310_int = 0; var_2311_int = 0; var_2312_object = Obj(); var_2313_object = Obj(); var_2314_object = Obj(); var_2315_object = Obj(); // 0x1e19 PushV
	var_2310_int = var_1390_int; // 0x1e1a Mov
	var_2311_int = var_1391_int; // 0x1e1b Mov
	var_2312_object = var_1396_object; // 0x1e1c Mov
	var_2313_object = var_1397_object; // 0x1e1d Mov
	var_2314_object = var_1398_object; // 0x1e1e Mov
	var_2315_object = var_1399_object; // 0x1e1f Mov
	func_5215(var_2310_int, var_2311_int, var_2312_object, var_2313_object, var_2314_object, var_2315_object); // 0x1e20 Call
	goto Label_7805; // 0x1e22 Jump
	
Label_7715:
	var_2335_int = 9; // 0x1e23 PushI
	var_2336_bool = var_1389_int == var_2335_int; // 0x1e24 Eq
	if(var_2336_bool == 0) goto Label_7728; // 0x1e25 JumpB
	var_2337_int = 0; var_2338_int = 0; var_2339_object = Obj(); var_2340_object = Obj(); var_2341_object = Obj(); var_2342_object = Obj(); // 0x1e26 PushV
	var_2337_int = var_1390_int; // 0x1e27 Mov
	var_2338_int = var_1391_int; // 0x1e28 Mov
	var_2339_object = var_1396_object; // 0x1e29 Mov
	var_2340_object = var_1397_object; // 0x1e2a Mov
	var_2341_object = var_1398_object; // 0x1e2b Mov
	var_2342_object = var_1399_object; // 0x1e2c Mov
	func_5388(var_2337_int, var_2338_int, var_2339_object, var_2340_object, var_2341_object, var_2342_object); // 0x1e2d Call
	goto Label_7805; // 0x1e2f Jump
	
Label_7728:
	var_2362_int = 10; // 0x1e30 PushI
	var_2363_bool = var_1389_int == var_2362_int; // 0x1e31 Eq
	if(var_2363_bool == 0) goto Label_7741; // 0x1e32 JumpB
	var_2364_int = 0; var_2365_int = 0; var_2366_object = Obj(); var_2367_object = Obj(); var_2368_object = Obj(); var_2369_object = Obj(); // 0x1e33 PushV
	var_2364_int = var_1390_int; // 0x1e34 Mov
	var_2365_int = var_1391_int; // 0x1e35 Mov
	var_2366_object = var_1396_object; // 0x1e36 Mov
	var_2367_object = var_1397_object; // 0x1e37 Mov
	var_2368_object = var_1398_object; // 0x1e38 Mov
	var_2369_object = var_1399_object; // 0x1e39 Mov
	func_5561(var_2364_int, var_2365_int, var_2366_object, var_2367_object, var_2368_object, var_2369_object); // 0x1e3a Call
	goto Label_7805; // 0x1e3c Jump
	
Label_7741:
	var_2389_int = 11; // 0x1e3d PushI
	var_2390_bool = var_1389_int == var_2389_int; // 0x1e3e Eq
	if(var_2390_bool == 0) goto Label_7754; // 0x1e3f JumpB
	var_2391_int = 0; var_2392_int = 0; var_2393_object = Obj(); var_2394_object = Obj(); var_2395_object = Obj(); var_2396_object = Obj(); // 0x1e40 PushV
	var_2391_int = var_1390_int; // 0x1e41 Mov
	var_2392_int = var_1391_int; // 0x1e42 Mov
	var_2393_object = var_1396_object; // 0x1e43 Mov
	var_2394_object = var_1397_object; // 0x1e44 Mov
	var_2395_object = var_1398_object; // 0x1e45 Mov
	var_2396_object = var_1399_object; // 0x1e46 Mov
	func_5737(var_2391_int, var_2392_int, var_2393_object, var_2394_object, var_2395_object, var_2396_object); // 0x1e47 Call
	goto Label_7805; // 0x1e49 Jump
	
Label_7754:
	var_2416_int = 12; // 0x1e4a PushI
	var_2417_bool = var_1389_int == var_2416_int; // 0x1e4b Eq
	if(var_2417_bool == 0) goto Label_7767; // 0x1e4c JumpB
	var_2418_int = 0; var_2419_int = 0; var_2420_object = Obj(); var_2421_object = Obj(); var_2422_object = Obj(); var_2423_object = Obj(); // 0x1e4d PushV
	var_2418_int = var_1390_int; // 0x1e4e Mov
	var_2419_int = var_1391_int; // 0x1e4f Mov
	var_2420_object = var_1396_object; // 0x1e50 Mov
	var_2421_object = var_1397_object; // 0x1e51 Mov
	var_2422_object = var_1398_object; // 0x1e52 Mov
	var_2423_object = var_1399_object; // 0x1e53 Mov
	func_5895(var_2418_int, var_2419_int, var_2420_object, var_2421_object, var_2422_object, var_2423_object); // 0x1e54 Call
	goto Label_7805; // 0x1e56 Jump
	
Label_7767:
	var_2443_int = 13; // 0x1e57 PushI
	var_2444_bool = var_1389_int == var_2443_int; // 0x1e58 Eq
	if(var_2444_bool == 0) goto Label_7780; // 0x1e59 JumpB
	var_2445_int = 0; var_2446_int = 0; var_2447_object = Obj(); var_2448_object = Obj(); var_2449_object = Obj(); var_2450_object = Obj(); // 0x1e5a PushV
	var_2445_int = var_1390_int; // 0x1e5b Mov
	var_2446_int = var_1391_int; // 0x1e5c Mov
	var_2447_object = var_1396_object; // 0x1e5d Mov
	var_2448_object = var_1397_object; // 0x1e5e Mov
	var_2449_object = var_1398_object; // 0x1e5f Mov
	var_2450_object = var_1399_object; // 0x1e60 Mov
	func_6062(var_2445_int, var_2446_int, var_2447_object, var_2448_object, var_2449_object, var_2450_object); // 0x1e61 Call
	goto Label_7805; // 0x1e63 Jump
	
Label_7780:
	var_2470_int = 14; // 0x1e64 PushI
	var_2471_bool = var_1389_int == var_2470_int; // 0x1e65 Eq
	if(var_2471_bool == 0) goto Label_7793; // 0x1e66 JumpB
	var_2472_int = 0; var_2473_int = 0; var_2474_object = Obj(); var_2475_object = Obj(); var_2476_object = Obj(); var_2477_object = Obj(); // 0x1e67 PushV
	var_2472_int = var_1390_int; // 0x1e68 Mov
	var_2473_int = var_1391_int; // 0x1e69 Mov
	var_2474_object = var_1396_object; // 0x1e6a Mov
	var_2475_object = var_1397_object; // 0x1e6b Mov
	var_2476_object = var_1398_object; // 0x1e6c Mov
	var_2477_object = var_1399_object; // 0x1e6d Mov
	func_6226(var_2472_int, var_2473_int, var_2474_object, var_2475_object, var_2476_object, var_2477_object); // 0x1e6e Call
	goto Label_7805; // 0x1e70 Jump
	
Label_7793:
	var_2647_int = 15; // 0x1e71 PushI
	var_2648_bool = var_1389_int == var_2647_int; // 0x1e72 Eq
	if(var_2648_bool == 0) goto Label_7805; // 0x1e73 JumpB
	var_2649_int = 0; var_2650_int = 0; var_2651_object = Obj(); var_2652_object = Obj(); var_2653_object = Obj(); var_2654_object = Obj(); // 0x1e74 PushV
	var_2649_int = var_1390_int; // 0x1e75 Mov
	var_2650_int = var_1391_int; // 0x1e76 Mov
	var_2651_object = var_1396_object; // 0x1e77 Mov
	var_2652_object = var_1397_object; // 0x1e78 Mov
	var_2653_object = var_1398_object; // 0x1e79 Mov
	var_2654_object = var_1399_object; // 0x1e7a Mov
	func_6369(var_2649_int, var_2650_int, var_2651_object, var_2652_object, var_2653_object, var_2654_object); // 0x1e7b Call
}


func_2978(var_3584_int, var_3585_int, var_3586_int)
{
	var_3587_int = 0; var_3588_int = 0; var_3589_int = 0; var_3590_int = 0; var_3591_int = 0; var_3592_int = 0; var_3593_int = 0; var_3594_int = 0; // 0xba2 PushV
	var_3595_bool = 0; // 0xba3 PushV
	var_3595_bool = 0; // 0xba4 MovB
	var_3596_int = 8; // 0xba5 PushI
	var_3597_bool = var_3586_int > var_3596_int; // 0xba6 GT
	if(var_3597_bool == 0) goto Label_2988; // 0xba7 JumpB
	var_3598_int = 21; // 0xba8 PushI
	var_3599_bool = var_3586_int < var_3598_int; // 0xba9 LT
	if(var_3599_bool == 0) goto Label_2988; // 0xbaa JumpB
	var_3595_bool = 1; // 0xbab MovB
	
Label_2988:
	if(var_3595_bool == 0) goto Label_3067; // 0xbac JumpB
	var_3600_int = 0; var_3601_string = ""; var_3602_string = ""; var_3603_int = 0; // 0xbad PushV
	var_3600_int = var_3584_int; // 0xbae Mov
	var_3601_string = "pers_woman"; // 0xbaf MovS
	var_3602_string = "woman.xml"; // 0xbb0 MovS
	var_3603_int = 2; // 0xbb1 MovI
	func_438(var_3600_int, var_3601_string, var_3602_string, var_3603_int); // 0xbb2 Call
	var_3604_int = 0; var_3605_string = ""; var_3606_string = ""; var_3607_int = 0; // 0xbb4 PushV
	var_3604_int = var_3584_int; // 0xbb5 Mov
	var_3605_string = "pers_unosha"; // 0xbb6 MovS
	var_3606_string = "unosha.xml"; // 0xbb7 MovS
	var_3607_int = 1; // 0xbb8 MovI
	func_438(var_3604_int, var_3605_string, var_3606_string, var_3607_int); // 0xbb9 Call
	var_3608_int = 0; var_3609_string = ""; var_3610_string = ""; var_3611_int = 0; // 0xbbb PushV
	var_3608_int = var_3584_int; // 0xbbc Mov
	var_3609_string = "pers_unosha"; // 0xbbd MovS
	var_3610_string = "unosha2.xml"; // 0xbbe MovS
	var_3611_int = 1; // 0xbbf MovI
	func_438(var_3608_int, var_3609_string, var_3610_string, var_3611_int); // 0xbc0 Call
	var_3612_int = 0; var_3613_string = ""; var_3614_string = ""; var_3615_int = 0; // 0xbc2 PushV
	var_3612_int = var_3584_int; // 0xbc3 Mov
	var_3613_string = "pers_boy"; // 0xbc4 MovS
	var_3614_string = "boy.xml"; // 0xbc5 MovS
	var_3615_int = 2; // 0xbc6 MovI
	func_438(var_3612_int, var_3613_string, var_3614_string, var_3615_int); // 0xbc7 Call
	var_3616_int = 1; // 0xbc9 PushI
	var_3617_int = var_3585_int + var_3616_int; // 0xbca Add
	var_3618_int = 2; // 0xbcb PushI
	var_3619_bool = var_3617_int >= var_3618_int; // 0xbcc GE
	if(var_3619_bool == 0) goto Label_3029; // 0xbcd JumpB
	var_3620_int = 0; var_3621_string = ""; var_3622_string = ""; var_3623_int = 0; // 0xbce PushV
	var_3620_int = var_3584_int; // 0xbcf Mov
	var_3621_string = "pers_patrool"; // 0xbd0 MovS
	var_3622_string = "patrol.xml"; // 0xbd1 MovS
	var_3623_int = 3; // 0xbd2 MovI
	func_438(var_3620_int, var_3621_string, var_3622_string, var_3623_int); // 0xbd3 Call
	
Label_3029:
	var_3624_int = 0; var_3625_string = ""; var_3626_string = ""; var_3627_int = 0; // 0xbd5 PushV
	var_3624_int = var_3584_int; // 0xbd6 Mov
	var_3625_string = "pers_rat"; // 0xbd7 MovS
	var_3626_string = "rat.xml"; // 0xbd8 MovS
	var_3627_int = 2; // 0xbd9 MovI
	func_438(var_3624_int, var_3625_string, var_3626_string, var_3627_int); // 0xbda Call
	var_3628_int = 1; // 0xbdc PushI
	var_3629_float = 0; var_3630_int = 0; // 0xbdd PushV
	var_3630_int = var_3585_int; // 0xbde Mov
	func_932(var_3629_float, var_3630_int); // 0xbdf Call
	var_3591_int = var_3628_int * var_3629_float; // 0xbe1 Mult2
	var_3631_int = var_3591_int; // 0xbe2 Push
	if(var_3631_int == 0) goto Label_3051; // 0xbe3 JumpB
	var_3632_int = 0; var_3633_string = ""; var_3634_string = ""; var_3635_int = 0; // 0xbe4 PushV
	var_3632_int = var_3584_int; // 0xbe5 Mov
	var_3633_string = "pers_grabitel"; // 0xbe6 MovS
	var_3634_string = "grabitel.xml"; // 0xbe7 MovS
	var_3635_int = var_3591_int; // 0xbe8 Mov
	func_438(var_3632_int, var_3633_string, var_3634_string, var_3635_int); // 0xbe9 Call
	
Label_3051:
	var_3636_int = 1; // 0xbeb PushI
	var_3637_float = 0; var_3638_int = 0; // 0xbec PushV
	var_3638_int = var_3585_int; // 0xbed Mov
	func_1022(var_3637_float, var_3638_int); // 0xbee Call
	var_3592_int = var_3636_int * var_3637_float; // 0xbf0 Mult2
	var_3639_int = var_3592_int; // 0xbf1 Push
	if(var_3639_int == 0) goto Label_3066; // 0xbf2 JumpB
	var_3640_int = 0; var_3641_string = ""; var_3642_string = ""; var_3643_int = 0; // 0xbf3 PushV
	var_3640_int = var_3584_int; // 0xbf4 Mov
	var_3641_string = "pers_bomber"; // 0xbf5 MovS
	var_3642_string = "bomber.xml"; // 0xbf6 MovS
	var_3643_int = var_3592_int; // 0xbf7 Mov
	func_438(var_3640_int, var_3641_string, var_3642_string, var_3643_int); // 0xbf8 Call
	
Label_3066:
	goto Label_3144; // 0xbfa Jump
	
Label_3144:
	var_3644_bool = 0; var_3645_int = 0; var_3646_int = 0; // 0xc48 PushV
	var_3645_int = var_3585_int; // 0xc49 Mov
	var_3646_int = var_3586_int; // 0xc4a Mov
	func_1112(var_3644_bool, var_3645_int, var_3646_int); // 0xc4b Call
	if(var_3644_bool == 0) goto Label_3157; // 0xc4d JumpB
	var_3647_int = 0; var_3648_string = ""; var_3649_string = ""; var_3650_int = 0; // 0xc4e PushV
	var_3647_int = var_3584_int; // 0xc4f Mov
	var_3648_string = "pers_soldat"; // 0xc50 MovS
	var_3649_string = "soldier_marauder.xml"; // 0xc51 MovS
	var_3650_int = 2; // 0xc52 MovI
	func_438(var_3647_int, var_3648_string, var_3649_string, var_3650_int); // 0xc53 Call
	
Label_3157:
	return 8; // 0xc55 Return
	
Label_3067:
	var_3651_int = 0; var_3652_string = ""; var_3653_string = ""; var_3654_int = 0; // 0xbfb PushV
	var_3651_int = var_3584_int; // 0xbfc Mov
	var_3652_string = "pers_woman"; // 0xbfd MovS
	var_3653_string = "woman.xml"; // 0xbfe MovS
	var_3654_int = 1; // 0xbff MovI
	func_438(var_3651_int, var_3652_string, var_3653_string, var_3654_int); // 0xc00 Call
	var_3655_int = 0; var_3656_string = ""; var_3657_string = ""; var_3658_int = 0; // 0xc02 PushV
	var_3655_int = var_3584_int; // 0xc03 Mov
	var_3656_string = "pers_unosha"; // 0xc04 MovS
	var_3657_string = "unosha.xml"; // 0xc05 MovS
	var_3658_int = 1; // 0xc06 MovI
	func_438(var_3655_int, var_3656_string, var_3657_string, var_3658_int); // 0xc07 Call
	var_3659_int = 0; var_3660_string = ""; var_3661_string = ""; var_3662_int = 0; // 0xc09 PushV
	var_3659_int = var_3584_int; // 0xc0a Mov
	var_3660_string = "pers_unosha"; // 0xc0b MovS
	var_3661_string = "unosha2.xml"; // 0xc0c MovS
	var_3662_int = 1; // 0xc0d MovI
	func_438(var_3659_int, var_3660_string, var_3661_string, var_3662_int); // 0xc0e Call
	var_3663_int = 0; var_3664_string = ""; var_3665_string = ""; var_3666_int = 0; // 0xc10 PushV
	var_3663_int = var_3584_int; // 0xc11 Mov
	var_3664_string = "pers_boy"; // 0xc12 MovS
	var_3665_string = "boy.xml"; // 0xc13 MovS
	var_3666_int = 1; // 0xc14 MovI
	func_438(var_3663_int, var_3664_string, var_3665_string, var_3666_int); // 0xc15 Call
	var_3667_int = 1; // 0xc17 PushI
	var_3668_int = var_3585_int + var_3667_int; // 0xc18 Add
	var_3669_int = 2; // 0xc19 PushI
	var_3670_bool = var_3668_int >= var_3669_int; // 0xc1a GE
	if(var_3670_bool == 0) goto Label_3107; // 0xc1b JumpB
	var_3671_int = 0; var_3672_string = ""; var_3673_string = ""; var_3674_int = 0; // 0xc1c PushV
	var_3671_int = var_3584_int; // 0xc1d Mov
	var_3672_string = "pers_patrool"; // 0xc1e MovS
	var_3673_string = "patrol.xml"; // 0xc1f MovS
	var_3674_int = 3; // 0xc20 MovI
	func_438(var_3671_int, var_3672_string, var_3673_string, var_3674_int); // 0xc21 Call
	
Label_3107:
	var_3675_int = 0; var_3676_string = ""; var_3677_string = ""; var_3678_int = 0; // 0xc23 PushV
	var_3675_int = var_3584_int; // 0xc24 Mov
	var_3676_string = "pers_rat"; // 0xc25 MovS
	var_3677_string = "rat.xml"; // 0xc26 MovS
	var_3678_int = 2; // 0xc27 MovI
	func_438(var_3675_int, var_3676_string, var_3677_string, var_3678_int); // 0xc28 Call
	var_3679_int = 2; // 0xc2a PushI
	var_3680_float = 0; var_3681_int = 0; // 0xc2b PushV
	var_3681_int = var_3585_int; // 0xc2c Mov
	func_932(var_3680_float, var_3681_int); // 0xc2d Call
	var_3593_int = var_3679_int * var_3680_float; // 0xc2f Mult2
	var_3682_int = var_3593_int; // 0xc30 Push
	if(var_3682_int == 0) goto Label_3129; // 0xc31 JumpB
	var_3683_int = 0; var_3684_string = ""; var_3685_string = ""; var_3686_int = 0; // 0xc32 PushV
	var_3683_int = var_3584_int; // 0xc33 Mov
	var_3684_string = "pers_grabitel"; // 0xc34 MovS
	var_3685_string = "grabitel.xml"; // 0xc35 MovS
	var_3686_int = var_3593_int; // 0xc36 Mov
	func_438(var_3683_int, var_3684_string, var_3685_string, var_3686_int); // 0xc37 Call
	
Label_3129:
	var_3687_int = 1; // 0xc39 PushI
	var_3688_float = 0; var_3689_int = 0; // 0xc3a PushV
	var_3689_int = var_3585_int; // 0xc3b Mov
	func_1022(var_3688_float, var_3689_int); // 0xc3c Call
	var_3594_int = var_3687_int * var_3688_float; // 0xc3e Mult2
	var_3690_int = var_3594_int; // 0xc3f Push
	if(var_3690_int == 0) goto Label_3144; // 0xc40 JumpB
	var_3691_int = 0; var_3692_string = ""; var_3693_string = ""; var_3694_int = 0; // 0xc41 PushV
	var_3691_int = var_3584_int; // 0xc42 Mov
	var_3692_string = "pers_bomber"; // 0xc43 MovS
	var_3693_string = "bomber.xml"; // 0xc44 MovS
	var_3694_int = var_3594_int; // 0xc45 Mov
	func_438(var_3691_int, var_3692_string, var_3693_string, var_3694_int); // 0xc46 Call
}


func_6562(var_3792_object, var_3793_object, var_3794_int)
{
	var_3795_object = Obj(); var_3796_object = Obj(); var_3797_string = ""; var_3798_string = ""; var_3799_string = ""; // 0x19a3 PushV
	var_3796_object = var_3793_object; // 0x19a4 Mov
	var_3800_string = "sklad"; // 0x19a5 PushS
	var_3797_string = var_3800_string + var_3794_int; // 0x19a6 Add2
	var_3798_string = "pers_patrool"; // 0x19a7 MovS
	var_3801_string = "key_guard_sklad"; // 0x19a8 PushS
	var_3802_int = var_3801_string + var_3794_int; // 0x19a9 Add
	var_3803_string = ".xml"; // 0x19aa PushS
	var_3799_string = var_3802_int + var_3803_string; // 0x19ab Add2
	func_6545(var_3796_object, var_3797_string, var_3798_string, var_3799_string); // 0x19ac Call
	var_3792_object = var_3795_object; // 0x19ad Mov
	return 0; // 0x19af Return
}


func_932(var_2792_float, var_2793_int)
{
	var_2794_int = 1; // 0x3a5 PushI
	var_2795_int = var_2793_int + var_2794_int; // 0x3a6 Add
	var_2796_int = 1; // 0x3a7 PushI
	var_2797_bool = var_2795_int == var_2796_int; // 0x3a8 Eq
	if(var_2797_bool == 0) goto Label_941; // 0x3a9 JumpB
	var_2792_float = 0; // 0x3aa MovI
	return 0; // 0x3ab Return
	
Label_941:
	var_2798_int = 1; // 0x3ad PushI
	var_2799_int = var_2793_int + var_2798_int; // 0x3ae Add
	var_2800_int = 2; // 0x3af PushI
	var_2801_bool = var_2799_int == var_2800_int; // 0x3b0 Eq
	if(var_2801_bool == 0) goto Label_949; // 0x3b1 JumpB
	var_2792_float = 0; // 0x3b2 MovI
	return 0; // 0x3b3 Return
	
Label_949:
	var_2802_int = 1; // 0x3b5 PushI
	var_2803_int = var_2793_int + var_2802_int; // 0x3b6 Add
	var_2804_int = 3; // 0x3b7 PushI
	var_2805_bool = var_2803_int == var_2804_int; // 0x3b8 Eq
	if(var_2805_bool == 0) goto Label_957; // 0x3b9 JumpB
	var_2792_float = 1; // 0x3ba MovI
	return 0; // 0x3bb Return
	
Label_957:
	var_2806_int = 1; // 0x3bd PushI
	var_2807_int = var_2793_int + var_2806_int; // 0x3be Add
	var_2808_int = 4; // 0x3bf PushI
	var_2809_bool = var_2807_int == var_2808_int; // 0x3c0 Eq
	if(var_2809_bool == 0) goto Label_965; // 0x3c1 JumpB
	var_2792_float = 1; // 0x3c2 MovI
	return 0; // 0x3c3 Return
	
Label_965:
	var_2810_int = 1; // 0x3c5 PushI
	var_2811_int = var_2793_int + var_2810_int; // 0x3c6 Add
	var_2812_int = 5; // 0x3c7 PushI
	var_2813_bool = var_2811_int == var_2812_int; // 0x3c8 Eq
	if(var_2813_bool == 0) goto Label_973; // 0x3c9 JumpB
	var_2792_float = 1; // 0x3ca MovI
	return 0; // 0x3cb Return
	
Label_973:
	var_2814_int = 1; // 0x3cd PushI
	var_2815_int = var_2793_int + var_2814_int; // 0x3ce Add
	var_2816_int = 6; // 0x3cf PushI
	var_2817_bool = var_2815_int == var_2816_int; // 0x3d0 Eq
	if(var_2817_bool == 0) goto Label_981; // 0x3d1 JumpB
	var_2792_float = 2; // 0x3d2 MovI
	return 0; // 0x3d3 Return
	
Label_981:
	var_2818_int = 1; // 0x3d5 PushI
	var_2819_int = var_2793_int + var_2818_int; // 0x3d6 Add
	var_2820_int = 7; // 0x3d7 PushI
	var_2821_bool = var_2819_int == var_2820_int; // 0x3d8 Eq
	if(var_2821_bool == 0) goto Label_989; // 0x3d9 JumpB
	var_2792_float = 1; // 0x3da MovI
	return 0; // 0x3db Return
	
Label_989:
	var_2822_int = 1; // 0x3dd PushI
	var_2823_int = var_2793_int + var_2822_int; // 0x3de Add
	var_2824_int = 8; // 0x3df PushI
	var_2825_bool = var_2823_int == var_2824_int; // 0x3e0 Eq
	if(var_2825_bool == 0) goto Label_997; // 0x3e1 JumpB
	var_2792_float = 1; // 0x3e2 MovI
	return 0; // 0x3e3 Return
	
Label_997:
	var_2826_int = 1; // 0x3e5 PushI
	var_2827_int = var_2793_int + var_2826_int; // 0x3e6 Add
	var_2828_int = 9; // 0x3e7 PushI
	var_2829_bool = var_2827_int == var_2828_int; // 0x3e8 Eq
	if(var_2829_bool == 0) goto Label_1005; // 0x3e9 JumpB
	var_2792_float = 1; // 0x3ea MovI
	return 0; // 0x3eb Return
	
Label_1005:
	var_2830_int = 1; // 0x3ed PushI
	var_2831_int = var_2793_int + var_2830_int; // 0x3ee Add
	var_2832_int = 10; // 0x3ef PushI
	var_2833_bool = var_2831_int == var_2832_int; // 0x3f0 Eq
	if(var_2833_bool == 0) goto Label_1013; // 0x3f1 JumpB
	var_2792_float = 1; // 0x3f2 MovI
	return 0; // 0x3f3 Return
	
Label_1013:
	var_2834_int = 1; // 0x3f5 PushI
	var_2835_int = var_2793_int + var_2834_int; // 0x3f6 Add
	var_2836_int = 11; // 0x3f7 PushI
	var_2837_bool = var_2835_int == var_2836_int; // 0x3f8 Eq
	if(var_2837_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_2792_float = 1; // 0x3fa MovI
	return 0; // 0x3fb Return
	
Label_1020:
	var_2792_float = 0; // 0x3fc MovI
	return 0; // 0x3fd Return
}


func_8101(var_4318_int)
{
	var_4319_int = 0; var_4320_int = 0; // 0x1fa5 PushV
	var_4321_int = 14099; // 0x1fa6 PushI
	var_4322_int = 14098; // 0x1fa7 PushI
	AddMessage(var_4321_int, var_4322_int, var_4320_int); // 0x1fa8 Func
	var_4323_string = "player_mail"; // 0x1faa PushS
	var_4324_int = 1; // 0x1fab PushI
	SetVariable(var_4323_string, var_4324_int); // 0x1fac Func
	var_4318_int = var_4320_int; // 0x1fae Mov
	return 2; // 0x1faf Return
}


func_4006(var_613_int, var_614_int, var_615_object, var_616_object, var_617_object, var_618_object)
{
	var_619_int = 0; // 0xfa7 PushI
	var_620_bool = var_614_int == var_619_int; // 0xfa8 Eq
	if(var_620_bool == 0) goto Label_4034; // 0xfa9 JumpB
	var_621_int = 0; var_622_bool = 0; // 0xfaa PushV
	var_621_int = 1; // 0xfab MovI
	var_622_bool = 0; // 0xfac MovB
	func_731(var_621_int, var_622_bool); // 0xfad Call
	var_623_int = 0; var_624_bool = 0; var_625_int = 0; // 0xfaf PushV
	var_623_int = 1; // 0xfb0 MovI
	var_624_bool = 0; // 0xfb1 MovB
	var_625_int = 1; // 0xfb2 MovI
	func_748(var_623_int, var_624_bool, var_625_int); // 0xfb3 Call
	var_626_int = 0; var_627_int = 0; var_628_object = Obj(); var_629_object = Obj(); var_630_object = Obj(); // 0xfb5 PushV
	var_626_int = 1; // 0xfb6 MovI
	var_627_int = var_613_int; // 0xfb7 Mov
	var_628_object = var_615_object; // 0xfb8 Mov
	var_629_object = var_616_object; // 0xfb9 Mov
	var_630_object = var_617_object; // 0xfba Mov
	func_557(var_627_int, var_628_object, var_629_object, var_630_object); // 0xfbb Call
	var_631_object = Obj(); var_632_int = 0; // 0xfbd PushV
	var_631_object = var_618_object; // 0xfbe Mov
	var_632_int = 0; // 0xfbf MovI
	func_229(var_632_int); // 0xfc0 Call
	
Label_4034:
	var_633_int = 0; var_634_int = 0; // 0xfc2 PushV
	var_633_int = 1; // 0xfc3 MovI
	var_634_int = var_614_int; // 0xfc4 Mov
	func_872(var_633_int, var_634_int); // 0xfc5 Call
	var_635_int = 0; var_636_int = 0; var_637_int = 0; // 0xfc7 PushV
	var_635_int = 1; // 0xfc8 MovI
	var_636_int = var_613_int; // 0xfc9 Mov
	var_637_int = var_614_int; // 0xfca Mov
	func_1697(var_635_int, var_636_int, var_637_int); // 0xfcb Call
	return 0; // 0xfcd Return
}


func_425(var_377_int)
{
	var_378_object = Obj(); var_379_object = Obj(); // 0x1a9 PushV
	GetMainOutdoorScene(var_379_object); // 0x1aa Func
	var_380_bool = var_379_object == 0; // 0x1ac NullEq
	if(var_380_bool == 0) goto Label_434; // 0x1ad JumpB
	var_381_string = "City manager: main outdoor scene not found"; // 0x1ae PushS
	Trace(var_381_string); // 0x1af Func
	return 2; // 0x1b1 Return
	
Label_434:
	RemoveAllRegionActors(var_377_int); // 0x1b2 ObjFunc
	return 2; // 0x1b4 Return
}


func_6062(var_2445_int, var_2446_int, var_2447_object, var_2448_object, var_2449_object, var_2450_object)
{
	var_2451_int = 0; // 0x17af PushI
	var_2452_bool = var_2446_int == var_2451_int; // 0x17b0 Eq
	if(var_2452_bool == 0) goto Label_6090; // 0x17b1 JumpB
	var_2453_int = 0; var_2454_bool = 0; // 0x17b2 PushV
	var_2453_int = 13; // 0x17b3 MovI
	var_2454_bool = 1; // 0x17b4 MovB
	func_731(var_2453_int, var_2454_bool); // 0x17b5 Call
	var_2455_int = 0; var_2456_bool = 0; var_2457_int = 0; // 0x17b7 PushV
	var_2455_int = 13; // 0x17b8 MovI
	var_2456_bool = 1; // 0x17b9 MovB
	var_2457_int = 1; // 0x17ba MovI
	func_748(var_2455_int, var_2456_bool, var_2457_int); // 0x17bb Call
	var_2458_int = 0; var_2459_int = 0; var_2460_object = Obj(); var_2461_object = Obj(); var_2462_object = Obj(); // 0x17bd PushV
	var_2458_int = 13; // 0x17be MovI
	var_2459_int = var_2445_int; // 0x17bf Mov
	var_2460_object = var_2447_object; // 0x17c0 Mov
	var_2461_object = var_2448_object; // 0x17c1 Mov
	var_2462_object = var_2449_object; // 0x17c2 Mov
	func_576(var_2458_int, var_2459_int, var_2460_object, var_2461_object, var_2462_object); // 0x17c3 Call
	var_2463_object = Obj(); var_2464_int = 0; // 0x17c5 PushV
	var_2463_object = var_2450_object; // 0x17c6 Mov
	var_2464_int = 1; // 0x17c7 MovI
	func_229(var_2464_int); // 0x17c8 Call
	
Label_6090:
	var_2465_int = 0; var_2466_bool = 0; // 0x17ca PushV
	var_2465_int = 13; // 0x17cb MovI
	var_2466_bool = 0; // 0x17cc MovB
	func_714(var_2465_int, var_2466_bool); // 0x17cd Call
	var_2467_int = 0; var_2468_int = 0; var_2469_int = 0; // 0x17cf PushV
	var_2467_int = 13; // 0x17d0 MovI
	var_2468_int = var_2445_int; // 0x17d1 Mov
	var_2469_int = var_2446_int; // 0x17d2 Mov
	func_2052(var_2467_int, var_2468_int, var_2469_int); // 0x17d3 Call
	return 0; // 0x17d5 Return
}


func_6576(var_3838_object, var_3839_object, var_3840_int)
{
	var_3841_object = Obj(); var_3842_object = Obj(); var_3843_string = ""; var_3844_string = ""; var_3845_string = ""; // 0x19b1 PushV
	var_3842_object = var_3839_object; // 0x19b2 Mov
	var_3846_string = "term"; // 0x19b3 PushS
	var_3843_string = var_3846_string + var_3840_int; // 0x19b4 Add2
	var_3844_string = "pers_butcher"; // 0x19b5 MovS
	var_3845_string = "guard_term.xml"; // 0x19b6 MovS
	func_6545(var_3842_object, var_3843_string, var_3844_string, var_3845_string); // 0x19b7 Call
	var_3838_object = var_3841_object; // 0x19b8 Mov
	return 0; // 0x19ba Return
}


func_8112(var_4020_int)
{
	var_4021_int = 0; var_4022_int = 0; // 0x1fb0 PushV
	var_4023_int = 14101; // 0x1fb1 PushI
	var_4024_int = 14100; // 0x1fb2 PushI
	AddMessage(var_4023_int, var_4024_int, var_4022_int); // 0x1fb3 Func
	var_4025_string = "player_mail"; // 0x1fb5 PushS
	var_4026_int = 1; // 0x1fb6 PushI
	SetVariable(var_4025_string, var_4026_int); // 0x1fb7 Func
	var_4020_int = var_4022_int; // 0x1fb9 Mov
	return 2; // 0x1fba Return
}


func_438(var_563_int, var_564_string, var_565_string, var_566_int)
{
	var_567_object = Obj(); var_568_object = Obj(); // 0x1b6 PushV
	GetMainOutdoorScene(var_568_object); // 0x1b7 Func
	var_569_bool = var_568_object == 0; // 0x1b9 NullEq
	if(var_569_bool == 0) goto Label_447; // 0x1ba JumpB
	var_570_string = "City manager: Can't find main outdoor scene"; // 0x1bb PushS
	Trace(var_570_string); // 0x1bc Func
	return 2; // 0x1be Return
	
Label_447:
	SetRegionActorCount(var_563_int, var_564_string, var_565_string, var_566_int); // 0x1bf ObjFunc
	return 2; // 0x1c1 Return
}


func_5561(var_2364_int, var_2365_int, var_2366_object, var_2367_object, var_2368_object, var_2369_object)
{
	var_2370_int = 0; // 0x15ba PushI
	var_2371_bool = var_2365_int == var_2370_int; // 0x15bb Eq
	if(var_2371_bool == 0) goto Label_5589; // 0x15bc JumpB
	var_2372_int = 0; var_2373_bool = 0; // 0x15bd PushV
	var_2372_int = 10; // 0x15be MovI
	var_2373_bool = 1; // 0x15bf MovB
	func_731(var_2372_int, var_2373_bool); // 0x15c0 Call
	var_2374_int = 0; var_2375_bool = 0; var_2376_int = 0; // 0x15c2 PushV
	var_2374_int = 10; // 0x15c3 MovI
	var_2375_bool = 1; // 0x15c4 MovB
	var_2376_int = 1; // 0x15c5 MovI
	func_748(var_2374_int, var_2375_bool, var_2376_int); // 0x15c6 Call
	var_2377_int = 0; var_2378_int = 0; var_2379_object = Obj(); var_2380_object = Obj(); var_2381_object = Obj(); // 0x15c8 PushV
	var_2377_int = 10; // 0x15c9 MovI
	var_2378_int = var_2364_int; // 0x15ca Mov
	var_2379_object = var_2366_object; // 0x15cb Mov
	var_2380_object = var_2367_object; // 0x15cc Mov
	var_2381_object = var_2368_object; // 0x15cd Mov
	func_576(var_2377_int, var_2378_int, var_2379_object, var_2380_object, var_2381_object); // 0x15ce Call
	var_2382_object = Obj(); var_2383_int = 0; // 0x15d0 PushV
	var_2382_object = var_2369_object; // 0x15d1 Mov
	var_2383_int = 1; // 0x15d2 MovI
	func_229(var_2383_int); // 0x15d3 Call
	
Label_5589:
	var_2384_int = 0; var_2385_bool = 0; // 0x15d5 PushV
	var_2384_int = 10; // 0x15d6 MovI
	var_2385_bool = 0; // 0x15d7 MovB
	func_714(var_2384_int, var_2385_bool); // 0x15d8 Call
	var_2386_int = 0; var_2387_int = 0; var_2388_int = 0; // 0x15da PushV
	var_2386_int = 10; // 0x15db MovI
	var_2387_int = var_2364_int; // 0x15dc Mov
	var_2388_int = var_2365_int; // 0x15dd Mov
	func_2052(var_2386_int, var_2387_int, var_2388_int); // 0x15de Call
	return 0; // 0x15e0 Return
}


func_6587()
{
	var_3661_object = Obj(); var_3662_object = Obj(); // 0x19bb PushV
	GetMainOutdoorScene(var_3662_object); // 0x19bc Func
	var_3663_object = GlobalVars[0]; // 0x19be PushGE
	var_3664_bool = var_3663_object == 0; // 0x19bf NullEq
	if(var_3664_bool == 0) goto Label_6606; // 0x19c0 JumpB
	var_3665_object = GlobalVars[0]; // 0x19c1 PushGE
	var_3666_object = Obj(); var_3667_object = Obj(); var_3668_int = 0; // 0x19c2 PushV
	var_3667_object = var_3662_object; // 0x19c3 Mov
	var_3668_int = 1; // 0x19c4 MovI
	func_6562(var_3666_object, var_3667_object, var_3668_int); // 0x19c5 Call
	var_3665_object = var_3666_object; // 0x19c6 Mov
	GlobalVars[0] = var_3665_object; // 0x19c8 PopGE
	var_3691_string = ""; var_3692_bool = 0; // 0x19c9 PushV
	var_3691_string = "warehouse4_guard1@door1"; // 0x19ca MovS
	var_3692_bool = 1; // 0x19cb MovB
	func_137(var_3691_string, var_3692_bool); // 0x19cc Call
	
Label_6606:
	var_3701_object = GlobalVars[1]; // 0x19ce PushGE
	var_3702_bool = var_3701_object == 0; // 0x19cf NullEq
	if(var_3702_bool == 0) goto Label_6622; // 0x19d0 JumpB
	var_3703_object = GlobalVars[1]; // 0x19d1 PushGE
	var_3704_object = Obj(); var_3705_object = Obj(); var_3706_int = 0; // 0x19d2 PushV
	var_3705_object = var_3662_object; // 0x19d3 Mov
	var_3706_int = 2; // 0x19d4 MovI
	func_6562(var_3704_object, var_3705_object, var_3706_int); // 0x19d5 Call
	var_3703_object = var_3704_object; // 0x19d6 Mov
	GlobalVars[1] = var_3703_object; // 0x19d8 PopGE
	var_3707_string = ""; var_3708_bool = 0; // 0x19d9 PushV
	var_3707_string = "warehouse4_guard2@door1"; // 0x19da MovS
	var_3708_bool = 1; // 0x19db MovB
	func_137(var_3707_string, var_3708_bool); // 0x19dc Call
	
Label_6622:
	var_3709_object = GlobalVars[2]; // 0x19de PushGE
	var_3710_bool = var_3709_object == 0; // 0x19df NullEq
	if(var_3710_bool == 0) goto Label_6638; // 0x19e0 JumpB
	var_3711_object = GlobalVars[2]; // 0x19e1 PushGE
	var_3712_object = Obj(); var_3713_object = Obj(); var_3714_int = 0; // 0x19e2 PushV
	var_3713_object = var_3662_object; // 0x19e3 Mov
	var_3714_int = 3; // 0x19e4 MovI
	func_6562(var_3712_object, var_3713_object, var_3714_int); // 0x19e5 Call
	var_3711_object = var_3712_object; // 0x19e6 Mov
	GlobalVars[2] = var_3711_object; // 0x19e8 PopGE
	var_3715_string = ""; var_3716_bool = 0; // 0x19e9 PushV
	var_3715_string = "warehouse4_guard3@door1"; // 0x19ea MovS
	var_3716_bool = 1; // 0x19eb MovB
	func_137(var_3715_string, var_3716_bool); // 0x19ec Call
	
Label_6638:
	var_3717_object = GlobalVars[3]; // 0x19ee PushGE
	var_3718_bool = var_3717_object == 0; // 0x19ef NullEq
	if(var_3718_bool == 0) goto Label_6654; // 0x19f0 JumpB
	var_3719_object = GlobalVars[3]; // 0x19f1 PushGE
	var_3720_object = Obj(); var_3721_object = Obj(); var_3722_int = 0; // 0x19f2 PushV
	var_3721_object = var_3662_object; // 0x19f3 Mov
	var_3722_int = 4; // 0x19f4 MovI
	func_6562(var_3720_object, var_3721_object, var_3722_int); // 0x19f5 Call
	var_3719_object = var_3720_object; // 0x19f6 Mov
	GlobalVars[3] = var_3719_object; // 0x19f8 PopGE
	var_3723_string = ""; var_3724_bool = 0; // 0x19f9 PushV
	var_3723_string = "warehouse4_guard4@door1"; // 0x19fa MovS
	var_3724_bool = 1; // 0x19fb MovB
	func_137(var_3723_string, var_3724_bool); // 0x19fc Call
	
Label_6654:
	var_3725_object = GlobalVars[4]; // 0x19fe PushGE
	var_3726_bool = var_3725_object == 0; // 0x19ff NullEq
	if(var_3726_bool == 0) goto Label_6670; // 0x1a00 JumpB
	var_3727_object = GlobalVars[4]; // 0x1a01 PushGE
	var_3728_object = Obj(); var_3729_object = Obj(); var_3730_int = 0; // 0x1a02 PushV
	var_3729_object = var_3662_object; // 0x1a03 Mov
	var_3730_int = 5; // 0x1a04 MovI
	func_6562(var_3728_object, var_3729_object, var_3730_int); // 0x1a05 Call
	var_3727_object = var_3728_object; // 0x1a06 Mov
	GlobalVars[4] = var_3727_object; // 0x1a08 PopGE
	var_3731_string = ""; var_3732_bool = 0; // 0x1a09 PushV
	var_3731_string = "warehouse4_guard5@door1"; // 0x1a0a MovS
	var_3732_bool = 1; // 0x1a0b MovB
	func_137(var_3731_string, var_3732_bool); // 0x1a0c Call
	
Label_6670:
	var_3733_object = GlobalVars[5]; // 0x1a0e PushGE
	var_3734_bool = var_3733_object == 0; // 0x1a0f NullEq
	if(var_3734_bool == 0) goto Label_6686; // 0x1a10 JumpB
	var_3735_object = GlobalVars[5]; // 0x1a11 PushGE
	var_3736_object = Obj(); var_3737_object = Obj(); var_3738_int = 0; // 0x1a12 PushV
	var_3737_object = var_3662_object; // 0x1a13 Mov
	var_3738_int = 6; // 0x1a14 MovI
	func_6562(var_3736_object, var_3737_object, var_3738_int); // 0x1a15 Call
	var_3735_object = var_3736_object; // 0x1a16 Mov
	GlobalVars[5] = var_3735_object; // 0x1a18 PopGE
	var_3739_string = ""; var_3740_bool = 0; // 0x1a19 PushV
	var_3739_string = "warehouse4_guard6@door1"; // 0x1a1a MovS
	var_3740_bool = 1; // 0x1a1b MovB
	func_137(var_3739_string, var_3740_bool); // 0x1a1c Call
	
Label_6686:
	return 2; // 0x1a1e Return
}


func_8123(var_4029_int)
{
	var_4030_int = 0; var_4031_int = 0; // 0x1fbb PushV
	var_4032_int = 14103; // 0x1fbc PushI
	var_4033_int = 14102; // 0x1fbd PushI
	AddMessage(var_4032_int, var_4033_int, var_4031_int); // 0x1fbe Func
	var_4034_string = "player_mail"; // 0x1fc0 PushS
	var_4035_int = 1; // 0x1fc1 PushI
	SetVariable(var_4034_string, var_4035_int); // 0x1fc2 Func
	var_4029_int = var_4031_int; // 0x1fc4 Mov
	return 2; // 0x1fc5 Return
}


func_3518(var_2747_int, var_2748_int, var_2749_int)
{
	var_2750_int = 0; var_2751_int = 0; var_2752_int = 0; var_2753_int = 0; var_2754_int = 0; var_2755_int = 0; var_2756_int = 0; var_2757_int = 0; // 0xdbe PushV
	var_2758_bool = 0; // 0xdbf PushV
	var_2758_bool = 0; // 0xdc0 MovB
	var_2759_int = 8; // 0xdc1 PushI
	var_2760_bool = var_2749_int > var_2759_int; // 0xdc2 GT
	if(var_2760_bool == 0) goto Label_3528; // 0xdc3 JumpB
	var_2761_int = 21; // 0xdc4 PushI
	var_2762_bool = var_2749_int < var_2761_int; // 0xdc5 LT
	if(var_2762_bool == 0) goto Label_3528; // 0xdc6 JumpB
	var_2758_bool = 1; // 0xdc7 MovB
	
Label_3528:
	if(var_2758_bool == 0) goto Label_3607; // 0xdc8 JumpB
	var_2763_int = 0; var_2764_string = ""; var_2765_string = ""; var_2766_int = 0; // 0xdc9 PushV
	var_2763_int = var_2747_int; // 0xdca Mov
	var_2764_string = "pers_woman"; // 0xdcb MovS
	var_2765_string = "woman.xml"; // 0xdcc MovS
	var_2766_int = 1; // 0xdcd MovI
	func_438(var_2763_int, var_2764_string, var_2765_string, var_2766_int); // 0xdce Call
	var_2767_int = 0; var_2768_string = ""; var_2769_string = ""; var_2770_int = 0; // 0xdd0 PushV
	var_2767_int = var_2747_int; // 0xdd1 Mov
	var_2768_string = "pers_unosha"; // 0xdd2 MovS
	var_2769_string = "unosha.xml"; // 0xdd3 MovS
	var_2770_int = 1; // 0xdd4 MovI
	func_438(var_2767_int, var_2768_string, var_2769_string, var_2770_int); // 0xdd5 Call
	var_2771_int = 0; var_2772_string = ""; var_2773_string = ""; var_2774_int = 0; // 0xdd7 PushV
	var_2771_int = var_2747_int; // 0xdd8 Mov
	var_2772_string = "pers_unosha"; // 0xdd9 MovS
	var_2773_string = "unosha2.xml"; // 0xdda MovS
	var_2774_int = 1; // 0xddb MovI
	func_438(var_2771_int, var_2772_string, var_2773_string, var_2774_int); // 0xddc Call
	var_2775_int = 0; var_2776_string = ""; var_2777_string = ""; var_2778_int = 0; // 0xdde PushV
	var_2775_int = var_2747_int; // 0xddf Mov
	var_2776_string = "pers_boy"; // 0xde0 MovS
	var_2777_string = "boy.xml"; // 0xde1 MovS
	var_2778_int = 1; // 0xde2 MovI
	func_438(var_2775_int, var_2776_string, var_2777_string, var_2778_int); // 0xde3 Call
	var_2779_int = 1; // 0xde5 PushI
	var_2780_int = var_2748_int + var_2779_int; // 0xde6 Add
	var_2781_int = 2; // 0xde7 PushI
	var_2782_bool = var_2780_int >= var_2781_int; // 0xde8 GE
	if(var_2782_bool == 0) goto Label_3569; // 0xde9 JumpB
	var_2783_int = 0; var_2784_string = ""; var_2785_string = ""; var_2786_int = 0; // 0xdea PushV
	var_2783_int = var_2747_int; // 0xdeb Mov
	var_2784_string = "pers_patrool"; // 0xdec MovS
	var_2785_string = "patrol.xml"; // 0xded MovS
	var_2786_int = 4; // 0xdee MovI
	func_438(var_2783_int, var_2784_string, var_2785_string, var_2786_int); // 0xdef Call
	
Label_3569:
	var_2787_int = 0; var_2788_string = ""; var_2789_string = ""; var_2790_int = 0; // 0xdf1 PushV
	var_2787_int = var_2747_int; // 0xdf2 Mov
	var_2788_string = "pers_rat"; // 0xdf3 MovS
	var_2789_string = "rat.xml"; // 0xdf4 MovS
	var_2790_int = 5; // 0xdf5 MovI
	func_438(var_2787_int, var_2788_string, var_2789_string, var_2790_int); // 0xdf6 Call
	var_2791_int = 3; // 0xdf8 PushI
	var_2792_float = 0; var_2793_int = 0; // 0xdf9 PushV
	var_2793_int = var_2748_int; // 0xdfa Mov
	func_932(var_2792_float, var_2793_int); // 0xdfb Call
	var_2754_int = var_2791_int * var_2792_float; // 0xdfd Mult2
	var_2838_int = var_2754_int; // 0xdfe Push
	if(var_2838_int == 0) goto Label_3591; // 0xdff JumpB
	var_2839_int = 0; var_2840_string = ""; var_2841_string = ""; var_2842_int = 0; // 0xe00 PushV
	var_2839_int = var_2747_int; // 0xe01 Mov
	var_2840_string = "pers_grabitel"; // 0xe02 MovS
	var_2841_string = "grabitel.xml"; // 0xe03 MovS
	var_2842_int = var_2754_int; // 0xe04 Mov
	func_438(var_2839_int, var_2840_string, var_2841_string, var_2842_int); // 0xe05 Call
	
Label_3591:
	var_2843_int = 2; // 0xe07 PushI
	var_2844_float = 0; var_2845_int = 0; // 0xe08 PushV
	var_2845_int = var_2748_int; // 0xe09 Mov
	func_1022(var_2844_float, var_2845_int); // 0xe0a Call
	var_2755_int = var_2843_int * var_2844_float; // 0xe0c Mult2
	var_2846_int = var_2755_int; // 0xe0d Push
	if(var_2846_int == 0) goto Label_3606; // 0xe0e JumpB
	var_2847_int = 0; var_2848_string = ""; var_2849_string = ""; var_2850_int = 0; // 0xe0f PushV
	var_2847_int = var_2747_int; // 0xe10 Mov
	var_2848_string = "pers_bomber"; // 0xe11 MovS
	var_2849_string = "bomber.xml"; // 0xe12 MovS
	var_2850_int = var_2755_int; // 0xe13 Mov
	func_438(var_2847_int, var_2848_string, var_2849_string, var_2850_int); // 0xe14 Call
	
Label_3606:
	goto Label_3684; // 0xe16 Jump
	
Label_3684:
	return 8; // 0xe64 Return
	
Label_3607:
	var_2851_int = 0; var_2852_string = ""; var_2853_string = ""; var_2854_int = 0; // 0xe17 PushV
	var_2851_int = var_2747_int; // 0xe18 Mov
	var_2852_string = "pers_woman"; // 0xe19 MovS
	var_2853_string = "woman.xml"; // 0xe1a MovS
	var_2854_int = 1; // 0xe1b MovI
	func_438(var_2851_int, var_2852_string, var_2853_string, var_2854_int); // 0xe1c Call
	var_2855_int = 0; var_2856_string = ""; var_2857_string = ""; var_2858_int = 0; // 0xe1e PushV
	var_2855_int = var_2747_int; // 0xe1f Mov
	var_2856_string = "pers_unosha"; // 0xe20 MovS
	var_2857_string = "unosha.xml"; // 0xe21 MovS
	var_2858_int = 1; // 0xe22 MovI
	func_438(var_2855_int, var_2856_string, var_2857_string, var_2858_int); // 0xe23 Call
	var_2859_int = 0; var_2860_string = ""; var_2861_string = ""; var_2862_int = 0; // 0xe25 PushV
	var_2859_int = var_2747_int; // 0xe26 Mov
	var_2860_string = "pers_unosha"; // 0xe27 MovS
	var_2861_string = "unosha2.xml"; // 0xe28 MovS
	var_2862_int = 1; // 0xe29 MovI
	func_438(var_2859_int, var_2860_string, var_2861_string, var_2862_int); // 0xe2a Call
	var_2863_int = 0; var_2864_string = ""; var_2865_string = ""; var_2866_int = 0; // 0xe2c PushV
	var_2863_int = var_2747_int; // 0xe2d Mov
	var_2864_string = "pers_boy"; // 0xe2e MovS
	var_2865_string = "boy.xml"; // 0xe2f MovS
	var_2866_int = 1; // 0xe30 MovI
	func_438(var_2863_int, var_2864_string, var_2865_string, var_2866_int); // 0xe31 Call
	var_2867_int = 1; // 0xe33 PushI
	var_2868_int = var_2748_int + var_2867_int; // 0xe34 Add
	var_2869_int = 2; // 0xe35 PushI
	var_2870_bool = var_2868_int >= var_2869_int; // 0xe36 GE
	if(var_2870_bool == 0) goto Label_3647; // 0xe37 JumpB
	var_2871_int = 0; var_2872_string = ""; var_2873_string = ""; var_2874_int = 0; // 0xe38 PushV
	var_2871_int = var_2747_int; // 0xe39 Mov
	var_2872_string = "pers_patrool"; // 0xe3a MovS
	var_2873_string = "patrol.xml"; // 0xe3b MovS
	var_2874_int = 4; // 0xe3c MovI
	func_438(var_2871_int, var_2872_string, var_2873_string, var_2874_int); // 0xe3d Call
	
Label_3647:
	var_2875_int = 0; var_2876_string = ""; var_2877_string = ""; var_2878_int = 0; // 0xe3f PushV
	var_2875_int = var_2747_int; // 0xe40 Mov
	var_2876_string = "pers_rat"; // 0xe41 MovS
	var_2877_string = "rat.xml"; // 0xe42 MovS
	var_2878_int = 5; // 0xe43 MovI
	func_438(var_2875_int, var_2876_string, var_2877_string, var_2878_int); // 0xe44 Call
	var_2879_int = 4; // 0xe46 PushI
	var_2880_float = 0; var_2881_int = 0; // 0xe47 PushV
	var_2881_int = var_2748_int; // 0xe48 Mov
	func_932(var_2880_float, var_2881_int); // 0xe49 Call
	var_2756_int = var_2879_int * var_2880_float; // 0xe4b Mult2
	var_2882_int = var_2756_int; // 0xe4c Push
	if(var_2882_int == 0) goto Label_3669; // 0xe4d JumpB
	var_2883_int = 0; var_2884_string = ""; var_2885_string = ""; var_2886_int = 0; // 0xe4e PushV
	var_2883_int = var_2747_int; // 0xe4f Mov
	var_2884_string = "pers_grabitel"; // 0xe50 MovS
	var_2885_string = "grabitel.xml"; // 0xe51 MovS
	var_2886_int = var_2756_int; // 0xe52 Mov
	func_438(var_2883_int, var_2884_string, var_2885_string, var_2886_int); // 0xe53 Call
	
Label_3669:
	var_2887_int = 3; // 0xe55 PushI
	var_2888_float = 0; var_2889_int = 0; // 0xe56 PushV
	var_2889_int = var_2748_int; // 0xe57 Mov
	func_1022(var_2888_float, var_2889_int); // 0xe58 Call
	var_2757_int = var_2887_int * var_2888_float; // 0xe5a Mult2
	var_2890_int = var_2757_int; // 0xe5b Push
	if(var_2890_int == 0) goto Label_3684; // 0xe5c JumpB
	var_2891_int = 0; var_2892_string = ""; var_2893_string = ""; var_2894_int = 0; // 0xe5d PushV
	var_2891_int = var_2747_int; // 0xe5e Mov
	var_2892_string = "pers_bomber"; // 0xe5f MovS
	var_2893_string = "bomber.xml"; // 0xe60 MovS
	var_2894_int = var_2757_int; // 0xe61 Mov
	func_438(var_2891_int, var_2892_string, var_2893_string, var_2894_int); // 0xe62 Call
}


func_451(var_1613_int, var_1614_string, var_1615_string, var_1616_int, var_1617_int, var_1618_int)
{
	var_1619_object = Obj(); var_1620_object = Obj(); // 0x1c3 PushV
	GetMainOutdoorScene(var_1620_object); // 0x1c4 Func
	var_1621_bool = var_1620_object == 0; // 0x1c6 NullEq
	if(var_1621_bool == 0) goto Label_460; // 0x1c7 JumpB
	var_1622_string = "City manager: Can't find main outdoor scene"; // 0x1c8 PushS
	Trace(var_1622_string); // 0x1c9 Func
	return 2; // 0x1cb Return
	
Label_460:
	SetRegionActorCount(var_1613_int, var_1614_string, var_1615_string, var_1616_int, var_1617_int, var_1618_int); // 0x1cc ObjFunc
	return 2; // 0x1ce Return
}


func_5060(var_2129_int, var_2130_int, var_2131_object, var_2132_object, var_2133_object, var_2134_object)
{
	var_2135_int = 0; // 0x13c5 PushI
	var_2136_bool = var_2130_int == var_2135_int; // 0x13c6 Eq
	if(var_2136_bool == 0) goto Label_5088; // 0x13c7 JumpB
	var_2137_int = 0; var_2138_bool = 0; // 0x13c8 PushV
	var_2137_int = 7; // 0x13c9 MovI
	var_2138_bool = 1; // 0x13ca MovB
	func_731(var_2137_int, var_2138_bool); // 0x13cb Call
	var_2139_int = 0; var_2140_bool = 0; var_2141_int = 0; // 0x13cd PushV
	var_2139_int = 7; // 0x13ce MovI
	var_2140_bool = 1; // 0x13cf MovB
	var_2141_int = 1; // 0x13d0 MovI
	func_748(var_2139_int, var_2140_bool, var_2141_int); // 0x13d1 Call
	var_2142_int = 0; var_2143_int = 0; var_2144_object = Obj(); var_2145_object = Obj(); var_2146_object = Obj(); // 0x13d3 PushV
	var_2142_int = 7; // 0x13d4 MovI
	var_2143_int = var_2129_int; // 0x13d5 Mov
	var_2144_object = var_2131_object; // 0x13d6 Mov
	var_2145_object = var_2132_object; // 0x13d7 Mov
	var_2146_object = var_2133_object; // 0x13d8 Mov
	func_576(var_2142_int, var_2143_int, var_2144_object, var_2145_object, var_2146_object); // 0x13d9 Call
	var_2147_object = Obj(); var_2148_int = 0; // 0x13db PushV
	var_2147_object = var_2134_object; // 0x13dc Mov
	var_2148_int = 1; // 0x13dd MovI
	func_229(var_2148_int); // 0x13de Call
	
Label_5088:
	var_2149_int = 0; var_2150_bool = 0; // 0x13e0 PushV
	var_2149_int = 7; // 0x13e1 MovI
	var_2150_bool = 0; // 0x13e2 MovB
	func_714(var_2149_int, var_2150_bool); // 0x13e3 Call
	var_2151_int = 0; var_2152_int = 0; var_2153_int = 0; // 0x13e5 PushV
	var_2151_int = 7; // 0x13e6 MovI
	var_2152_int = var_2129_int; // 0x13e7 Mov
	var_2153_int = var_2130_int; // 0x13e8 Mov
	func_2052(var_2151_int, var_2152_int, var_2153_int); // 0x13e9 Call
	return 0; // 0x13eb Return
}


func_8134(var_4002_int)
{
	var_4003_int = 0; var_4004_int = 0; // 0x1fc6 PushV
	var_4005_int = 14105; // 0x1fc7 PushI
	var_4006_int = 14104; // 0x1fc8 PushI
	AddMessage(var_4005_int, var_4006_int, var_4004_int); // 0x1fc9 Func
	var_4007_string = "player_mail"; // 0x1fcb PushS
	var_4008_int = 1; // 0x1fcc PushI
	SetVariable(var_4007_string, var_4008_int); // 0x1fcd Func
	var_4002_int = var_4004_int; // 0x1fcf Mov
	return 2; // 0x1fd0 Return
}


func_4552(var_878_int, var_879_int, var_880_object, var_881_object, var_882_object, var_883_object)
{
	var_884_int = 0; // 0x11c9 PushI
	var_885_bool = var_879_int == var_884_int; // 0x11ca Eq
	if(var_885_bool == 0) goto Label_4580; // 0x11cb JumpB
	var_886_int = 0; var_887_bool = 0; // 0x11cc PushV
	var_886_int = 4; // 0x11cd MovI
	var_887_bool = 0; // 0x11ce MovB
	func_731(var_886_int, var_887_bool); // 0x11cf Call
	var_888_int = 0; var_889_bool = 0; var_890_int = 0; // 0x11d1 PushV
	var_888_int = 4; // 0x11d2 MovI
	var_889_bool = 0; // 0x11d3 MovB
	var_890_int = 1; // 0x11d4 MovI
	func_748(var_888_int, var_889_bool, var_890_int); // 0x11d5 Call
	var_891_int = 0; var_892_int = 0; var_893_object = Obj(); var_894_object = Obj(); var_895_object = Obj(); // 0x11d7 PushV
	var_891_int = 4; // 0x11d8 MovI
	var_892_int = var_878_int; // 0x11d9 Mov
	var_893_object = var_880_object; // 0x11da Mov
	var_894_object = var_881_object; // 0x11db Mov
	var_895_object = var_882_object; // 0x11dc Mov
	func_557(var_892_int, var_893_object, var_894_object, var_895_object); // 0x11dd Call
	var_896_object = Obj(); var_897_int = 0; // 0x11df PushV
	var_896_object = var_883_object; // 0x11e0 Mov
	var_897_int = 0; // 0x11e1 MovI
	func_229(var_897_int); // 0x11e2 Call
	
Label_4580:
	var_898_int = 0; var_899_int = 0; // 0x11e4 PushV
	var_898_int = 4; // 0x11e5 MovI
	var_899_int = var_879_int; // 0x11e6 Mov
	func_842(var_898_int, var_899_int); // 0x11e7 Call
	var_912_int = 0; var_913_int = 0; var_914_int = 0; // 0x11e9 PushV
	var_912_int = 4; // 0x11ea MovI
	var_913_int = var_878_int; // 0x11eb Mov
	var_914_int = var_879_int; // 0x11ec Mov
	func_1411(var_912_int, var_913_int, var_914_int); // 0x11ed Call
	return 0; // 0x11ef Return
}


func_7115(var_3606_int, var_3607_int)
{
	var_3609_int = 5; // 0x1bcc PushI
	var_3610_bool = var_3607_int == var_3609_int; // 0x1bcd Eq
	if(var_3610_bool == 0) goto Label_7123; // 0x1bce JumpB
	func_6688(); // 0x1bd0 Call
	goto Label_7129; // 0x1bd2 Jump
	
Label_7129:
	var_3657_int = 0; // 0x1bd9 PushI
	var_3658_bool = var_3607_int == var_3657_int; // 0x1bda Eq
	if(var_3658_bool == 0) goto Label_7145; // 0x1bdb JumpB
	var_3659_int = 3; // 0x1bdc PushI
	var_3660_bool = var_3606_int == var_3659_int; // 0x1bdd Eq
	if(var_3660_bool == 0) goto Label_7139; // 0x1bde JumpB
	func_6587(); // 0x1be0 Call
	goto Label_7145; // 0x1be2 Jump
	
Label_7145:
	return 0; // 0x1be9 Return
	
Label_7139:
	var_3741_int = 9; // 0x1be3 PushI
	var_3742_bool = var_3606_int == var_3741_int; // 0x1be4 Eq
	if(var_3742_bool == 0) goto Label_7145; // 0x1be5 JumpB
	func_7146(); // 0x1be7 Call
	
Label_7123:
	var_3753_int = 22; // 0x1bd3 PushI
	var_3754_bool = var_3607_int == var_3753_int; // 0x1bd4 Eq
	if(var_3754_bool == 0) goto Label_7129; // 0x1bd5 JumpB
	func_6754(); // 0x1bd7 Call
}


func_4046(var_1681_int, var_1682_int, var_1683_object, var_1684_object, var_1685_object, var_1686_object)
{
	var_1687_int = 0; // 0xfcf PushI
	var_1688_bool = var_1682_int == var_1687_int; // 0xfd0 Eq
	if(var_1688_bool == 0) goto Label_4074; // 0xfd1 JumpB
	var_1689_int = 0; var_1690_bool = 0; // 0xfd2 PushV
	var_1689_int = 1; // 0xfd3 MovI
	var_1690_bool = 1; // 0xfd4 MovB
	func_731(var_1689_int, var_1690_bool); // 0xfd5 Call
	var_1691_int = 0; var_1692_bool = 0; var_1693_int = 0; // 0xfd7 PushV
	var_1691_int = 1; // 0xfd8 MovI
	var_1692_bool = 1; // 0xfd9 MovB
	var_1693_int = 1; // 0xfda MovI
	func_748(var_1691_int, var_1692_bool, var_1693_int); // 0xfdb Call
	var_1694_int = 0; var_1695_int = 0; var_1696_object = Obj(); var_1697_object = Obj(); var_1698_object = Obj(); // 0xfdd PushV
	var_1694_int = 1; // 0xfde MovI
	var_1695_int = var_1681_int; // 0xfdf Mov
	var_1696_object = var_1683_object; // 0xfe0 Mov
	var_1697_object = var_1684_object; // 0xfe1 Mov
	var_1698_object = var_1685_object; // 0xfe2 Mov
	func_576(var_1694_int, var_1695_int, var_1696_object, var_1697_object, var_1698_object); // 0xfe3 Call
	var_1699_object = Obj(); var_1700_int = 0; // 0xfe5 PushV
	var_1699_object = var_1686_object; // 0xfe6 Mov
	var_1700_int = 1; // 0xfe7 MovI
	func_229(var_1700_int); // 0xfe8 Call
	
Label_4074:
	var_1701_int = 0; var_1702_bool = 0; // 0xfea PushV
	var_1701_int = 1; // 0xfeb MovI
	var_1702_bool = 0; // 0xfec MovB
	func_714(var_1701_int, var_1702_bool); // 0xfed Call
	var_1703_int = 0; var_1704_int = 0; var_1705_int = 0; // 0xfef PushV
	var_1703_int = 1; // 0xff0 MovI
	var_1704_int = var_1681_int; // 0xff1 Mov
	var_1705_int = var_1682_int; // 0xff2 Mov
	func_2778(var_1703_int, var_1704_int, var_1705_int); // 0xff3 Call
	return 0; // 0xff5 Return
}


func_464(var_1553_int, var_1554_string, var_1555_string, var_1556_int)
{
	var_1557_object = Obj(); var_1558_object = Obj(); // 0x1d0 PushV
	GetMainOutdoorScene(var_1558_object); // 0x1d1 Func
	var_1559_bool = var_1558_object == 0; // 0x1d3 NullEq
	if(var_1559_bool == 0) goto Label_473; // 0x1d4 JumpB
	var_1560_string = "City manager: Can't find main outdoor scene"; // 0x1d5 PushS
	Trace(var_1560_string); // 0x1d6 Func
	return 2; // 0x1d8 Return
	
Label_473:
	SetRegionActorCountByType(var_1553_int, var_1554_string, var_1555_string, var_1556_int); // 0x1d9 ObjFunc
	return 2; // 0x1db Return
}


func_8145(var_4011_int)
{
	var_4012_int = 0; var_4013_int = 0; // 0x1fd1 PushV
	var_4014_int = 14107; // 0x1fd2 PushI
	var_4015_int = 14106; // 0x1fd3 PushI
	AddMessage(var_4014_int, var_4015_int, var_4013_int); // 0x1fd4 Func
	var_4016_string = "player_mail"; // 0x1fd6 PushS
	var_4017_int = 1; // 0x1fd7 PushI
	SetVariable(var_4016_string, var_4017_int); // 0x1fd8 Func
	var_4011_int = var_4013_int; // 0x1fda Mov
	return 2; // 0x1fdb Return
}


func_6102(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object)
{
	var_3541_int = 0; // 0x17d7 PushI
	var_3542_bool = var_3536_int == var_3541_int; // 0x17d8 Eq
	if(var_3542_bool == 0) goto Label_6130; // 0x17d9 JumpB
	var_3543_int = 0; var_3544_bool = 0; // 0x17da PushV
	var_3543_int = 13; // 0x17db MovI
	var_3544_bool = 1; // 0x17dc MovB
	func_731(var_3543_int, var_3544_bool); // 0x17dd Call
	var_3545_int = 0; var_3546_bool = 0; var_3547_int = 0; // 0x17df PushV
	var_3545_int = 13; // 0x17e0 MovI
	var_3546_bool = 1; // 0x17e1 MovB
	var_3547_int = 1; // 0x17e2 MovI
	func_748(var_3545_int, var_3546_bool, var_3547_int); // 0x17e3 Call
	var_3548_int = 0; var_3549_int = 0; var_3550_object = Obj(); var_3551_object = Obj(); var_3552_object = Obj(); // 0x17e5 PushV
	var_3548_int = 13; // 0x17e6 MovI
	var_3549_int = var_3535_int; // 0x17e7 Mov
	var_3550_object = var_3537_object; // 0x17e8 Mov
	var_3551_object = var_3538_object; // 0x17e9 Mov
	var_3552_object = var_3539_object; // 0x17ea Mov
	func_655(var_3548_int, var_3549_int, var_3550_object, var_3551_object, var_3552_object); // 0x17eb Call
	var_3553_object = Obj(); var_3554_int = 0; // 0x17ed PushV
	var_3553_object = var_3540_object; // 0x17ee Mov
	var_3554_int = 2; // 0x17ef MovI
	func_229(var_3554_int); // 0x17f0 Call
	
Label_6130:
	var_3555_int = 0; var_3556_bool = 0; // 0x17f2 PushV
	var_3555_int = 13; // 0x17f3 MovI
	var_3556_bool = 0; // 0x17f4 MovB
	func_714(var_3555_int, var_3556_bool); // 0x17f5 Call
	var_3557_int = 0; var_3558_int = 0; var_3559_int = 0; // 0x17f7 PushV
	var_3557_int = 13; // 0x17f8 MovI
	var_3558_int = var_3535_int; // 0x17f9 Mov
	var_3559_int = var_3536_int; // 0x17fa Mov
	func_3158(var_3557_int, var_3558_int, var_3559_int); // 0x17fb Call
	return 0; // 0x17fd Return
}


func_8156(var_4536_int)
{
	var_4537_int = 0; var_4538_int = 0; // 0x1fdc PushV
	var_4539_int = 15484; // 0x1fdd PushI
	var_4540_int = 15483; // 0x1fde PushI
	AddMessage(var_4539_int, var_4540_int, var_4538_int); // 0x1fdf Func
	var_4541_string = "player_mail"; // 0x1fe1 PushS
	var_4542_int = 1; // 0x1fe2 PushI
	SetVariable(var_4541_string, var_4542_int); // 0x1fe3 Func
	var_4536_int = var_4538_int; // 0x1fe5 Mov
	return 2; // 0x1fe6 Return
}


func_477(var_462_int, var_463_bool)
{
	var_464_object = Obj(); var_465_object = Obj(); var_466_bool = 0; var_467_object = Obj(); var_468_object = Obj(); var_469_object = Obj(); var_470_bool = 0; var_471_object = Obj(); // 0x1dd PushV
	GetMainOutdoorScene(var_468_object); // 0x1de Func
	var_472_int = 101; // 0x1e0 PushI
	var_473_int = var_472_int + var_462_int; // 0x1e1 Add
	GetGroupActors(var_469_object, var_473_int); // 0x1e2 ObjFunc
	var_474_object = var_469_object; // 0x1e4 Push
	if(var_474_object == 0) goto Label_508; // 0x1e5 JumpB
	
Label_486:
	Next(var_470_bool, var_471_object); // 0x1e6 ObjFunc
	var_475_bool = var_470_bool; // 0x1e8 Push
	if(var_475_bool == 0) goto Label_507; // 0x1e9 JumpB
	var_476_bool = 0; var_477_object = Obj(); var_478_string = ""; // 0x1ea PushV
	var_477_object = var_471_object; // 0x1eb Mov
	var_478_string = "locked"; // 0x1ec MovS
	func_74(var_476_bool, var_477_object, var_478_string); // 0x1ed Call
	if(var_476_bool == 0) goto Label_500; // 0x1ef JumpB
	var_485_string = "locked"; // 0x1f0 PushS
	SetProperty(var_485_string, var_463_bool); // 0x1f1 ObjFunc
	goto Label_506; // 0x1f3 Jump
	
Label_506:
	goto Label_486; // 0x1fa Jump
	
Label_500:
	var_486_string = "Actor ""; // 0x1f4 PushS
	var_487_int = var_486_string + var_471_object; // 0x1f5 Add
	var_488_string = "" can't be locked"; // 0x1f6 PushS
	var_489_int = var_487_int + var_488_string; // 0x1f7 Add
	Trace(var_489_int); // 0x1f8 Func
	
Label_507:
	var_471_object = 0; // 0x1fb SetNull
	
Label_508:
	return 8; // 0x1fc Return
}


func_9695()
{
	var_3983_string = ""; var_3984_bool = 0; // 0x25e0 PushV
	var_3983_string = "mnogogrannik@door1"; // 0x25e1 MovS
	var_3984_bool = 1; // 0x25e2 MovB
	func_137(var_3983_string, var_3984_bool); // 0x25e3 Call
	return 0; // 0x25e5 Return
}


func_5601(var_3454_int, var_3455_int, var_3456_object, var_3457_object, var_3458_object, var_3459_object)
{
	var_3460_int = 0; // 0x15e2 PushI
	var_3461_bool = var_3455_int == var_3460_int; // 0x15e3 Eq
	if(var_3461_bool == 0) goto Label_5629; // 0x15e4 JumpB
	var_3462_int = 0; var_3463_bool = 0; // 0x15e5 PushV
	var_3462_int = 10; // 0x15e6 MovI
	var_3463_bool = 1; // 0x15e7 MovB
	func_731(var_3462_int, var_3463_bool); // 0x15e8 Call
	var_3464_int = 0; var_3465_bool = 0; var_3466_int = 0; // 0x15ea PushV
	var_3464_int = 10; // 0x15eb MovI
	var_3465_bool = 1; // 0x15ec MovB
	var_3466_int = 1; // 0x15ed MovI
	func_748(var_3464_int, var_3465_bool, var_3466_int); // 0x15ee Call
	var_3467_int = 0; var_3468_int = 0; var_3469_object = Obj(); var_3470_object = Obj(); var_3471_object = Obj(); // 0x15f0 PushV
	var_3467_int = 10; // 0x15f1 MovI
	var_3468_int = var_3454_int; // 0x15f2 Mov
	var_3469_object = var_3456_object; // 0x15f3 Mov
	var_3470_object = var_3457_object; // 0x15f4 Mov
	var_3471_object = var_3458_object; // 0x15f5 Mov
	func_655(var_3467_int, var_3468_int, var_3469_object, var_3470_object, var_3471_object); // 0x15f6 Call
	var_3472_object = Obj(); var_3473_int = 0; // 0x15f8 PushV
	var_3472_object = var_3459_object; // 0x15f9 Mov
	var_3473_int = 2; // 0x15fa MovI
	func_229(var_3473_int); // 0x15fb Call
	
Label_5629:
	var_3474_int = 0; var_3475_bool = 0; // 0x15fd PushV
	var_3474_int = 10; // 0x15fe MovI
	var_3475_bool = 0; // 0x15ff MovB
	func_714(var_3474_int, var_3475_bool); // 0x1600 Call
	var_3476_int = 0; var_3477_int = 0; var_3478_int = 0; // 0x1602 PushV
	var_3476_int = 10; // 0x1603 MovI
	var_3477_int = var_3454_int; // 0x1604 Mov
	var_3478_int = var_3455_int; // 0x1605 Mov
	func_3158(var_3476_int, var_3477_int, var_3478_int); // 0x1606 Call
	return 0; // 0x1608 Return
}


func_9702()
{
	var_4549_string = ""; var_4550_bool = 0; // 0x25e7 PushV
	var_4549_string = "mnogogrannik@door1"; // 0x25e8 MovS
	var_4550_bool = 0; // 0x25e9 MovB
	func_137(var_4549_string, var_4550_bool); // 0x25ea Call
	return 0; // 0x25ec Return
}


func_8167(var_4802_int)
{
	var_4803_int = 0; var_4804_int = 0; // 0x1fe7 PushV
	var_4805_int = 14529; // 0x1fe8 PushI
	var_4806_int = 14528; // 0x1fe9 PushI
	AddMessage(var_4805_int, var_4806_int, var_4804_int); // 0x1fea Func
	var_4807_string = "player_mail"; // 0x1fec PushS
	var_4808_int = 1; // 0x1fed PushI
	SetVariable(var_4807_string, var_4808_int); // 0x1fee Func
	var_4802_int = var_4804_int; // 0x1ff0 Mov
	return 2; // 0x1ff1 Return
}


func_7146()
{
	var_3743_object = Obj(); var_3744_object = Obj(); var_3745_object = Obj(); var_3746_object = Obj(); // 0x1bea PushV
	GetMainOutdoorScene(var_3745_object); // 0x1beb Func
	var_3747_string = "big_gun"; // 0x1bed PushS
	var_3748_string = "big_gun.bin"; // 0x1bee PushS
	var_3749_cvector = CVector(0.0, 0.0, 0.0); // 0x1bef PushVec
	AddScriptedActor(var_3746_object, var_3747_string, var_3748_string, var_3745_object, var_3749_cvector); // 0x1bf0 Func
	var_3750_string = "d9q01_trigger_wagon"; // 0x1bf2 PushS
	var_3751_string = "quest_d9_01_wagon.bin"; // 0x1bf3 PushS
	var_3752_cvector = CVector(0.0, 0.0, 0.0); // 0x1bf4 PushVec
	AddScriptedActor(var_3746_object, var_3750_string, var_3751_string, var_3745_object, var_3752_cvector); // 0x1bf5 Func
	return 4; // 0x1bf7 Return
}


func_5100(var_3265_int, var_3266_int, var_3267_object, var_3268_object, var_3269_object, var_3270_object)
{
	var_3271_int = 0; // 0x13ed PushI
	var_3272_bool = var_3266_int == var_3271_int; // 0x13ee Eq
	if(var_3272_bool == 0) goto Label_5128; // 0x13ef JumpB
	var_3273_int = 0; var_3274_bool = 0; // 0x13f0 PushV
	var_3273_int = 7; // 0x13f1 MovI
	var_3274_bool = 1; // 0x13f2 MovB
	func_731(var_3273_int, var_3274_bool); // 0x13f3 Call
	var_3275_int = 0; var_3276_bool = 0; var_3277_int = 0; // 0x13f5 PushV
	var_3275_int = 7; // 0x13f6 MovI
	var_3276_bool = 1; // 0x13f7 MovB
	var_3277_int = 1; // 0x13f8 MovI
	func_748(var_3275_int, var_3276_bool, var_3277_int); // 0x13f9 Call
	var_3278_int = 0; var_3279_int = 0; var_3280_object = Obj(); var_3281_object = Obj(); var_3282_object = Obj(); // 0x13fb PushV
	var_3278_int = 7; // 0x13fc MovI
	var_3279_int = var_3265_int; // 0x13fd Mov
	var_3280_object = var_3267_object; // 0x13fe Mov
	var_3281_object = var_3268_object; // 0x13ff Mov
	var_3282_object = var_3269_object; // 0x1400 Mov
	func_655(var_3278_int, var_3279_int, var_3280_object, var_3281_object, var_3282_object); // 0x1401 Call
	var_3283_object = Obj(); var_3284_int = 0; // 0x1403 PushV
	var_3283_object = var_3270_object; // 0x1404 Mov
	var_3284_int = 2; // 0x1405 MovI
	func_229(var_3284_int); // 0x1406 Call
	
Label_5128:
	var_3285_int = 0; var_3286_bool = 0; // 0x1408 PushV
	var_3285_int = 7; // 0x1409 MovI
	var_3286_bool = 0; // 0x140a MovB
	func_714(var_3285_int, var_3286_bool); // 0x140b Call
	var_3287_int = 0; var_3288_int = 0; var_3289_int = 0; // 0x140d PushV
	var_3287_int = 7; // 0x140e MovI
	var_3288_int = var_3265_int; // 0x140f Mov
	var_3289_int = var_3266_int; // 0x1410 Mov
	func_3158(var_3287_int, var_3288_int, var_3289_int); // 0x1411 Call
	return 0; // 0x1413 Return
}


func_9709()
{
	var_4943_object = Obj(); var_4944_object = Obj(); var_4945_object = Obj(); var_4946_object = Obj(); // 0x25ed PushV
	var_4947_object = Obj(); // 0x25ee PushV
	func_10048(var_4947_object); // 0x25ef Call
	var_4945_object = var_4947_object; // 0x25f0 Mov
	var_4948_string = "d8q01MatGotoToyHouse"; // 0x25f2 PushS
	FindMark(var_4946_object, var_4948_string); // 0x25f3 ObjFunc
	var_4949_object = var_4946_object; // 0x25f5 Push
	if(var_4949_object == 0) goto Label_9721; // 0x25f6 JumpB
	Remove(); // 0x25f7 ObjFunc
	
Label_9721:
	var_4950_bool = 0; var_4951_int = 0; // 0x25f9 PushV
	var_4951_int = 182; // 0x25fa MovI
	func_10031(var_4950_bool, var_4951_int); // 0x25fb Call
	return 4; // 0x25fd Return
}


func_4592(var_2051_int, var_2052_int, var_2053_object, var_2054_object, var_2055_object, var_2056_object)
{
	var_2057_int = 0; // 0x11f1 PushI
	var_2058_bool = var_2052_int == var_2057_int; // 0x11f2 Eq
	if(var_2058_bool == 0) goto Label_4620; // 0x11f3 JumpB
	var_2059_int = 0; var_2060_bool = 0; // 0x11f4 PushV
	var_2059_int = 4; // 0x11f5 MovI
	var_2060_bool = 1; // 0x11f6 MovB
	func_731(var_2059_int, var_2060_bool); // 0x11f7 Call
	var_2061_int = 0; var_2062_bool = 0; var_2063_int = 0; // 0x11f9 PushV
	var_2061_int = 4; // 0x11fa MovI
	var_2062_bool = 1; // 0x11fb MovB
	var_2063_int = 1; // 0x11fc MovI
	func_748(var_2061_int, var_2062_bool, var_2063_int); // 0x11fd Call
	var_2064_int = 0; var_2065_int = 0; var_2066_object = Obj(); var_2067_object = Obj(); var_2068_object = Obj(); // 0x11ff PushV
	var_2064_int = 4; // 0x1200 MovI
	var_2065_int = var_2051_int; // 0x1201 Mov
	var_2066_object = var_2053_object; // 0x1202 Mov
	var_2067_object = var_2054_object; // 0x1203 Mov
	var_2068_object = var_2055_object; // 0x1204 Mov
	func_576(var_2064_int, var_2065_int, var_2066_object, var_2067_object, var_2068_object); // 0x1205 Call
	var_2069_object = Obj(); var_2070_int = 0; // 0x1207 PushV
	var_2069_object = var_2056_object; // 0x1208 Mov
	var_2070_int = 1; // 0x1209 MovI
	func_229(var_2070_int); // 0x120a Call
	
Label_4620:
	var_2071_int = 0; var_2072_bool = 0; // 0x120c PushV
	var_2071_int = 4; // 0x120d MovI
	var_2072_bool = 0; // 0x120e MovB
	func_714(var_2071_int, var_2072_bool); // 0x120f Call
	var_2073_int = 0; var_2074_int = 0; var_2075_int = 0; // 0x1211 PushV
	var_2073_int = 4; // 0x1212 MovI
	var_2074_int = var_2051_int; // 0x1213 Mov
	var_2075_int = var_2052_int; // 0x1214 Mov
	func_2310(var_2073_int, var_2074_int, var_2075_int); // 0x1215 Call
	return 0; // 0x1217 Return
}


func_8178(var_4779_int)
{
	var_4780_int = 0; var_4781_int = 0; // 0x1ff2 PushV
	var_4782_int = 14531; // 0x1ff3 PushI
	var_4783_int = 14530; // 0x1ff4 PushI
	AddMessage(var_4782_int, var_4783_int, var_4781_int); // 0x1ff5 Func
	var_4784_string = "player_mail"; // 0x1ff7 PushS
	var_4785_int = 1; // 0x1ff8 PushI
	SetVariable(var_4784_string, var_4785_int); // 0x1ff9 Func
	var_4779_int = var_4781_int; // 0x1ffb Mov
	return 2; // 0x1ffc Return
}


func_4086(var_2897_int, var_2898_int, var_2899_object, var_2900_object, var_2901_object, var_2902_object)
{
	var_2903_int = 0; // 0xff7 PushI
	var_2904_bool = var_2898_int == var_2903_int; // 0xff8 Eq
	if(var_2904_bool == 0) goto Label_4114; // 0xff9 JumpB
	var_2905_int = 0; var_2906_bool = 0; // 0xffa PushV
	var_2905_int = 1; // 0xffb MovI
	var_2906_bool = 1; // 0xffc MovB
	func_731(var_2905_int, var_2906_bool); // 0xffd Call
	var_2907_int = 0; var_2908_bool = 0; var_2909_int = 0; // 0xfff PushV
	var_2907_int = 1; // 0x1000 MovI
	var_2908_bool = 1; // 0x1001 MovB
	var_2909_int = 1; // 0x1002 MovI
	func_748(var_2907_int, var_2908_bool, var_2909_int); // 0x1003 Call
	var_2910_int = 0; var_2911_int = 0; var_2912_object = Obj(); var_2913_object = Obj(); var_2914_object = Obj(); // 0x1005 PushV
	var_2910_int = 1; // 0x1006 MovI
	var_2911_int = var_2897_int; // 0x1007 Mov
	var_2912_object = var_2899_object; // 0x1008 Mov
	var_2913_object = var_2900_object; // 0x1009 Mov
	var_2914_object = var_2901_object; // 0x100a Mov
	func_655(var_2910_int, var_2911_int, var_2912_object, var_2913_object, var_2914_object); // 0x100b Call
	var_2915_object = Obj(); var_2916_int = 0; // 0x100d PushV
	var_2915_object = var_2902_object; // 0x100e Mov
	var_2916_int = 2; // 0x100f MovI
	func_229(var_2916_int); // 0x1010 Call
	
Label_4114:
	var_2917_int = 0; var_2918_bool = 0; // 0x1012 PushV
	var_2917_int = 1; // 0x1013 MovI
	var_2918_bool = 0; // 0x1014 MovB
	func_714(var_2917_int, var_2918_bool); // 0x1015 Call
	var_2919_int = 0; var_2920_int = 0; var_2921_int = 0; // 0x1017 PushV
	var_2919_int = 1; // 0x1018 MovI
	var_2920_int = var_2897_int; // 0x1019 Mov
	var_2921_int = var_2898_int; // 0x101a Mov
	func_3685(var_2919_int, var_2920_int, var_2921_int); // 0x101b Call
	return 0; // 0x101d Return
}


func_7162(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0x1bfa PushV
	var_11_bool = 0; // 0x1bfb PushV
	var_11_bool = 0; // 0x1bfc MovB
	var_12_int = 16384; // 0x1bfd PushI
	var_13_bool = var_3_int > var_12_int; // 0x1bfe GT
	if(var_13_bool == 0) goto Label_7172; // 0x1bff JumpB
	var_14_int = 16396; // 0x1c00 PushI
	var_15_bool = var_3_int < var_14_int; // 0x1c01 LT
	if(var_15_bool == 0) goto Label_7172; // 0x1c02 JumpB
	var_11_bool = 1; // 0x1c03 MovB
	
Label_7172:
	if(var_11_bool == 0) goto Label_7181; // 0x1c04 JumpB
	var_16_int = 16384; // 0x1c05 PushI
	var_8_int = var_3_int - var_16_int; // 0x1c06 Sub2
	var_17_int = 0; // 0x1c07 PushV
	var_17_int = var_8_int; // 0x1c08 Mov
	func_11454(var_17_int); // 0x1c09 Call
	var_2_bool = 1; // 0x1c0b MovB
	return 6; // 0x1c0c Return
	
Label_7181:
	var_180_bool = 0; // 0x1c0d PushV
	var_180_bool = 0; // 0x1c0e MovB
	var_181_int = 32768; // 0x1c0f PushI
	var_182_bool = var_3_int > var_181_int; // 0x1c10 GT
	if(var_182_bool == 0) goto Label_7190; // 0x1c11 JumpB
	var_183_int = 33056; // 0x1c12 PushI
	var_184_bool = var_3_int < var_183_int; // 0x1c13 LT
	if(var_184_bool == 0) goto Label_7190; // 0x1c14 JumpB
	var_180_bool = 1; // 0x1c15 MovB
	
Label_7190:
	if(var_180_bool == 0) goto Label_7206; // 0x1c16 JumpB
	var_185_int = 32768; // 0x1c17 PushI
	var_186_int = var_3_int - var_185_int; // 0x1c18 Sub
	var_187_int = 24; // 0x1c19 PushI
	var_9_int = var_186_int / var_186_int; // 0x1c1a Div2
	var_188_int = 32768; // 0x1c1b PushI
	var_189_int = var_3_int - var_188_int; // 0x1c1c Sub
	var_190_int = 24; // 0x1c1d PushI
	var_10_int = var_189_int % var_190_int; // 0x1c1e Mod2
	var_191_int = 0; var_192_int = 0; // 0x1c1f PushV
	var_191_int = var_9_int; // 0x1c20 Mov
	var_192_int = var_10_int; // 0x1c21 Mov
	func_7280(var_191_int, var_192_int); // 0x1c22 Call
	var_2_bool = 1; // 0x1c24 MovB
	return 6; // 0x1c25 Return
	
Label_7206:
	var_2_bool = 0; // 0x1c26 MovB
	return 6; // 0x1c27 Return
}


func_8189(var_4361_int)
{
	var_4362_int = 0; var_4363_int = 0; // 0x1ffd PushV
	var_4364_int = 15493; // 0x1ffe PushI
	var_4365_int = 15492; // 0x1fff PushI
	AddMessage(var_4364_int, var_4365_int, var_4363_int); // 0x2000 Func
	var_4366_string = "player_mail"; // 0x2002 PushS
	var_4367_int = 1; // 0x2003 PushI
	SetVariable(var_4366_string, var_4367_int); // 0x2004 Func
	var_4361_int = var_4363_int; // 0x2006 Mov
	return 2; // 0x2007 Return
}


func_1022(var_1562_float, var_1563_int)
{
	var_1564_int = 1; // 0x3ff PushI
	var_1565_int = var_1563_int + var_1564_int; // 0x400 Add
	var_1566_int = 1; // 0x401 PushI
	var_1567_bool = var_1565_int == var_1566_int; // 0x402 Eq
	if(var_1567_bool == 0) goto Label_1031; // 0x403 JumpB
	var_1562_float = 0; // 0x404 MovI
	return 0; // 0x405 Return
	
Label_1031:
	var_1568_int = 1; // 0x407 PushI
	var_1569_int = var_1563_int + var_1568_int; // 0x408 Add
	var_1570_int = 2; // 0x409 PushI
	var_1571_bool = var_1569_int == var_1570_int; // 0x40a Eq
	if(var_1571_bool == 0) goto Label_1039; // 0x40b JumpB
	var_1562_float = 0; // 0x40c MovI
	return 0; // 0x40d Return
	
Label_1039:
	var_1572_int = 1; // 0x40f PushI
	var_1573_int = var_1563_int + var_1572_int; // 0x410 Add
	var_1574_int = 3; // 0x411 PushI
	var_1575_bool = var_1573_int == var_1574_int; // 0x412 Eq
	if(var_1575_bool == 0) goto Label_1047; // 0x413 JumpB
	var_1562_float = 0; // 0x414 MovI
	return 0; // 0x415 Return
	
Label_1047:
	var_1576_int = 1; // 0x417 PushI
	var_1577_int = var_1563_int + var_1576_int; // 0x418 Add
	var_1578_int = 4; // 0x419 PushI
	var_1579_bool = var_1577_int == var_1578_int; // 0x41a Eq
	if(var_1579_bool == 0) goto Label_1055; // 0x41b JumpB
	var_1562_float = 0; // 0x41c MovI
	return 0; // 0x41d Return
	
Label_1055:
	var_1580_int = 1; // 0x41f PushI
	var_1581_int = var_1563_int + var_1580_int; // 0x420 Add
	var_1582_int = 5; // 0x421 PushI
	var_1583_bool = var_1581_int == var_1582_int; // 0x422 Eq
	if(var_1583_bool == 0) goto Label_1063; // 0x423 JumpB
	var_1562_float = 2; // 0x424 MovI
	return 0; // 0x425 Return
	
Label_1063:
	var_1584_int = 1; // 0x427 PushI
	var_1585_int = var_1563_int + var_1584_int; // 0x428 Add
	var_1586_int = 6; // 0x429 PushI
	var_1587_bool = var_1585_int == var_1586_int; // 0x42a Eq
	if(var_1587_bool == 0) goto Label_1071; // 0x42b JumpB
	var_1562_float = 2; // 0x42c MovI
	return 0; // 0x42d Return
	
Label_1071:
	var_1588_int = 1; // 0x42f PushI
	var_1589_int = var_1563_int + var_1588_int; // 0x430 Add
	var_1590_int = 7; // 0x431 PushI
	var_1591_bool = var_1589_int == var_1590_int; // 0x432 Eq
	if(var_1591_bool == 0) goto Label_1079; // 0x433 JumpB
	var_1562_float = 1; // 0x434 MovI
	return 0; // 0x435 Return
	
Label_1079:
	var_1592_int = 1; // 0x437 PushI
	var_1593_int = var_1563_int + var_1592_int; // 0x438 Add
	var_1594_int = 8; // 0x439 PushI
	var_1595_bool = var_1593_int == var_1594_int; // 0x43a Eq
	if(var_1595_bool == 0) goto Label_1087; // 0x43b JumpB
	var_1562_float = 1; // 0x43c MovI
	return 0; // 0x43d Return
	
Label_1087:
	var_1596_int = 1; // 0x43f PushI
	var_1597_int = var_1563_int + var_1596_int; // 0x440 Add
	var_1598_int = 9; // 0x441 PushI
	var_1599_bool = var_1597_int == var_1598_int; // 0x442 Eq
	if(var_1599_bool == 0) goto Label_1095; // 0x443 JumpB
	var_1562_float = 1; // 0x444 MovI
	return 0; // 0x445 Return
	
Label_1095:
	var_1600_int = 1; // 0x447 PushI
	var_1601_int = var_1563_int + var_1600_int; // 0x448 Add
	var_1602_int = 10; // 0x449 PushI
	var_1603_bool = var_1601_int == var_1602_int; // 0x44a Eq
	if(var_1603_bool == 0) goto Label_1103; // 0x44b JumpB
	var_1562_float = 1; // 0x44c MovI
	return 0; // 0x44d Return
	
Label_1103:
	var_1604_int = 1; // 0x44f PushI
	var_1605_int = var_1563_int + var_1604_int; // 0x450 Add
	var_1606_int = 11; // 0x451 PushI
	var_1607_bool = var_1605_int == var_1606_int; // 0x452 Eq
	if(var_1607_bool == 0) goto Label_1110; // 0x453 JumpB
	var_1562_float = 1; // 0x454 MovI
	return 0; // 0x455 Return
	
Label_1110:
	var_1562_float = 0; // 0x456 MovI
	return 0; // 0x457 Return
}


func_511(var_1431_string, var_1433_string, var_1434_string)
{
	var_1440_object = Obj(); var_1441_int = 0; var_1442_bool = 0; var_1443_cvector = CVector(0,0,0); var_1444_cvector = CVector(0,0,0); var_1445_object = Obj(); var_1446_object = Obj(); var_1447_int = 0; var_1448_bool = 0; var_1449_cvector = CVector(0,0,0); var_1450_cvector = CVector(0,0,0); var_1451_object = Obj(); // 0x1ff PushV
	GetMainOutdoorScene(var_1446_object); // 0x200 Func
	var_1447_int = 0; // 0x202 MovI
	
Label_515:
	var_1452_int = 1; // 0x203 PushI
	var_1453_int = var_1447_int + var_1452_int; // 0x204 Add
	var_1454_int = var_1431_string + var_1453_int; // 0x205 Add
	GetLocator(var_1454_int, var_1448_bool, var_1449_cvector, var_1450_cvector); // 0x206 ObjFunc
	var_1455_bool = var_1448_bool == 0; // 0x208 Not
	if(var_1455_bool == 0) goto Label_523; // 0x209 JumpB
	goto Label_531; // 0x20a Jump
	
Label_531:
	return 12; // 0x213 Return
	
Label_523:
	AddStationaryActor(var_1451_object, var_1449_cvector, var_1450_cvector, var_1433_string, var_1434_string); // 0x20b ObjFunc
	add(var_1451_object); // 0x20d ObjFunc
	var_1451_object = 0; // 0x20f SetNull
	var_1456_int = 1; // 0x210 PushI
	var_1447_int = var_1447_int + var_1456_int; // 0x211 Add2
	goto Label_515; // 0x212 Jump
}


