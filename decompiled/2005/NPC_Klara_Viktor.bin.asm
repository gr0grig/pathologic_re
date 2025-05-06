GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Fear
	Surprise
	Confusion
	Anger
	icot_viktor_NPC_Trigger
	stand
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	add
	money
	Money
	reputation
	ui/NPC_Viktor.png
	ui/NPC_Viktor_b.png
	ook3Viktor1
	money2000 is given
	ook10Viktor1
	k9q01
	quest_k9_01
	init_mnogogrannik
	playsound
	givemoney
	k3q03
	k10q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch

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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0x7be
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1f5 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x37a Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4d5 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5e6 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x794 Vars = (int, int)
	GTASK_13 Vars = (bool, cvector, cvector) Params = 0
		EVENT_26 Op = 0x7c5 Vars = (string)
		EVENT_6 Op = 0x7fe Vars = ()
		EVENT_0 Op = 0x807 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x855

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf: PushEmpty(bool, object, float)
0x10: Stack[-2] = Stack[-12]
0x11: Stack[-1] = (float) 70.0
0x12: Call2 0x85a

0x13: Pop(2)
0x14: Pop(1); Push((bool) Stack[-1] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x16: Stack[-10] = (int) -2
0x17: Return(); Pop(8)

0x18: @ CreateDialog(Stack[-4])
0x19: Pop(0)
0x1a: PushEmpty(int)
0x1b: Call2 0x9f7

0x1c: Pop(0)
0x1d: @@ SetNPCName(Stack[-1])
0x1e: Pop(1)
0x1f: PushEmpty(int)
0x20: Call2 0x9f5

0x21: Pop(0)
0x22: @@ SetNPCDescription(Stack[-1])
0x23: Pop(1)
0x24: PushEmpty(string)
0x25: Call2 0x9f9

0x26: Pop(0)
0x27: @@ SetPhoto(Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(string)
0x2a: Call2 0x9fb

0x2b: Pop(0)
0x2c: @@ SetPhoto2(Stack[-1])
0x2d: Pop(1)
0x2e: PushEmpty(int)
0x2f: Call2 0xaae

0x30: Pop(0)
0x31: @@ SetPlayerName(Stack[-1])
0x32: Pop(1)
0x33: Stack[-2] = (int) -1
0x34: @ IsOverrideActive(Stack[-3])
0x35: Pop(0)
0x36: Push(Stack[-3])
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Stack[-10] = (int) -2
0x39: Return(); Pop(8)

0x3a: @ DoDialog(Stack[-4])
0x3b: Pop(0)
0x3c: PushEmpty(bool, object)
0x3d: PushEmpty(object)
0x3e: Call2 0x96e

0x3f: Stack[-2] = Stack[-1]
0x40: Pop(1)
0x41: Call2 0x8af

0x42: Pop(2)
0x43: PushEmpty(object, object)
0x44: Stack[-2] = Stack[-11]
0x45: Stack[-1] = Stack[-6]
0x46: Push(-2, 4); TaskCall(2)
0x47: Call2 0x5e

0x48: Pop(-2, 4); TaskReturn
0x49: Pop(2)
0x4a: @@ IsDialogEnd(Stack[-1])
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: @ sync()
0x4f: Pop(0)
0x50: @@ IsDialogEnd(Stack[-1])
0x51: Pop(0)
0x52: GOTO 0x4c

0x53: PushEmpty(object)
0x54: Stack[-1] = Stack[-10]
0x55: Call2 0x89e

0x56: Pop(1)
0x57: @ StopDialog(Stack[-4])
0x58: Pop(0)
0x59: @@ GetReturnValue(Stack[-2])
0x5a: Pop(0)
0x5b: Stack[-10] = Stack[-2]
0x5c: Return(); Pop(8)

0x5d: Stack[-4] = 0
0x5e: PushEmpty()
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62: Push((int) 1)
0x63: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 525531)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 525532)
0x6e: Push((int) 44536)
0x6f: Push((int) 26888)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 542207)
0x73: Push((int) 44538)
0x74: Push((int) 44535)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0x9fd

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x939

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all")
0x8a: Push("idle")
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all")
0x93: Push("idle")
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x9fd

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = Stack[-3]
0xa4: Push("")
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x949

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x967

0xb3: Pop(0)
0xb4: Push((int) 26887)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral"
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 525531)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: Push((int) 525532)
0xc1: Push((int) 44536)
0xc2: Push((int) 26888)
0xc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4: Pop(3)
0xc5: Push((int) 542207)
0xc6: Push((int) 44538)
0xc7: Push((int) 44535)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 44536)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 542208)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 542209)
0xd8: Push((int) 44538)
0xd9: Push((int) 44537)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 542214)
0xdd: Push((int) 44538)
0xde: Push((int) 44543)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 44538)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x98

0xe8: Pop(1)
0xe9: Push((int) 542210)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 542211)
0xef: Push((int) 44542)
0xf0: Push((int) 44539)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 542212)
0xf4: Push((int) 44548)
0xf5: Push((int) 44541)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 44548)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral"
0xfe: Call2 0x98

0xff: Pop(1)
0x100: Push((int) 542217)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 542218)
0x106: Push((int) 44542)
0x107: Push((int) 44549)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Push((int) 542219)
0x10b: Push((int) -1)
0x10c: Push((int) 44550)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 44542)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral"
0x115: Call2 0x98

0x116: Pop(1)
0x117: Push((int) 542213)
0x118: @@ SetMessage(Stack[-1])
0x119: Pop(1)
0x11a: @@ ClearReplies()
0x11b: Pop(0)
0x11c: Push((int) 542215)
0x11d: Push((int) -1)
0x11e: Push((int) 44546)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Push((int) 542216)
0x122: Push((int) -1)
0x123: Push((int) 44547)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Return(); Pop(0)

0x127: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x128: PushEmpty(bool)
0x129: Call2 0x9fd

