GlobalVarCount = 0

Strings:
	W:Neutral
	W:all
	W:idle
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:Updating salesman
	W:clothes
	W:weapon
	W:food
	W:medcine
	W:other
	W:rep_threshold
	W:player
	W:head
	A:GetPosition
	W:HasProperty
	A:HasProperty
	A:GetEyesHeight
	A:AddItem
	W:drapery
	W:halfboot_repel
	W:glove_disp
	W:glove
	W:cloak_repel
	W:mask
	W:raincoat_repel
	W:glove_army
	W:boot_army
	W:balahon
	W:tourniquet
	W:alpha_pills
	W:meradorm
	W:neomicin
	W:novocaine
	W:gamma_pills
	W:beta_pills
	W:packet
	W:morfin
	W:Scalpel
	W:monomicin
	W:etorfin
	W:feromicin
	W:delta_pills
	W:lemon
	W:rusk
	W:dried_fish
	W:smoked_meat
	W:bread
	W:egg
	W:vegetables
	W:milk
	W:dried_meat
	W:fresh_fish
	W:fresh_meat
	W:funduk
	W:peanut
	W:walnut
	W:hook
	W:needle
	W:kerosene
	W:rifle_ammo
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
	W:reputation
	A:GetProperty
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c00650000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565005365744d65737361676500436c6561725265706c696573004164645265706c79005500700064006100740069006e0067002000730061006c00650073006d0061006e00000063006c006f007400680065007300000077006500610070006f006e00000066006f006f00640000006d0065006400630069006e00650000006f00740068006500720000007200650070005f007400680072006500730068006f006c006400000070006c006100790065007200000068006500610064000000476574506f736974696f6e00480061007300500072006f0070006500720074007900000048617350726f70657274790047657445796573486569676874004164644974656d0064007200610070006500720079000000680061006c00660062006f006f0074005f0072006500700065006c00000067006c006f00760065005f006400690073007000000067006c006f0076006500000063006c006f0061006b005f0072006500700065006c0000006d00610073006b0000007200610069006e0063006f00610074005f0072006500700065006c00000067006c006f00760065005f00610072006d007900000062006f006f0074005f00610072006d0079000000620061006c00610068006f006e00000074006f00750072006e0069007100750065007400000061006c007000680061005f00700069006c006c00730000006d0065007200610064006f0072006d0000006e0065006f006d006900630069006e0000006e006f0076006f006300610069006e0065000000670061006d006d0061005f00700069006c006c007300000062006500740061005f00700069006c006c00730000007000610063006b006500740000006d006f007200660069006e0000005300630061006c00700065006c0000006d006f006e006f006d006900630069006e000000650074006f007200660069006e0000006600650072006f006d006900630069006e000000640065006c00740061005f00700069006c006c00730000006c0065006d006f006e0000007200750073006b000000640072006900650064005f006600690073006800000073006d006f006b00650064005f006d006500610074000000620072006500610064000000650067006700000076006500670065007400610062006c006500730000006d0069006c006b000000640072006900650064005f006d006500610074000000660072006500730068005f0066006900730068000000660072006500730068005f006d006500610074000000660075006e00640075006b0000007000650061006e00750074000000770061006c006e0075007400000068006f006f006b0000006e006500650064006c00650000006b00650072006f00730065006e00650000007200690066006c0065005f0061006d006d006f0000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000720065007000750074006100740069006f006e00000047657450726f706572747900

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	Hold (0 args)
	StopGroup0 (0 args)
	Trace (1 args)
	GetProperty (2 args)
	ClearSubContainer (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	AddItem (3 args)
	AddItem (4 args)
	self (1 args)
	GetGameTime (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)

RunOp = 0x103
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc2 Vars = (int, int)
	GTASK_3 Vars = (int, int, bool, bool, object, bool, bool, bool, bool, bool, float, int) Params = 0
		EVENT_6 Op = 0x117 Vars = ()
		EVENT_5 Op = 0x11d Vars = ()
		EVENT_0 Op = 0x120 Vars = (object)
		EVENT_7 Op = 0x20e Vars = (int)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x598

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral" // @poff=0
0xa: Call2 0x332

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all") // @poff=16
0x12: Push("idle") // @poff=24
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x598

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a: PushEmpty(bool, object, float)
0x2b: Stack[-12] = Stack[-2]
0x2c: Stack[-1] = (float) 70.0
0x2d: Call2 0x2a2

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x592

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x590

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x594

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x596

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x567

0x4b: Pop(0)
0x4c: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x4d: Pop(1)
0x4e: Stack[-2] = (int) -1
0x4f: @ IsOverrideActive(Stack[-3])
0x50: Pop(0)
0x51: Push(Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-10] = (int) -2
0x54: Return(); Pop(8)

0x55: @ DoDialog(Stack[-4])
0x56: Pop(0)
0x57: PushEmpty(object, object)
0x58: Stack[-11] = Stack[-2]
0x59: Stack[-6] = Stack[-1]
0x5a: Push(-2, 4); TaskCall(2)
0x5b: Call2 0x72

0x5c: Pop(-2, 4); TaskReturn
0x5d: Pop(2)
0x5e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x5f: Pop(0)
0x60: Pop(0); Push((bool) Stack[-1] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: @ sync()
0x63: Pop(0)
0x64: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x65: Pop(0)
0x66: GOTO 0x60

0x67: PushEmpty(object)
0x68: Stack[-10] = Stack[-1]
0x69: Call2 0x2e6

0x6a: Pop(1)
0x6b: @ StopDialog(Stack[-4])
0x6c: Pop(0)
0x6d: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x6e: Pop(0)
0x6f: Stack[-2] = Stack[-10]
0x70: Return(); Pop(8)

0x71: Stack[-4] = 0
0x72: PushEmpty()
0x73: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x76: Push((int) 1)
0x77: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=0
0x7a: Call2 0xac

0x7b: Pop(1)
0x7c: Push((int) 520509)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=134
0x80: Pop(0)
0x81: Push((int) 524384)
0x82: Push((int) 25709)
0x83: Push((int) 25708)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x85: Pop(3)
0x86: Push((int) 520510)
0x87: Push((int) -1)
0x88: Push((int) 21713)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x8a: Pop(3)
0x8b: GOTO 0x8e

0x8c: Return(); Pop(0)

0x8d: GOTO 0x76

0x8e: PushEmpty(bool)
0x8f: Call2 0x598

0x90: Pop(0)
0x91: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x92: @ lshWaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x99: Call2 0x332

0x9a: Pop(1)
0x9b: GOTO 0x92

0x9c: GOTO 0xab

0x9d: Push("all") // @poff=16
0x9e: Push("idle") // @poff=24
0x9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: @ WaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: Push("all") // @poff=16
0xa7: Push("idle") // @poff=24
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: GOTO 0xa1

0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(bool)
0xae: Call2 0x598

0xaf: Pop(0)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: PushEmpty(string, bool)
0xb7: Stack[-3] = Stack[-2]
0xb8: Push("") // @poff=13
0xb9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-1] = (bool) 0
0xbc: GOTO 0xbe

0xbd: Stack[-1] = (bool) 1
0xbe: Call2 0x339

0xbf: Pop(2)
0xc0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Push((int) 1)
0xc4: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xc5: PushEmpty()
0xc6: Call2 0x34a

0xc7: Pop(0)
0xc8: Push((int) 21712)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral" // @poff=0
0xcd: Call2 0xac

0xce: Pop(1)
0xcf: Push((int) 520509)
0xd0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xd1: Pop(1)
0xd2: @@@ ClearReplies(); Obj=0 // @poff=134
0xd3: Pop(0)
0xd4: Push((int) 524384)
0xd5: Push((int) 25709)
0xd6: Push((int) 25708)
0xd7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xd8: Pop(3)
0xd9: Push((int) 520510)
0xda: Push((int) -1)
0xdb: Push((int) 21713)
0xdc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 25709)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral" // @poff=0
0xe4: Call2 0xac

