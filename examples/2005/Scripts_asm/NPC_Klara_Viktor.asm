GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	W:Neutral
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:all
	W:idle
	W:icot_viktor_NPC_Trigger
	W:stand
	A:GetProperty
	A:SetProperty
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	W:m
	A:add
	W:money
	W:Money
	W:ui/NPC_Viktor.png
	W:ui/NPC_Viktor_b.png
	W:ook3Viktor1
	W:ook10Viktor1
	W:k9q01
	W:quest_k9_01
	W:init_mnogogrannik
	W:money500 is given
	W:playsound
	W:givemoney
	W:k3q03
	W:k10q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000690063006f0074005f00760069006b0074006f0072005f004e00500043005f00540072006900670067006500720000007300740061006e006400000047657450726f70657274790053657450726f706572747900476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f7065727479006d000000616464006d006f006e006500790000004d006f006e00650079000000750069002f004e00500043005f00560069006b0074006f0072002e0070006e0067000000750069002f004e00500043005f00560069006b0074006f0072005f0062002e0070006e00670000006f006f006b003300560069006b0074006f007200310000006f006f006b0031003000560069006b0074006f007200310000006b0039007100300031000000710075006500730074005f006b0039005f0030003100000069006e00690074005f006d006e006f0067006f006700720061006e006e0069006b0000006d006f006e0065007900350030003000200069007300200067006900760065006e00000070006c006100790073006f0075006e006400000067006900760065006d006f006e006500790000006b00330071003000330000006b00310030007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
// @pool_encoding:utf8

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	SetPosition (1 args)
	SetDirection (1 args)
	LockAnimation (3 args)
	Rotate (3 args)
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
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	Trace (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x6cb
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x18f Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x314 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x483 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x58f Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6a1 Vars = (int, int)
	GTASK_13 Vars = (bool, cvector, cvector) Params = 0
		EVENT_26 Op = 0x6d2 Vars = (string)
		EVENT_6 Op = 0x70b Vars = ()
		EVENT_0 Op = 0x714 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x740

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf: PushEmpty(bool, object)
0x10: PushEmpty(object)
0x11: Call2 0x847

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x79a

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x745

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x898

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x896

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x89a

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x89c

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x948

0x37: Pop(0)
0x38: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x39: Pop(1)
0x3a: Stack[-2] = (int) -1
0x3b: @ IsOverrideActive(Stack[-3])
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-10] = (int) -2
0x40: Return(); Pop(8)

0x41: @ DoDialog(Stack[-4])
0x42: Pop(0)
0x43: PushEmpty(object, object)
0x44: Stack[-11] = Stack[-2]
0x45: Stack[-6] = Stack[-1]
0x46: Push(-2, 4); TaskCall(2)
0x47: Call2 0x5e

0x48: Pop(-2, 4); TaskReturn
0x49: Pop(2)
0x4a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: @ sync()
0x4f: Pop(0)
0x50: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x51: Pop(0)
0x52: GOTO 0x4c

0x53: PushEmpty(object)
0x54: Stack[-10] = Stack[-1]
0x55: Call2 0x789

0x56: Pop(1)
0x57: @ StopDialog(Stack[-4])
0x58: Pop(0)
0x59: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5a: Pop(0)
0x5b: Stack[-2] = Stack[-10]
0x5c: Return(); Pop(8)

0x5d: Stack[-4] = 0
0x5e: PushEmpty()
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62: Push((int) 1)
0x63: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x93

0x67: Pop(1)
0x68: Push((int) 525531)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525532)
0x6e: Push((int) -1)
0x6f: Push((int) 26888)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x62

0x75: PushEmpty(bool)
0x76: Call2 0x89e

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x824

0x81: Pop(1)
0x82: GOTO 0x79

0x83: GOTO 0x92