0x12a: Pop(0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12c: @ lshStopAnimation()
0x12d: Pop(0)
0x12e: GOTO 0x131

0x12f: @ StopAnimation()
0x130: Pop(0)
0x131: Return(); Pop(0)

0x132: GOTO 0xaf

0x133: Return(); Pop(0)

0x134: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x135: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x136: PushEmpty(bool, object, float)
0x137: Stack[-2] = Stack[-12]
0x138: Stack[-1] = (float) 70.0
0x139: Call2 0x85a

0x13a: Pop(2)
0x13b: Pop(1); Push((bool) Stack[-1] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13d: Stack[-10] = (int) -2
0x13e: Return(); Pop(8)

0x13f: @ CreateDialog(Stack[-4])
0x140: Pop(0)
0x141: PushEmpty(int)
0x142: Call2 0x9f7

0x143: Pop(0)
0x144: @@ SetNPCName(Stack[-1])
0x145: Pop(1)
0x146: PushEmpty(int)
0x147: Call2 0x9f5

0x148: Pop(0)
0x149: @@ SetNPCDescription(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(string)
0x14c: Call2 0x9f9

0x14d: Pop(0)
0x14e: @@ SetPhoto(Stack[-1])
0x14f: Pop(1)
0x150: PushEmpty(string)
0x151: Call2 0x9fb

0x152: Pop(0)
0x153: @@ SetPhoto2(Stack[-1])
0x154: Pop(1)
0x155: PushEmpty(int)
0x156: Call2 0xaae

0x157: Pop(0)
0x158: @@ SetPlayerName(Stack[-1])
0x159: Pop(1)
0x15a: Stack[-2] = (int) -1
0x15b: @ IsOverrideActive(Stack[-3])
0x15c: Pop(0)
0x15d: Push(Stack[-3])
0x15e: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15f: Stack[-10] = (int) -2
0x160: Return(); Pop(8)

0x161: @ DoDialog(Stack[-4])
0x162: Pop(0)
0x163: PushEmpty(bool, object)
0x164: PushEmpty(object)
0x165: Call2 0x96e

0x166: Stack[-2] = Stack[-1]
0x167: Pop(1)
0x168: Call2 0x8af

0x169: Pop(2)
0x16a: PushEmpty(object, object)
0x16b: Stack[-2] = Stack[-11]
0x16c: Stack[-1] = Stack[-6]
0x16d: Push(-2, 4); TaskCall(4)
0x16e: Call2 0x185

0x16f: Pop(-2, 4); TaskReturn
0x170: Pop(2)
0x171: @@ IsDialogEnd(Stack[-1])
0x172: Pop(0)
0x173: Pop(0); Push((bool) Stack[-1] == 0)
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: @ sync()
0x176: Pop(0)
0x177: @@ IsDialogEnd(Stack[-1])
0x178: Pop(0)
0x179: GOTO 0x173

0x17a: PushEmpty(object)
0x17b: Stack[-1] = Stack[-10]
0x17c: Call2 0x89e

0x17d: Pop(1)
0x17e: @ StopDialog(Stack[-4])
0x17f: Pop(0)
0x180: @@ GetReturnValue(Stack[-2])
0x181: Pop(0)
0x182: Stack[-10] = Stack[-2]
0x183: Return(); Pop(8)

0x184: Stack[-4] = 0
0x185: PushEmpty()
0x186: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x187: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x188: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x189: Push((int) 1)
0x18a: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Fear"
0x18d: Call2 0x1df

0x18e: Pop(1)
0x18f: Push((int) 526939)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 1
0x196: PushEmpty(bool)
0x197: Stack[-1] = (bool) 0
0x198: PushEmpty(bool, object)
0x199: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19a: Call2 0xa48

0x19b: Pop(1)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Call2 0xa54

0x1a0: Pop(1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 1
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1a4: PushEmpty(bool)
0x1a5: Stack[-1] = (bool) 0
0x1a6: PushEmpty(bool, object)
0x1a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a8: Call2 0xa60

0x1a9: Pop(1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ab: PushEmpty(bool, object)
0x1ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Call2 0xa54

0x1ae: Pop(1)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: Stack[-1] = (bool) 1
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: Stack[-1] = (bool) 0
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: Push((int) 526940)
0x1b5: Push((int) 28233)
0x1b6: Push((int) 28232)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Push((int) 526945)
0x1ba: Push((int) -1)
0x1bb: Push((int) 28237)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: GOTO 0x1c1

0x1bf: Return(); Pop(0)

0x1c0: GOTO 0x189

0x1c1: PushEmpty(bool)
0x1c2: Call2 0x9fd

0x1c3: Pop(0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c5: @ lshWaitForAnimEnd()
0x1c6: Pop(0)
0x1c7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: GOTO 0x1cf

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1cc: Call2 0x939

0x1cd: Pop(1)
0x1ce: GOTO 0x1c5

0x1cf: GOTO 0x1de

0x1d0: Push("all")
0x1d1: Push("idle")
0x1d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: @ WaitForAnimEnd()
0x1d5: Pop(0)
0x1d6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: GOTO 0x1de

0x1d9: Push("all")
0x1da: Push("idle")
0x1db: @ PlayAnimation(Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: GOTO 0x1d4

0x1de: Return(); Pop(0)

0x1df: PushEmpty()
0x1e0: PushEmpty(bool)
0x1e1: Call2 0x9fd

0x1e2: Pop(0)
0x1e3: Pop(1); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Return(); Pop(0)

0x1e6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Return(); Pop(0)

0x1e9: PushEmpty(string, bool)
0x1ea: Stack[-2] = Stack[-3]
0x1eb: Push("")
0x1ec: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ee: Stack[-1] = (bool) 0
0x1ef: GOTO 0x1f1

0x1f0: Stack[-1] = (bool) 1
0x1f1: Call2 0x949

0x1f2: Pop(2)
0x1f3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty()
0x1f6: Push((int) 1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x1f8: PushEmpty()
0x1f9: Call2 0x967

0x1fa: Pop(0)
0x1fb: Push((int) 28232)
0x1fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: PushEmpty(object, object)
0x1ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x201: Call2 0xa16

0x202: Pop(2)
0x203: Push((int) 28231)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Fear"
0x208: Call2 0x1df

0x209: Pop(1)
0x20a: Push((int) 526939)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: PushEmpty(bool)
0x210: Stack[-1] = (bool) 1
0x211: PushEmpty(bool)
0x212: Stack[-1] = (bool) 0
0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x215: Call2 0xa48

0x216: Pop(1)
0x217: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x218: PushEmpty(bool, object)
0x219: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Call2 0xa54

0x21b: Pop(1)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Stack[-1] = (bool) 1
0x21e: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x21f: PushEmpty(bool)
0x220: Stack[-1] = (bool) 0
0x221: PushEmpty(bool, object)
0x222: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x223: Call2 0xa60

0x224: Pop(1)
0x225: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x228: Call2 0xa54

0x229: Pop(1)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 1
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Stack[-1] = (bool) 0
0x22e: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x22f: Push((int) 526940)
0x230: Push((int) 28233)
0x231: Push((int) 28232)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Push((int) 526945)
0x235: Push((int) -1)
0x236: Push((int) 28237)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 28233)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Neutral"
0x23f: Call2 0x1df

0x240: Pop(1)
0x241: Push((int) 526941)
0x242: @@ SetMessage(Stack[-1])
0x243: Pop(1)
0x244: @@ ClearReplies()
0x245: Pop(0)
0x246: Push((int) 526942)
0x247: Push((int) 28235)
0x248: Push((int) 28234)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Push((int) 527965)
0x24c: Push((int) 29330)
0x24d: Push((int) 29322)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Push((int) 29330)
0x252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Neutral"
0x256: Call2 0x1df

0x257: Pop(1)
0x258: Push((int) 527973)
0x259: @@ SetMessage(Stack[-1])
0x25a: Pop(1)
0x25b: @@ ClearReplies()
0x25c: Pop(0)
0x25d: Push((int) 527974)
0x25e: Push((int) 29332)
0x25f: Push((int) 29331)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Push((int) 29332)
0x264: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x266: PushEmpty(string)
0x267: Stack[-1] = "Neutral"
0x268: Call2 0x1df

0x269: Pop(1)
0x26a: Push((int) 527975)
0x26b: @@ SetMessage(Stack[-1])
0x26c: Pop(1)
0x26d: @@ ClearReplies()
0x26e: Pop(0)
0x26f: Push((int) 527976)
0x270: Push((int) 29321)
0x271: Push((int) 29333)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Push((int) 28235)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Surprise"
0x27a: Call2 0x1df

0x27b: Pop(1)
0x27c: Push((int) 526943)
0x27d: @@ SetMessage(Stack[-1])
0x27e: Pop(1)
0x27f: @@ ClearReplies()
0x280: Pop(0)
0x281: Push((int) 526944)
0x282: Push((int) 29321)
0x283: Push((int) 28236)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: Return(); Pop(0)

0x287: Push((int) 29321)
0x288: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Surprise"
0x28c: Call2 0x1df

0x28d: Pop(1)
0x28e: Push((int) 527964)
0x28f: @@ SetMessage(Stack[-1])
0x290: Pop(1)
0x291: @@ ClearReplies()
0x292: Pop(0)
0x293: Push((int) 527966)
0x294: Push((int) 29324)
0x295: Push((int) 29323)
0x296: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: Push((int) 29324)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Confusion"
0x29e: Call2 0x1df

0x29f: Pop(1)
0x2a0: Push((int) 527967)
0x2a1: @@ SetMessage(Stack[-1])
0x2a2: Pop(1)
0x2a3: @@ ClearReplies()
0x2a4: Pop(0)
0x2a5: Push((int) 527969)
0x2a6: Push((int) 29327)
0x2a7: Push((int) 29326)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Push((int) 527968)
0x2ab: Push((int) -1)
0x2ac: Push((int) 29325)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 29327)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "Confusion"
0x2b5: Call2 0x1df

0x2b6: Pop(1)
0x2b7: Push((int) 527970)
0x2b8: @@ SetMessage(Stack[-1])
0x2b9: Pop(1)
0x2ba: @@ ClearReplies()
0x2bb: Pop(0)
0x2bc: Push((int) 527971)
0x2bd: Push((int) -1)
0x2be: Push((int) 29328)
0x2bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(3)
0x2c1: Return(); Pop(0)

0x2c2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x9fd

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: @ lshStopAnimation()
0x2c8: Pop(0)
0x2c9: GOTO 0x2cc

0x2ca: @ StopAnimation()
0x2cb: Pop(0)
0x2cc: Return(); Pop(0)

0x2cd: GOTO 0x1f6

0x2ce: Return(); Pop(0)

0x2cf: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2d0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2d1: PushEmpty(bool, object, float)
0x2d2: Stack[-2] = Stack[-12]
0x2d3: Stack[-1] = (float) 70.0
0x2d4: Call2 0x85a

0x2d5: Pop(2)
0x2d6: Pop(1); Push((bool) Stack[-1] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d8: Stack[-10] = (int) -2
0x2d9: Return(); Pop(8)

0x2da: @ CreateDialog(Stack[-4])
0x2db: Pop(0)
0x2dc: PushEmpty(int)
0x2dd: Call2 0x9f7

0x2de: Pop(0)
0x2df: @@ SetNPCName(Stack[-1])
0x2e0: Pop(1)
0x2e1: PushEmpty(int)
0x2e2: Call2 0x9f5

0x2e3: Pop(0)
0x2e4: @@ SetNPCDescription(Stack[-1])
0x2e5: Pop(1)
0x2e6: PushEmpty(string)
0x2e7: Call2 0x9f9

0x2e8: Pop(0)
0x2e9: @@ SetPhoto(Stack[-1])
0x2ea: Pop(1)
0x2eb: PushEmpty(string)
0x2ec: Call2 0x9fb

0x2ed: Pop(0)
0x2ee: @@ SetPhoto2(Stack[-1])
0x2ef: Pop(1)
0x2f0: PushEmpty(int)
0x2f1: Call2 0xaae

0x2f2: Pop(0)
0x2f3: @@ SetPlayerName(Stack[-1])
0x2f4: Pop(1)
0x2f5: Stack[-2] = (int) -1
0x2f6: @ IsOverrideActive(Stack[-3])
0x2f7: Pop(0)
0x2f8: Push(Stack[-3])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-10] = (int) -2
0x2fb: Return(); Pop(8)

0x2fc: @ DoDialog(Stack[-4])
0x2fd: Pop(0)
0x2fe: PushEmpty(bool, object)
0x2ff: PushEmpty(object)
0x300: Call2 0x96e

0x301: Stack[-2] = Stack[-1]
0x302: Pop(1)
0x303: Call2 0x8af

0x304: Pop(2)
0x305: PushEmpty(object, object)
0x306: Stack[-2] = Stack[-11]
0x307: Stack[-1] = Stack[-6]
0x308: Push(-2, 4); TaskCall(6)
0x309: Call2 0x320

0x30a: Pop(-2, 4); TaskReturn
0x30b: Pop(2)
0x30c: @@ IsDialogEnd(Stack[-1])
0x30d: Pop(0)
0x30e: Pop(0); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: @ sync()
0x311: Pop(0)
0x312: @@ IsDialogEnd(Stack[-1])
0x313: Pop(0)
0x314: GOTO 0x30e

0x315: PushEmpty(object)
0x316: Stack[-1] = Stack[-10]
0x317: Call2 0x89e

0x318: Pop(1)
0x319: @ StopDialog(Stack[-4])
0x31a: Pop(0)
0x31b: @@ GetReturnValue(Stack[-2])
0x31c: Pop(0)
0x31d: Stack[-10] = Stack[-2]
0x31e: Return(); Pop(8)

0x31f: Stack[-4] = 0
0x320: PushEmpty()
0x321: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x322: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x323: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x324: Push((int) 1)
0x325: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x326: PushEmpty(string)
0x327: Stack[-1] = "Neutral"
0x328: Call2 0x364

0x329: Pop(1)
0x32a: Push((int) 528940)
0x32b: @@ SetMessage(Stack[-1])
0x32c: Pop(1)
0x32d: @@ ClearReplies()
0x32e: Pop(0)
0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x331: Call2 0xa6c

0x332: Pop(1)
0x333: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x334: Push((int) 528943)
0x335: Push((int) 30377)
0x336: Push((int) 30376)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Push((int) 528941)
0x33a: Push((int) -1)
0x33b: Push((int) 30374)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Push((int) 528942)
0x33f: Push((int) -1)
0x340: Push((int) 30375)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: GOTO 0x346

0x344: Return(); Pop(0)

0x345: GOTO 0x324

0x346: PushEmpty(bool)
0x347: Call2 0x9fd

0x348: Pop(0)
0x349: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x34a: @ lshWaitForAnimEnd()
0x34b: Pop(0)
0x34c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x354

0x34f: PushEmpty(string)
0x350: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x351: Call2 0x939

0x352: Pop(1)
0x353: GOTO 0x34a

0x354: GOTO 0x363

0x355: Push("all")
0x356: Push("idle")
0x357: @ PlayAnimation(Stack[-2], Stack[-1])
0x358: Pop(2)
0x359: @ WaitForAnimEnd()
0x35a: Pop(0)
0x35b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x35c: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35d: GOTO 0x363

0x35e: Push("all")
0x35f: Push("idle")
0x360: @ PlayAnimation(Stack[-2], Stack[-1])
0x361: Pop(2)
0x362: GOTO 0x359

0x363: Return(); Pop(0)

0x364: PushEmpty()
0x365: PushEmpty(bool)
0x366: Call2 0x9fd

0x367: Pop(0)
0x368: Pop(1); Push((bool) Stack[-1] == 0)
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: Return(); Pop(0)

0x36b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x36c: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36d: Return(); Pop(0)

0x36e: PushEmpty(string, bool)
0x36f: Stack[-2] = Stack[-3]
0x370: Push("")
0x371: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: Stack[-1] = (bool) 0
0x374: GOTO 0x376

0x375: Stack[-1] = (bool) 1
0x376: Call2 0x949

0x377: Pop(2)
0x378: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x379: Return(); Pop(0)

0x37a: PushEmpty()
0x37b: Push((int) 1)
0x37c: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x37d: PushEmpty()
0x37e: Call2 0x967

0x37f: Pop(0)
0x380: Push((int) 30380)
0x381: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x383: PushEmpty(object, object)
0x384: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x385: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x386: Call2 0xa1c

0x387: Pop(2)
0x388: Push((int) 30373)
0x389: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x38b: PushEmpty(string)
0x38c: Stack[-1] = "Neutral"
0x38d: Call2 0x364

0x38e: Pop(1)
0x38f: Push((int) 528940)
0x390: @@ SetMessage(Stack[-1])
0x391: Pop(1)
0x392: @@ ClearReplies()
0x393: Pop(0)
0x394: PushEmpty(bool, object)
0x395: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x396: Call2 0xa6c

0x397: Pop(1)
0x398: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x399: Push((int) 528943)
0x39a: Push((int) 30377)
0x39b: Push((int) 30376)
0x39c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39d: Pop(3)
0x39e: Push((int) 528941)
0x39f: Push((int) -1)
0x3a0: Push((int) 30374)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: Push((int) 528942)
0x3a4: Push((int) -1)
0x3a5: Push((int) 30375)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 30377)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Confusion"
0x3ae: Call2 0x364

0x3af: Pop(1)
0x3b0: Push((int) 528944)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 528945)
0x3b6: Push((int) 30379)
0x3b7: Push((int) 30378)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: Push((int) 30382)
0x3bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3be: Push((int) 30384)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral"
0x3c3: Call2 0x364

0x3c4: Pop(1)
0x3c5: Push((int) 528951)
0x3c6: @@ SetMessage(Stack[-1])
0x3c7: Pop(1)
0x3c8: @@ ClearReplies()
0x3c9: Pop(0)
0x3ca: Push((int) 528952)
0x3cb: Push((int) 30391)
0x3cc: Push((int) 30385)
0x3cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ce: Pop(3)
0x3cf: Push((int) 528954)
0x3d0: Push((int) 30386)
0x3d1: Push((int) 30387)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Return(); Pop(0)

0x3d5: Push((int) 30386)
0x3d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3d8: PushEmpty(string)
0x3d9: Stack[-1] = "Surprise"
0x3da: Call2 0x364

0x3db: Pop(1)
0x3dc: Push((int) 528953)
0x3dd: @@ SetMessage(Stack[-1])
0x3de: Pop(1)
0x3df: @@ ClearReplies()
0x3e0: Pop(0)
0x3e1: Push((int) 528955)
0x3e2: Push((int) 30389)
0x3e3: Push((int) 30388)
0x3e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: Push((int) 528957)
0x3e7: Push((int) 30389)
0x3e8: Push((int) 30390)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Return(); Pop(0)

0x3ec: Push((int) 30389)
0x3ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "Surprise"
0x3f1: Call2 0x364

0x3f2: Pop(1)
0x3f3: Push((int) 528956)
0x3f4: @@ SetMessage(Stack[-1])
0x3f5: Pop(1)
0x3f6: @@ ClearReplies()
0x3f7: Pop(0)
0x3f8: Push((int) 528960)
0x3f9: Push((int) 30379)
0x3fa: Push((int) 30394)
0x3fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(3)
0x3fd: Return(); Pop(0)

0x3fe: Push((int) 30391)
0x3ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x401: PushEmpty(string)
0x402: Stack[-1] = "Neutral"
0x403: Call2 0x364

0x404: Pop(1)
0x405: Push((int) 528958)
0x406: @@ SetMessage(Stack[-1])
0x407: Pop(1)
0x408: @@ ClearReplies()
0x409: Pop(0)
0x40a: Push((int) 528959)
0x40b: Push((int) 30379)
0x40c: Push((int) 30392)
0x40d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40e: Pop(3)
0x40f: Return(); Pop(0)

0x410: Push((int) 30379)
0x411: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x413: PushEmpty(string)
0x414: Stack[-1] = "Neutral"
0x415: Call2 0x364

0x416: Pop(1)
0x417: Push((int) 528946)
0x418: @@ SetMessage(Stack[-1])
0x419: Pop(1)
0x41a: @@ ClearReplies()
0x41b: Pop(0)
0x41c: Push((int) 528947)
0x41d: Push((int) -1)
0x41e: Push((int) 30380)
0x41f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x420: Pop(3)
0x421: Return(); Pop(0)

0x422: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x423: PushEmpty(bool)
0x424: Call2 0x9fd

0x425: Pop(0)
0x426: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x427: @ lshStopAnimation()
0x428: Pop(0)
0x429: GOTO 0x42c

0x42a: @ StopAnimation()
0x42b: Pop(0)
0x42c: Return(); Pop(0)

0x42d: GOTO 0x37b

0x42e: Return(); Pop(0)

0x42f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x430: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x431: PushEmpty(bool, object, float)
0x432: Stack[-2] = Stack[-12]
0x433: Stack[-1] = (float) 70.0
0x434: Call2 0x85a

0x435: Pop(2)
0x436: Pop(1); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: Stack[-10] = (int) -2
0x439: Return(); Pop(8)

0x43a: @ CreateDialog(Stack[-4])
0x43b: Pop(0)
0x43c: PushEmpty(int)
0x43d: Call2 0x9f7

0x43e: Pop(0)
0x43f: @@ SetNPCName(Stack[-1])
0x440: Pop(1)
0x441: PushEmpty(int)
0x442: Call2 0x9f5

0x443: Pop(0)
0x444: @@ SetNPCDescription(Stack[-1])
0x445: Pop(1)
0x446: PushEmpty(string)
0x447: Call2 0x9f9

0x448: Pop(0)
0x449: @@ SetPhoto(Stack[-1])
0x44a: Pop(1)
0x44b: PushEmpty(string)
0x44c: Call2 0x9fb

0x44d: Pop(0)
0x44e: @@ SetPhoto2(Stack[-1])
0x44f: Pop(1)
0x450: PushEmpty(int)
0x451: Call2 0xaae

0x452: Pop(0)
0x453: @@ SetPlayerName(Stack[-1])
0x454: Pop(1)
0x455: Stack[-2] = (int) -1
0x456: @ IsOverrideActive(Stack[-3])
0x457: Pop(0)
0x458: Push(Stack[-3])
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Stack[-10] = (int) -2
0x45b: Return(); Pop(8)

0x45c: @ DoDialog(Stack[-4])
0x45d: Pop(0)
0x45e: PushEmpty(bool, object)
0x45f: PushEmpty(object)
0x460: Call2 0x96e

0x461: Stack[-2] = Stack[-1]
0x462: Pop(1)
0x463: Call2 0x8af

0x464: Pop(2)
0x465: PushEmpty(object, object)
0x466: Stack[-2] = Stack[-11]
0x467: Stack[-1] = Stack[-6]
0x468: Push(-2, 4); TaskCall(8)
0x469: Call2 0x480

0x46a: Pop(-2, 4); TaskReturn
0x46b: Pop(2)
0x46c: @@ IsDialogEnd(Stack[-1])
0x46d: Pop(0)
0x46e: Pop(0); Push((bool) Stack[-1] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x470: @ sync()
0x471: Pop(0)
0x472: @@ IsDialogEnd(Stack[-1])
0x473: Pop(0)
0x474: GOTO 0x46e

0x475: PushEmpty(object)
0x476: Stack[-1] = Stack[-10]
0x477: Call2 0x89e

0x478: Pop(1)
0x479: @ StopDialog(Stack[-4])
0x47a: Pop(0)
0x47b: @@ GetReturnValue(Stack[-2])
0x47c: Pop(0)
0x47d: Stack[-10] = Stack[-2]
0x47e: Return(); Pop(8)

0x47f: Stack[-4] = 0
0x480: PushEmpty()
0x481: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x482: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x483: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x484: Push((int) 1)
0x485: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x486: PushEmpty(string)
0x487: Stack[-1] = "Neutral"
0x488: Call2 0x4bf

0x489: Pop(1)
0x48a: Push((int) 535231)
0x48b: @@ SetMessage(Stack[-1])
0x48c: Pop(1)
0x48d: @@ ClearReplies()
0x48e: Pop(0)
0x48f: Push((int) 535232)
0x490: Push((int) 36953)
0x491: Push((int) 36907)
0x492: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x493: Pop(3)
0x494: Push((int) 535233)
0x495: Push((int) -1)
0x496: Push((int) 36908)
0x497: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x498: Pop(3)
0x499: Push((int) 535280)
0x49a: Push((int) -1)
0x49b: Push((int) 36956)
0x49c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49d: Pop(3)
0x49e: GOTO 0x4a1

0x49f: Return(); Pop(0)

0x4a0: GOTO 0x484

0x4a1: PushEmpty(bool)
0x4a2: Call2 0x9fd

0x4a3: Pop(0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a5: @ lshWaitForAnimEnd()
0x4a6: Pop(0)
0x4a7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4a8: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a9: GOTO 0x4af

0x4aa: PushEmpty(string)
0x4ab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4ac: Call2 0x939

0x4ad: Pop(1)
0x4ae: GOTO 0x4a5

0x4af: GOTO 0x4be

0x4b0: Push("all")
0x4b1: Push("idle")
0x4b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b3: Pop(2)
0x4b4: @ WaitForAnimEnd()
0x4b5: Pop(0)
0x4b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: GOTO 0x4be

0x4b9: Push("all")
0x4ba: Push("idle")
0x4bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: GOTO 0x4b4

0x4be: Return(); Pop(0)

0x4bf: PushEmpty()
0x4c0: PushEmpty(bool)
0x4c1: Call2 0x9fd

0x4c2: Pop(0)
0x4c3: Pop(1); Push((bool) Stack[-1] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: Return(); Pop(0)

0x4c6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c8: Return(); Pop(0)

0x4c9: PushEmpty(string, bool)
0x4ca: Stack[-2] = Stack[-3]
0x4cb: Push("")
0x4cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: Stack[-1] = (bool) 0
0x4cf: GOTO 0x4d1

0x4d0: Stack[-1] = (bool) 1
0x4d1: Call2 0x949

0x4d2: Pop(2)
0x4d3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty()
0x4d6: Push((int) 1)
0x4d7: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x4d8: PushEmpty()
0x4d9: Call2 0x967

0x4da: Pop(0)
0x4db: Push((int) 36906)
0x4dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4de: PushEmpty(string)
0x4df: Stack[-1] = "Neutral"
0x4e0: Call2 0x4bf

0x4e1: Pop(1)
0x4e2: Push((int) 535231)
0x4e3: @@ SetMessage(Stack[-1])
0x4e4: Pop(1)
0x4e5: @@ ClearReplies()
0x4e6: Pop(0)
0x4e7: Push((int) 535232)
0x4e8: Push((int) 36953)
0x4e9: Push((int) 36907)
0x4ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4eb: Pop(3)
0x4ec: Push((int) 535233)
0x4ed: Push((int) -1)
0x4ee: Push((int) 36908)
0x4ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f0: Pop(3)
0x4f1: Push((int) 535280)
0x4f2: Push((int) -1)
0x4f3: Push((int) 36956)
0x4f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: Return(); Pop(0)

0x4f7: Push((int) 36953)
0x4f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x4fa: PushEmpty(string)
0x4fb: Stack[-1] = "Neutral"
0x4fc: Call2 0x4bf

0x4fd: Pop(1)
0x4fe: Push((int) 535277)
0x4ff: @@ SetMessage(Stack[-1])
0x500: Pop(1)
0x501: @@ ClearReplies()
0x502: Pop(0)
0x503: Push((int) 535278)
0x504: Push((int) 36957)
0x505: Push((int) 36954)
0x506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x507: Pop(3)
0x508: Push((int) 535279)
0x509: Push((int) 36957)
0x50a: Push((int) 36955)
0x50b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50c: Pop(3)
0x50d: Return(); Pop(0)

0x50e: Push((int) 36957)
0x50f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x511: PushEmpty(string)
0x512: Stack[-1] = "Neutral"
0x513: Call2 0x4bf

0x514: Pop(1)
0x515: Push((int) 535281)
0x516: @@ SetMessage(Stack[-1])
0x517: Pop(1)
0x518: @@ ClearReplies()
0x519: Pop(0)
0x51a: Push((int) 535282)
0x51b: Push((int) -1)
0x51c: Push((int) 36958)
0x51d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51e: Pop(3)
0x51f: Push((int) 535283)
0x520: Push((int) -1)
0x521: Push((int) 36959)
0x522: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x523: Pop(3)
0x524: Return(); Pop(0)

0x525: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x526: PushEmpty(bool)
0x527: Call2 0x9fd

0x528: Pop(0)
0x529: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52a: @ lshStopAnimation()
0x52b: Pop(0)
0x52c: GOTO 0x52f

0x52d: @ StopAnimation()
0x52e: Pop(0)
0x52f: Return(); Pop(0)

0x530: GOTO 0x4d6

0x531: Return(); Pop(0)

0x532: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x533: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x534: PushEmpty(bool, object, float)
0x535: Stack[-2] = Stack[-12]
0x536: Stack[-1] = (float) 70.0
0x537: Call2 0x85a

0x538: Pop(2)
0x539: Pop(1); Push((bool) Stack[-1] == 0)
0x53a: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53b: Stack[-10] = (int) -2
0x53c: Return(); Pop(8)

0x53d: @ CreateDialog(Stack[-4])
0x53e: Pop(0)
0x53f: PushEmpty(int)
0x540: Call2 0x9f7

0x541: Pop(0)
0x542: @@ SetNPCName(Stack[-1])
0x543: Pop(1)
0x544: PushEmpty(int)
0x545: Call2 0x9f5

0x546: Pop(0)
0x547: @@ SetNPCDescription(Stack[-1])
0x548: Pop(1)
0x549: PushEmpty(string)
0x54a: Call2 0x9f9

0x54b: Pop(0)
0x54c: @@ SetPhoto(Stack[-1])
0x54d: Pop(1)
0x54e: PushEmpty(string)
0x54f: Call2 0x9fb

0x550: Pop(0)
0x551: @@ SetPhoto2(Stack[-1])
0x552: Pop(1)
0x553: PushEmpty(int)
0x554: Call2 0xaae

0x555: Pop(0)
0x556: @@ SetPlayerName(Stack[-1])
0x557: Pop(1)
0x558: Stack[-2] = (int) -1
0x559: @ IsOverrideActive(Stack[-3])
0x55a: Pop(0)
0x55b: Push(Stack[-3])
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: Stack[-10] = (int) -2
0x55e: Return(); Pop(8)

0x55f: @ DoDialog(Stack[-4])
0x560: Pop(0)
0x561: PushEmpty(bool, object)
0x562: PushEmpty(object)
0x563: Call2 0x96e

0x564: Stack[-2] = Stack[-1]
0x565: Pop(1)
0x566: Call2 0x8af

0x567: Pop(2)
0x568: PushEmpty(object, object)
0x569: Stack[-2] = Stack[-11]
0x56a: Stack[-1] = Stack[-6]
0x56b: Push(-2, 4); TaskCall(10)
0x56c: Call2 0x583

0x56d: Pop(-2, 4); TaskReturn
0x56e: Pop(2)
0x56f: @@ IsDialogEnd(Stack[-1])
0x570: Pop(0)
0x571: Pop(0); Push((bool) Stack[-1] == 0)
0x572: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x573: @ sync()
0x574: Pop(0)
0x575: @@ IsDialogEnd(Stack[-1])
0x576: Pop(0)
0x577: GOTO 0x571

0x578: PushEmpty(object)
0x579: Stack[-1] = Stack[-10]
0x57a: Call2 0x89e

0x57b: Pop(1)
0x57c: @ StopDialog(Stack[-4])
0x57d: Pop(0)
0x57e: @@ GetReturnValue(Stack[-2])
0x57f: Pop(0)
0x580: Stack[-10] = Stack[-2]
0x581: Return(); Pop(8)

0x582: Stack[-4] = 0
0x583: PushEmpty()
0x584: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x585: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x586: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x587: Push((int) 1)
0x588: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x589: PushEmpty(string)
0x58a: Stack[-1] = "Confusion"
0x58b: Call2 0x5d0

0x58c: Pop(1)
0x58d: Push((int) 525599)
0x58e: @@ SetMessage(Stack[-1])
0x58f: Pop(1)
0x590: @@ ClearReplies()
0x591: Pop(0)
0x592: PushEmpty(bool)
0x593: Stack[-1] = (bool) 0
0x594: PushEmpty(bool, object)
0x595: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x596: Call2 0xa30

0x597: Pop(1)
0x598: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x599: PushEmpty(bool, object)
0x59a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59b: Call2 0xa3c

0x59c: Pop(1)
0x59d: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59e: Stack[-1] = (bool) 1
0x59f: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a0: Push((int) 525600)
0x5a1: Push((int) 26948)
0x5a2: Push((int) 26947)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Push((int) 525605)
0x5a6: Push((int) -1)
0x5a7: Push((int) 26952)
0x5a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(3)
0x5aa: Push((int) 542220)
0x5ab: Push((int) -1)
0x5ac: Push((int) 44551)
0x5ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ae: Pop(3)
0x5af: GOTO 0x5b2

0x5b0: Return(); Pop(0)

0x5b1: GOTO 0x587

0x5b2: PushEmpty(bool)
0x5b3: Call2 0x9fd

0x5b4: Pop(0)
0x5b5: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5b6: @ lshWaitForAnimEnd()
0x5b7: Pop(0)
0x5b8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5ba: GOTO 0x5c0

0x5bb: PushEmpty(string)
0x5bc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5bd: Call2 0x939

0x5be: Pop(1)
0x5bf: GOTO 0x5b6

0x5c0: GOTO 0x5cf

0x5c1: Push("all")
0x5c2: Push("idle")
0x5c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c4: Pop(2)
0x5c5: @ WaitForAnimEnd()
0x5c6: Pop(0)
0x5c7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: GOTO 0x5cf

0x5ca: Push("all")
0x5cb: Push("idle")
0x5cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x5cd: Pop(2)
0x5ce: GOTO 0x5c5

0x5cf: Return(); Pop(0)

0x5d0: PushEmpty()
0x5d1: PushEmpty(bool)
0x5d2: Call2 0x9fd

0x5d3: Pop(0)
0x5d4: Pop(1); Push((bool) Stack[-1] == 0)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d6: Return(); Pop(0)

0x5d7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d9: Return(); Pop(0)

0x5da: PushEmpty(string, bool)
0x5db: Stack[-2] = Stack[-3]
0x5dc: Push("")
0x5dd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5df: Stack[-1] = (bool) 0
0x5e0: GOTO 0x5e2

0x5e1: Stack[-1] = (bool) 1
0x5e2: Call2 0x949

0x5e3: Pop(2)
0x5e4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5e5: Return(); Pop(0)

0x5e6: PushEmpty()
0x5e7: Push((int) 1)
0x5e8: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x5e9: PushEmpty()
0x5ea: Call2 0x967

0x5eb: Pop(0)
0x5ec: Push((int) 26947)
0x5ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5ef: PushEmpty(object, object)
0x5f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f2: Call2 0xa06

0x5f3: Pop(2)
0x5f4: Push((int) 26951)
0x5f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5f7: PushEmpty(object, object)
0x5f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fa: Call2 0xa2a

0x5fb: Pop(2)
0x5fc: PushEmpty(object, object)
0x5fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ff: Call2 0xa0c

0x600: Pop(2)
0x601: Push((int) 43252)
0x602: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x604: PushEmpty(object, object)
0x605: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x606: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x607: Call2 0x9ff

0x608: Pop(2)
0x609: Push((int) 26946)
0x60a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60b: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x60c: PushEmpty(string)
0x60d: Stack[-1] = "Confusion"
0x60e: Call2 0x5d0

0x60f: Pop(1)
0x610: Push((int) 525599)
0x611: @@ SetMessage(Stack[-1])
0x612: Pop(1)
0x613: @@ ClearReplies()
0x614: Pop(0)
0x615: PushEmpty(bool)
0x616: Stack[-1] = (bool) 0
0x617: PushEmpty(bool, object)
0x618: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x619: Call2 0xa30

0x61a: Pop(1)
0x61b: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x61c: PushEmpty(bool, object)
0x61d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61e: Call2 0xa3c

0x61f: Pop(1)
0x620: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x621: Stack[-1] = (bool) 1
0x622: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x623: Push((int) 525600)
0x624: Push((int) 26948)
0x625: Push((int) 26947)
0x626: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: Push((int) 525605)
0x629: Push((int) -1)
0x62a: Push((int) 26952)
0x62b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62c: Pop(3)
0x62d: Push((int) 542220)
0x62e: Push((int) -1)
0x62f: Push((int) 44551)
0x630: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x631: Pop(3)
0x632: Return(); Pop(0)

0x633: Push((int) 26948)
0x634: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x635: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x636: PushEmpty(string)
0x637: Stack[-1] = "Confusion"
0x638: Call2 0x5d0

0x639: Pop(1)
0x63a: Push((int) 525601)
0x63b: @@ SetMessage(Stack[-1])
0x63c: Pop(1)
0x63d: @@ ClearReplies()
0x63e: Pop(0)
0x63f: Push((int) 542221)
0x640: Push((int) 44554)
0x641: Push((int) 44552)
0x642: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x643: Pop(3)
0x644: Push((int) 542222)
0x645: Push((int) 44555)
0x646: Push((int) 44553)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Return(); Pop(0)

0x64a: Push((int) 44555)
0x64b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x64d: PushEmpty(string)
0x64e: Stack[-1] = "Anger"
0x64f: Call2 0x5d0

0x650: Pop(1)
0x651: Push((int) 542224)
0x652: @@ SetMessage(Stack[-1])
0x653: Pop(1)
0x654: @@ ClearReplies()
0x655: Pop(0)
0x656: Push((int) 542225)
0x657: Push((int) 44554)
0x658: Push((int) 44556)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: Push((int) 542226)
0x65c: Push((int) 44560)
0x65d: Push((int) 44557)
0x65e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65f: Pop(3)
0x660: Return(); Pop(0)

0x661: Push((int) 44554)
0x662: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x664: PushEmpty(string)
0x665: Stack[-1] = "Anger"
0x666: Call2 0x5d0

0x667: Pop(1)
0x668: Push((int) 542223)
0x669: @@ SetMessage(Stack[-1])
0x66a: Pop(1)
0x66b: @@ ClearReplies()
0x66c: Pop(0)
0x66d: Push((int) 542227)
0x66e: Push((int) 44562)
0x66f: Push((int) 44559)
0x670: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: Push((int) 542232)
0x673: Push((int) 44562)
0x674: Push((int) 44564)
0x675: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x676: Pop(3)
0x677: Return(); Pop(0)

0x678: Push((int) 44562)
0x679: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x67b: PushEmpty(string)
0x67c: Stack[-1] = "Surprise"
0x67d: Call2 0x5d0

0x67e: Pop(1)
0x67f: Push((int) 542230)
0x680: @@ SetMessage(Stack[-1])
0x681: Pop(1)
0x682: @@ ClearReplies()
0x683: Pop(0)
0x684: Push((int) 542231)
0x685: Push((int) 44560)
0x686: Push((int) 44563)
0x687: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x688: Pop(3)
0x689: Push((int) 542229)
0x68a: Push((int) 44560)
0x68b: Push((int) 44561)
0x68c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68d: Pop(3)
0x68e: Return(); Pop(0)

0x68f: Push((int) 44560)
0x690: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x692: PushEmpty(string)
0x693: Stack[-1] = "Surprise"
0x694: Call2 0x5d0

0x695: Pop(1)
0x696: Push((int) 542228)
0x697: @@ SetMessage(Stack[-1])
0x698: Pop(1)
0x699: @@ ClearReplies()
0x69a: Pop(0)
0x69b: Push((int) 525602)
0x69c: Push((int) 26950)
0x69d: Push((int) 26949)
0x69e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69f: Pop(3)
0x6a0: Push((int) 542238)
0x6a1: Push((int) 44568)
0x6a2: Push((int) 44573)
0x6a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a4: Pop(3)
0x6a5: Return(); Pop(0)

0x6a6: Push((int) 26950)
0x6a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6a9: PushEmpty(string)
0x6aa: Stack[-1] = "Surprise"
0x6ab: Call2 0x5d0

0x6ac: Pop(1)
0x6ad: Push((int) 525603)
0x6ae: @@ SetMessage(Stack[-1])
0x6af: Pop(1)
0x6b0: @@ ClearReplies()
0x6b1: Pop(0)
0x6b2: Push((int) 542233)
0x6b3: Push((int) 44568)
0x6b4: Push((int) 44567)
0x6b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b6: Pop(3)
0x6b7: Push((int) 542235)
0x6b8: Push((int) 44571)
0x6b9: Push((int) 44569)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: Return(); Pop(0)

0x6bd: Push((int) 44568)
0x6be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6c0: PushEmpty(string)
0x6c1: Stack[-1] = "Neutral"
0x6c2: Call2 0x5d0

0x6c3: Pop(1)
0x6c4: Push((int) 542234)
0x6c5: @@ SetMessage(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ ClearReplies()
0x6c8: Pop(0)
0x6c9: Push((int) 542236)
0x6ca: Push((int) 44571)
0x6cb: Push((int) 44570)
0x6cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cd: Pop(3)
0x6ce: Return(); Pop(0)

0x6cf: Push((int) 44571)
0x6d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d1: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6d2: PushEmpty(string)
0x6d3: Stack[-1] = "Neutral"
0x6d4: Call2 0x5d0

0x6d5: Pop(1)
0x6d6: Push((int) 542237)
0x6d7: @@ SetMessage(Stack[-1])
0x6d8: Pop(1)
0x6d9: @@ ClearReplies()
0x6da: Pop(0)
0x6db: Push((int) 525604)
0x6dc: Push((int) -1)
0x6dd: Push((int) 26951)
0x6de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6df: Pop(3)
0x6e0: Push((int) 541131)
0x6e1: Push((int) -1)
0x6e2: Push((int) 43252)
0x6e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(3)
0x6e5: Return(); Pop(0)

0x6e6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6e7: PushEmpty(bool)
0x6e8: Call2 0x9fd

0x6e9: Pop(0)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6eb: @ lshStopAnimation()
0x6ec: Pop(0)
0x6ed: GOTO 0x6f0

0x6ee: @ StopAnimation()
0x6ef: Pop(0)
0x6f0: Return(); Pop(0)

0x6f1: GOTO 0x5e7

0x6f2: Return(); Pop(0)

0x6f3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6f5: PushEmpty(bool, object, float)
0x6f6: Stack[-2] = Stack[-12]
0x6f7: Stack[-1] = (float) 70.0
0x6f8: Call2 0x85a

0x6f9: Pop(2)
0x6fa: Pop(1); Push((bool) Stack[-1] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fc: Stack[-10] = (int) -2
0x6fd: Return(); Pop(8)

0x6fe: @ CreateDialog(Stack[-4])
0x6ff: Pop(0)
0x700: PushEmpty(int)
0x701: Call2 0x9f7

0x702: Pop(0)
0x703: @@ SetNPCName(Stack[-1])
0x704: Pop(1)
0x705: PushEmpty(int)
0x706: Call2 0x9f5

0x707: Pop(0)
0x708: @@ SetNPCDescription(Stack[-1])
0x709: Pop(1)
0x70a: PushEmpty(string)
0x70b: Call2 0x9f9

0x70c: Pop(0)
0x70d: @@ SetPhoto(Stack[-1])
0x70e: Pop(1)
0x70f: PushEmpty(string)
0x710: Call2 0x9fb

0x711: Pop(0)
0x712: @@ SetPhoto2(Stack[-1])
0x713: Pop(1)
0x714: PushEmpty(int)
0x715: Call2 0xaae

0x716: Pop(0)
0x717: @@ SetPlayerName(Stack[-1])
0x718: Pop(1)
0x719: Stack[-2] = (int) -1
0x71a: @ IsOverrideActive(Stack[-3])
0x71b: Pop(0)
0x71c: Push(Stack[-3])
0x71d: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71e: Stack[-10] = (int) -2
0x71f: Return(); Pop(8)

0x720: @ DoDialog(Stack[-4])
0x721: Pop(0)
0x722: PushEmpty(bool, object)
0x723: PushEmpty(object)
0x724: Call2 0x96e

0x725: Stack[-2] = Stack[-1]
0x726: Pop(1)
0x727: Call2 0x8af

0x728: Pop(2)
0x729: PushEmpty(object, object)
0x72a: Stack[-2] = Stack[-11]
0x72b: Stack[-1] = Stack[-6]
0x72c: Push(-2, 4); TaskCall(12)
0x72d: Call2 0x744

0x72e: Pop(-2, 4); TaskReturn
0x72f: Pop(2)
0x730: @@ IsDialogEnd(Stack[-1])
0x731: Pop(0)
0x732: Pop(0); Push((bool) Stack[-1] == 0)
0x733: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x734: @ sync()
0x735: Pop(0)
0x736: @@ IsDialogEnd(Stack[-1])
0x737: Pop(0)
0x738: GOTO 0x732

0x739: PushEmpty(object)
0x73a: Stack[-1] = Stack[-10]
0x73b: Call2 0x89e

0x73c: Pop(1)
0x73d: @ StopDialog(Stack[-4])
0x73e: Pop(0)
0x73f: @@ GetReturnValue(Stack[-2])
0x740: Pop(0)
0x741: Stack[-10] = Stack[-2]
0x742: Return(); Pop(8)

0x743: Stack[-4] = 0
0x744: PushEmpty()
0x745: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x746: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x747: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x748: Push((int) 1)
0x749: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x74a: PushEmpty(string)
0x74b: Stack[-1] = "Neutral"
0x74c: Call2 0x77e

0x74d: Pop(1)
0x74e: Push((int) 540545)
0x74f: @@ SetMessage(Stack[-1])
0x750: Pop(1)
0x751: @@ ClearReplies()
0x752: Pop(0)
0x753: Push((int) 540546)
0x754: Push((int) -1)
0x755: Push((int) 42555)
0x756: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x757: Pop(3)
0x758: Push((int) 540798)
0x759: Push((int) -1)
0x75a: Push((int) 42847)
0x75b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75c: Pop(3)
0x75d: GOTO 0x760

0x75e: Return(); Pop(0)

0x75f: GOTO 0x748

0x760: PushEmpty(bool)
0x761: Call2 0x9fd

0x762: Pop(0)
0x763: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x764: @ lshWaitForAnimEnd()
0x765: Pop(0)
0x766: Push( Stack[3 + Tasks[-1].StackPointer] )
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: GOTO 0x76e

0x769: PushEmpty(string)
0x76a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76b: Call2 0x939

0x76c: Pop(1)
0x76d: GOTO 0x764

0x76e: GOTO 0x77d

0x76f: Push("all")
0x770: Push("idle")
0x771: @ PlayAnimation(Stack[-2], Stack[-1])
0x772: Pop(2)
0x773: @ WaitForAnimEnd()
0x774: Pop(0)
0x775: Push( Stack[3 + Tasks[-1].StackPointer] )
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: GOTO 0x77d

0x778: Push("all")
0x779: Push("idle")
0x77a: @ PlayAnimation(Stack[-2], Stack[-1])
0x77b: Pop(2)
0x77c: GOTO 0x773

0x77d: Return(); Pop(0)

0x77e: PushEmpty()
0x77f: PushEmpty(bool)
0x780: Call2 0x9fd

0x781: Pop(0)
0x782: Pop(1); Push((bool) Stack[-1] == 0)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Return(); Pop(0)

0x785: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x786: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x787: Return(); Pop(0)

0x788: PushEmpty(string, bool)
0x789: Stack[-2] = Stack[-3]
0x78a: Push("")
0x78b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78d: Stack[-1] = (bool) 0
0x78e: GOTO 0x790

0x78f: Stack[-1] = (bool) 1
0x790: Call2 0x949

0x791: Pop(2)
0x792: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x793: Return(); Pop(0)

0x794: PushEmpty()
0x795: Push((int) 1)
0x796: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x797: PushEmpty()
0x798: Call2 0x967

0x799: Pop(0)
0x79a: Push((int) 42554)
0x79b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x79d: PushEmpty(string)
0x79e: Stack[-1] = "Neutral"
0x79f: Call2 0x77e

0x7a0: Pop(1)
0x7a1: Push((int) 540545)
0x7a2: @@ SetMessage(Stack[-1])
0x7a3: Pop(1)
0x7a4: @@ ClearReplies()
0x7a5: Pop(0)
0x7a6: Push((int) 540546)
0x7a7: Push((int) -1)
0x7a8: Push((int) 42555)
0x7a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7aa: Pop(3)
0x7ab: Push((int) 540798)
0x7ac: Push((int) -1)
0x7ad: Push((int) 42847)
0x7ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7af: Pop(3)
0x7b0: Return(); Pop(0)

0x7b1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7b2: PushEmpty(bool)
0x7b3: Call2 0x9fd

0x7b4: Pop(0)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b6: @ lshStopAnimation()
0x7b7: Pop(0)
0x7b8: GOTO 0x7bb

0x7b9: @ StopAnimation()
0x7ba: Pop(0)
0x7bb: Return(); Pop(0)

0x7bc: GOTO 0x795

0x7bd: Return(); Pop(0)

0x7be: Push(GlobalVars[1])
0x7bf: Stack[-1] = (bool) 1
0x7c0: GlobalVars[1] = Stack[-1]; Pop(1)
0x7c1: PushEmpty()
0x7c2: Call2 0x7cd

0x7c3: Pop(0)
0x7c4: Return(); Pop(0)

0x7c5: PushEmpty()
0x7c6: Push("icot_viktor_NPC_Trigger")
0x7c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c9: PushEmpty()
0x7ca: Call2 0x7f4

0x7cb: Pop(0)
0x7cc: Return(); Pop(0)

0x7cd: @ GetPosition(Stack[-1])
0x7ce: Pop(0)
0x7cf: @ GetDirection(Stack[-2])
0x7d0: Pop(0)
0x7d1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7d2: PushEmpty(bool)
0x7d3: Call2 0x855

0x7d4: Pop(0)
0x7d5: Pop(1); Push((bool) Stack[-1] == 0)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7d7: PushEmpty()
0x7d8: Push(-0, 0); TaskCall(0)
0x7d9: Call2 0x0

0x7da: Pop(-0, 0); TaskReturn
0x7db: Pop(0)
0x7dc: PushEmpty()
0x7dd: Call2 0x7e9

0x7de: Pop(0)
0x7df: PushEmpty(string)
0x7e0: Stack[-1] = "Neutral"
0x7e1: Call2 0x939

0x7e2: Pop(1)
0x7e3: @ lshWaitForAnimEnd()
0x7e4: Pop(0)
0x7e5: GOTO 0x7df

0x7e6: @ Hold()
0x7e7: Pop(0)
0x7e8: Return(); Pop(0)

0x7e9: @ SetPosition(Stack[-1])
0x7ea: Pop(0)
0x7eb: @ SetDirection(Stack[-2])
0x7ec: Pop(0)
0x7ed: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7ee: Push("all")
0x7ef: Push("stand")
0x7f0: Push((int) 0)
0x7f1: @ LockAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7f2: Pop(3)
0x7f3: Return(); Pop(0)

0x7f4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7f5: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f6: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7f7: Push("all")
0x7f8: Push("stand")
0x7f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x7fa: Pop(2)
0x7fb: @ WaitForAnimEnd()
0x7fc: Pop(0)
0x7fd: Return(); Pop(0)

0x7fe: PushEmpty()
0x7ff: Push(-0, 0); TaskCall(0)
0x800: Call2 0x0

0x801: Pop(-0, 0); TaskReturn
0x802: Pop(0)
0x803: PushEmpty()
0x804: Call2 0x7e9

0x805: Pop(0)
0x806: Return(); Pop(0)

0x807: PushEmpty(bool, bool)
0x808: Push( Stack[0 + Tasks[-1].StackPointer] )
0x809: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x80a: @ IsOverrideActive(Stack[-1])
0x80b: Pop(0)
0x80c: Pop(0); Push((bool) Stack[-1] == 0)
0x80d: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x80e: EventDisable(0)
0x80f: PushEmpty(bool, object)
0x810: Stack[-1] = Stack[-5]
0x811: Call2 0x84c

0x812: Pop(2)
0x813: EventEnable(0)
0x814: PushEmpty(object)
0x815: Stack[-1] = Stack[-4]
0x816: Call2 0xabf

0x817: Pop(1)
0x818: Return(); Pop(2)

0x819: PushEmpty(bool, bool)
0x81a: Push("HasProperty")
0x81b: Push((int) 2)
0x81c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x81d: Pop(1); Push((bool) Stack[-1] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x81f: Stack[-5] = (bool) 0
0x820: Return(); Pop(2)

0x821: @@ HasProperty(Stack[-3], Stack[-1])
0x822: Pop(0)
0x823: Stack[-5] = Stack[-1]
0x824: Return(); Pop(2)

0x825: PushEmpty(float, float)
0x826: PushEmpty(bool, object, string)
0x827: Stack[-2] = Stack[-10]
0x828: Stack[-1] = Stack[-9]
0x829: Call2 0x819

0x82a: Pop(2)
0x82b: Pop(1); Push((bool) Stack[-1] == 0)
0x82c: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82d: Stack[-8] = (bool) 0
0x82e: Return(); Pop(2)

0x82f: @@ GetProperty(Stack[-6], Stack[-1])
0x830: Pop(0)
0x831: PushEmpty(float, float, float, float)
0x832: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x833: Stack[-2] = Stack[-8]
0x834: Stack[-1] = Stack[-7]
0x835: Call2 0x97e

0x836: Pop(3)
0x837: @@ SetProperty(Stack[-7], Stack[-1])
0x838: Pop(1)
0x839: Stack[-8] = (bool) 1
0x83a: Return(); Pop(2)

0x83b: PushEmpty(int, int)
0x83c: @@ GetProperty(Stack[-4], Stack[-1])
0x83d: Pop(0)
0x83e: Pop(0); Push(Stack[-1] + Stack[-3]);
0x83f: @@ SetProperty(Stack[-5], Stack[-1])
0x840: Pop(1)
0x841: Return(); Pop(2)

0x842: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x843: @ GetPosition(Stack[-3])
0x844: Pop(0)
0x845: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x846: Push(CvectorIndex(Stack[-2], 0))
0x847: Push(CvectorIndex(Stack[-3], 2))
0x848: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x849: Pop(2)
0x84a: Stack[-8] = Stack[-1]
0x84b: Return(); Pop(6)

0x84c: PushEmpty(cvector, cvector)
0x84d: @@ GetPosition(Stack[-1])
0x84e: Pop(0)
0x84f: PushEmpty(bool, cvector)
0x850: Stack[-1] = Stack[-3]
0x851: Call2 0x842

0x852: Stack[-6] = Stack[-2]
0x853: Pop(2)
0x854: Return(); Pop(2)

0x855: PushEmpty(bool, bool)
0x856: @ IsLoaded(Stack[-1])
0x857: Pop(0)
0x858: Stack[-3] = Stack[-1]
0x859: Return(); Pop(2)

0x85a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x85b: @@ GetPosition(Stack[-8])
0x85c: Pop(0)
0x85d: @@ GetEyesHeight(Stack[-9])
0x85e: Pop(0)
0x85f: Push(CvectorIndex(Stack[-8], 1))
0x860: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x861: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x862: @ GetPosition(Stack[-7])
0x863: Pop(0)
0x864: @ GetEyesHeight(Stack[-9])
0x865: Pop(0)
0x866: Push(CvectorIndex(Stack[-7], 1))
0x867: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x868: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x869: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x86a: Push(CvectorIndex(Stack[-6], 1))
0x86b: Stack[-1] = (int) 0
0x86c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x86d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x86e: Pop(1); Push(Sqrt(Stack[-1]))
0x86f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x870: Stack[-5] = -Stack[-6]; Pop(0);
0x871: Pop(0); Push(Stack[-6] * Stack[-19]);
0x872: PushEmpty(cvector, cvector)
0x873: Push(CVector(0.0, 1.0, 0.0))
0x874: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x875: Call2 0x974

0x876: Pop(1)
0x877: Push((int) 25)
0x878: Pop(2); Push(Stack[-2] * Stack[-1]);
0x879: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87a: Push(CVector(0.0, 10.0, 0.0))
0x87b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x87c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x87d: @ IsOverrideActive(Stack[-2])
0x87e: Pop(0)
0x87f: Push(Stack[-2])
0x880: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x881: Stack[-21] = (bool) 0
0x882: Return(); Pop(18)

0x883: @ StopWorld()
0x884: Pop(0)
0x885: @ CameraTransit(Stack[-3], Stack[-5])
0x886: Pop(0)
0x887: Push(CvectorIndex(Stack[-4], 0))
0x888: Push(CvectorIndex(Stack[-5], 2))
0x889: @ Rotate(Stack[-2], Stack[-1])
0x88a: Pop(2)
0x88b: PushEmpty(bool)
0x88c: Call2 0x9fd

0x88d: Pop(0)
0x88e: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x88f: GOTO 0x898

0x890: Push("head")
0x891: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x892: Pop(1)
0x893: Push(Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x895: Push("head")
0x896: @ LookAsyncCamera(Stack[-1])
0x897: Pop(1)
0x898: @ CameraWaitForPlayFinish()
0x899: Pop(0)
0x89a: @ ResumeWorld()
0x89b: Pop(0)
0x89c: Stack[-21] = (bool) 1
0x89d: Return(); Pop(18)

0x89e: PushEmpty(bool, bool)
0x89f: @ CameraSwitchToNormal()
0x8a0: Pop(0)
0x8a1: PushEmpty(bool)
0x8a2: Call2 0x9fd

0x8a3: Pop(0)
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a5: GOTO 0x8ae

0x8a6: Push("head")
0x8a7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8a8: Pop(1)
0x8a9: Push(Stack[-1])
0x8aa: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ab: Push("head")
0x8ac: @ UnlookAsync(Stack[-1])
0x8ad: Pop(1)
0x8ae: Return(); Pop(2)

0x8af: PushEmpty(int, int, int, int)
0x8b0: Push("voice_common")
0x8b1: @ GetVariable(Stack[-1], Stack[-3])
0x8b2: Pop(1)
0x8b3: Push(Stack[-2])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8b5: PushEmpty(bool, object)
0x8b6: Stack[-1] = Stack[-7]
0x8b7: Call2 0x8e9

0x8b8: Pop(1)
0x8b9: Pop(1); Push((bool) Stack[-1] == 0)
0x8ba: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8bb: PushEmpty(bool, object)
0x8bc: Stack[-1] = Stack[-7]
0x8bd: Call2 0x90e

0x8be: Pop(1)
0x8bf: Pop(1); Push((bool) Stack[-1] == 0)
0x8c0: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8c1: Stack[-6] = (bool) 0
0x8c2: Return(); Pop(4)

0x8c3: Push((int) 2)
0x8c4: @ irand(Stack[-2], Stack[-1])
0x8c5: Pop(1)
0x8c6: Push(Stack[-1])
0x8c7: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8c8: Push("voice_common")
0x8c9: Push((int) 1)
0x8ca: Pop(1); Push(Stack[-4] + Stack[-1]);
0x8cb: Push((int) 3)
0x8cc: Pop(2); Push(Stack[-2] % Stack[-1]);
0x8cd: @ SetVariable(Stack[-2], Stack[-1])
0x8ce: Pop(2)
0x8cf: GOTO 0x8d4

0x8d0: Push("voice_common")
0x8d1: Push((int) 0)
0x8d2: @ SetVariable(Stack[-2], Stack[-1])
0x8d3: Pop(2)
0x8d4: GOTO 0x8e7

0x8d5: PushEmpty(bool, object)
0x8d6: Stack[-1] = Stack[-7]
0x8d7: Call2 0x90e

0x8d8: Pop(1)
0x8d9: Pop(1); Push((bool) Stack[-1] == 0)
0x8da: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8db: PushEmpty(bool, object)
0x8dc: Stack[-1] = Stack[-7]
0x8dd: Call2 0x8e9

0x8de: Pop(1)
0x8df: Pop(1); Push((bool) Stack[-1] == 0)
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e1: Stack[-6] = (bool) 0
0x8e2: Return(); Pop(4)

0x8e3: Push("voice_common")
0x8e4: Push((int) 1)
0x8e5: @ SetVariable(Stack[-2], Stack[-1])
0x8e6: Pop(2)
0x8e7: Stack[-6] = (bool) 1
0x8e8: Return(); Pop(4)

0x8e9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x8ea: Stack[-5] = "c"
0x8eb: Stack[-4] = (int) 0
0x8ec: Push((int) 1)
0x8ed: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8ee: Push((int) 1)
0x8ef: Pop(1); Push(Stack[-5] + Stack[-1]);
0x8f0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8f1: @@ HasProperty(Stack[-1], Stack[-4])
0x8f2: Pop(1)
0x8f3: Pop(0); Push((bool) Stack[-3] == 0)
0x8f4: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8f5: GOTO 0x8f9

0x8f6: Push((int) 1)
0x8f7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x8f8: GOTO 0x8ec

0x8f9: Pop(0); Push((bool) Stack[-4] == 0)
0x8fa: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8fb: Stack[-12] = (bool) 0
0x8fc: Return(); Pop(10)

0x8fd: Stack[-2] = (int) 0
0x8fe: Push((int) 1)
0x8ff: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x900: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x901: @ irand(Stack[-2], Stack[-4])
0x902: Pop(0)
0x903: Push((int) 1)
0x904: Pop(1); Push(Stack[-3] + Stack[-1]);
0x905: Pop(1); Push(Stack[-6] + Stack[-1]);
0x906: @@ GetProperty(Stack[-1], Stack[-2])
0x907: Pop(1)
0x908: PushEmpty(bool, string)
0x909: Stack[-1] = Stack[-3]
0x90a: Call2 0x958

0x90b: Stack[-14] = Stack[-2]
0x90c: Pop(2)
0x90d: Return(); Pop(10)

0x90e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x90f: Push("d")
0x910: PushEmpty(int)
0x911: Call2 0x9e6

0x912: Pop(0)
0x913: Pop(2); Push(Stack[-2] + Stack[-1]);
0x914: Push("m")
0x915: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x916: Stack[-4] = (int) 0
0x917: Push((int) 1)
0x918: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x919: Push((int) 1)
0x91a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x91b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x91c: @@ HasProperty(Stack[-1], Stack[-4])
0x91d: Pop(1)
0x91e: Pop(0); Push((bool) Stack[-3] == 0)
0x91f: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x920: GOTO 0x924

0x921: Push((int) 1)
0x922: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x923: GOTO 0x917

0x924: Pop(0); Push((bool) Stack[-4] == 0)
0x925: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x926: Stack[-12] = (bool) 0
0x927: Return(); Pop(10)

0x928: Stack[-2] = (int) 0
0x929: Push((int) 1)
0x92a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x92c: @ irand(Stack[-2], Stack[-4])
0x92d: Pop(0)
0x92e: Push((int) 1)
0x92f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x930: Pop(1); Push(Stack[-6] + Stack[-1]);
0x931: @@ GetProperty(Stack[-1], Stack[-2])
0x932: Pop(1)
0x933: PushEmpty(bool, string)
0x934: Stack[-1] = Stack[-3]
0x935: Call2 0x958

0x936: Stack[-14] = Stack[-2]
0x937: Pop(2)
0x938: Return(); Pop(10)

0x939: PushEmpty(bool, float, float, bool, float, float)
0x93a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x93b: Pop(0)
0x93c: Push(Stack[-3])
0x93d: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x93e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x93f: Pop(0)
0x940: Push((bool) 0)
0x941: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(1)
0x943: GOTO 0x948

0x944: Push("Can't find lsh animation : ")
0x945: Pop(1); Push(Stack[-1] + Stack[-8]);
0x946: @ Trace(Stack[-1])
0x947: Pop(1)
0x948: Return(); Pop(6)

0x949: PushEmpty(bool, float, float, bool, float, float)
0x94a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x94b: Pop(0)
0x94c: Push(Stack[-3])
0x94d: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x94e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x94f: Pop(0)
0x950: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x951: Pop(0)
0x952: GOTO 0x957

0x953: Push("Can't find lsh animation : ")
0x954: Pop(1); Push(Stack[-1] + Stack[-9]);
0x955: @ Trace(Stack[-1])
0x956: Pop(1)
0x957: Return(); Pop(6)

0x958: PushEmpty(bool, bool)
0x959: PushEmpty(bool)
0x95a: Call2 0x9fd

0x95b: Pop(0)
0x95c: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x95d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x95e: Pop(0)
0x95f: Push(Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x961: @ lshPlaySpeech(Stack[-3])
0x962: Pop(0)
0x963: Stack[-4] = (bool) 1
0x964: Return(); Pop(2)

0x965: Stack[-4] = (bool) 0
0x966: Return(); Pop(2)

0x967: PushEmpty(bool)
0x968: Call2 0x9fd

0x969: Pop(0)
0x96a: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x96b: @ lshStopSpeech()
0x96c: Pop(0)
0x96d: Return(); Pop(0)

0x96e: PushEmpty(object, object)
0x96f: @ self(Stack[-1])
0x970: Pop(0)
0x971: Stack[-3] = Stack[-1]
0x972: Return(); Pop(2)

0x973: Stack[-1] = 0
0x974: PushEmpty(float, float)
0x975: Pop(0); Push(Stack[-3] | Stack[-3]);
0x976: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x977: Push((float)0.0)
0x978: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x979: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x97b: Return(); Pop(2)

0x97c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x97d: Return(); Pop(2)

0x97e: PushEmpty()
0x97f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x980: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x981: Stack[-4] = Stack[-2]
0x982: Return(); Pop(0)

0x983: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x984: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x985: Stack[-4] = Stack[-1]
0x986: Return(); Pop(0)

0x987: Stack[-4] = Stack[-3]
0x988: Return(); Pop(0)

0x989: PushEmpty(int, int)
0x98a: @ GetVariable(Stack[-3], Stack[-1])
0x98b: Pop(0)
0x98c: Stack[-4] = Stack[-1]
0x98d: Return(); Pop(2)

0x98e: PushEmpty(object, object)
0x98f: @ CreateIntVector(Stack[-1])
0x990: Pop(0)
0x991: @@ add(Stack[-4])
0x992: Pop(0)
0x993: @@ add(Stack[-3])
0x994: Pop(0)
0x995: Push((int) 3)
0x996: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x997: Pop(1)
0x998: Return(); Pop(2)

0x999: Stack[-1] = 0
0x99a: PushEmpty(int, int)
0x99b: PushEmpty(object, string, int)
0x99c: Stack[-3] = Stack[-7]
0x99d: Stack[-2] = "money"
0x99e: Stack[-1] = Stack[-6]
0x99f: Call2 0x83b

0x9a0: Pop(3)
0x9a1: Push((int) 0)
0x9a2: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x9a3: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9a4: Push("Money")
0x9a5: @ GetInvItemByName(Stack[-2], Stack[-1])
0x9a6: Pop(1)
0x9a7: PushEmpty(int, int)
0x9a8: Stack[-2] = Stack[-3]
0x9a9: Stack[-1] = Stack[-5]
0x9aa: Call2 0x98e

0x9ab: Pop(2)
0x9ac: Return(); Pop(2)

0x9ad: PushEmpty()
0x9ae: Pop(0); Push((bool) Stack[-2] == 0)
0x9af: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9b0: Stack[-3] = (bool) 0
0x9b1: Return(); Pop(0)

0x9b2: Push((int) 0)
0x9b3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9b4: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b5: Push((int) 8)
0x9b6: @ SendWorldWndMessage(Stack[-1])
0x9b7: Pop(1)
0x9b8: GOTO 0x9c2

0x9b9: Push((int) 0)
0x9ba: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9bb: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bc: Push((int) 9)
0x9bd: @ SendWorldWndMessage(Stack[-1])
0x9be: Pop(1)
0x9bf: GOTO 0x9c2

0x9c0: Stack[-3] = (bool) 0
0x9c1: Return(); Pop(0)

0x9c2: PushEmpty(float)
0x9c3: Stack[-1] = Stack[-2]
0x9c4: Call2 0x9d0

0x9c5: Pop(1)
0x9c6: PushEmpty(bool, object, string, float, float, float)
0x9c7: Stack[-5] = Stack[-8]
0x9c8: Stack[-4] = "reputation"
0x9c9: Stack[-3] = Stack[-7]
0x9ca: Stack[-2] = (int) 0
0x9cb: Stack[-1] = (int) 1
0x9cc: Call2 0x825

0x9cd: Pop(6)
0x9ce: Stack[-3] = (bool) 1
0x9cf: Return(); Pop(0)

0x9d0: PushEmpty(object, object)
0x9d1: @ CreateFloatVector(Stack[-1])
0x9d2: Pop(0)
0x9d3: @@ add(Stack[-3])
0x9d4: Pop(0)
0x9d5: Push((int) 16)
0x9d6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x9d7: Pop(1)
0x9d8: Return(); Pop(2)

0x9d9: Stack[-1] = 0
0x9da: PushEmpty(object, object)
0x9db: @ FindActor(Stack[-1], Stack[-4])
0x9dc: Pop(0)
0x9dd: Pop(0); Push((bool) Stack[-1] == 0)
0x9de: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9df: Stack[-5] = (bool) 0
0x9e0: Return(); Pop(2)

0x9e1: @ Trigger(Stack[-1], Stack[-3])
0x9e2: Pop(0)
0x9e3: Stack[-5] = (bool) 1
0x9e4: Return(); Pop(2)

0x9e5: Stack[-1] = 0
0x9e6: PushEmpty(float, float)
0x9e7: @ GetGameTime(Stack[-1])
0x9e8: Pop(0)
0x9e9: Push((int) 1)
0x9ea: PushEmpty(int)
0x9eb: Push((int) 24)
0x9ec: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x9ed: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x9ee: Return(); Pop(2)

0x9ef: PushEmpty()
0x9f0: PushEmpty(int)
0x9f1: Call2 0x9e6

0x9f2: Pop(0)
0x9f3: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x9f4: Return(); Pop(0)

0x9f5: Stack[-1] = (int) 515554
0x9f6: Return(); Pop(0)

0x9f7: Stack[-1] = (int) 502879
0x9f8: Return(); Pop(0)

0x9f9: Stack[-1] = "ui/NPC_Viktor.png"
0x9fa: Return(); Pop(0)

0x9fb: Stack[-1] = "ui/NPC_Viktor_b.png"
0x9fc: Return(); Pop(0)

0x9fd: Stack[-1] = (bool) 1
0x9fe: Return(); Pop(0)

0x9ff: PushEmpty()
0xa00: PushEmpty(bool, object, float)
0xa01: Stack[-2] = Stack[-5]
0xa02: Stack[-1] = (float) 0.05
0xa03: Call2 0x9ad

0xa04: Pop(3)
0xa05: Return(); Pop(0)

0xa06: PushEmpty()
0xa07: Push("ook3Viktor1")
0xa08: Push((int) 1)
0xa09: @ SetVariable(Stack[-2], Stack[-1])
0xa0a: Pop(2)
0xa0b: Return(); Pop(0)

0xa0c: PushEmpty()
0xa0d: Push("money2000 is given")
0xa0e: @ Trace(Stack[-1])
0xa0f: Pop(1)
0xa10: PushEmpty(object, int)
0xa11: Stack[-2] = Stack[-4]
0xa12: Stack[-1] = (int) 2000
0xa13: Call2 0x99a

0xa14: Pop(2)
0xa15: Return(); Pop(0)

0xa16: PushEmpty()
0xa17: Push("ook10Viktor1")
0xa18: Push((int) 1)
0xa19: @ SetVariable(Stack[-2], Stack[-1])
0xa1a: Pop(2)
0xa1b: Return(); Pop(0)

0xa1c: PushEmpty()
0xa1d: Push("k9q01")
0xa1e: Push((int) 5)
0xa1f: @ SetVariable(Stack[-2], Stack[-1])
0xa20: Pop(2)
0xa21: PushEmpty()
0xa22: Call2 0xa78

0xa23: Pop(0)
0xa24: PushEmpty(bool, string, string)
0xa25: Stack[-2] = "quest_k9_01"
0xa26: Stack[-1] = "init_mnogogrannik"
0xa27: Call2 0x9da

0xa28: Pop(3)
0xa29: Return(); Pop(0)

0xa2a: PushEmpty()
0xa2b: Push("playsound")
0xa2c: Push("givemoney")
0xa2d: @ TriggerWorld(Stack[-2], Stack[-1])
0xa2e: Pop(2)
0xa2f: Return(); Pop(0)

0xa30: PushEmpty()
0xa31: PushEmpty(int, string)
0xa32: Stack[-1] = "k3q03"
0xa33: Call2 0x989

0xa34: Pop(1)
0xa35: Push((int) 1000)
0xa36: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa37: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa38: Stack[-2] = (bool) 1
0xa39: Return(); Pop(0)

0xa3a: Stack[-2] = (bool) 0
0xa3b: Return(); Pop(0)

0xa3c: PushEmpty()
0xa3d: PushEmpty(int, string)
0xa3e: Stack[-1] = "ook3Viktor1"
0xa3f: Call2 0x989

0xa40: Pop(1)
0xa41: Push((int) 0)
0xa42: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa43: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa44: Stack[-2] = (bool) 1
0xa45: Return(); Pop(0)

0xa46: Stack[-2] = (bool) 0
0xa47: Return(); Pop(0)

0xa48: PushEmpty()
0xa49: PushEmpty(int, string)
0xa4a: Stack[-1] = "k10q01"
0xa4b: Call2 0x989

0xa4c: Pop(1)
0xa4d: Push((int) 1)
0xa4e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa4f: IF (Stack[-1] == 0) GOTO 0xa52; Pop(1)

0xa50: Stack[-2] = (bool) 1
0xa51: Return(); Pop(0)

0xa52: Stack[-2] = (bool) 0
0xa53: Return(); Pop(0)

0xa54: PushEmpty()
0xa55: PushEmpty(int, string)
0xa56: Stack[-1] = "ook10Viktor1"
0xa57: Call2 0x989

0xa58: Pop(1)
0xa59: Push((int) 0)
0xa5a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa5b: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa5c: Stack[-2] = (bool) 1
0xa5d: Return(); Pop(0)

0xa5e: Stack[-2] = (bool) 0
0xa5f: Return(); Pop(0)

0xa60: PushEmpty()
0xa61: PushEmpty(int, string)
0xa62: Stack[-1] = "k10q01"
0xa63: Call2 0x989

0xa64: Pop(1)
0xa65: Push((int) 2)
0xa66: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa67: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa68: Stack[-2] = (bool) 1
0xa69: Return(); Pop(0)

0xa6a: Stack[-2] = (bool) 0
0xa6b: Return(); Pop(0)

0xa6c: PushEmpty()
0xa6d: PushEmpty(int, string)
0xa6e: Stack[-1] = "k9q01"
0xa6f: Call2 0x989

0xa70: Pop(1)
0xa71: Push((int) 4)
0xa72: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa74: Stack[-2] = (bool) 1
0xa75: Return(); Pop(0)

0xa76: Stack[-2] = (bool) 0
0xa77: Return(); Pop(0)

0xa78: PushEmpty(object, object)
0xa79: Push((int) 522)
0xa7a: Push((int) 1)
0xa7b: Push((int) 529814)
0xa7c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa7d: Pop(3)
0xa7e: PushEmpty(bool, object, int)
0xa7f: Stack[-2] = Stack[-4]
0xa80: Stack[-1] = (int) 517
0xa81: Call2 0xa92

0xa82: Pop(3)
0xa83: Return(); Pop(2)

0xa84: Stack[-1] = 0
0xa85: PushEmpty(object, object)
0xa86: @ GetDiaryRoot(Stack[-1])
0xa87: Pop(0)
0xa88: Pop(0); Push((bool) Stack[-1] == 0)
0xa89: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa8a: Push("Can't retrieve diary root")
0xa8b: @ Trace(Stack[-1])
0xa8c: Pop(1)
0xa8d: Stack[-3] = (bool) 0
0xa8e: Return(); Pop(2)

0xa8f: Stack[-3] = Stack[-1]
0xa90: Return(); Pop(2)

0xa91: Stack[-1] = 0
0xa92: PushEmpty(object, object, int, object, object, int)
0xa93: PushEmpty(object)
0xa94: Call2 0xa85

0xa95: Stack[-4] = Stack[-1]
0xa96: Pop(1)
0xa97: @@ Find(Stack[-7], Stack[-2])
0xa98: Pop(0)
0xa99: Pop(0); Push((bool) Stack[-2] == 0)
0xa9a: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa9b: Push("Can't find diary parent with id: ")
0xa9c: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa9d: @ Trace(Stack[-1])
0xa9e: Pop(1)
0xa9f: Stack[-9] = (bool) 0
0xaa0: Return(); Pop(6)

0xaa1: @@ AddChild(Stack[-8])
0xaa2: Pop(0)
0xaa3: Push((int) 7)
0xaa4: @ SendWorldWndMessage(Stack[-1])
0xaa5: Pop(1)
0xaa6: @@ GetCategory(Stack[-1])
0xaa7: Pop(0)
0xaa8: @ SetDiarySection(Stack[-1])
0xaa9: Pop(0)
0xaaa: Stack[-9] = (bool) 0
0xaab: Return(); Pop(6)

0xaac: Stack[-2] = 0
0xaad: Stack[-3] = 0
0xaae: PushEmpty(int, int)
0xaaf: Push("branch")
0xab0: @ GetVariable(Stack[-1], Stack[-2])
0xab1: Pop(1)
0xab2: Push((int) 0)
0xab3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab4: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab5: Stack[-3] = (int) 1
0xab6: Return(); Pop(2)

0xab7: GOTO 0xabd

0xab8: Push((int) 1)
0xab9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaba: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xabb: Stack[-3] = (int) 2
0xabc: Return(); Pop(2)

0xabd: Stack[-3] = (int) 3
0xabe: Return(); Pop(2)

0xabf: PushEmpty()
0xac0: Push(GlobalVars[1])
0xac1: Pop(1); Push((bool) Stack[-1] == 0)
0xac2: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac3: PushEmpty(int, object)
0xac4: Stack[-1] = Stack[-3]
0xac5: Push(-2, 1); TaskCall(1)
0xac6: Call2 0xd

0xac7: Pop(-2, 1); TaskReturn
0xac8: Pop(2)
0xac9: Push(GlobalVars[1])
0xaca: Stack[-1] = (bool) 1
0xacb: GlobalVars[1] = Stack[-1]; Pop(1)
0xacc: PushEmpty(bool, int)
0xacd: Stack[-1] = (int) 3
0xace: Call2 0x9ef

0xacf: Pop(1)
0xad0: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad1: PushEmpty(int, object)
0xad2: Stack[-1] = Stack[-3]
0xad3: Push(-2, 1); TaskCall(9)
0xad4: Call2 0x532

0xad5: Pop(-2, 1); TaskReturn
0xad6: Pop(2)
0xad7: Return(); Pop(0)

0xad8: PushEmpty(bool, int)
0xad9: Stack[-1] = (int) 9
0xada: Call2 0x9ef

0xadb: Pop(1)
0xadc: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xadd: PushEmpty(int, object)
0xade: Stack[-1] = Stack[-3]
0xadf: Push(-2, 1); TaskCall(5)
0xae0: Call2 0x2cf

0xae1: Pop(-2, 1); TaskReturn
0xae2: Pop(2)
0xae3: Return(); Pop(0)

0xae4: PushEmpty(bool, int)
0xae5: Stack[-1] = (int) 10
0xae6: Call2 0x9ef

0xae7: Pop(1)
0xae8: IF (Stack[-1] == 0) GOTO 0xaf0; Pop(1)

0xae9: PushEmpty(int, object)
0xaea: Stack[-1] = Stack[-3]
0xaeb: Push(-2, 1); TaskCall(3)
0xaec: Call2 0x134

0xaed: Pop(-2, 1); TaskReturn
0xaee: Pop(2)
0xaef: Return(); Pop(0)

0xaf0: PushEmpty(bool, int)
0xaf1: Stack[-1] = (int) 12
0xaf2: Call2 0x9ef

0xaf3: Pop(1)
0xaf4: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf5: PushEmpty(int, object)
0xaf6: Stack[-1] = Stack[-3]
0xaf7: Push(-2, 1); TaskCall(7)
0xaf8: Call2 0x42f

0xaf9: Pop(-2, 1); TaskReturn
0xafa: Pop(2)
0xafb: Return(); Pop(0)

0xafc: PushEmpty(int, object)
0xafd: Stack[-1] = Stack[-3]
0xafe: Push(-2, 1); TaskCall(11)
0xaff: Call2 0x6f3

0xb00: Pop(-2, 1); TaskReturn
0xb01: Pop(2)
0xb02: Return(); Pop(0)