0xe5: Pop(1)
0xe6: Push((int) 524385)
0xe7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xe8: Pop(1)
0xe9: @@@ ClearReplies(); Obj=0 // @poff=134
0xea: Pop(0)
0xeb: Push((int) 524387)
0xec: Push((int) -1)
0xed: Push((int) 25711)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xef: Pop(3)
0xf0: Push((int) 524386)
0xf1: Push((int) -1)
0xf2: Push((int) 25710)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x598

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xc3

0x102: Return(); Pop(0)

0x103: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x104: PushEmpty()
0x105: Call2 0x14d

0x106: Pop(0)
0x107: PushEmpty(bool)
0x108: Call2 0x29d

0x109: Pop(0)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: @ Hold()
0x10d: Pop(0)
0x10e: Push((bool) 1)
0x10f: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x110: PushEmpty(float, float)
0x111: Stack[-2] = (int) 300
0x112: Stack[-1] = (int) 100
0x113: Call2 0x1e4

0x114: Pop(2)
0x115: GOTO 0x10e

0x116: Return(); Pop(0)

0x117: PushEmpty()
0x118: Call2 0x225

0x119: Pop(0)
0x11a: @ Hold()
0x11b: Pop(0)
0x11c: Return(); Pop(0)

0x11d: @ StopGroup0()
0x11e: Pop(0)
0x11f: Return(); Pop(0)

0x120: PushEmpty()
0x121: PushEmpty(float, object)
0x122: Stack[-3] = Stack[-1]
0x123: Call2 0x59a

0x124: Pop(1)
0x125: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] > Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x127: PushEmpty(int, object)
0x128: Stack[-3] = Stack[-1]
0x129: Push(-2, 1); TaskCall(1)
0x12a: Call2 0x28

0x12b: Pop(-2, 1); TaskReturn
0x12c: Pop(2)
0x12d: Return(); Pop(0)

0x12e: PushEmpty(int)
0x12f: Call2 0x3ab