0x84: Push("all") // @poff=138
0x85: Push("idle") // @poff=146
0x86: @ PlayAnimation(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ WaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: Push("all") // @poff=138
0x8e: Push("idle") // @poff=146
0x8f: @ PlayAnimation(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: GOTO 0x88

0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: PushEmpty(bool)
0x95: Call2 0x89e

0x96: Pop(0)
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(0)

0x9d: PushEmpty(string, bool)
0x9e: Stack[-3] = Stack[-2]
0x9f: Push("") // @poff=102
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-1] = (bool) 0
0xa3: GOTO 0xa5

0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0x82b

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x840

0xae: Pop(0)
0xaf: Push((int) 26887)
0xb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb2: PushEmpty(string)
0xb3: Stack[-1] = "Neutral" // @poff=89
0xb4: Call2 0x93

0xb5: Pop(1)
0xb6: Push((int) 525531)
0xb7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb8: Pop(1)
0xb9: @@@ ClearReplies(); Obj=0 // @poff=116
0xba: Pop(0)
0xbb: Push((int) 525532)
0xbc: Push((int) -1)
0xbd: Push((int) 26888)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc2: PushEmpty(bool)
0xc3: Call2 0x89e

0xc4: Pop(0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc6: @ lshStopAnimation()
0xc7: Pop(0)
0xc8: GOTO 0xcb

0xc9: @ StopAnimation()
0xca: Pop(0)
0xcb: Return(); Pop(0)

0xcc: GOTO 0xaa

0xcd: Return(); Pop(0)

0xce: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd0: PushEmpty(bool, object)
0xd1: PushEmpty(object)
0xd2: Call2 0x847

0xd3: Stack[-1] = Stack[-2]
0xd4: Pop(1)
0xd5: Call2 0x79a

0xd6: Pop(2)
0xd7: PushEmpty(bool, object, float)
0xd8: Stack[-12] = Stack[-2]
0xd9: Stack[-1] = (float) 70.0
0xda: Call2 0x745

0xdb: Pop(2)
0xdc: Pop(1); Push((bool) Stack[-1] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xde: Stack[-10] = (int) -2
0xdf: Return(); Pop(8)

0xe0: @ CreateDialog(Stack[-4])
0xe1: Pop(0)
0xe2: PushEmpty(int)
0xe3: Call2 0x898

0xe4: Pop(0)
0xe5: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0xe6: Pop(1)
0xe7: PushEmpty(int)
0xe8: Call2 0x896

0xe9: Pop(0)
0xea: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0xeb: Pop(1)
0xec: PushEmpty(string)
0xed: Call2 0x89a

0xee: Pop(0)
0xef: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0xf0: Pop(1)
0xf1: PushEmpty(string)
0xf2: Call2 0x89c

0xf3: Pop(0)
0xf4: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0xf5: Pop(1)
0xf6: PushEmpty(int)
0xf7: Call2 0x948

0xf8: Pop(0)
0xf9: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0xfa: Pop(1)
0xfb: Stack[-2] = (int) -1
0xfc: @ IsOverrideActive(Stack[-3])
0xfd: Pop(0)
0xfe: Push(Stack[-3])
0xff: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x100: Stack[-10] = (int) -2
0x101: Return(); Pop(8)

0x102: @ DoDialog(Stack[-4])
0x103: Pop(0)
0x104: PushEmpty(object, object)
0x105: Stack[-11] = Stack[-2]
0x106: Stack[-6] = Stack[-1]
0x107: Push(-2, 4); TaskCall(4)
0x108: Call2 0x11f

0x109: Pop(-2, 4); TaskReturn
0x10a: Pop(2)
0x10b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x10c: Pop(0)
0x10d: Pop(0); Push((bool) Stack[-1] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: @ sync()
0x110: Pop(0)
0x111: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x112: Pop(0)
0x113: GOTO 0x10d

0x114: PushEmpty(object)
0x115: Stack[-10] = Stack[-1]
0x116: Call2 0x789

0x117: Pop(1)
0x118: @ StopDialog(Stack[-4])
0x119: Pop(0)
0x11a: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x11b: Pop(0)
0x11c: Stack[-2] = Stack[-10]
0x11d: Return(); Pop(8)

0x11e: Stack[-4] = 0
0x11f: PushEmpty()
0x120: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x121: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x122: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x123: Push((int) 1)
0x124: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Neutral" // @poff=89
0x127: Call2 0x179

0x128: Pop(1)
0x129: Push((int) 526939)
0x12a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12b: Pop(1)
0x12c: @@@ ClearReplies(); Obj=0 // @poff=116
0x12d: Pop(0)
0x12e: PushEmpty(bool)
0x12f: Stack[-1] = (bool) 1
0x130: PushEmpty(bool)
0x131: Stack[-1] = (bool) 0
0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0x8e2

0x135: Pop(1)
0x136: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x8ee

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: Stack[-1] = (bool) 1
0x13d: IF (Stack[-1] == 1) GOTO 0x14d; Pop(1)

0x13e: PushEmpty(bool)
0x13f: Stack[-1] = (bool) 0
0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call2 0x8fa

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call2 0x8ee

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 1
0x14b: IF (Stack[-1] == 1) GOTO 0x14d; Pop(1)

0x14c: Stack[-1] = (bool) 0
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: Push((int) 526940)
0x14f: Push((int) 28233)
0x150: Push((int) 28232)
0x151: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x152: Pop(3)
0x153: Push((int) 526945)
0x154: Push((int) -1)
0x155: Push((int) 28237)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: GOTO 0x15b

0x159: Return(); Pop(0)

0x15a: GOTO 0x123

0x15b: PushEmpty(bool)
0x15c: Call2 0x89e

0x15d: Pop(0)
0x15e: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x15f: @ lshWaitForAnimEnd()
0x160: Pop(0)
0x161: Push( Stack[3 + Tasks[-1].StackPointer] )
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: GOTO 0x169

0x164: PushEmpty(string)
0x165: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x166: Call2 0x824

0x167: Pop(1)
0x168: GOTO 0x15f

0x169: GOTO 0x178

0x16a: Push("all") // @poff=138
0x16b: Push("idle") // @poff=146
0x16c: @ PlayAnimation(Stack[-2], Stack[-1])
0x16d: Pop(2)
0x16e: @ WaitForAnimEnd()
0x16f: Pop(0)
0x170: Push( Stack[3 + Tasks[-1].StackPointer] )
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: GOTO 0x178

0x173: Push("all") // @poff=138
0x174: Push("idle") // @poff=146
0x175: @ PlayAnimation(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: GOTO 0x16e

0x178: Return(); Pop(0)

0x179: PushEmpty()
0x17a: PushEmpty(bool)
0x17b: Call2 0x89e

0x17c: Pop(0)
0x17d: Pop(1); Push((bool) Stack[-1] == 0)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Return(); Pop(0)

0x180: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Return(); Pop(0)

0x183: PushEmpty(string, bool)
0x184: Stack[-3] = Stack[-2]
0x185: Push("") // @poff=102
0x186: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x188: Stack[-1] = (bool) 0
0x189: GOTO 0x18b

0x18a: Stack[-1] = (bool) 1
0x18b: Call2 0x82b

0x18c: Pop(2)
0x18d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x18e: Return(); Pop(0)

0x18f: PushEmpty()
0x190: Push((int) 1)
0x191: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x192: PushEmpty()
0x193: Call2 0x840

0x194: Pop(0)
0x195: Push((int) 28232)
0x196: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x198: PushEmpty(object, object)
0x199: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19b: Call2 0x8a6

0x19c: Pop(2)
0x19d: Push((int) 28231)
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Neutral" // @poff=89
0x1a2: Call2 0x179

0x1a3: Pop(1)
0x1a4: Push((int) 526939)
0x1a5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a6: Pop(1)
0x1a7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a8: Pop(0)
0x1a9: PushEmpty(bool)
0x1aa: Stack[-1] = (bool) 1
0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: PushEmpty(bool, object)
0x1ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Call2 0x8e2

0x1b0: Pop(1)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b2: PushEmpty(bool, object)
0x1b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Call2 0x8ee

0x1b5: Pop(1)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: Stack[-1] = (bool) 1
0x1b8: IF (Stack[-1] == 1) GOTO 0x1c8; Pop(1)

0x1b9: PushEmpty(bool)
0x1ba: Stack[-1] = (bool) 0
0x1bb: PushEmpty(bool, object)
0x1bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Call2 0x8fa

0x1be: Pop(1)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c0: PushEmpty(bool, object)
0x1c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c2: Call2 0x8ee

0x1c3: Pop(1)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Stack[-1] = (bool) 1
0x1c6: IF (Stack[-1] == 1) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 0
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: Push((int) 526940)
0x1ca: Push((int) 28233)
0x1cb: Push((int) 28232)
0x1cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cd: Pop(3)
0x1ce: Push((int) 526945)
0x1cf: Push((int) -1)
0x1d0: Push((int) 28237)
0x1d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 28233)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral" // @poff=89
0x1d9: Call2 0x179

0x1da: Pop(1)
0x1db: Push((int) 526941)
0x1dc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1dd: Pop(1)
0x1de: @@@ ClearReplies(); Obj=0 // @poff=116
0x1df: Pop(0)
0x1e0: Push((int) 526942)
0x1e1: Push((int) 28235)
0x1e2: Push((int) 28234)
0x1e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e4: Pop(3)
0x1e5: Push((int) 527965)
0x1e6: Push((int) 29330)
0x1e7: Push((int) 29322)
0x1e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 29330)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral" // @poff=89
0x1f0: Call2 0x179

0x1f1: Pop(1)
0x1f2: Push((int) 527973)
0x1f3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f4: Pop(1)
0x1f5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f6: Pop(0)
0x1f7: Push((int) 527974)
0x1f8: Push((int) 29332)
0x1f9: Push((int) 29331)
0x1fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fb: Pop(3)
0x1fc: Return(); Pop(0)

0x1fd: Push((int) 29332)
0x1fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x200: PushEmpty(string)
0x201: Stack[-1] = "Neutral" // @poff=89
0x202: Call2 0x179

0x203: Pop(1)
0x204: Push((int) 527975)
0x205: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x206: Pop(1)
0x207: @@@ ClearReplies(); Obj=0 // @poff=116
0x208: Pop(0)
0x209: Push((int) 527976)
0x20a: Push((int) 29321)
0x20b: Push((int) 29333)
0x20c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20d: Pop(3)
0x20e: Return(); Pop(0)

0x20f: Push((int) 28235)
0x210: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Neutral" // @poff=89
0x214: Call2 0x179

0x215: Pop(1)
0x216: Push((int) 526943)
0x217: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x218: Pop(1)
0x219: @@@ ClearReplies(); Obj=0 // @poff=116
0x21a: Pop(0)
0x21b: Push((int) 526944)
0x21c: Push((int) 29321)
0x21d: Push((int) 28236)
0x21e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 29321)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Neutral" // @poff=89
0x226: Call2 0x179

0x227: Pop(1)
0x228: Push((int) 527964)
0x229: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22a: Pop(1)
0x22b: @@@ ClearReplies(); Obj=0 // @poff=116
0x22c: Pop(0)
0x22d: Push((int) 527966)
0x22e: Push((int) 29324)
0x22f: Push((int) 29323)
0x230: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x231: Pop(3)
0x232: Return(); Pop(0)

0x233: Push((int) 29324)
0x234: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral" // @poff=89
0x238: Call2 0x179

0x239: Pop(1)
0x23a: Push((int) 527967)
0x23b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23c: Pop(1)
0x23d: @@@ ClearReplies(); Obj=0 // @poff=116
0x23e: Pop(0)
0x23f: Push((int) 527969)
0x240: Push((int) 29327)
0x241: Push((int) 29326)
0x242: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x243: Pop(3)
0x244: Push((int) 527968)
0x245: Push((int) -1)
0x246: Push((int) 29325)
0x247: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x248: Pop(3)
0x249: Return(); Pop(0)

0x24a: Push((int) 29327)
0x24b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "Neutral" // @poff=89
0x24f: Call2 0x179

0x250: Pop(1)
0x251: Push((int) 527970)
0x252: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x253: Pop(1)
0x254: @@@ ClearReplies(); Obj=0 // @poff=116
0x255: Pop(0)
0x256: Push((int) 527971)
0x257: Push((int) -1)
0x258: Push((int) 29328)
0x259: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25a: Pop(3)
0x25b: Return(); Pop(0)

0x25c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25d: PushEmpty(bool)
0x25e: Call2 0x89e

0x25f: Pop(0)
0x260: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x261: @ lshStopAnimation()
0x262: Pop(0)
0x263: GOTO 0x266

0x264: @ StopAnimation()
0x265: Pop(0)
0x266: Return(); Pop(0)

0x267: GOTO 0x190

0x268: Return(); Pop(0)

0x269: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x26a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x26b: PushEmpty(bool, object)
0x26c: PushEmpty(object)
0x26d: Call2 0x847

0x26e: Stack[-1] = Stack[-2]
0x26f: Pop(1)
0x270: Call2 0x79a

0x271: Pop(2)
0x272: PushEmpty(bool, object, float)
0x273: Stack[-12] = Stack[-2]
0x274: Stack[-1] = (float) 70.0
0x275: Call2 0x745

0x276: Pop(2)
0x277: Pop(1); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: Stack[-10] = (int) -2
0x27a: Return(); Pop(8)

0x27b: @ CreateDialog(Stack[-4])
0x27c: Pop(0)
0x27d: PushEmpty(int)
0x27e: Call2 0x898

0x27f: Pop(0)
0x280: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x281: Pop(1)
0x282: PushEmpty(int)
0x283: Call2 0x896

0x284: Pop(0)
0x285: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x286: Pop(1)
0x287: PushEmpty(string)
0x288: Call2 0x89a

0x289: Pop(0)
0x28a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x28b: Pop(1)
0x28c: PushEmpty(string)
0x28d: Call2 0x89c

0x28e: Pop(0)
0x28f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x290: Pop(1)
0x291: PushEmpty(int)
0x292: Call2 0x948

0x293: Pop(0)
0x294: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x295: Pop(1)
0x296: Stack[-2] = (int) -1
0x297: @ IsOverrideActive(Stack[-3])
0x298: Pop(0)
0x299: Push(Stack[-3])
0x29a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29b: Stack[-10] = (int) -2
0x29c: Return(); Pop(8)

0x29d: @ DoDialog(Stack[-4])
0x29e: Pop(0)
0x29f: PushEmpty(object, object)
0x2a0: Stack[-11] = Stack[-2]
0x2a1: Stack[-6] = Stack[-1]
0x2a2: Push(-2, 4); TaskCall(6)
0x2a3: Call2 0x2ba

0x2a4: Pop(-2, 4); TaskReturn
0x2a5: Pop(2)
0x2a6: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2a7: Pop(0)
0x2a8: Pop(0); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2aa: @ sync()
0x2ab: Pop(0)
0x2ac: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2ad: Pop(0)
0x2ae: GOTO 0x2a8

0x2af: PushEmpty(object)
0x2b0: Stack[-10] = Stack[-1]
0x2b1: Call2 0x789

0x2b2: Pop(1)
0x2b3: @ StopDialog(Stack[-4])
0x2b4: Pop(0)
0x2b5: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x2b6: Pop(0)
0x2b7: Stack[-2] = Stack[-10]
0x2b8: Return(); Pop(8)

0x2b9: Stack[-4] = 0
0x2ba: PushEmpty()
0x2bb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2bd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2be: Push((int) 1)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2c0: PushEmpty(string)
0x2c1: Stack[-1] = "Neutral" // @poff=89
0x2c2: Call2 0x2fe

0x2c3: Pop(1)
0x2c4: Push((int) 528940)
0x2c5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c6: Pop(1)
0x2c7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c8: Pop(0)
0x2c9: PushEmpty(bool, object)
0x2ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cb: Call2 0x906

0x2cc: Pop(1)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2ce: Push((int) 528943)
0x2cf: Push((int) 30377)
0x2d0: Push((int) 30376)
0x2d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d2: Pop(3)
0x2d3: Push((int) 528941)
0x2d4: Push((int) -1)
0x2d5: Push((int) 30374)
0x2d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d7: Pop(3)
0x2d8: Push((int) 528942)
0x2d9: Push((int) -1)
0x2da: Push((int) 30375)
0x2db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2dc: Pop(3)
0x2dd: GOTO 0x2e0

0x2de: Return(); Pop(0)

0x2df: GOTO 0x2be

0x2e0: PushEmpty(bool)
0x2e1: Call2 0x89e

0x2e2: Pop(0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e4: @ lshWaitForAnimEnd()
0x2e5: Pop(0)
0x2e6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: GOTO 0x2ee

0x2e9: PushEmpty(string)
0x2ea: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2eb: Call2 0x824

0x2ec: Pop(1)
0x2ed: GOTO 0x2e4

0x2ee: GOTO 0x2fd

0x2ef: Push("all") // @poff=138
0x2f0: Push("idle") // @poff=146
0x2f1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f2: Pop(2)
0x2f3: @ WaitForAnimEnd()
0x2f4: Pop(0)
0x2f5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: GOTO 0x2fd

0x2f8: Push("all") // @poff=138
0x2f9: Push("idle") // @poff=146
0x2fa: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fb: Pop(2)
0x2fc: GOTO 0x2f3

0x2fd: Return(); Pop(0)

0x2fe: PushEmpty()
0x2ff: PushEmpty(bool)
0x300: Call2 0x89e

0x301: Pop(0)
0x302: Pop(1); Push((bool) Stack[-1] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: Return(); Pop(0)

0x305: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Return(); Pop(0)

0x308: PushEmpty(string, bool)
0x309: Stack[-3] = Stack[-2]
0x30a: Push("") // @poff=102
0x30b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-1] = (bool) 0
0x30e: GOTO 0x310

0x30f: Stack[-1] = (bool) 1
0x310: Call2 0x82b

0x311: Pop(2)
0x312: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x313: Return(); Pop(0)

0x314: PushEmpty()
0x315: Push((int) 1)
0x316: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x317: PushEmpty()
0x318: Call2 0x840

0x319: Pop(0)
0x31a: Push((int) 30380)
0x31b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: PushEmpty(object, object)
0x31e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x320: Call2 0x8ac

0x321: Pop(2)
0x322: Push((int) 30373)
0x323: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x325: PushEmpty(string)
0x326: Stack[-1] = "Neutral" // @poff=89
0x327: Call2 0x2fe

0x328: Pop(1)
0x329: Push((int) 528940)
0x32a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x32b: Pop(1)
0x32c: @@@ ClearReplies(); Obj=0 // @poff=116
0x32d: Pop(0)
0x32e: PushEmpty(bool, object)
0x32f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x330: Call2 0x906

0x331: Pop(1)
0x332: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x333: Push((int) 528943)
0x334: Push((int) 30377)
0x335: Push((int) 30376)
0x336: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x337: Pop(3)
0x338: Push((int) 528941)
0x339: Push((int) -1)
0x33a: Push((int) 30374)
0x33b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x33c: Pop(3)
0x33d: Push((int) 528942)
0x33e: Push((int) -1)
0x33f: Push((int) 30375)
0x340: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x341: Pop(3)
0x342: Return(); Pop(0)

0x343: Push((int) 30377)
0x344: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x346: PushEmpty(string)
0x347: Stack[-1] = "Neutral" // @poff=89
0x348: Call2 0x2fe

0x349: Pop(1)
0x34a: Push((int) 528944)
0x34b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x34c: Pop(1)
0x34d: @@@ ClearReplies(); Obj=0 // @poff=116
0x34e: Pop(0)
0x34f: Push((int) 528945)
0x350: Push((int) 30379)
0x351: Push((int) 30378)
0x352: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x353: Pop(3)
0x354: Push((int) 528948)
0x355: Push((int) 30382)
0x356: Push((int) 30381)
0x357: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x358: Pop(3)
0x359: Return(); Pop(0)

0x35a: Push((int) 30382)
0x35b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Neutral" // @poff=89
0x35f: Call2 0x2fe

0x360: Pop(1)
0x361: Push((int) 528949)
0x362: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x363: Pop(1)
0x364: @@@ ClearReplies(); Obj=0 // @poff=116
0x365: Pop(0)
0x366: Push((int) 528950)
0x367: Push((int) 30384)
0x368: Push((int) 30383)
0x369: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: Push((int) 30384)
0x36d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x36f: PushEmpty(string)
0x370: Stack[-1] = "Neutral" // @poff=89
0x371: Call2 0x2fe

0x372: Pop(1)
0x373: Push((int) 528951)
0x374: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x375: Pop(1)
0x376: @@@ ClearReplies(); Obj=0 // @poff=116
0x377: Pop(0)
0x378: Push((int) 528952)
0x379: Push((int) 30391)
0x37a: Push((int) 30385)
0x37b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37c: Pop(3)
0x37d: Push((int) 528954)
0x37e: Push((int) 30386)
0x37f: Push((int) 30387)
0x380: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: Push((int) 30386)
0x384: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x386: PushEmpty(string)
0x387: Stack[-1] = "Neutral" // @poff=89
0x388: Call2 0x2fe

0x389: Pop(1)
0x38a: Push((int) 528953)
0x38b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38c: Pop(1)
0x38d: @@@ ClearReplies(); Obj=0 // @poff=116
0x38e: Pop(0)
0x38f: Push((int) 528955)
0x390: Push((int) 30389)
0x391: Push((int) 30388)
0x392: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x393: Pop(3)
0x394: Push((int) 528957)
0x395: Push((int) 30389)
0x396: Push((int) 30390)
0x397: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x398: Pop(3)
0x399: Return(); Pop(0)

0x39a: Push((int) 30389)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = "Neutral" // @poff=89
0x39f: Call2 0x2fe

0x3a0: Pop(1)
0x3a1: Push((int) 528956)
0x3a2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3a3: Pop(1)
0x3a4: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a5: Pop(0)
0x3a6: Push((int) 528960)
0x3a7: Push((int) 30379)
0x3a8: Push((int) 30394)
0x3a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: Push((int) 30391)
0x3ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3af: PushEmpty(string)
0x3b0: Stack[-1] = "Neutral" // @poff=89
0x3b1: Call2 0x2fe

0x3b2: Pop(1)
0x3b3: Push((int) 528958)
0x3b4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3b5: Pop(1)
0x3b6: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b7: Pop(0)
0x3b8: Push((int) 528959)
0x3b9: Push((int) 30379)
0x3ba: Push((int) 30392)
0x3bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3bc: Pop(3)
0x3bd: Return(); Pop(0)

0x3be: Push((int) 30379)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral" // @poff=89
0x3c3: Call2 0x2fe

0x3c4: Pop(1)
0x3c5: Push((int) 528946)
0x3c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c7: Pop(1)
0x3c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c9: Pop(0)
0x3ca: Push((int) 528947)
0x3cb: Push((int) -1)
0x3cc: Push((int) 30380)
0x3cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ce: Pop(3)
0x3cf: Return(); Pop(0)

0x3d0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d1: PushEmpty(bool)
0x3d2: Call2 0x89e

0x3d3: Pop(0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d5: @ lshStopAnimation()
0x3d6: Pop(0)
0x3d7: GOTO 0x3da

0x3d8: @ StopAnimation()
0x3d9: Pop(0)
0x3da: Return(); Pop(0)

0x3db: GOTO 0x315

0x3dc: Return(); Pop(0)

0x3dd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3de: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3df: PushEmpty(bool, object)
0x3e0: PushEmpty(object)
0x3e1: Call2 0x847

0x3e2: Stack[-1] = Stack[-2]
0x3e3: Pop(1)
0x3e4: Call2 0x79a

0x3e5: Pop(2)
0x3e6: PushEmpty(bool, object, float)
0x3e7: Stack[-12] = Stack[-2]
0x3e8: Stack[-1] = (float) 70.0
0x3e9: Call2 0x745

0x3ea: Pop(2)
0x3eb: Pop(1); Push((bool) Stack[-1] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ed: Stack[-10] = (int) -2
0x3ee: Return(); Pop(8)

0x3ef: @ CreateDialog(Stack[-4])
0x3f0: Pop(0)
0x3f1: PushEmpty(int)
0x3f2: Call2 0x898

0x3f3: Pop(0)
0x3f4: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x3f5: Pop(1)
0x3f6: PushEmpty(int)
0x3f7: Call2 0x896

0x3f8: Pop(0)
0x3f9: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x3fa: Pop(1)
0x3fb: PushEmpty(string)
0x3fc: Call2 0x89a

0x3fd: Pop(0)
0x3fe: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x3ff: Pop(1)
0x400: PushEmpty(string)
0x401: Call2 0x89c

0x402: Pop(0)
0x403: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x404: Pop(1)
0x405: PushEmpty(int)
0x406: Call2 0x948

0x407: Pop(0)
0x408: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x409: Pop(1)
0x40a: Stack[-2] = (int) -1
0x40b: @ IsOverrideActive(Stack[-3])
0x40c: Pop(0)
0x40d: Push(Stack[-3])
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: Stack[-10] = (int) -2
0x410: Return(); Pop(8)

0x411: @ DoDialog(Stack[-4])
0x412: Pop(0)
0x413: PushEmpty(object, object)
0x414: Stack[-11] = Stack[-2]
0x415: Stack[-6] = Stack[-1]
0x416: Push(-2, 4); TaskCall(8)
0x417: Call2 0x42e

0x418: Pop(-2, 4); TaskReturn
0x419: Pop(2)
0x41a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x41b: Pop(0)
0x41c: Pop(0); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41e: @ sync()
0x41f: Pop(0)
0x420: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x421: Pop(0)
0x422: GOTO 0x41c

0x423: PushEmpty(object)
0x424: Stack[-10] = Stack[-1]
0x425: Call2 0x789

0x426: Pop(1)
0x427: @ StopDialog(Stack[-4])
0x428: Pop(0)
0x429: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x42a: Pop(0)
0x42b: Stack[-2] = Stack[-10]
0x42c: Return(); Pop(8)

0x42d: Stack[-4] = 0
0x42e: PushEmpty()
0x42f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x430: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x431: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x432: Push((int) 1)
0x433: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x434: PushEmpty(string)
0x435: Stack[-1] = "Neutral" // @poff=89
0x436: Call2 0x46d

0x437: Pop(1)
0x438: Push((int) 535231)
0x439: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x43a: Pop(1)
0x43b: @@@ ClearReplies(); Obj=0 // @poff=116
0x43c: Pop(0)
0x43d: Push((int) 535232)
0x43e: Push((int) 36953)
0x43f: Push((int) 36907)
0x440: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x441: Pop(3)
0x442: Push((int) 535233)
0x443: Push((int) -1)
0x444: Push((int) 36908)
0x445: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x446: Pop(3)
0x447: Push((int) 535280)
0x448: Push((int) -1)
0x449: Push((int) 36956)
0x44a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44b: Pop(3)
0x44c: GOTO 0x44f

0x44d: Return(); Pop(0)

0x44e: GOTO 0x432

0x44f: PushEmpty(bool)
0x450: Call2 0x89e

0x451: Pop(0)
0x452: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x453: @ lshWaitForAnimEnd()
0x454: Pop(0)
0x455: Push( Stack[3 + Tasks[-1].StackPointer] )
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: GOTO 0x45d

0x458: PushEmpty(string)
0x459: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x45a: Call2 0x824

0x45b: Pop(1)
0x45c: GOTO 0x453

0x45d: GOTO 0x46c

0x45e: Push("all") // @poff=138
0x45f: Push("idle") // @poff=146
0x460: @ PlayAnimation(Stack[-2], Stack[-1])
0x461: Pop(2)
0x462: @ WaitForAnimEnd()
0x463: Pop(0)
0x464: Push( Stack[3 + Tasks[-1].StackPointer] )
0x465: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x466: GOTO 0x46c

0x467: Push("all") // @poff=138
0x468: Push("idle") // @poff=146
0x469: @ PlayAnimation(Stack[-2], Stack[-1])
0x46a: Pop(2)
0x46b: GOTO 0x462

0x46c: Return(); Pop(0)

0x46d: PushEmpty()
0x46e: PushEmpty(bool)
0x46f: Call2 0x89e

0x470: Pop(0)
0x471: Pop(1); Push((bool) Stack[-1] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: Return(); Pop(0)

0x474: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: Return(); Pop(0)

0x477: PushEmpty(string, bool)
0x478: Stack[-3] = Stack[-2]
0x479: Push("") // @poff=102
0x47a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Stack[-1] = (bool) 0
0x47d: GOTO 0x47f

0x47e: Stack[-1] = (bool) 1
0x47f: Call2 0x82b

0x480: Pop(2)
0x481: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x482: Return(); Pop(0)

0x483: PushEmpty()
0x484: Push((int) 1)
0x485: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x486: PushEmpty()
0x487: Call2 0x840

0x488: Pop(0)
0x489: Push((int) 36906)
0x48a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x48c: PushEmpty(string)
0x48d: Stack[-1] = "Neutral" // @poff=89
0x48e: Call2 0x46d

0x48f: Pop(1)
0x490: Push((int) 535231)
0x491: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x492: Pop(1)
0x493: @@@ ClearReplies(); Obj=0 // @poff=116
0x494: Pop(0)
0x495: Push((int) 535232)
0x496: Push((int) 36953)
0x497: Push((int) 36907)
0x498: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x499: Pop(3)
0x49a: Push((int) 535233)
0x49b: Push((int) -1)
0x49c: Push((int) 36908)
0x49d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x49e: Pop(3)
0x49f: Push((int) 535280)
0x4a0: Push((int) -1)
0x4a1: Push((int) 36956)
0x4a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a3: Pop(3)
0x4a4: Return(); Pop(0)

0x4a5: Push((int) 36953)
0x4a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4a8: PushEmpty(string)
0x4a9: Stack[-1] = "Neutral" // @poff=89
0x4aa: Call2 0x46d

0x4ab: Pop(1)
0x4ac: Push((int) 535277)
0x4ad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4ae: Pop(1)
0x4af: @@@ ClearReplies(); Obj=0 // @poff=116
0x4b0: Pop(0)
0x4b1: Push((int) 535278)
0x4b2: Push((int) 36957)
0x4b3: Push((int) 36954)
0x4b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b5: Pop(3)
0x4b6: Push((int) 535279)
0x4b7: Push((int) 36957)
0x4b8: Push((int) 36955)
0x4b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ba: Pop(3)
0x4bb: Return(); Pop(0)

0x4bc: Push((int) 36957)
0x4bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4bf: PushEmpty(string)
0x4c0: Stack[-1] = "Neutral" // @poff=89
0x4c1: Call2 0x46d

0x4c2: Pop(1)
0x4c3: Push((int) 535281)
0x4c4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4c5: Pop(1)
0x4c6: @@@ ClearReplies(); Obj=0 // @poff=116
0x4c7: Pop(0)
0x4c8: Push((int) 535282)
0x4c9: Push((int) -1)
0x4ca: Push((int) 36958)
0x4cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4cc: Pop(3)
0x4cd: Push((int) 535283)
0x4ce: Push((int) -1)
0x4cf: Push((int) 36959)
0x4d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4d1: Pop(3)
0x4d2: Return(); Pop(0)

0x4d3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4d4: PushEmpty(bool)
0x4d5: Call2 0x89e

0x4d6: Pop(0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d8: @ lshStopAnimation()
0x4d9: Pop(0)
0x4da: GOTO 0x4dd

0x4db: @ StopAnimation()
0x4dc: Pop(0)
0x4dd: Return(); Pop(0)

0x4de: GOTO 0x484

0x4df: Return(); Pop(0)

0x4e0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4e1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4e2: PushEmpty(bool, object)
0x4e3: PushEmpty(object)
0x4e4: Call2 0x847

0x4e5: Stack[-1] = Stack[-2]
0x4e6: Pop(1)
0x4e7: Call2 0x79a

0x4e8: Pop(2)
0x4e9: PushEmpty(bool, object, float)
0x4ea: Stack[-12] = Stack[-2]
0x4eb: Stack[-1] = (float) 70.0
0x4ec: Call2 0x745

0x4ed: Pop(2)
0x4ee: Pop(1); Push((bool) Stack[-1] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-10] = (int) -2
0x4f1: Return(); Pop(8)

0x4f2: @ CreateDialog(Stack[-4])
0x4f3: Pop(0)
0x4f4: PushEmpty(int)
0x4f5: Call2 0x898

0x4f6: Pop(0)
0x4f7: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x4f8: Pop(1)
0x4f9: PushEmpty(int)
0x4fa: Call2 0x896

0x4fb: Pop(0)
0x4fc: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x4fd: Pop(1)
0x4fe: PushEmpty(string)
0x4ff: Call2 0x89a

0x500: Pop(0)
0x501: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x502: Pop(1)
0x503: PushEmpty(string)
0x504: Call2 0x89c

0x505: Pop(0)
0x506: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x507: Pop(1)
0x508: PushEmpty(int)
0x509: Call2 0x948

0x50a: Pop(0)
0x50b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x50c: Pop(1)
0x50d: Stack[-2] = (int) -1
0x50e: @ IsOverrideActive(Stack[-3])
0x50f: Pop(0)
0x510: Push(Stack[-3])
0x511: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x512: Stack[-10] = (int) -2
0x513: Return(); Pop(8)

0x514: @ DoDialog(Stack[-4])
0x515: Pop(0)
0x516: PushEmpty(object, object)
0x517: Stack[-11] = Stack[-2]
0x518: Stack[-6] = Stack[-1]
0x519: Push(-2, 4); TaskCall(10)
0x51a: Call2 0x531

0x51b: Pop(-2, 4); TaskReturn
0x51c: Pop(2)
0x51d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x51e: Pop(0)
0x51f: Pop(0); Push((bool) Stack[-1] == 0)
0x520: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x521: @ sync()
0x522: Pop(0)
0x523: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x524: Pop(0)
0x525: GOTO 0x51f

0x526: PushEmpty(object)
0x527: Stack[-10] = Stack[-1]
0x528: Call2 0x789

0x529: Pop(1)
0x52a: @ StopDialog(Stack[-4])
0x52b: Pop(0)
0x52c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x52d: Pop(0)
0x52e: Stack[-2] = Stack[-10]
0x52f: Return(); Pop(8)

0x530: Stack[-4] = 0
0x531: PushEmpty()
0x532: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x533: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x534: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x535: Push((int) 1)
0x536: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x537: PushEmpty(string)
0x538: Stack[-1] = "Neutral" // @poff=89
0x539: Call2 0x579

0x53a: Pop(1)
0x53b: Push((int) 525599)
0x53c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x53d: Pop(1)
0x53e: @@@ ClearReplies(); Obj=0 // @poff=116
0x53f: Pop(0)
0x540: PushEmpty(bool)
0x541: Stack[-1] = (bool) 0
0x542: PushEmpty(bool, object)
0x543: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x544: Call2 0x8ca

0x545: Pop(1)
0x546: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x547: PushEmpty(bool, object)
0x548: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x549: Call2 0x8d6

0x54a: Pop(1)
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: Stack[-1] = (bool) 1
0x54d: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x54e: Push((int) 525600)
0x54f: Push((int) 26948)
0x550: Push((int) 26947)
0x551: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x552: Pop(3)
0x553: Push((int) 525605)
0x554: Push((int) -1)
0x555: Push((int) 26952)
0x556: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x557: Pop(3)
0x558: GOTO 0x55b

0x559: Return(); Pop(0)

0x55a: GOTO 0x535

0x55b: PushEmpty(bool)
0x55c: Call2 0x89e

0x55d: Pop(0)
0x55e: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x55f: @ lshWaitForAnimEnd()
0x560: Pop(0)
0x561: Push( Stack[3 + Tasks[-1].StackPointer] )
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: GOTO 0x569

0x564: PushEmpty(string)
0x565: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x566: Call2 0x824

0x567: Pop(1)
0x568: GOTO 0x55f

0x569: GOTO 0x578

0x56a: Push("all") // @poff=138
0x56b: Push("idle") // @poff=146
0x56c: @ PlayAnimation(Stack[-2], Stack[-1])
0x56d: Pop(2)
0x56e: @ WaitForAnimEnd()
0x56f: Pop(0)
0x570: Push( Stack[3 + Tasks[-1].StackPointer] )
0x571: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x572: GOTO 0x578

0x573: Push("all") // @poff=138
0x574: Push("idle") // @poff=146
0x575: @ PlayAnimation(Stack[-2], Stack[-1])
0x576: Pop(2)
0x577: GOTO 0x56e

0x578: Return(); Pop(0)

0x579: PushEmpty()
0x57a: PushEmpty(bool)
0x57b: Call2 0x89e

0x57c: Pop(0)
0x57d: Pop(1); Push((bool) Stack[-1] == 0)
0x57e: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57f: Return(); Pop(0)

0x580: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: Return(); Pop(0)

0x583: PushEmpty(string, bool)
0x584: Stack[-3] = Stack[-2]
0x585: Push("") // @poff=102
0x586: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x588: Stack[-1] = (bool) 0
0x589: GOTO 0x58b

0x58a: Stack[-1] = (bool) 1
0x58b: Call2 0x82b

0x58c: Pop(2)
0x58d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x58e: Return(); Pop(0)

0x58f: PushEmpty()
0x590: Push((int) 1)
0x591: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x592: PushEmpty()
0x593: Call2 0x840

0x594: Pop(0)
0x595: Push((int) 26947)
0x596: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x598: PushEmpty(object, object)
0x599: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59b: Call2 0x8a0

0x59c: Pop(2)
0x59d: Push((int) 26951)
0x59e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a0: PushEmpty(object, object)
0x5a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a3: Call2 0x8ba

0x5a4: Pop(2)
0x5a5: PushEmpty(object, object)
0x5a6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a8: Call2 0x8c4

0x5a9: Pop(2)
0x5aa: Push((int) 26946)
0x5ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ad: PushEmpty(string)
0x5ae: Stack[-1] = "Neutral" // @poff=89
0x5af: Call2 0x579

0x5b0: Pop(1)
0x5b1: Push((int) 525599)
0x5b2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b3: Pop(1)
0x5b4: @@@ ClearReplies(); Obj=0 // @poff=116
0x5b5: Pop(0)
0x5b6: PushEmpty(bool)
0x5b7: Stack[-1] = (bool) 0
0x5b8: PushEmpty(bool, object)
0x5b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ba: Call2 0x8ca

0x5bb: Pop(1)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5bd: PushEmpty(bool, object)
0x5be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5bf: Call2 0x8d6

0x5c0: Pop(1)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c2: Stack[-1] = (bool) 1
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c4: Push((int) 525600)
0x5c5: Push((int) 26948)
0x5c6: Push((int) 26947)
0x5c7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c8: Pop(3)
0x5c9: Push((int) 525605)
0x5ca: Push((int) -1)
0x5cb: Push((int) 26952)
0x5cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5cd: Pop(3)
0x5ce: Return(); Pop(0)

0x5cf: Push((int) 26948)
0x5d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Neutral" // @poff=89
0x5d4: Call2 0x579

0x5d5: Pop(1)
0x5d6: Push((int) 525601)
0x5d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d8: Pop(1)
0x5d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x5da: Pop(0)
0x5db: Push((int) 525602)
0x5dc: Push((int) 26950)
0x5dd: Push((int) 26949)
0x5de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5df: Pop(3)
0x5e0: Return(); Pop(0)

0x5e1: Push((int) 26950)
0x5e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5e4: PushEmpty(string)
0x5e5: Stack[-1] = "Neutral" // @poff=89
0x5e6: Call2 0x579

0x5e7: Pop(1)
0x5e8: Push((int) 525603)
0x5e9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5ea: Pop(1)
0x5eb: @@@ ClearReplies(); Obj=0 // @poff=116
0x5ec: Pop(0)
0x5ed: Push((int) 525604)
0x5ee: Push((int) -1)
0x5ef: Push((int) 26951)
0x5f0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5f1: Pop(3)
0x5f2: Return(); Pop(0)

0x5f3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5f4: PushEmpty(bool)
0x5f5: Call2 0x89e

0x5f6: Pop(0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f8: @ lshStopAnimation()
0x5f9: Pop(0)
0x5fa: GOTO 0x5fd

0x5fb: @ StopAnimation()
0x5fc: Pop(0)
0x5fd: Return(); Pop(0)

0x5fe: GOTO 0x590

0x5ff: Return(); Pop(0)

0x600: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x601: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x602: PushEmpty(bool, object)
0x603: PushEmpty(object)
0x604: Call2 0x847

0x605: Stack[-1] = Stack[-2]
0x606: Pop(1)
0x607: Call2 0x79a

0x608: Pop(2)
0x609: PushEmpty(bool, object, float)
0x60a: Stack[-12] = Stack[-2]
0x60b: Stack[-1] = (float) 70.0
0x60c: Call2 0x745

0x60d: Pop(2)
0x60e: Pop(1); Push((bool) Stack[-1] == 0)
0x60f: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x610: Stack[-10] = (int) -2
0x611: Return(); Pop(8)

0x612: @ CreateDialog(Stack[-4])
0x613: Pop(0)
0x614: PushEmpty(int)
0x615: Call2 0x898

0x616: Pop(0)
0x617: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x618: Pop(1)
0x619: PushEmpty(int)
0x61a: Call2 0x896

0x61b: Pop(0)
0x61c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x61d: Pop(1)
0x61e: PushEmpty(string)
0x61f: Call2 0x89a

0x620: Pop(0)
0x621: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x622: Pop(1)
0x623: PushEmpty(string)
0x624: Call2 0x89c

0x625: Pop(0)
0x626: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x627: Pop(1)
0x628: PushEmpty(int)
0x629: Call2 0x948

0x62a: Pop(0)
0x62b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x62c: Pop(1)
0x62d: Stack[-2] = (int) -1
0x62e: @ IsOverrideActive(Stack[-3])
0x62f: Pop(0)
0x630: Push(Stack[-3])
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-10] = (int) -2
0x633: Return(); Pop(8)

0x634: @ DoDialog(Stack[-4])
0x635: Pop(0)
0x636: PushEmpty(object, object)
0x637: Stack[-11] = Stack[-2]
0x638: Stack[-6] = Stack[-1]
0x639: Push(-2, 4); TaskCall(12)
0x63a: Call2 0x651

0x63b: Pop(-2, 4); TaskReturn
0x63c: Pop(2)
0x63d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x63e: Pop(0)
0x63f: Pop(0); Push((bool) Stack[-1] == 0)
0x640: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x641: @ sync()
0x642: Pop(0)
0x643: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x644: Pop(0)
0x645: GOTO 0x63f

0x646: PushEmpty(object)
0x647: Stack[-10] = Stack[-1]
0x648: Call2 0x789

0x649: Pop(1)
0x64a: @ StopDialog(Stack[-4])
0x64b: Pop(0)
0x64c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x64d: Pop(0)
0x64e: Stack[-2] = Stack[-10]
0x64f: Return(); Pop(8)

0x650: Stack[-4] = 0
0x651: PushEmpty()
0x652: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x653: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x654: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x655: Push((int) 1)
0x656: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x657: PushEmpty(string)
0x658: Stack[-1] = "Neutral" // @poff=89
0x659: Call2 0x68b

0x65a: Pop(1)
0x65b: Push((int) 540545)
0x65c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65d: Pop(1)
0x65e: @@@ ClearReplies(); Obj=0 // @poff=116
0x65f: Pop(0)
0x660: Push((int) 540546)
0x661: Push((int) -1)
0x662: Push((int) 42555)
0x663: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x664: Pop(3)
0x665: Push((int) 540798)
0x666: Push((int) -1)
0x667: Push((int) 42847)
0x668: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x669: Pop(3)
0x66a: GOTO 0x66d

0x66b: Return(); Pop(0)

0x66c: GOTO 0x655

0x66d: PushEmpty(bool)
0x66e: Call2 0x89e

0x66f: Pop(0)
0x670: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x671: @ lshWaitForAnimEnd()
0x672: Pop(0)
0x673: Push( Stack[3 + Tasks[-1].StackPointer] )
0x674: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x675: GOTO 0x67b

0x676: PushEmpty(string)
0x677: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x678: Call2 0x824

0x679: Pop(1)
0x67a: GOTO 0x671

0x67b: GOTO 0x68a

0x67c: Push("all") // @poff=138
0x67d: Push("idle") // @poff=146
0x67e: @ PlayAnimation(Stack[-2], Stack[-1])
0x67f: Pop(2)
0x680: @ WaitForAnimEnd()
0x681: Pop(0)
0x682: Push( Stack[3 + Tasks[-1].StackPointer] )
0x683: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x684: GOTO 0x68a

0x685: Push("all") // @poff=138
0x686: Push("idle") // @poff=146
0x687: @ PlayAnimation(Stack[-2], Stack[-1])
0x688: Pop(2)
0x689: GOTO 0x680

0x68a: Return(); Pop(0)

0x68b: PushEmpty()
0x68c: PushEmpty(bool)
0x68d: Call2 0x89e

0x68e: Pop(0)
0x68f: Pop(1); Push((bool) Stack[-1] == 0)
0x690: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x691: Return(); Pop(0)

0x692: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x693: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x694: Return(); Pop(0)

0x695: PushEmpty(string, bool)
0x696: Stack[-3] = Stack[-2]
0x697: Push("") // @poff=102
0x698: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x69a: Stack[-1] = (bool) 0
0x69b: GOTO 0x69d

0x69c: Stack[-1] = (bool) 1
0x69d: Call2 0x82b

0x69e: Pop(2)
0x69f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6a0: Return(); Pop(0)

0x6a1: PushEmpty()
0x6a2: Push((int) 1)
0x6a3: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6a4: PushEmpty()
0x6a5: Call2 0x840

0x6a6: Pop(0)
0x6a7: Push((int) 42554)
0x6a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a9: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6aa: PushEmpty(string)
0x6ab: Stack[-1] = "Neutral" // @poff=89
0x6ac: Call2 0x68b

0x6ad: Pop(1)
0x6ae: Push((int) 540545)
0x6af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6b0: Pop(1)
0x6b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x6b2: Pop(0)
0x6b3: Push((int) 540546)
0x6b4: Push((int) -1)
0x6b5: Push((int) 42555)
0x6b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b7: Pop(3)
0x6b8: Push((int) 540798)
0x6b9: Push((int) -1)
0x6ba: Push((int) 42847)
0x6bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6bc: Pop(3)
0x6bd: Return(); Pop(0)

0x6be: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6bf: PushEmpty(bool)
0x6c0: Call2 0x89e

0x6c1: Pop(0)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c3: @ lshStopAnimation()
0x6c4: Pop(0)
0x6c5: GOTO 0x6c8

0x6c6: @ StopAnimation()
0x6c7: Pop(0)
0x6c8: Return(); Pop(0)

0x6c9: GOTO 0x6a2

0x6ca: Return(); Pop(0)

0x6cb: Push(GlobalVars[1])
0x6cc: Stack[-1] = (bool) 1
0x6cd: GlobalVars[1] = Stack[-1]; Pop(1)
0x6ce: PushEmpty()
0x6cf: Call2 0x6da

0x6d0: Pop(0)
0x6d1: Return(); Pop(0)

0x6d2: PushEmpty()
0x6d3: Push("icot_viktor_NPC_Trigger") // @poff=156
0x6d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d6: PushEmpty()
0x6d7: Call2 0x701

0x6d8: Pop(0)
0x6d9: Return(); Pop(0)

0x6da: @ GetPosition(Stack[-1]T)
0x6db: Pop(0)
0x6dc: @ GetDirection(Stack[-2]T)
0x6dd: Pop(0)
0x6de: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6df: PushEmpty(bool)
0x6e0: Call2 0x740

0x6e1: Pop(0)
0x6e2: Pop(1); Push((bool) Stack[-1] == 0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e4: PushEmpty()
0x6e5: Push(-0, 0); TaskCall(0)
0x6e6: Call2 0x0

0x6e7: Pop(-0, 0); TaskReturn
0x6e8: Pop(0)
0x6e9: PushEmpty()
0x6ea: Call2 0x6f6

0x6eb: Pop(0)
0x6ec: PushEmpty(string)
0x6ed: Stack[-1] = "Neutral" // @poff=89
0x6ee: Call2 0x824

0x6ef: Pop(1)
0x6f0: @ lshWaitForAnimEnd()
0x6f1: Pop(0)
0x6f2: GOTO 0x6ec

0x6f3: @ Hold()
0x6f4: Pop(0)
0x6f5: Return(); Pop(0)

0x6f6: @ SetPosition(Stack[-1]T)
0x6f7: Pop(0)
0x6f8: @ SetDirection(Stack[-2]T)
0x6f9: Pop(0)
0x6fa: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6fb: Push("all") // @poff=138
0x6fc: Push("stand") // @poff=204
0x6fd: Push((int) 0)
0x6fe: @ LockAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: Return(); Pop(0)

0x701: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x702: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x703: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x704: Push("all") // @poff=138
0x705: Push("stand") // @poff=204
0x706: @ PlayAnimation(Stack[-2], Stack[-1])
0x707: Pop(2)
0x708: @ WaitForAnimEnd()
0x709: Pop(0)
0x70a: Return(); Pop(0)

0x70b: PushEmpty()
0x70c: Push(-0, 0); TaskCall(0)
0x70d: Call2 0x0

0x70e: Pop(-0, 0); TaskReturn
0x70f: Pop(0)
0x710: PushEmpty()
0x711: Call2 0x6f6

0x712: Pop(0)
0x713: Return(); Pop(0)

0x714: PushEmpty(bool, bool)
0x715: Push( Stack[0 + Tasks[-1].StackPointer] )
0x716: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x717: @ IsOverrideActive(Stack[-1])
0x718: Pop(0)
0x719: Pop(0); Push((bool) Stack[-1] == 0)
0x71a: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x71b: EventDisable(0)
0x71c: PushEmpty(bool, object)
0x71d: Stack[-5] = Stack[-1]
0x71e: Call2 0x737

0x71f: Pop(2)
0x720: EventEnable(0)
0x721: PushEmpty(object)
0x722: Stack[-4] = Stack[-1]
0x723: Call2 0x959

0x724: Pop(1)
0x725: Return(); Pop(2)

0x726: PushEmpty(int, int)
0x727: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=216
0x728: Pop(0)
0x729: Pop(0); Push(Stack[-1] + Stack[-3]);
0x72a: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=228
0x72b: Pop(1)
0x72c: Return(); Pop(2)

0x72d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x72e: @ GetPosition(Stack[-3])
0x72f: Pop(0)
0x730: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x731: Push(CvectorIndex(Stack[-2], 0))
0x732: Push(CvectorIndex(Stack[-3], 2))
0x733: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x734: Pop(2)
0x735: Stack[-1] = Stack[-8]
0x736: Return(); Pop(6)

0x737: PushEmpty(cvector, cvector)
0x738: @@ GetPosition(Stack[-1]); Obj=3 // @poff=240
0x739: Pop(0)
0x73a: PushEmpty(bool, cvector)
0x73b: Stack[-3] = Stack[-1]
0x73c: Call2 0x72d

0x73d: Stack[-2] = Stack[-6]
0x73e: Pop(2)
0x73f: Return(); Pop(2)

0x740: PushEmpty(bool, bool)
0x741: @ IsLoaded(Stack[-1])
0x742: Pop(0)
0x743: Stack[-1] = Stack[-3]
0x744: Return(); Pop(2)

0x745: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x746: @@ GetPosition(Stack[-8]); Obj=20 // @poff=240
0x747: Pop(0)
0x748: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=252
0x749: Pop(0)
0x74a: Push(CvectorIndex(Stack[-8], 1))
0x74b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x74c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x74d: @ GetPosition(Stack[-7])
0x74e: Pop(0)
0x74f: @ GetEyesHeight(Stack[-9])
0x750: Pop(0)
0x751: Push(CvectorIndex(Stack[-7], 1))
0x752: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x753: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x754: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x755: Push(CvectorIndex(Stack[-6], 1))
0x756: Stack[-1] = (int) 0
0x757: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x758: Pop(0); Push(Stack[-6] | Stack[-6]);
0x759: Pop(1); Push(Sqrt(Stack[-1]))
0x75a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x75b: Stack[-5] = -Stack[-6]; Pop(0);
0x75c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x75d: PushEmpty(cvector, cvector)
0x75e: Push([0.0, 1.0, 0.0])
0x75f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x760: Call2 0x84d

0x761: Pop(1)
0x762: Push((int) 25)
0x763: Pop(2); Push(Stack[-2] * Stack[-1]);
0x764: Pop(2); Push(Stack[-2] + Stack[-1]);
0x765: Push([0.0, 10.0, 0.0])
0x766: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x767: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x768: @ IsOverrideActive(Stack[-2])
0x769: Pop(0)
0x76a: Push(Stack[-2])
0x76b: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76c: Stack[-21] = (bool) 0
0x76d: Return(); Pop(18)

0x76e: @ StopWorld()
0x76f: Pop(0)
0x770: @ CameraTransit(Stack[-3], Stack[-5])
0x771: Pop(0)
0x772: Push(CvectorIndex(Stack[-4], 0))
0x773: Push(CvectorIndex(Stack[-5], 2))
0x774: @ Rotate(Stack[-2], Stack[-1])
0x775: Pop(2)
0x776: PushEmpty(bool)
0x777: Call2 0x89e

0x778: Pop(0)
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: GOTO 0x783

0x77b: Push("head") // @poff=266
0x77c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x77d: Pop(1)
0x77e: Push(Stack[-1])
0x77f: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x780: Push("head") // @poff=266
0x781: @ LookAsyncCamera(Stack[-1])
0x782: Pop(1)
0x783: @ CameraWaitForPlayFinish()
0x784: Pop(0)
0x785: @ ResumeWorld()
0x786: Pop(0)
0x787: Stack[-21] = (bool) 1
0x788: Return(); Pop(18)

0x789: PushEmpty(bool, bool)
0x78a: @ CameraSwitchToNormal()
0x78b: Pop(0)
0x78c: PushEmpty(bool)
0x78d: Call2 0x89e

0x78e: Pop(0)
0x78f: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x790: GOTO 0x799

0x791: Push("head") // @poff=266
0x792: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x793: Pop(1)
0x794: Push(Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x796: Push("head") // @poff=266
0x797: @ UnlookAsync(Stack[-1])
0x798: Pop(1)
0x799: Return(); Pop(2)

0x79a: PushEmpty(int, int, int, int)
0x79b: Push("voice_common") // @poff=276
0x79c: @ GetVariable(Stack[-1], Stack[-3])
0x79d: Pop(1)
0x79e: Push(Stack[-2])
0x79f: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7a0: PushEmpty(bool, object)
0x7a1: Stack[-7] = Stack[-1]
0x7a2: Call2 0x7d4

0x7a3: Pop(1)
0x7a4: Pop(1); Push((bool) Stack[-1] == 0)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a6: PushEmpty(bool, object)
0x7a7: Stack[-7] = Stack[-1]
0x7a8: Call2 0x7f9

0x7a9: Pop(1)
0x7aa: Pop(1); Push((bool) Stack[-1] == 0)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ac: Stack[-6] = (bool) 0
0x7ad: Return(); Pop(4)

0x7ae: Push((int) 2)
0x7af: @ irand(Stack[-2], Stack[-1])
0x7b0: Pop(1)
0x7b1: Push(Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b3: Push("voice_common") // @poff=276
0x7b4: Push((int) 1)
0x7b5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7b6: Push((int) 3)
0x7b7: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7b8: @ SetVariable(Stack[-2], Stack[-1])
0x7b9: Pop(2)
0x7ba: GOTO 0x7bf

0x7bb: Push("voice_common") // @poff=276
0x7bc: Push((int) 0)
0x7bd: @ SetVariable(Stack[-2], Stack[-1])
0x7be: Pop(2)
0x7bf: GOTO 0x7d2

0x7c0: PushEmpty(bool, object)
0x7c1: Stack[-7] = Stack[-1]
0x7c2: Call2 0x7f9

0x7c3: Pop(1)
0x7c4: Pop(1); Push((bool) Stack[-1] == 0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7c6: PushEmpty(bool, object)
0x7c7: Stack[-7] = Stack[-1]
0x7c8: Call2 0x7d4

0x7c9: Pop(1)
0x7ca: Pop(1); Push((bool) Stack[-1] == 0)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7cc: Stack[-6] = (bool) 0
0x7cd: Return(); Pop(4)

0x7ce: Push("voice_common") // @poff=276
0x7cf: Push((int) 1)
0x7d0: @ SetVariable(Stack[-2], Stack[-1])
0x7d1: Pop(2)
0x7d2: Stack[-6] = (bool) 1
0x7d3: Return(); Pop(4)

0x7d4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7d5: Stack[-5] = "c" // @poff=302
0x7d6: Stack[-4] = (int) 0
0x7d7: Push((int) 1)
0x7d8: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7d9: Push((int) 1)
0x7da: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7db: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7dc: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=306
0x7dd: Pop(1)
0x7de: Pop(0); Push((bool) Stack[-3] == 0)
0x7df: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7e0: GOTO 0x7e4

0x7e1: Push((int) 1)
0x7e2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7e3: GOTO 0x7d7

0x7e4: Pop(0); Push((bool) Stack[-4] == 0)
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e6: Stack[-12] = (bool) 0
0x7e7: Return(); Pop(10)

0x7e8: Stack[-2] = (int) 0
0x7e9: Push((int) 1)
0x7ea: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ec: @ irand(Stack[-2], Stack[-4])
0x7ed: Pop(0)
0x7ee: Push((int) 1)
0x7ef: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7f0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7f1: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=216
0x7f2: Pop(1)
0x7f3: PushEmpty(bool, string)
0x7f4: Stack[-3] = Stack[-1]
0x7f5: Call2 0x831

0x7f6: Stack[-2] = Stack[-14]
0x7f7: Pop(2)
0x7f8: Return(); Pop(10)

0x7f9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7fa: Push("d") // @poff=212
0x7fb: PushEmpty(int)
0x7fc: Call2 0x887

0x7fd: Pop(0)
0x7fe: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7ff: Push("m") // @poff=318
0x800: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x801: Stack[-4] = (int) 0
0x802: Push((int) 1)
0x803: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x804: Push((int) 1)
0x805: Pop(1); Push(Stack[-5] + Stack[-1]);
0x806: Pop(1); Push(Stack[-6] + Stack[-1]);
0x807: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=306
0x808: Pop(1)
0x809: Pop(0); Push((bool) Stack[-3] == 0)
0x80a: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80b: GOTO 0x80f

0x80c: Push((int) 1)
0x80d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x80e: GOTO 0x802

0x80f: Pop(0); Push((bool) Stack[-4] == 0)
0x810: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x811: Stack[-12] = (bool) 0
0x812: Return(); Pop(10)

0x813: Stack[-2] = (int) 0
0x814: Push((int) 1)
0x815: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x817: @ irand(Stack[-2], Stack[-4])
0x818: Pop(0)
0x819: Push((int) 1)
0x81a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x81b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x81c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=216
0x81d: Pop(1)
0x81e: PushEmpty(bool, string)
0x81f: Stack[-3] = Stack[-1]
0x820: Call2 0x831

0x821: Stack[-2] = Stack[-14]
0x822: Pop(2)
0x823: Return(); Pop(10)

0x824: PushEmpty(float, float, float, float)
0x825: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x826: Pop(0)
0x827: Push((bool) 0)
0x828: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x829: Pop(1)
0x82a: Return(); Pop(4)

0x82b: PushEmpty(float, float, float, float)
0x82c: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x82d: Pop(0)
0x82e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x82f: Pop(0)
0x830: Return(); Pop(4)

0x831: PushEmpty(bool, bool)
0x832: PushEmpty(bool)
0x833: Call2 0x89e

0x834: Pop(0)
0x835: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x836: @ lshHasSpeech(Stack[-1], Stack[-3])
0x837: Pop(0)
0x838: Push(Stack[-1])
0x839: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x83a: @ lshPlaySpeech(Stack[-3])
0x83b: Pop(0)
0x83c: Stack[-4] = (bool) 1
0x83d: Return(); Pop(2)

0x83e: Stack[-4] = (bool) 0
0x83f: Return(); Pop(2)

0x840: PushEmpty(bool)
0x841: Call2 0x89e

0x842: Pop(0)
0x843: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x844: @ lshStopSpeech()
0x845: Pop(0)
0x846: Return(); Pop(0)

0x847: PushEmpty(object, object)
0x848: @ self(Stack[-1])
0x849: Pop(0)
0x84a: Stack[-1] = Stack[-3]
0x84b: Return(); Pop(2)

0x84c: Stack[-1] = 0
0x84d: PushEmpty(float, float)
0x84e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x84f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x850: Push((float)9.999999974752427e-07)
0x851: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x852: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x853: Stack[-4] = [0.0, 0.0, 0.0]
0x854: Return(); Pop(2)

0x855: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x856: Return(); Pop(2)

0x857: PushEmpty(int, int)
0x858: @ GetVariable(Stack[-3], Stack[-1])
0x859: Pop(0)
0x85a: Stack[-1] = Stack[-4]
0x85b: Return(); Pop(2)

0x85c: PushEmpty(object, object)
0x85d: @ CreateIntVector(Stack[-1])
0x85e: Pop(0)
0x85f: @@ add(Stack[-4]); Obj=1 // @poff=322
0x860: Pop(0)
0x861: @@ add(Stack[-3]); Obj=1 // @poff=322
0x862: Pop(0)
0x863: Push((int) 3)
0x864: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x865: Pop(1)
0x866: Return(); Pop(2)

0x867: Stack[-1] = 0
0x868: PushEmpty(int, int)
0x869: PushEmpty(object, string, int)
0x86a: Stack[-7] = Stack[-3]
0x86b: Stack[-2] = "money" // @poff=326
0x86c: Stack[-6] = Stack[-1]
0x86d: Call2 0x726

0x86e: Pop(3)
0x86f: Push((int) 0)
0x870: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x871: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x872: Push("Money") // @poff=338
0x873: @ GetInvItemByName(Stack[-2], Stack[-1])
0x874: Pop(1)
0x875: PushEmpty(int, int)
0x876: Stack[-3] = Stack[-2]
0x877: Stack[-5] = Stack[-1]
0x878: Call2 0x85c

0x879: Pop(2)
0x87a: Return(); Pop(2)

0x87b: PushEmpty(object, object)
0x87c: @ FindActor(Stack[-1], Stack[-4])
0x87d: Pop(0)
0x87e: Pop(0); PushNull((bool) Stack[-1] == 0)
0x87f: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x880: Stack[-5] = (bool) 0
0x881: Return(); Pop(2)

0x882: @ Trigger(Stack[-1], Stack[-3])
0x883: Pop(0)
0x884: Stack[-5] = (bool) 1
0x885: Return(); Pop(2)

0x886: Stack[-1] = 0
0x887: PushEmpty(float, float)
0x888: @ GetGameTime(Stack[-1])
0x889: Pop(0)
0x88a: Push((int) 1)
0x88b: PushEmpty(int)
0x88c: Push((int) 24)
0x88d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x88e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x88f: Return(); Pop(2)

0x890: PushEmpty()
0x891: PushEmpty(int)
0x892: Call2 0x887

0x893: Pop(0)
0x894: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x895: Return(); Pop(0)

0x896: Stack[-1] = (int) 515554
0x897: Return(); Pop(0)

0x898: Stack[-1] = (int) 502879
0x899: Return(); Pop(0)

0x89a: Stack[-1] = "ui/NPC_Viktor.png" // @poff=350
0x89b: Return(); Pop(0)

0x89c: Stack[-1] = "ui/NPC_Viktor_b.png" // @poff=386
0x89d: Return(); Pop(0)

0x89e: Stack[-1] = (bool) 1
0x89f: Return(); Pop(0)

0x8a0: PushEmpty()
0x8a1: Push("ook3Viktor1") // @poff=426
0x8a2: Push((int) 1)
0x8a3: @ SetVariable(Stack[-2], Stack[-1])
0x8a4: Pop(2)
0x8a5: Return(); Pop(0)

0x8a6: PushEmpty()
0x8a7: Push("ook10Viktor1") // @poff=450
0x8a8: Push((int) 1)
0x8a9: @ SetVariable(Stack[-2], Stack[-1])
0x8aa: Pop(2)
0x8ab: Return(); Pop(0)

0x8ac: PushEmpty()
0x8ad: Push("k9q01") // @poff=476
0x8ae: Push((int) 5)
0x8af: @ SetVariable(Stack[-2], Stack[-1])
0x8b0: Pop(2)
0x8b1: PushEmpty()
0x8b2: Call2 0x912

0x8b3: Pop(0)
0x8b4: PushEmpty(bool, string, string)
0x8b5: Stack[-2] = "quest_k9_01" // @poff=488
0x8b6: Stack[-1] = "init_mnogogrannik" // @poff=512
0x8b7: Call2 0x87b

0x8b8: Pop(3)
0x8b9: Return(); Pop(0)

0x8ba: PushEmpty()
0x8bb: Push("money500 is given") // @poff=548
0x8bc: @ Trace(Stack[-1])
0x8bd: Pop(1)
0x8be: PushEmpty(object, int)
0x8bf: Stack[-4] = Stack[-2]
0x8c0: Stack[-1] = (int) 500
0x8c1: Call2 0x868

0x8c2: Pop(2)
0x8c3: Return(); Pop(0)

0x8c4: PushEmpty()
0x8c5: Push("playsound") // @poff=584
0x8c6: Push("givemoney") // @poff=604
0x8c7: @ TriggerWorld(Stack[-2], Stack[-1])
0x8c8: Pop(2)
0x8c9: Return(); Pop(0)

0x8ca: PushEmpty()
0x8cb: PushEmpty(int, string)
0x8cc: Stack[-1] = "k3q03" // @poff=624
0x8cd: Call2 0x857

0x8ce: Pop(1)
0x8cf: Push((int) 1000)
0x8d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8d2: Stack[-2] = (bool) 1
0x8d3: Return(); Pop(0)

0x8d4: Stack[-2] = (bool) 0
0x8d5: Return(); Pop(0)

0x8d6: PushEmpty()
0x8d7: PushEmpty(int, string)
0x8d8: Stack[-1] = "ook3Viktor1" // @poff=426
0x8d9: Call2 0x857

0x8da: Pop(1)
0x8db: Push((int) 0)
0x8dc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8dd: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8de: Stack[-2] = (bool) 1
0x8df: Return(); Pop(0)

0x8e0: Stack[-2] = (bool) 0
0x8e1: Return(); Pop(0)

0x8e2: PushEmpty()
0x8e3: PushEmpty(int, string)
0x8e4: Stack[-1] = "k10q01" // @poff=636
0x8e5: Call2 0x857

0x8e6: Pop(1)
0x8e7: Push((int) 1)
0x8e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8ea: Stack[-2] = (bool) 1
0x8eb: Return(); Pop(0)

0x8ec: Stack[-2] = (bool) 0
0x8ed: Return(); Pop(0)

0x8ee: PushEmpty()
0x8ef: PushEmpty(int, string)
0x8f0: Stack[-1] = "ook10Viktor1" // @poff=450
0x8f1: Call2 0x857

0x8f2: Pop(1)
0x8f3: Push((int) 0)
0x8f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8f5: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f6: Stack[-2] = (bool) 1
0x8f7: Return(); Pop(0)

0x8f8: Stack[-2] = (bool) 0
0x8f9: Return(); Pop(0)

0x8fa: PushEmpty()
0x8fb: PushEmpty(int, string)
0x8fc: Stack[-1] = "k10q01" // @poff=636
0x8fd: Call2 0x857

0x8fe: Pop(1)
0x8ff: Push((int) 2)
0x900: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x901: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x902: Stack[-2] = (bool) 1
0x903: Return(); Pop(0)

0x904: Stack[-2] = (bool) 0
0x905: Return(); Pop(0)

0x906: PushEmpty()
0x907: PushEmpty(int, string)
0x908: Stack[-1] = "k9q01" // @poff=476
0x909: Call2 0x857

0x90a: Pop(1)
0x90b: Push((int) 4)
0x90c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: Stack[-2] = (bool) 1
0x90f: Return(); Pop(0)

0x910: Stack[-2] = (bool) 0
0x911: Return(); Pop(0)

0x912: PushEmpty(object, object)
0x913: Push((int) 522)
0x914: Push((int) 1)
0x915: Push((int) 529814)
0x916: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x917: Pop(3)
0x918: PushEmpty(bool, object, int)
0x919: Stack[-4] = Stack[-2]
0x91a: Stack[-1] = (int) 517
0x91b: Call2 0x92c

0x91c: Pop(3)
0x91d: Return(); Pop(2)

0x91e: Stack[-1] = 0
0x91f: PushEmpty(object, object)
0x920: @ GetDiaryRoot(Stack[-1])
0x921: Pop(0)
0x922: Pop(0); Push((bool) Stack[-1] == 0)
0x923: IF (Stack[-1] == 0) GOTO 0x929; Pop(1)

0x924: Push("Can't retrieve diary root") // @poff=650
0x925: @ Trace(Stack[-1])
0x926: Pop(1)
0x927: Stack[-3] = (bool) 0
0x928: Return(); Pop(2)

0x929: Stack[-1] = Stack[-3]
0x92a: Return(); Pop(2)

0x92b: Stack[-1] = 0
0x92c: PushEmpty(object, object, int, object, object, int)
0x92d: PushEmpty(object)
0x92e: Call2 0x91f

0x92f: Stack[-1] = Stack[-4]
0x930: Pop(1)
0x931: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=702
0x932: Pop(0)
0x933: Pop(0); Push((bool) Stack[-2] == 0)
0x934: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x935: Push("Can't find diary parent with id: ") // @poff=707
0x936: Pop(1); Push(Stack[-1] + Stack[-8]);
0x937: @ Trace(Stack[-1])
0x938: Pop(1)
0x939: Stack[-9] = (bool) 0
0x93a: Return(); Pop(6)

0x93b: @@ AddChild(Stack[-8]); Obj=2 // @poff=775
0x93c: Pop(0)
0x93d: Push((int) 7)
0x93e: @ SendWorldWndMessage(Stack[-1])
0x93f: Pop(1)
0x940: @@ GetCategory(Stack[-1]); Obj=8 // @poff=784
0x941: Pop(0)
0x942: @ SetDiarySection(Stack[-1])
0x943: Pop(0)
0x944: Stack[-9] = (bool) 0
0x945: Return(); Pop(6)

0x946: Stack[-2] = 0
0x947: Stack[-3] = 0
0x948: PushEmpty(int, int)
0x949: Push("branch") // @poff=796
0x94a: @ GetVariable(Stack[-1], Stack[-2])
0x94b: Pop(1)
0x94c: Push((int) 0)
0x94d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x94e: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x94f: Stack[-3] = (int) 1
0x950: Return(); Pop(2)

0x951: GOTO 0x957

0x952: Push((int) 1)
0x953: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x955: Stack[-3] = (int) 2
0x956: Return(); Pop(2)

0x957: Stack[-3] = (int) 3
0x958: Return(); Pop(2)

0x959: PushEmpty()
0x95a: Push(GlobalVars[1])
0x95b: Pop(1); Push((bool) Stack[-1] == 0)
0x95c: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x95d: PushEmpty(int, object)
0x95e: Stack[-3] = Stack[-1]
0x95f: Push(-2, 1); TaskCall(1)
0x960: Call2 0xd

0x961: Pop(-2, 1); TaskReturn
0x962: Pop(2)
0x963: Push(GlobalVars[1])
0x964: Stack[-1] = (bool) 1
0x965: GlobalVars[1] = Stack[-1]; Pop(1)
0x966: PushEmpty(bool, int)
0x967: Stack[-1] = (int) 3
0x968: Call2 0x890

0x969: Pop(1)
0x96a: IF (Stack[-1] == 0) GOTO 0x972; Pop(1)

0x96b: PushEmpty(int, object)
0x96c: Stack[-3] = Stack[-1]
0x96d: Push(-2, 1); TaskCall(9)
0x96e: Call2 0x4e0

0x96f: Pop(-2, 1); TaskReturn
0x970: Pop(2)
0x971: Return(); Pop(0)

0x972: PushEmpty(bool, int)
0x973: Stack[-1] = (int) 9
0x974: Call2 0x890

0x975: Pop(1)
0x976: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x977: PushEmpty(int, object)
0x978: Stack[-3] = Stack[-1]
0x979: Push(-2, 1); TaskCall(5)
0x97a: Call2 0x269

0x97b: Pop(-2, 1); TaskReturn
0x97c: Pop(2)
0x97d: Return(); Pop(0)

0x97e: PushEmpty(bool, int)
0x97f: Stack[-1] = (int) 10
0x980: Call2 0x890

0x981: Pop(1)
0x982: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x983: PushEmpty(int, object)
0x984: Stack[-3] = Stack[-1]
0x985: Push(-2, 1); TaskCall(3)
0x986: Call2 0xce

0x987: Pop(-2, 1); TaskReturn
0x988: Pop(2)
0x989: Return(); Pop(0)

0x98a: PushEmpty(bool, int)
0x98b: Stack[-1] = (int) 12
0x98c: Call2 0x890

0x98d: Pop(1)
0x98e: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x98f: PushEmpty(int, object)
0x990: Stack[-3] = Stack[-1]
0x991: Push(-2, 1); TaskCall(7)
0x992: Call2 0x3dd

0x993: Pop(-2, 1); TaskReturn
0x994: Pop(2)
0x995: Return(); Pop(0)

0x996: PushEmpty(int, object)
0x997: Stack[-3] = Stack[-1]
0x998: Push(-2, 1); TaskCall(11)
0x999: Call2 0x600

0x99a: Pop(-2, 1); TaskReturn
0x99b: Pop(2)
0x99c: Return(); Pop(0)