0x130: Pop(0)
0x131: Pop(1); Push((bool) Stack[11 + Tasks[-1].StackPointer] != Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x133: Push("Updating salesman") // @poff=156
0x134: @ Trace(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(int)
0x137: Call2 0x3ab

0x138: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x139: Pop(1)
0x13a: PushEmpty()
0x13b: Call2 0x1a4

0x13c: Pop(0)
0x13d: PushEmpty(bool, object)
0x13e: Stack[-3] = Stack[-1]
0x13f: Call2 0x2f7

0x140: Pop(1)
0x141: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x142: PushEmpty(object)
0x143: Stack[-2] = Stack[-1]
0x144: Push(-1, 1); TaskCall(0)
0x145: Call2 0x0

0x146: Pop(-1, 1); TaskReturn
0x147: Pop(1)
0x148: PushEmpty(object)
0x149: Stack[-2] = Stack[-1]
0x14a: Call2 0x32e

0x14b: Pop(1)
0x14c: Return(); Pop(0)

0x14d: PushEmpty(int, int, int, int, int, float, int, int, int, int, int, float)
0x14e: PushEmpty(bool, object, string)
0x14f: PushEmpty(object)
0x150: Call2 0x396

0x151: Stack[-1] = Stack[-3]
0x152: Pop(1)
0x153: Stack[-1] = "clothes" // @poff=192
0x154: Call2 0x291

0x155: Pop(2)
0x156: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x157: Push("clothes") // @poff=192
0x158: @ GetProperty(Stack[-1], Stack[-7])
0x159: Pop(1)
0x15a: PushEmpty(bool, object, string)
0x15b: PushEmpty(object)
0x15c: Call2 0x396

0x15d: Stack[-1] = Stack[-3]
0x15e: Pop(1)
0x15f: Stack[-1] = "weapon" // @poff=208
0x160: Call2 0x291

0x161: Pop(2)
0x162: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x163: Push("weapon") // @poff=208
0x164: @ GetProperty(Stack[-1], Stack[-6])
0x165: Pop(1)
0x166: PushEmpty(bool, object, string)
0x167: PushEmpty(object)
0x168: Call2 0x396

0x169: Stack[-1] = Stack[-3]
0x16a: Pop(1)
0x16b: Stack[-1] = "food" // @poff=222
0x16c: Call2 0x291

0x16d: Pop(2)
0x16e: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16f: Push("food") // @poff=222
0x170: @ GetProperty(Stack[-1], Stack[-5])
0x171: Pop(1)
0x172: PushEmpty(bool, object, string)
0x173: PushEmpty(object)
0x174: Call2 0x396

0x175: Stack[-1] = Stack[-3]
0x176: Pop(1)
0x177: Stack[-1] = "medcine" // @poff=232
0x178: Call2 0x291

0x179: Pop(2)
0x17a: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17b: Push("medcine") // @poff=232
0x17c: @ GetProperty(Stack[-1], Stack[-4])
0x17d: Pop(1)
0x17e: PushEmpty(bool, object, string)
0x17f: PushEmpty(object)
0x180: Call2 0x396

0x181: Stack[-1] = Stack[-3]
0x182: Pop(1)
0x183: Stack[-1] = "other" // @poff=248
0x184: Call2 0x291

0x185: Pop(2)
0x186: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x187: Push("other") // @poff=248
0x188: @ GetProperty(Stack[-1], Stack[-3])
0x189: Pop(1)
0x18a: PushEmpty(bool, object, string)
0x18b: PushEmpty(object)
0x18c: Call2 0x396

0x18d: Stack[-1] = Stack[-3]
0x18e: Pop(1)
0x18f: Stack[-1] = "rep_threshold" // @poff=260
0x190: Call2 0x291

0x191: Pop(2)
0x192: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x193: Push("rep_threshold") // @poff=260
0x194: @ GetProperty(Stack[-1], Stack[-2])
0x195: Pop(1)
0x196: GOTO 0x198

0x197: Stack[-1] = (float) 0.33000001311302185
0x198: Push((int) 0)
0x199: Stack[5 + Tasks[-1].StackPointer] = Stack[-7] != Stack[-1]; Pop(1);
0x19a: Push((int) 0)
0x19b: Stack[6 + Tasks[-1].StackPointer] = Stack[-6] != Stack[-1]; Pop(1);
0x19c: Push((int) 0)
0x19d: Stack[7 + Tasks[-1].StackPointer] = Stack[-5] != Stack[-1]; Pop(1);
0x19e: Push((int) 0)
0x19f: Stack[8 + Tasks[-1].StackPointer] = Stack[-4] != Stack[-1]; Pop(1);
0x1a0: Push((int) 0)
0x1a1: Stack[9 + Tasks[-1].StackPointer] = Stack[-3] != Stack[-1]; Pop(1);
0x1a2: Stack[10 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(12)

0x1a4: PushEmpty(int, int)
0x1a5: PushEmpty(int)
0x1a6: Call2 0x3ab

0x1a7: Stack[-1] = Stack[-2]
0x1a8: Pop(1)
0x1a9: Push((int) 0)
0x1aa: @ ClearSubContainer(Stack[-1])
0x1ab: Pop(1)
0x1ac: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1ae: PushEmpty(bool, object, int, int)
0x1af: PushEmpty(object)
0x1b0: Call2 0x396

0x1b1: Stack[-1] = Stack[-4]
0x1b2: Pop(1)
0x1b3: Stack[-5] = Stack[-2]
0x1b4: Stack[-1] = (int) 1
0x1b5: Call2 0x3b4

0x1b6: Pop(4)
0x1b7: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b9: PushEmpty(bool, object, int, int)
0x1ba: PushEmpty(object)
0x1bb: Call2 0x396

0x1bc: Stack[-1] = Stack[-4]
0x1bd: Pop(1)
0x1be: Stack[-5] = Stack[-2]
0x1bf: Stack[-1] = (int) 0
0x1c0: Call2 0x3b4

0x1c1: Pop(4)
0x1c2: Push( Stack[7 + Tasks[-1].StackPointer] )
0x1c3: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c4: PushEmpty(bool, object, int, int)
0x1c5: PushEmpty(object)
0x1c6: Call2 0x396

0x1c7: Stack[-1] = Stack[-4]
0x1c8: Pop(1)
0x1c9: Stack[-5] = Stack[-2]
0x1ca: Stack[-1] = (int) 3
0x1cb: Call2 0x3b4

0x1cc: Pop(4)
0x1cd: Push( Stack[8 + Tasks[-1].StackPointer] )
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1cf: PushEmpty(bool, object, int, int)
0x1d0: PushEmpty(object)
0x1d1: Call2 0x396

0x1d2: Stack[-1] = Stack[-4]
0x1d3: Pop(1)
0x1d4: Stack[-5] = Stack[-2]
0x1d5: Stack[-1] = (int) 2
0x1d6: Call2 0x3b4

0x1d7: Pop(4)
0x1d8: Push( Stack[9 + Tasks[-1].StackPointer] )
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1da: PushEmpty(bool, object, int, int)
0x1db: PushEmpty(object)
0x1dc: Call2 0x396

0x1dd: Stack[-1] = Stack[-4]
0x1de: Pop(1)
0x1df: Stack[-5] = Stack[-2]
0x1e0: Stack[-1] = (int) 4
0x1e1: Call2 0x3b4

0x1e2: Pop(4)
0x1e3: Return(); Pop(2)

0x1e4: PushEmpty()
0x1e5: PushEmpty(bool)
0x1e6: Call2 0x29d

0x1e7: Pop(0)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Return(); Pop(0)

0x1eb: Push("player") // @poff=288
0x1ec: @ FindActor(Stack[-4]T, Stack[-1])
0x1ed: Pop(1)
0x1ee: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ef: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f0: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1f1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f2: Push((int) 10)
0x1f3: Push((float)1.0)
0x1f4: @ SetTimer(Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: PushEmpty()
0x1f7: Call2 0x233

0x1f8: Pop(0)
0x1f9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fb: Push((int) 10)
0x1fc: @ KillTimer(Stack[-1])
0x1fd: Pop(1)
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty(float, float)
0x200: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-3] = (bool) 0
0x203: Return(); Pop(2)

0x204: PushEmpty(float, object)
0x205: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x206: Call2 0x289

0x207: Pop(1)
0x208: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x209: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x20c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x20d: Return(); Pop(2)

0x20e: PushEmpty()
0x20f: Push((int) 10)
0x210: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x212: PushEmpty(bool)
0x213: Call2 0x1ff

0x214: Pop(0)
0x215: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x216: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x218: PushEmpty(object)
0x219: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x21a: Call2 0x33f

0x21b: Pop(1)
0x21c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x21d: GOTO 0x224

0x21e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21f: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x220: Push("head") // @poff=302
0x221: @ UnlookAsync(Stack[-1])
0x222: Pop(1)
0x223: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x224: Return(); Pop(0)

0x225: PushEmpty()
0x226: Call2 0x284

0x227: Pop(0)
0x228: Push((int) 10)
0x229: @ KillTimer(Stack[-1])
0x22a: Pop(1)
0x22b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22d: Push("head") // @poff=302
0x22e: @ UnlookAsync(Stack[-1])
0x22f: Pop(1)
0x230: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x231: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x232: Return(); Pop(0)

0x233: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x234: @ WaitForAnimEnd()
0x235: Pop(0)
0x236: PushEmpty(bool)
0x237: Call2 0x29d

0x238: Pop(0)
0x239: Pop(1); Push((bool) Stack[-1] == 0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Return(); Pop(14)

0x23c: PushEmpty(int)
0x23d: Call2 0x57f

0x23e: Stack[-1] = Stack[-8]
0x23f: Pop(1)
0x240: Stack[-6] = (int) 0
0x241: PushEmpty(bool)
0x242: Stack[-1] = (bool) 0
0x243: Push((int) 5)
0x244: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x246: PushEmpty(bool)
0x247: Call2 0x29d

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: Stack[-1] = (bool) 1
0x24b: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x24c: Push((int) 3)
0x24d: @ irand(Stack[-6], Stack[-1])
0x24e: Pop(1)
0x24f: Push((int) 0)
0x250: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x252: Push(Stack[-7])
0x253: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x254: @ irand(Stack[-4], Stack[-7])
0x255: Pop(0)
0x256: Push("all") // @poff=16
0x257: PushEmpty(string, int)
0x258: Stack[-7] = Stack[-1]
0x259: Call2 0x578

0x25a: Pop(1)
0x25b: @ PlayAnimation(Stack[-2], Stack[-1])
0x25c: Pop(2)
0x25d: @ WaitForAnimEnd(Stack[-3])
0x25e: Pop(0)
0x25f: Pop(0); Push((bool) Stack[-3] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x27f

0x262: GOTO 0x274

0x263: Push((int) 1)
0x264: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x266: Push((int) 4)
0x267: @ rand(Stack[-3], Stack[-1])
0x268: Pop(1)
0x269: Push((int) 1)
0x26a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x26b: @ Sleep(Stack[-1], Stack[-2])
0x26c: Pop(1)
0x26d: Pop(0); Push((bool) Stack[-1] == 0)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x27f

0x270: GOTO 0x274

0x271: Push(Stack[-6])
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: GOTO 0x27f

0x274: PushEmpty(bool)
0x275: Call2 0x282

0x276: Pop(0)
0x277: Pop(1); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x27f

0x27a: @ ResetAAS()
0x27b: Pop(0)
0x27c: Push((int) 1)
0x27d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27e: GOTO 0x241

0x27f: @ ResetAAS()
0x280: Pop(0)
0x281: Return(); Pop(14)

0x282: Stack[-1] = (bool) 1
0x283: Return(); Pop(0)

0x284: @ StopAnimation()
0x285: Pop(0)
0x286: @ StopGroup0()
0x287: Pop(0)
0x288: Return(); Pop(0)

0x289: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28a: @ GetPosition(Stack[-3])
0x28b: Pop(0)
0x28c: @@ GetPosition(Stack[-2]); Obj=7 // @poff=312
0x28d: Pop(0)
0x28e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x28f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x290: Return(); Pop(6)

0x291: PushEmpty(bool, bool)
0x292: Push("HasProperty") // @poff=324
0x293: Push((int) 2)
0x294: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x295: Pop(1); Push((bool) Stack[-1] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: Stack[-5] = (bool) 0
0x298: Return(); Pop(2)

0x299: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=348
0x29a: Pop(0)
0x29b: Stack[-1] = Stack[-5]
0x29c: Return(); Pop(2)

0x29d: PushEmpty(bool, bool)
0x29e: @ IsLoaded(Stack[-1])
0x29f: Pop(0)
0x2a0: Stack[-1] = Stack[-3]
0x2a1: Return(); Pop(2)

0x2a2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a3: @@ GetPosition(Stack[-8]); Obj=20 // @poff=312
0x2a4: Pop(0)
0x2a5: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=360
0x2a6: Pop(0)
0x2a7: Push(CvectorIndex(Stack[-8], 1))
0x2a8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2aa: @ GetPosition(Stack[-7])
0x2ab: Pop(0)
0x2ac: @ GetEyesHeight(Stack[-9])
0x2ad: Pop(0)
0x2ae: Push(CvectorIndex(Stack[-7], 1))
0x2af: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b2: Push(CvectorIndex(Stack[-6], 1))
0x2b3: Stack[-1] = (int) 0
0x2b4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2b5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b6: Pop(1); Push(Sqrt(Stack[-1]))
0x2b7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b8: Stack[-5] = -Stack[-6]; Pop(0);
0x2b9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ba: PushEmpty(cvector, cvector)
0x2bb: Push([0.0, 1.0, 0.0])
0x2bc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2bd: Call2 0x39c

0x2be: Pop(1)
0x2bf: Push((int) 25)
0x2c0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c2: Push([0.0, 10.0, 0.0])
0x2c3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2c4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2c5: @ IsOverrideActive(Stack[-2])
0x2c6: Pop(0)
0x2c7: Push(Stack[-2])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: Stack[-21] = (bool) 0
0x2ca: Return(); Pop(18)

0x2cb: @ StopWorld()
0x2cc: Pop(0)
0x2cd: @ CameraTransit(Stack[-3], Stack[-5])
0x2ce: Pop(0)
0x2cf: Push(CvectorIndex(Stack[-4], 0))
0x2d0: Push(CvectorIndex(Stack[-5], 2))
0x2d1: @ Rotate(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: PushEmpty(bool)
0x2d4: Call2 0x598

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2e0

0x2d8: Push("head") // @poff=302
0x2d9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2da: Pop(1)
0x2db: Push(Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2dd: Push("head") // @poff=302
0x2de: @ LookAsyncCamera(Stack[-1])
0x2df: Pop(1)
0x2e0: @ CameraWaitForPlayFinish()
0x2e1: Pop(0)
0x2e2: @ ResumeWorld()
0x2e3: Pop(0)
0x2e4: Stack[-21] = (bool) 1
0x2e5: Return(); Pop(18)

0x2e6: PushEmpty(bool, bool)
0x2e7: @ CameraSwitchToNormal()
0x2e8: Pop(0)
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x598

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: GOTO 0x2f6

0x2ee: Push("head") // @poff=302
0x2ef: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f0: Pop(1)
0x2f1: Push(Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: Push("head") // @poff=302
0x2f4: @ UnlookAsync(Stack[-1])
0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty()
0x2f8: PushEmpty(bool, object, float)
0x2f9: Stack[-4] = Stack[-2]
0x2fa: Stack[-1] = (int) 70
0x2fb: Call2 0x2ff

0x2fc: Stack[-3] = Stack[-5]
0x2fd: Pop(3)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x300: @@ GetPosition(Stack[-7]); Obj=18 // @poff=312
0x301: Pop(0)
0x302: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=360
0x303: Pop(0)
0x304: Push(CvectorIndex(Stack[-7], 1))
0x305: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x306: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x307: @ GetPosition(Stack[-6])
0x308: Pop(0)
0x309: @ GetEyesHeight(Stack[-8])
0x30a: Pop(0)
0x30b: Push(CvectorIndex(Stack[-6], 1))
0x30c: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x30d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x30e: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x30f: Push(CvectorIndex(Stack[-5], 1))
0x310: Stack[-1] = (int) 0
0x311: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x312: Pop(0); Push(Stack[-5] | Stack[-5]);
0x313: Pop(1); Push(Sqrt(Stack[-1]))
0x314: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x315: Stack[-4] = -Stack[-5]; Pop(0);
0x316: Pop(0); Push(Stack[-5] * Stack[-17]);
0x317: Push([0.0, 10.0, 0.0])
0x318: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x319: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x31a: @ IsOverrideActive(Stack[-1])
0x31b: Pop(0)
0x31c: Push(Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-19] = (bool) 0
0x31f: Return(); Pop(16)

0x320: @ StopWorld()
0x321: Pop(0)
0x322: @ CameraTransit(Stack[-2], Stack[-4])
0x323: Pop(0)
0x324: Push(CvectorIndex(Stack[-3], 0))
0x325: Push(CvectorIndex(Stack[-4], 2))
0x326: @ Rotate(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: @ CameraWaitForPlayFinish()
0x329: Pop(0)
0x32a: @ ResumeWorld()
0x32b: Pop(0)
0x32c: Stack[-19] = (bool) 1
0x32d: Return(); Pop(16)

0x32e: PushEmpty()
0x32f: @ CameraSwitchToNormal()
0x330: Pop(0)
0x331: Return(); Pop(0)

0x332: PushEmpty(float, float, float, float)
0x333: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x334: Pop(0)
0x335: Push((bool) 0)
0x336: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x337: Pop(1)
0x338: Return(); Pop(4)

0x339: PushEmpty(float, float, float, float)
0x33a: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x33b: Pop(0)
0x33c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x33d: Pop(0)
0x33e: Return(); Pop(4)

0x33f: PushEmpty(float, cvector, float, cvector)
0x340: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=360
0x341: Pop(0)
0x342: Stack[-1] = [0.0, 0.0, 0.0]
0x343: Push(CvectorIndex(Stack[-1], 1))
0x344: Stack[-3] = Stack[-1]
0x345: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x346: Push("head") // @poff=302
0x347: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x348: Pop(1)
0x349: Return(); Pop(4)

0x34a: PushEmpty(bool)
0x34b: Call2 0x598

0x34c: Pop(0)
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: @ lshStopSpeech()
0x34f: Pop(0)
0x350: Return(); Pop(0)

0x351: PushEmpty(bool, bool)
0x352: PushEmpty(bool, int, int)
0x353: Stack[-7] = Stack[-2]
0x354: Stack[-6] = Stack[-1]
0x355: Call2 0x3a6

0x356: Pop(2)
0x357: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x358: Push((int) 0)
0x359: @@ AddItem(Stack[-2], Stack[-6], Stack[-1]); Obj=7 // @poff=374
0x35a: Pop(1)
0x35b: Return(); Pop(2)

0x35c: PushEmpty(int, bool, int, bool)
0x35d: PushEmpty(bool, int, int)
0x35e: Stack[-10] = Stack[-2]
0x35f: Stack[-9] = Stack[-1]
0x360: Call2 0x3a6

0x361: Pop(2)
0x362: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x363: @ irand(Stack[-2], Stack[-5])
0x364: Pop(0)
0x365: Push((int) 0)
0x366: Push((int) 1)
0x367: Pop(1); Push(Stack[-7] + Stack[-1]);
0x368: @@ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1]); Obj=11 // @poff=374
0x369: Pop(2)
0x36a: Return(); Pop(4)

0x36b: PushEmpty(bool, bool)
0x36c: PushEmpty(bool, int, int)
0x36d: Stack[-7] = Stack[-2]
0x36e: Stack[-6] = Stack[-1]
0x36f: Call2 0x3a6

0x370: Pop(2)
0x371: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x372: Push((int) 0)
0x373: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x374: Pop(1)
0x375: Return(); Pop(2)

0x376: PushEmpty(int, bool, int, bool)
0x377: PushEmpty(bool, int, int)
0x378: Stack[-10] = Stack[-2]
0x379: Stack[-9] = Stack[-1]
0x37a: Call2 0x3a6

0x37b: Pop(2)
0x37c: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37d: @ irand(Stack[-2], Stack[-5])
0x37e: Pop(0)
0x37f: Push((int) 0)
0x380: Push((int) 1)
0x381: Pop(1); Push(Stack[-4] + Stack[-1]);
0x382: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x383: Pop(2)
0x384: Return(); Pop(4)

0x385: PushEmpty(int, bool, int, bool)
0x386: PushEmpty(bool, int, int)
0x387: Stack[-11] = Stack[-2]
0x388: Stack[-10] = Stack[-1]
0x389: Call2 0x3a6

0x38a: Pop(2)
0x38b: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x38c: Pop(0); Push(Stack[-5] - Stack[-6]);
0x38d: Push((int) 1)
0x38e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38f: @ irand(Stack[-3], Stack[-1])
0x390: Pop(1)
0x391: Push((int) 0)
0x392: Pop(0); Push(Stack[-3] + Stack[-7]);
0x393: @ AddItem(Stack[-3], Stack[-11], Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: Return(); Pop(4)

0x396: PushEmpty(object, object)
0x397: @ self(Stack[-1])
0x398: Pop(0)
0x399: Stack[-1] = Stack[-3]
0x39a: Return(); Pop(2)

0x39b: Stack[-1] = 0
0x39c: PushEmpty(float, float)
0x39d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x39e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x39f: Push((float)9.999999974752427e-07)
0x3a0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-4] = [0.0, 0.0, 0.0]
0x3a3: Return(); Pop(2)

0x3a4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3a5: Return(); Pop(2)

0x3a6: PushEmpty(int, int)
0x3a7: @ irand(Stack[-1], Stack[-3])
0x3a8: Pop(0)
0x3a9: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x3aa: Return(); Pop(2)

0x3ab: PushEmpty(float, float)
0x3ac: @ GetGameTime(Stack[-1])
0x3ad: Pop(0)
0x3ae: Push((int) 1)
0x3af: PushEmpty(int)
0x3b0: Push((int) 24)
0x3b1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3b2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3b3: Return(); Pop(2)

0x3b4: PushEmpty()
0x3b5: Push((int) 0)
0x3b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b8: PushEmpty(bool, object, int)
0x3b9: Stack[-6] = Stack[-2]
0x3ba: Stack[-5] = Stack[-1]
0x3bb: Call2 0x3e7

0x3bc: Stack[-3] = Stack[-7]
0x3bd: Pop(3)
0x3be: Return(); Pop(0)

0x3bf: GOTO 0x3e0

0x3c0: Push((int) 1)
0x3c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c3: PushEmpty(bool, object, int)
0x3c4: Stack[-6] = Stack[-2]
0x3c5: Stack[-5] = Stack[-1]
0x3c6: Call2 0x3ea

0x3c7: Stack[-3] = Stack[-7]
0x3c8: Pop(3)
0x3c9: Return(); Pop(0)

0x3ca: GOTO 0x3e0

0x3cb: Push((int) 2)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3ce: PushEmpty(bool, object, int)
0x3cf: Stack[-6] = Stack[-2]
0x3d0: Stack[-5] = Stack[-1]
0x3d1: Call2 0x447

0x3d2: Stack[-3] = Stack[-7]
0x3d3: Pop(3)
0x3d4: Return(); Pop(0)

0x3d5: GOTO 0x3e0

0x3d6: Push((int) 3)
0x3d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3d9: PushEmpty(bool, object, int)
0x3da: Stack[-6] = Stack[-2]
0x3db: Stack[-5] = Stack[-1]
0x3dc: Call2 0x4c0

0x3dd: Stack[-3] = Stack[-7]
0x3de: Pop(3)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty(bool, object, int)
0x3e1: Stack[-6] = Stack[-2]
0x3e2: Stack[-5] = Stack[-1]
0x3e3: Call2 0x545

0x3e4: Stack[-3] = Stack[-7]
0x3e5: Pop(3)
0x3e6: Return(); Pop(0)

0x3e7: PushEmpty()
0x3e8: Stack[-3] = (bool) 1
0x3e9: Return(); Pop(0)

0x3ea: PushEmpty()
0x3eb: PushEmpty(string, int, int)
0x3ec: Stack[-3] = "drapery" // @poff=382
0x3ed: Stack[-2] = (int) 1
0x3ee: Stack[-1] = (int) 2
0x3ef: Call2 0x36b

0x3f0: Pop(3)
0x3f1: Push((int) 2)
0x3f2: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f4: PushEmpty(string, int, int)
0x3f5: Stack[-3] = "halfboot_repel" // @poff=398
0x3f6: Stack[-2] = (int) 1
0x3f7: Stack[-1] = (int) 3
0x3f8: Call2 0x36b

0x3f9: Pop(3)
0x3fa: PushEmpty(string, int, int)
0x3fb: Stack[-3] = "glove_disp" // @poff=428
0x3fc: Stack[-2] = (int) 1
0x3fd: Stack[-1] = (int) 3
0x3fe: Call2 0x36b

0x3ff: Pop(3)
0x400: PushEmpty(string, int, int)
0x401: Stack[-3] = "drapery" // @poff=382
0x402: Stack[-2] = (int) 1
0x403: Stack[-1] = (int) 3
0x404: Call2 0x36b

0x405: Pop(3)
0x406: Push((int) 4)
0x407: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x409: PushEmpty(string, int, int)
0x40a: Stack[-3] = "glove" // @poff=450
0x40b: Stack[-2] = (int) 1
0x40c: Stack[-1] = (int) 4
0x40d: Call2 0x36b

0x40e: Pop(3)
0x40f: PushEmpty(string, int, int)
0x410: Stack[-3] = "cloak_repel" // @poff=462
0x411: Stack[-2] = (int) 1
0x412: Stack[-1] = (int) 4
0x413: Call2 0x36b

0x414: Pop(3)
0x415: Push((int) 5)
0x416: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x417: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x418: PushEmpty(string, int, int)
0x419: Stack[-3] = "mask" // @poff=486
0x41a: Stack[-2] = (int) 1
0x41b: Stack[-1] = (int) 8
0x41c: Call2 0x36b

0x41d: Pop(3)
0x41e: PushEmpty(string, int, int)
0x41f: Stack[-3] = "boot_repel" // @poff=406
0x420: Stack[-2] = (int) 1
0x421: Stack[-1] = (int) 4
0x422: Call2 0x36b

0x423: Pop(3)
0x424: Push((int) 7)
0x425: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x427: PushEmpty(string, int, int)
0x428: Stack[-3] = "raincoat_repel" // @poff=496
0x429: Stack[-2] = (int) 1
0x42a: Stack[-1] = (int) 4
0x42b: Call2 0x36b

0x42c: Pop(3)
0x42d: Push((int) 9)
0x42e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x430: PushEmpty(string, int, int)
0x431: Stack[-3] = "glove_army" // @poff=526
0x432: Stack[-2] = (int) 1
0x433: Stack[-1] = (int) 5
0x434: Call2 0x36b

0x435: Pop(3)
0x436: PushEmpty(string, int, int)
0x437: Stack[-3] = "boot_army" // @poff=548
0x438: Stack[-2] = (int) 1
0x439: Stack[-1] = (int) 5
0x43a: Call2 0x36b

0x43b: Pop(3)
0x43c: Push((int) 10)
0x43d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x43e: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x43f: PushEmpty(string, int, int)
0x440: Stack[-3] = "balahon" // @poff=568
0x441: Stack[-2] = (int) 1
0x442: Stack[-1] = (int) 9
0x443: Call2 0x36b

0x444: Pop(3)
0x445: Stack[-3] = (bool) 1
0x446: Return(); Pop(0)

0x447: PushEmpty(bool, bool)
0x448: PushEmpty(object, string, int, int, int)
0x449: Stack[-9] = Stack[-5]
0x44a: Stack[-4] = "tourniquet" // @poff=584
0x44b: Stack[-3] = (int) 1
0x44c: Stack[-2] = (int) 2
0x44d: Stack[-1] = (int) 10
0x44e: Call2 0x35c

0x44f: Pop(5)
0x450: PushEmpty(object, string, int, int, int)
0x451: Stack[-9] = Stack[-5]
0x452: Stack[-4] = "alpha_pills" // @poff=606
0x453: Stack[-3] = (int) 1
0x454: Stack[-2] = (int) 1
0x455: Stack[-1] = (int) 10
0x456: Call2 0x35c

0x457: Pop(5)
0x458: PushEmpty(object, string, int, int, int)
0x459: Stack[-9] = Stack[-5]
0x45a: Stack[-4] = "meradorm" // @poff=630
0x45b: Stack[-3] = (int) 1
0x45c: Stack[-2] = (int) 1
0x45d: Stack[-1] = (int) 2
0x45e: Call2 0x35c

0x45f: Pop(5)
0x460: Push((int) 3)
0x461: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x463: PushEmpty(object, string, int, int, int)
0x464: Stack[-9] = Stack[-5]
0x465: Stack[-4] = "neomicin" // @poff=648
0x466: Stack[-3] = (int) 1
0x467: Stack[-2] = (int) 1
0x468: Stack[-1] = (int) 2
0x469: Call2 0x35c

0x46a: Pop(5)
0x46b: Push((int) 4)
0x46c: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x46e: PushEmpty(object, string, int, int)
0x46f: Stack[-8] = Stack[-4]
0x470: Stack[-3] = "novocaine" // @poff=666
0x471: Stack[-2] = (int) 1
0x472: Stack[-1] = (int) 2
0x473: Call2 0x351

0x474: Pop(4)
0x475: PushEmpty(object, string, int, int, int)
0x476: Stack[-9] = Stack[-5]
0x477: Stack[-4] = "gamma_pills" // @poff=686
0x478: Stack[-3] = (int) 1
0x479: Stack[-2] = (int) 2
0x47a: Stack[-1] = (int) 2
0x47b: Call2 0x35c

0x47c: Pop(5)
0x47d: PushEmpty(object, string, int, int, int)
0x47e: Stack[-9] = Stack[-5]
0x47f: Stack[-4] = "beta_pills" // @poff=710
0x480: Stack[-3] = (int) 1
0x481: Stack[-2] = (int) 2
0x482: Stack[-1] = (int) 2
0x483: Call2 0x35c

0x484: Pop(5)
0x485: Push((int) 6)
0x486: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x488: PushEmpty(object, string, int, int)
0x489: Stack[-8] = Stack[-4]
0x48a: Stack[-3] = "packet" // @poff=732
0x48b: Stack[-2] = (int) 1
0x48c: Stack[-1] = (int) 4
0x48d: Call2 0x351

0x48e: Pop(4)
0x48f: PushEmpty(object, string, int, int)
0x490: Stack[-8] = Stack[-4]
0x491: Stack[-3] = "morfin" // @poff=746
0x492: Stack[-2] = (int) 1
0x493: Stack[-1] = (int) 2
0x494: Call2 0x351

0x495: Pop(4)
0x496: PushEmpty(object, string, int, int)
0x497: Stack[-8] = Stack[-4]
0x498: Stack[-3] = "Scalpel" // @poff=760
0x499: Stack[-2] = (int) 1
0x49a: Stack[-1] = (int) 8
0x49b: Call2 0x351

0x49c: Pop(4)
0x49d: PushEmpty(object, string, int, int, int)
0x49e: Stack[-9] = Stack[-5]
0x49f: Stack[-4] = "monomicin" // @poff=776
0x4a0: Stack[-3] = (int) 1
0x4a1: Stack[-2] = (int) 2
0x4a2: Stack[-1] = (int) 2
0x4a3: Call2 0x35c

0x4a4: Pop(5)
0x4a5: Push((int) 9)
0x4a6: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4a8: PushEmpty(object, string, int, int)
0x4a9: Stack[-8] = Stack[-4]
0x4aa: Stack[-3] = "etorfin" // @poff=796
0x4ab: Stack[-2] = (int) 1
0x4ac: Stack[-1] = (int) 2
0x4ad: Call2 0x351

0x4ae: Pop(4)
0x4af: PushEmpty(object, string, int, int)
0x4b0: Stack[-8] = Stack[-4]
0x4b1: Stack[-3] = "feromicin" // @poff=812
0x4b2: Stack[-2] = (int) 1
0x4b3: Stack[-1] = (int) 2
0x4b4: Call2 0x351

0x4b5: Pop(4)
0x4b6: PushEmpty(object, string, int, int, int)
0x4b7: Stack[-9] = Stack[-5]
0x4b8: Stack[-4] = "delta_pills" // @poff=832
0x4b9: Stack[-3] = (int) 1
0x4ba: Stack[-2] = (int) 2
0x4bb: Stack[-1] = (int) 2
0x4bc: Call2 0x35c

0x4bd: Pop(5)
0x4be: Stack[-5] = (bool) 1
0x4bf: Return(); Pop(2)

0x4c0: PushEmpty(bool, int, int, bool, int, int)
0x4c1: Push((int) 3)
0x4c2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c4: Stack[-1] = (int) 2
0x4c5: GOTO 0x4d6

0x4c6: Push((int) 5)
0x4c7: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c9: Stack[-1] = (int) 3
0x4ca: GOTO 0x4d6

0x4cb: Push((int) 7)
0x4cc: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: Stack[-1] = (int) 3
0x4cf: GOTO 0x4d6

0x4d0: Push((int) 7)
0x4d1: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: Stack[-1] = (int) 4
0x4d4: GOTO 0x4d6

0x4d5: Stack[-1] = (int) 5
0x4d6: PushEmpty(string, int, int)
0x4d7: Stack[-3] = "lemon" // @poff=856
0x4d8: Stack[-2] = (int) 1
0x4d9: Stack[-4] = Stack[-1]
0x4da: Call2 0x36b

0x4db: Pop(3)
0x4dc: PushEmpty(string, int, int)
0x4dd: Stack[-3] = "rusk" // @poff=868
0x4de: Stack[-2] = (int) 1
0x4df: Stack[-4] = Stack[-1]
0x4e0: Call2 0x36b

0x4e1: Pop(3)
0x4e2: Push((int) 2)
0x4e3: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4e5: PushEmpty(string, int, int, int)
0x4e6: Stack[-4] = "dried_fish" // @poff=878
0x4e7: Stack[-3] = (int) 1
0x4e8: Stack[-2] = (int) 1
0x4e9: Stack[-1] = (int) 2
0x4ea: Call2 0x376

0x4eb: Pop(4)
0x4ec: PushEmpty(string, int, int, int)
0x4ed: Stack[-4] = "smoked_meat" // @poff=900
0x4ee: Stack[-3] = (int) 1
0x4ef: Stack[-2] = (int) 1
0x4f0: Stack[-1] = (int) 2
0x4f1: Call2 0x376

0x4f2: Pop(4)
0x4f3: PushEmpty(string, int, int, int)
0x4f4: Stack[-4] = "bread" // @poff=924
0x4f5: Stack[-3] = (int) 1
0x4f6: Stack[-2] = (int) 1
0x4f7: Stack[-1] = (int) 2
0x4f8: Call2 0x376

0x4f9: Pop(4)
0x4fa: GOTO 0x50d

0x4fb: PushEmpty(string, int, int)
0x4fc: Stack[-3] = "dried_fish" // @poff=878
0x4fd: Stack[-2] = (int) 1
0x4fe: Stack[-4] = Stack[-1]
0x4ff: Call2 0x36b

0x500: Pop(3)
0x501: PushEmpty(string, int, int)
0x502: Stack[-3] = "smoked_meat" // @poff=900
0x503: Stack[-2] = (int) 1
0x504: Stack[-4] = Stack[-1]
0x505: Call2 0x36b

0x506: Pop(3)
0x507: PushEmpty(string, int, int)
0x508: Stack[-3] = "bread" // @poff=924
0x509: Stack[-2] = (int) 1
0x50a: Stack[-4] = Stack[-1]
0x50b: Call2 0x36b

0x50c: Pop(3)
0x50d: PushEmpty(string, int, int)
0x50e: Stack[-3] = "egg" // @poff=936
0x50f: Stack[-2] = (int) 1
0x510: Stack[-4] = Stack[-1]
0x511: Call2 0x36b

0x512: Pop(3)
0x513: PushEmpty(string, int, int)
0x514: Stack[-3] = "vegetables" // @poff=944
0x515: Stack[-2] = (int) 1
0x516: Stack[-4] = Stack[-1]
0x517: Call2 0x36b

0x518: Pop(3)
0x519: PushEmpty(string, int, int)
0x51a: Stack[-3] = "milk" // @poff=966
0x51b: Stack[-2] = (int) 1
0x51c: Stack[-4] = Stack[-1]
0x51d: Call2 0x36b

0x51e: Pop(3)
0x51f: PushEmpty(string, int, int)
0x520: Stack[-3] = "dried_meat" // @poff=976
0x521: Stack[-2] = (int) 1
0x522: Stack[-4] = Stack[-1]
0x523: Call2 0x36b

0x524: Pop(3)
0x525: PushEmpty(string, int, int)
0x526: Stack[-3] = "fresh_fish" // @poff=998
0x527: Stack[-2] = (int) 1
0x528: Stack[-4] = Stack[-1]
0x529: Call2 0x36b

0x52a: Pop(3)
0x52b: PushEmpty(string, int, int)
0x52c: Stack[-3] = "fresh_meat" // @poff=1020
0x52d: Stack[-2] = (int) 1
0x52e: Stack[-4] = Stack[-1]
0x52f: Call2 0x36b

0x530: Pop(3)
0x531: PushEmpty(string, int, int)
0x532: Stack[-3] = "funduk" // @poff=1042
0x533: Stack[-2] = (int) 1
0x534: Stack[-1] = (int) 20
0x535: Call2 0x36b

0x536: Pop(3)
0x537: PushEmpty(string, int, int)
0x538: Stack[-3] = "peanut" // @poff=1056
0x539: Stack[-2] = (int) 1
0x53a: Stack[-1] = (int) 20
0x53b: Call2 0x36b

0x53c: Pop(3)
0x53d: PushEmpty(string, int, int)
0x53e: Stack[-3] = "walnut" // @poff=1070
0x53f: Stack[-2] = (int) 1
0x540: Stack[-1] = (int) 20
0x541: Call2 0x36b

0x542: Pop(3)
0x543: Stack[-9] = (bool) 1
0x544: Return(); Pop(6)

0x545: PushEmpty()
0x546: PushEmpty(string, int, int)
0x547: Stack[-3] = "hook" // @poff=1084
0x548: Stack[-2] = (int) 1
0x549: Stack[-1] = (int) 5
0x54a: Call2 0x36b

0x54b: Pop(3)
0x54c: PushEmpty(string, int, int, int)
0x54d: Stack[-4] = "needle" // @poff=1094
0x54e: Stack[-3] = (int) 2
0x54f: Stack[-2] = (int) 3
0x550: Stack[-1] = (int) 3
0x551: Call2 0x376

0x552: Pop(4)
0x553: PushEmpty(string, int, int, int, int)
0x554: Stack[-5] = "kerosene" // @poff=1108
0x555: Stack[-4] = (int) 9
0x556: Stack[-3] = (int) 10
0x557: Stack[-2] = (int) 4
0x558: Stack[-1] = (int) 20
0x559: Call2 0x385

0x55a: Pop(5)
0x55b: Push((int) 9)
0x55c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x55e: PushEmpty(string, int, int, int)
0x55f: Stack[-4] = "rifle_ammo" // @poff=1126
0x560: Stack[-3] = (int) 1
0x561: Stack[-2] = (int) 2
0x562: Stack[-1] = (int) 5
0x563: Call2 0x376

0x564: Pop(4)
0x565: Stack[-3] = (bool) 1
0x566: Return(); Pop(0)

0x567: PushEmpty(int, int)
0x568: Push("branch") // @poff=1148
0x569: @ GetVariable(Stack[-1], Stack[-2])
0x56a: Pop(1)
0x56b: Push((int) 0)
0x56c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56e: Stack[-3] = (int) 1
0x56f: Return(); Pop(2)

0x570: GOTO 0x576

0x571: Push((int) 1)
0x572: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x574: Stack[-3] = (int) 2
0x575: Return(); Pop(2)

0x576: Stack[-3] = (int) 3
0x577: Return(); Pop(2)

0x578: PushEmpty(string, string)
0x579: Stack[-1] = "idle" // @poff=24
0x57a: Push(Stack[-3])
0x57b: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x57d: Stack[-1] = Stack[-4]
0x57e: Return(); Pop(2)

0x57f: PushEmpty(int, bool, int, bool)
0x580: Stack[-2] = (int) 0
0x581: Push("all") // @poff=16
0x582: PushEmpty(string, int)
0x583: Stack[-5] = Stack[-1]
0x584: Call2 0x578

0x585: Pop(1)
0x586: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x587: Pop(2)
0x588: Pop(0); Push((bool) Stack[-1] == 0)
0x589: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x58a: GOTO 0x58e

0x58b: Push((int) 1)
0x58c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x58d: GOTO 0x581

0x58e: Stack[-2] = Stack[-5]
0x58f: Return(); Pop(4)

0x590: Stack[-1] = (int) 531557
0x591: Return(); Pop(0)

0x592: Stack[-1] = (int) 531556
0x593: Return(); Pop(0)

0x594: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=1162
0x595: Return(); Pop(0)

0x596: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=1202
0x597: Return(); Pop(0)

0x598: Stack[-1] = (bool) 0
0x599: Return(); Pop(0)

0x59a: PushEmpty(float, float)
0x59b: Push("reputation") // @poff=1246
0x59c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=1268
0x59d: Pop(1)
0x59e: Stack[-1] = Stack[-4]
0x59f: Return(); Pop(2)

