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
	Confusion
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Anger
	Surprise
	Neutral
	Fear
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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x7d2
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc1 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x26f Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3b6 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x53b Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6aa Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7a8 Vars = (int, int)
	GTASK_13 Vars = (bool, cvector, cvector) Params = 0
		EVENT_26 Op = 0x7d9 Vars = (string)
		EVENT_6 Op = 0x812 Vars = ()
		EVENT_0 Op = 0x81b Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x869

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
0x12: Call2 0x86e

0x13: Pop(2)
0x14: Pop(1); Push((bool) Stack[-1] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x16: Stack[-10] = (int) -2
0x17: Return(); Pop(8)

0x18: @ CreateDialog(Stack[-4])
0x19: Pop(0)
0x1a: PushEmpty(int)
0x1b: Call2 0xa0d

0x1c: Pop(0)
0x1d: @@ SetNPCName(Stack[-1])
0x1e: Pop(1)
0x1f: PushEmpty(int)
0x20: Call2 0xa0b

0x21: Pop(0)
0x22: @@ SetNPCDescription(Stack[-1])
0x23: Pop(1)
0x24: PushEmpty(string)
0x25: Call2 0xa0f

0x26: Pop(0)
0x27: @@ SetPhoto(Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(string)
0x2a: Call2 0xa11

0x2b: Pop(0)
0x2c: @@ SetPhoto2(Stack[-1])
0x2d: Pop(1)
0x2e: PushEmpty(int)
0x2f: Call2 0xac4

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
0x3e: Call2 0x984

0x3f: Stack[-2] = Stack[-1]
0x40: Pop(1)
0x41: Call2 0x8c5

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
0x55: Call2 0x8b3

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
0x63: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Confusion"
0x66: Call2 0xab

0x67: Pop(1)
0x68: Push((int) 525599)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0xa46

0x72: Pop(1)
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0xa52

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7b: Push((int) 525600)
0x7c: Push((int) 26948)
0x7d: Push((int) 26947)
0x7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: Push((int) 525605)
0x81: Push((int) -1)
0x82: Push((int) 26952)
0x83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84: Pop(3)
0x85: Push((int) 542220)
0x86: Push((int) -1)
0x87: Push((int) 44551)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: GOTO 0x8d

0x8b: Return(); Pop(0)

0x8c: GOTO 0x62

0x8d: PushEmpty(bool)
0x8e: Call2 0xa13

0x8f: Pop(0)
0x90: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x91: @ lshWaitForAnimEnd()
0x92: Pop(0)
0x93: Push( Stack[3 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: GOTO 0x9b

0x96: PushEmpty(string)
0x97: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x98: Call2 0x94f

0x99: Pop(1)
0x9a: GOTO 0x91

0x9b: GOTO 0xaa

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: @ WaitForAnimEnd()
0xa1: Pop(0)
0xa2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: GOTO 0xa0

0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool)
0xad: Call2 0xa13

0xae: Pop(0)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(0)

0xb2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: PushEmpty(string, bool)
0xb6: Stack[-2] = Stack[-3]
0xb7: Push("")
0xb8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-1] = (bool) 0
0xbb: GOTO 0xbd

0xbc: Stack[-1] = (bool) 1
0xbd: Call2 0x95f

0xbe: Pop(2)
0xbf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc0: Return(); Pop(0)

0xc1: PushEmpty()
0xc2: Push((int) 1)
0xc3: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0xc4: PushEmpty()
0xc5: Call2 0x97d

0xc6: Pop(0)
0xc7: Push((int) 26947)
0xc8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: PushEmpty(object, object)
0xcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Call2 0xa1c

0xce: Pop(2)
0xcf: Push((int) 26951)
0xd0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call2 0xa40

0xd6: Pop(2)
0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call2 0xa22

0xdb: Pop(2)
0xdc: Push((int) 43252)
0xdd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0xa15

0xe3: Pop(2)
0xe4: Push((int) 26946)
0xe5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Confusion"
0xe9: Call2 0xab

0xea: Pop(1)
0xeb: Push((int) 525599)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: PushEmpty(bool)
0xf1: Stack[-1] = (bool) 0
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0xa46

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf7: PushEmpty(bool, object)
0xf8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Call2 0xa52

0xfa: Pop(1)
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Stack[-1] = (bool) 1
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: Push((int) 525600)
0xff: Push((int) 26948)
0x100: Push((int) 26947)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Push((int) 525605)
0x104: Push((int) -1)
0x105: Push((int) 26952)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Push((int) 542220)
0x109: Push((int) -1)
0x10a: Push((int) 44551)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 26948)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Confusion"
0x113: Call2 0xab

0x114: Pop(1)
0x115: Push((int) 525601)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 542221)
0x11b: Push((int) 44554)
0x11c: Push((int) 44552)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Push((int) 542222)
0x120: Push((int) 44555)
0x121: Push((int) 44553)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 44555)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Anger"
0x12a: Call2 0xab

0x12b: Pop(1)
0x12c: Push((int) 542224)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 542225)
0x132: Push((int) 44554)
0x133: Push((int) 44556)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 542226)
0x137: Push((int) 44560)
0x138: Push((int) 44557)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 44554)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Anger"
0x141: Call2 0xab

0x142: Pop(1)
0x143: Push((int) 542223)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 542227)
0x149: Push((int) 44562)
0x14a: Push((int) 44559)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 542232)
0x14e: Push((int) 44562)
0x14f: Push((int) 44564)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 44562)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Surprise"
0x158: Call2 0xab

0x159: Pop(1)
0x15a: Push((int) 542230)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 542231)
0x160: Push((int) 44560)
0x161: Push((int) 44563)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 542229)
0x165: Push((int) 44560)
0x166: Push((int) 44561)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 44560)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Surprise"
0x16f: Call2 0xab

0x170: Pop(1)
0x171: Push((int) 542228)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 525602)
0x177: Push((int) 26950)
0x178: Push((int) 26949)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Push((int) 542238)
0x17c: Push((int) 44568)
0x17d: Push((int) 44573)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 26950)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Surprise"
0x186: Call2 0xab

0x187: Pop(1)
0x188: Push((int) 525603)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 542233)
0x18e: Push((int) 44568)
0x18f: Push((int) 44567)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 542235)
0x193: Push((int) 44571)
0x194: Push((int) 44569)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 44568)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral"
0x19d: Call2 0xab

0x19e: Pop(1)
0x19f: Push((int) 542234)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 542236)
0x1a5: Push((int) 44571)
0x1a6: Push((int) 44570)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 44571)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0xab

0x1b0: Pop(1)
0x1b1: Push((int) 542237)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 525604)
0x1b7: Push((int) -1)
0x1b8: Push((int) 26951)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 541131)
0x1bc: Push((int) -1)
0x1bd: Push((int) 43252)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c2: PushEmpty(bool)
0x1c3: Call2 0xa13

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: @ lshStopAnimation()
0x1c7: Pop(0)
0x1c8: GOTO 0x1cb

0x1c9: @ StopAnimation()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: GOTO 0xc2

0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1cf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1d0: PushEmpty(bool, object, float)
0x1d1: Stack[-2] = Stack[-12]
0x1d2: Stack[-1] = (float) 70.0
0x1d3: Call2 0x86e

0x1d4: Pop(2)
0x1d5: Pop(1); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d7: Stack[-10] = (int) -2
0x1d8: Return(); Pop(8)

0x1d9: @ CreateDialog(Stack[-4])
0x1da: Pop(0)
0x1db: PushEmpty(int)
0x1dc: Call2 0xa0d

0x1dd: Pop(0)
0x1de: @@ SetNPCName(Stack[-1])
0x1df: Pop(1)
0x1e0: PushEmpty(int)
0x1e1: Call2 0xa0b

0x1e2: Pop(0)
0x1e3: @@ SetNPCDescription(Stack[-1])
0x1e4: Pop(1)
0x1e5: PushEmpty(string)
0x1e6: Call2 0xa0f

0x1e7: Pop(0)
0x1e8: @@ SetPhoto(Stack[-1])
0x1e9: Pop(1)
0x1ea: PushEmpty(string)
0x1eb: Call2 0xa11

0x1ec: Pop(0)
0x1ed: @@ SetPhoto2(Stack[-1])
0x1ee: Pop(1)
0x1ef: PushEmpty(int)
0x1f0: Call2 0xac4

0x1f1: Pop(0)
0x1f2: @@ SetPlayerName(Stack[-1])
0x1f3: Pop(1)
0x1f4: Stack[-2] = (int) -1
0x1f5: @ IsOverrideActive(Stack[-3])
0x1f6: Pop(0)
0x1f7: Push(Stack[-3])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-10] = (int) -2
0x1fa: Return(); Pop(8)

0x1fb: @ DoDialog(Stack[-4])
0x1fc: Pop(0)
0x1fd: PushEmpty(bool, object)
0x1fe: PushEmpty(object)
0x1ff: Call2 0x984

0x200: Stack[-2] = Stack[-1]
0x201: Pop(1)
0x202: Call2 0x8c5

0x203: Pop(2)
0x204: PushEmpty(object, object)
0x205: Stack[-2] = Stack[-11]
0x206: Stack[-1] = Stack[-6]
0x207: Push(-2, 4); TaskCall(4)
0x208: Call2 0x21f

0x209: Pop(-2, 4); TaskReturn
0x20a: Pop(2)
0x20b: @@ IsDialogEnd(Stack[-1])
0x20c: Pop(0)
0x20d: Pop(0); Push((bool) Stack[-1] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20f: @ sync()
0x210: Pop(0)
0x211: @@ IsDialogEnd(Stack[-1])
0x212: Pop(0)
0x213: GOTO 0x20d

0x214: PushEmpty(object)
0x215: Stack[-1] = Stack[-10]
0x216: Call2 0x8b3

0x217: Pop(1)
0x218: @ StopDialog(Stack[-4])
0x219: Pop(0)
0x21a: @@ GetReturnValue(Stack[-2])
0x21b: Pop(0)
0x21c: Stack[-10] = Stack[-2]
0x21d: Return(); Pop(8)

0x21e: Stack[-4] = 0
0x21f: PushEmpty()
0x220: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x221: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x222: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x223: Push((int) 1)
0x224: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x225: PushEmpty(string)
0x226: Stack[-1] = "Neutral"
0x227: Call2 0x259

0x228: Pop(1)
0x229: Push((int) 525531)
0x22a: @@ SetMessage(Stack[-1])
0x22b: Pop(1)
0x22c: @@ ClearReplies()
0x22d: Pop(0)
0x22e: Push((int) 525532)
0x22f: Push((int) 44536)
0x230: Push((int) 26888)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Push((int) 542207)
0x234: Push((int) 44538)
0x235: Push((int) 44535)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: GOTO 0x23b

0x239: Return(); Pop(0)

0x23a: GOTO 0x223

0x23b: PushEmpty(bool)
0x23c: Call2 0xa13

0x23d: Pop(0)
0x23e: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x23f: @ lshWaitForAnimEnd()
0x240: Pop(0)
0x241: Push( Stack[3 + Tasks[-1].StackPointer] )
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: GOTO 0x249

0x244: PushEmpty(string)
0x245: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x246: Call2 0x94f

0x247: Pop(1)
0x248: GOTO 0x23f

0x249: GOTO 0x258

0x24a: Push("all")
0x24b: Push("idle")
0x24c: @ PlayAnimation(Stack[-2], Stack[-1])
0x24d: Pop(2)
0x24e: @ WaitForAnimEnd()
0x24f: Pop(0)
0x250: Push( Stack[3 + Tasks[-1].StackPointer] )
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: GOTO 0x258

0x253: Push("all")
0x254: Push("idle")
0x255: @ PlayAnimation(Stack[-2], Stack[-1])
0x256: Pop(2)
0x257: GOTO 0x24e

0x258: Return(); Pop(0)

0x259: PushEmpty()
0x25a: PushEmpty(bool)
0x25b: Call2 0xa13

0x25c: Pop(0)
0x25d: Pop(1); Push((bool) Stack[-1] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: Return(); Pop(0)

0x260: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: Return(); Pop(0)

0x263: PushEmpty(string, bool)
0x264: Stack[-2] = Stack[-3]
0x265: Push("")
0x266: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x268: Stack[-1] = (bool) 0
0x269: GOTO 0x26b

0x26a: Stack[-1] = (bool) 1
0x26b: Call2 0x95f

0x26c: Pop(2)
0x26d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: Push((int) 1)
0x271: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x272: PushEmpty()
0x273: Call2 0x97d

0x274: Pop(0)
0x275: Push((int) 26887)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Neutral"
0x27a: Call2 0x259

0x27b: Pop(1)
0x27c: Push((int) 525531)
0x27d: @@ SetMessage(Stack[-1])
0x27e: Pop(1)
0x27f: @@ ClearReplies()
0x280: Pop(0)
0x281: Push((int) 525532)
0x282: Push((int) 44536)
0x283: Push((int) 26888)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: Push((int) 542207)
0x287: Push((int) 44538)
0x288: Push((int) 44535)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Push((int) 44536)
0x28d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x28f: PushEmpty(string)
0x290: Stack[-1] = "Neutral"
0x291: Call2 0x259

0x292: Pop(1)
0x293: Push((int) 542208)
0x294: @@ SetMessage(Stack[-1])
0x295: Pop(1)
0x296: @@ ClearReplies()
0x297: Pop(0)
0x298: Push((int) 542209)
0x299: Push((int) 44538)
0x29a: Push((int) 44537)
0x29b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29c: Pop(3)
0x29d: Push((int) 542214)
0x29e: Push((int) 44538)
0x29f: Push((int) 44543)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: Return(); Pop(0)

0x2a3: Push((int) 44538)
0x2a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Neutral"
0x2a8: Call2 0x259

0x2a9: Pop(1)
0x2aa: Push((int) 542210)
0x2ab: @@ SetMessage(Stack[-1])
0x2ac: Pop(1)
0x2ad: @@ ClearReplies()
0x2ae: Pop(0)
0x2af: Push((int) 542211)
0x2b0: Push((int) 44542)
0x2b1: Push((int) 44539)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Push((int) 542212)
0x2b5: Push((int) 44548)
0x2b6: Push((int) 44541)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Return(); Pop(0)

0x2ba: Push((int) 44548)
0x2bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2bd: PushEmpty(string)
0x2be: Stack[-1] = "Neutral"
0x2bf: Call2 0x259

0x2c0: Pop(1)
0x2c1: Push((int) 542217)
0x2c2: @@ SetMessage(Stack[-1])
0x2c3: Pop(1)
0x2c4: @@ ClearReplies()
0x2c5: Pop(0)
0x2c6: Push((int) 542218)
0x2c7: Push((int) 44542)
0x2c8: Push((int) 44549)
0x2c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ca: Pop(3)
0x2cb: Push((int) 542219)
0x2cc: Push((int) -1)
0x2cd: Push((int) 44550)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: Return(); Pop(0)

0x2d1: Push((int) 44542)
0x2d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2d4: PushEmpty(string)
0x2d5: Stack[-1] = "Neutral"
0x2d6: Call2 0x259

0x2d7: Pop(1)
0x2d8: Push((int) 542213)
0x2d9: @@ SetMessage(Stack[-1])
0x2da: Pop(1)
0x2db: @@ ClearReplies()
0x2dc: Pop(0)
0x2dd: Push((int) 542215)
0x2de: Push((int) -1)
0x2df: Push((int) 44546)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Push((int) 542216)
0x2e3: Push((int) -1)
0x2e4: Push((int) 44547)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e9: PushEmpty(bool)
0x2ea: Call2 0xa13

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: @ lshStopAnimation()
0x2ee: Pop(0)
0x2ef: GOTO 0x2f2

0x2f0: @ StopAnimation()
0x2f1: Pop(0)
0x2f2: Return(); Pop(0)

0x2f3: GOTO 0x270

0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2f6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2f7: PushEmpty(bool, object, float)
0x2f8: Stack[-2] = Stack[-12]
0x2f9: Stack[-1] = (float) 70.0
0x2fa: Call2 0x86e

0x2fb: Pop(2)
0x2fc: Pop(1); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-10] = (int) -2
0x2ff: Return(); Pop(8)

0x300: @ CreateDialog(Stack[-4])
0x301: Pop(0)
0x302: PushEmpty(int)
0x303: Call2 0xa0d

0x304: Pop(0)
0x305: @@ SetNPCName(Stack[-1])
0x306: Pop(1)
0x307: PushEmpty(int)
0x308: Call2 0xa0b

0x309: Pop(0)
0x30a: @@ SetNPCDescription(Stack[-1])
0x30b: Pop(1)
0x30c: PushEmpty(string)
0x30d: Call2 0xa0f

0x30e: Pop(0)
0x30f: @@ SetPhoto(Stack[-1])
0x310: Pop(1)
0x311: PushEmpty(string)
0x312: Call2 0xa11

0x313: Pop(0)
0x314: @@ SetPhoto2(Stack[-1])
0x315: Pop(1)
0x316: PushEmpty(int)
0x317: Call2 0xac4

0x318: Pop(0)
0x319: @@ SetPlayerName(Stack[-1])
0x31a: Pop(1)
0x31b: Stack[-2] = (int) -1
0x31c: @ IsOverrideActive(Stack[-3])
0x31d: Pop(0)
0x31e: Push(Stack[-3])
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-10] = (int) -2
0x321: Return(); Pop(8)

0x322: @ DoDialog(Stack[-4])
0x323: Pop(0)
0x324: PushEmpty(bool, object)
0x325: PushEmpty(object)
0x326: Call2 0x984

0x327: Stack[-2] = Stack[-1]
0x328: Pop(1)
0x329: Call2 0x8c5

0x32a: Pop(2)
0x32b: PushEmpty(object, object)
0x32c: Stack[-2] = Stack[-11]
0x32d: Stack[-1] = Stack[-6]
0x32e: Push(-2, 4); TaskCall(6)
0x32f: Call2 0x346

0x330: Pop(-2, 4); TaskReturn
0x331: Pop(2)
0x332: @@ IsDialogEnd(Stack[-1])
0x333: Pop(0)
0x334: Pop(0); Push((bool) Stack[-1] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x336: @ sync()
0x337: Pop(0)
0x338: @@ IsDialogEnd(Stack[-1])
0x339: Pop(0)
0x33a: GOTO 0x334

0x33b: PushEmpty(object)
0x33c: Stack[-1] = Stack[-10]
0x33d: Call2 0x8b3

0x33e: Pop(1)
0x33f: @ StopDialog(Stack[-4])
0x340: Pop(0)
0x341: @@ GetReturnValue(Stack[-2])
0x342: Pop(0)
0x343: Stack[-10] = Stack[-2]
0x344: Return(); Pop(8)

0x345: Stack[-4] = 0
0x346: PushEmpty()
0x347: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x348: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x349: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x34a: Push((int) 1)
0x34b: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x34c: PushEmpty(string)
0x34d: Stack[-1] = "Fear"
0x34e: Call2 0x3a0

0x34f: Pop(1)
0x350: Push((int) 526939)
0x351: @@ SetMessage(Stack[-1])
0x352: Pop(1)
0x353: @@ ClearReplies()
0x354: Pop(0)
0x355: PushEmpty(bool)
0x356: Stack[-1] = (bool) 1
0x357: PushEmpty(bool)
0x358: Stack[-1] = (bool) 0
0x359: PushEmpty(bool, object)
0x35a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35b: Call2 0xa5e

0x35c: Pop(1)
0x35d: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x35e: PushEmpty(bool, object)
0x35f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x360: Call2 0xa6a

0x361: Pop(1)
0x362: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x363: Stack[-1] = (bool) 1
0x364: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x365: PushEmpty(bool)
0x366: Stack[-1] = (bool) 0
0x367: PushEmpty(bool, object)
0x368: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x369: Call2 0xa76

0x36a: Pop(1)
0x36b: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36c: PushEmpty(bool, object)
0x36d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36e: Call2 0xa6a

0x36f: Pop(1)
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: Stack[-1] = (bool) 1
0x372: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x373: Stack[-1] = (bool) 0
0x374: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x375: Push((int) 526940)
0x376: Push((int) 28233)
0x377: Push((int) 28232)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Push((int) 526945)
0x37b: Push((int) -1)
0x37c: Push((int) 28237)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: GOTO 0x382

0x380: Return(); Pop(0)

0x381: GOTO 0x34a

0x382: PushEmpty(bool)
0x383: Call2 0xa13

0x384: Pop(0)
0x385: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x386: @ lshWaitForAnimEnd()
0x387: Pop(0)
0x388: Push( Stack[3 + Tasks[-1].StackPointer] )
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: GOTO 0x390

0x38b: PushEmpty(string)
0x38c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x38d: Call2 0x94f

0x38e: Pop(1)
0x38f: GOTO 0x386

0x390: GOTO 0x39f

0x391: Push("all")
0x392: Push("idle")
0x393: @ PlayAnimation(Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: @ WaitForAnimEnd()
0x396: Pop(0)
0x397: Push( Stack[3 + Tasks[-1].StackPointer] )
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: GOTO 0x39f

0x39a: Push("all")
0x39b: Push("idle")
0x39c: @ PlayAnimation(Stack[-2], Stack[-1])
0x39d: Pop(2)
0x39e: GOTO 0x395

0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: PushEmpty(bool)
0x3a2: Call2 0xa13

0x3a3: Pop(0)
0x3a4: Pop(1); Push((bool) Stack[-1] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: Return(); Pop(0)

0x3a7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Return(); Pop(0)

0x3aa: PushEmpty(string, bool)
0x3ab: Stack[-2] = Stack[-3]
0x3ac: Push("")
0x3ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3af: Stack[-1] = (bool) 0
0x3b0: GOTO 0x3b2

0x3b1: Stack[-1] = (bool) 1
0x3b2: Call2 0x95f

0x3b3: Pop(2)
0x3b4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty()
0x3b7: Push((int) 1)
0x3b8: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x3b9: PushEmpty()
0x3ba: Call2 0x97d

0x3bb: Pop(0)
0x3bc: Push((int) 28232)
0x3bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3bf: PushEmpty(object, object)
0x3c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c2: Call2 0xa2c

0x3c3: Pop(2)
0x3c4: Push((int) 28231)
0x3c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3c7: PushEmpty(string)
0x3c8: Stack[-1] = "Fear"
0x3c9: Call2 0x3a0

0x3ca: Pop(1)
0x3cb: Push((int) 526939)
0x3cc: @@ SetMessage(Stack[-1])
0x3cd: Pop(1)
0x3ce: @@ ClearReplies()
0x3cf: Pop(0)
0x3d0: PushEmpty(bool)
0x3d1: Stack[-1] = (bool) 1
0x3d2: PushEmpty(bool)
0x3d3: Stack[-1] = (bool) 0
0x3d4: PushEmpty(bool, object)
0x3d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d6: Call2 0xa5e

0x3d7: Pop(1)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d9: PushEmpty(bool, object)
0x3da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3db: Call2 0xa6a

0x3dc: Pop(1)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3de: Stack[-1] = (bool) 1
0x3df: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e0: PushEmpty(bool)
0x3e1: Stack[-1] = (bool) 0
0x3e2: PushEmpty(bool, object)
0x3e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e4: Call2 0xa76

0x3e5: Pop(1)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e7: PushEmpty(bool, object)
0x3e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e9: Call2 0xa6a

0x3ea: Pop(1)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: Stack[-1] = (bool) 1
0x3ed: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ee: Stack[-1] = (bool) 0
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f0: Push((int) 526940)
0x3f1: Push((int) 28233)
0x3f2: Push((int) 28232)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Push((int) 526945)
0x3f6: Push((int) -1)
0x3f7: Push((int) 28237)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 28233)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Neutral"
0x400: Call2 0x3a0

0x401: Pop(1)
0x402: Push((int) 526941)
0x403: @@ SetMessage(Stack[-1])
0x404: Pop(1)
0x405: @@ ClearReplies()
0x406: Pop(0)
0x407: Push((int) 526942)
0x408: Push((int) 28235)
0x409: Push((int) 28234)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Push((int) 527965)
0x40d: Push((int) 29330)
0x40e: Push((int) 29322)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Return(); Pop(0)

0x412: Push((int) 29330)
0x413: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x415: PushEmpty(string)
0x416: Stack[-1] = "Neutral"
0x417: Call2 0x3a0

0x418: Pop(1)
0x419: Push((int) 527973)
0x41a: @@ SetMessage(Stack[-1])
0x41b: Pop(1)
0x41c: @@ ClearReplies()
0x41d: Pop(0)
0x41e: Push((int) 527974)
0x41f: Push((int) 29332)
0x420: Push((int) 29331)
0x421: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 29332)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Neutral"
0x429: Call2 0x3a0

0x42a: Pop(1)
0x42b: Push((int) 527975)
0x42c: @@ SetMessage(Stack[-1])
0x42d: Pop(1)
0x42e: @@ ClearReplies()
0x42f: Pop(0)
0x430: Push((int) 527976)
0x431: Push((int) 29321)
0x432: Push((int) 29333)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 28235)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Surprise"
0x43b: Call2 0x3a0

0x43c: Pop(1)
0x43d: Push((int) 526943)
0x43e: @@ SetMessage(Stack[-1])
0x43f: Pop(1)
0x440: @@ ClearReplies()
0x441: Pop(0)
0x442: Push((int) 526944)
0x443: Push((int) 29321)
0x444: Push((int) 28236)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Return(); Pop(0)

0x448: Push((int) 29321)
0x449: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x44b: PushEmpty(string)
0x44c: Stack[-1] = "Surprise"
0x44d: Call2 0x3a0

0x44e: Pop(1)
0x44f: Push((int) 527964)
0x450: @@ SetMessage(Stack[-1])
0x451: Pop(1)
0x452: @@ ClearReplies()
0x453: Pop(0)
0x454: Push((int) 527966)
0x455: Push((int) 29324)
0x456: Push((int) 29323)
0x457: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(3)
0x459: Return(); Pop(0)

0x45a: Push((int) 29324)
0x45b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x45d: PushEmpty(string)
0x45e: Stack[-1] = "Confusion"
0x45f: Call2 0x3a0

0x460: Pop(1)
0x461: Push((int) 527967)
0x462: @@ SetMessage(Stack[-1])
0x463: Pop(1)
0x464: @@ ClearReplies()
0x465: Pop(0)
0x466: Push((int) 527969)
0x467: Push((int) 29327)
0x468: Push((int) 29326)
0x469: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: Push((int) 527968)
0x46c: Push((int) -1)
0x46d: Push((int) 29325)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 29327)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Confusion"
0x476: Call2 0x3a0

0x477: Pop(1)
0x478: Push((int) 527970)
0x479: @@ SetMessage(Stack[-1])
0x47a: Pop(1)
0x47b: @@ ClearReplies()
0x47c: Pop(0)
0x47d: Push((int) 527971)
0x47e: Push((int) -1)
0x47f: Push((int) 29328)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Return(); Pop(0)

0x483: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x484: PushEmpty(bool)
0x485: Call2 0xa13

0x486: Pop(0)
0x487: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x488: @ lshStopAnimation()
0x489: Pop(0)
0x48a: GOTO 0x48d

0x48b: @ StopAnimation()
0x48c: Pop(0)
0x48d: Return(); Pop(0)

0x48e: GOTO 0x3b7

0x48f: Return(); Pop(0)

0x490: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x491: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x492: PushEmpty(bool, object, float)
0x493: Stack[-2] = Stack[-12]
0x494: Stack[-1] = (float) 70.0
0x495: Call2 0x86e

0x496: Pop(2)
0x497: Pop(1); Push((bool) Stack[-1] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x499: Stack[-10] = (int) -2
0x49a: Return(); Pop(8)

0x49b: @ CreateDialog(Stack[-4])
0x49c: Pop(0)
0x49d: PushEmpty(int)
0x49e: Call2 0xa0d

0x49f: Pop(0)
0x4a0: @@ SetNPCName(Stack[-1])
0x4a1: Pop(1)
0x4a2: PushEmpty(int)
0x4a3: Call2 0xa0b

0x4a4: Pop(0)
0x4a5: @@ SetNPCDescription(Stack[-1])
0x4a6: Pop(1)
0x4a7: PushEmpty(string)
0x4a8: Call2 0xa0f

0x4a9: Pop(0)
0x4aa: @@ SetPhoto(Stack[-1])
0x4ab: Pop(1)
0x4ac: PushEmpty(string)
0x4ad: Call2 0xa11

0x4ae: Pop(0)
0x4af: @@ SetPhoto2(Stack[-1])
0x4b0: Pop(1)
0x4b1: PushEmpty(int)
0x4b2: Call2 0xac4

0x4b3: Pop(0)
0x4b4: @@ SetPlayerName(Stack[-1])
0x4b5: Pop(1)
0x4b6: Stack[-2] = (int) -1
0x4b7: @ IsOverrideActive(Stack[-3])
0x4b8: Pop(0)
0x4b9: Push(Stack[-3])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bb: Stack[-10] = (int) -2
0x4bc: Return(); Pop(8)

0x4bd: @ DoDialog(Stack[-4])
0x4be: Pop(0)
0x4bf: PushEmpty(bool, object)
0x4c0: PushEmpty(object)
0x4c1: Call2 0x984

0x4c2: Stack[-2] = Stack[-1]
0x4c3: Pop(1)
0x4c4: Call2 0x8c5

0x4c5: Pop(2)
0x4c6: PushEmpty(object, object)
0x4c7: Stack[-2] = Stack[-11]
0x4c8: Stack[-1] = Stack[-6]
0x4c9: Push(-2, 4); TaskCall(8)
0x4ca: Call2 0x4e1

0x4cb: Pop(-2, 4); TaskReturn
0x4cc: Pop(2)
0x4cd: @@ IsDialogEnd(Stack[-1])
0x4ce: Pop(0)
0x4cf: Pop(0); Push((bool) Stack[-1] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d1: @ sync()
0x4d2: Pop(0)
0x4d3: @@ IsDialogEnd(Stack[-1])
0x4d4: Pop(0)
0x4d5: GOTO 0x4cf

0x4d6: PushEmpty(object)
0x4d7: Stack[-1] = Stack[-10]
0x4d8: Call2 0x8b3

0x4d9: Pop(1)
0x4da: @ StopDialog(Stack[-4])
0x4db: Pop(0)
0x4dc: @@ GetReturnValue(Stack[-2])
0x4dd: Pop(0)
0x4de: Stack[-10] = Stack[-2]
0x4df: Return(); Pop(8)

0x4e0: Stack[-4] = 0
0x4e1: PushEmpty()
0x4e2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4e3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4e4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e5: Push((int) 1)
0x4e6: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4e7: PushEmpty(string)
0x4e8: Stack[-1] = "Neutral"
0x4e9: Call2 0x525

0x4ea: Pop(1)
0x4eb: Push((int) 528940)
0x4ec: @@ SetMessage(Stack[-1])
0x4ed: Pop(1)
0x4ee: @@ ClearReplies()
0x4ef: Pop(0)
0x4f0: PushEmpty(bool, object)
0x4f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f2: Call2 0xa82

0x4f3: Pop(1)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f5: Push((int) 528943)
0x4f6: Push((int) 30377)
0x4f7: Push((int) 30376)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Push((int) 528941)
0x4fb: Push((int) -1)
0x4fc: Push((int) 30374)
0x4fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: Push((int) 528942)
0x500: Push((int) -1)
0x501: Push((int) 30375)
0x502: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x503: Pop(3)
0x504: GOTO 0x507

0x505: Return(); Pop(0)

0x506: GOTO 0x4e5

0x507: PushEmpty(bool)
0x508: Call2 0xa13

0x509: Pop(0)
0x50a: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x50b: @ lshWaitForAnimEnd()
0x50c: Pop(0)
0x50d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x50e: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50f: GOTO 0x515

0x510: PushEmpty(string)
0x511: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x512: Call2 0x94f

0x513: Pop(1)
0x514: GOTO 0x50b

0x515: GOTO 0x524

0x516: Push("all")
0x517: Push("idle")
0x518: @ PlayAnimation(Stack[-2], Stack[-1])
0x519: Pop(2)
0x51a: @ WaitForAnimEnd()
0x51b: Pop(0)
0x51c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x51d: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51e: GOTO 0x524

0x51f: Push("all")
0x520: Push("idle")
0x521: @ PlayAnimation(Stack[-2], Stack[-1])
0x522: Pop(2)
0x523: GOTO 0x51a

0x524: Return(); Pop(0)

0x525: PushEmpty()
0x526: PushEmpty(bool)
0x527: Call2 0xa13

0x528: Pop(0)
0x529: Pop(1); Push((bool) Stack[-1] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: Return(); Pop(0)

0x52c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x52d: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52e: Return(); Pop(0)

0x52f: PushEmpty(string, bool)
0x530: Stack[-2] = Stack[-3]
0x531: Push("")
0x532: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x534: Stack[-1] = (bool) 0
0x535: GOTO 0x537

0x536: Stack[-1] = (bool) 1
0x537: Call2 0x95f

0x538: Pop(2)
0x539: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x53a: Return(); Pop(0)

0x53b: PushEmpty()
0x53c: Push((int) 1)
0x53d: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x53e: PushEmpty()
0x53f: Call2 0x97d

0x540: Pop(0)
0x541: Push((int) 30380)
0x542: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x543: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x544: PushEmpty(object, object)
0x545: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x546: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x547: Call2 0xa32

0x548: Pop(2)
0x549: Push((int) 30373)
0x54a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x54c: PushEmpty(string)
0x54d: Stack[-1] = "Neutral"
0x54e: Call2 0x525

0x54f: Pop(1)
0x550: Push((int) 528940)
0x551: @@ SetMessage(Stack[-1])
0x552: Pop(1)
0x553: @@ ClearReplies()
0x554: Pop(0)
0x555: PushEmpty(bool, object)
0x556: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x557: Call2 0xa82

0x558: Pop(1)
0x559: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55a: Push((int) 528943)
0x55b: Push((int) 30377)
0x55c: Push((int) 30376)
0x55d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55e: Pop(3)
0x55f: Push((int) 528941)
0x560: Push((int) -1)
0x561: Push((int) 30374)
0x562: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x563: Pop(3)
0x564: Push((int) 528942)
0x565: Push((int) -1)
0x566: Push((int) 30375)
0x567: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x568: Pop(3)
0x569: Return(); Pop(0)

0x56a: Push((int) 30377)
0x56b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x56d: PushEmpty(string)
0x56e: Stack[-1] = "Confusion"
0x56f: Call2 0x525

0x570: Pop(1)
0x571: Push((int) 528944)
0x572: @@ SetMessage(Stack[-1])
0x573: Pop(1)
0x574: @@ ClearReplies()
0x575: Pop(0)
0x576: Push((int) 528945)
0x577: Push((int) 30379)
0x578: Push((int) 30378)
0x579: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57a: Pop(3)
0x57b: Push((int) 528948)
0x57c: Push((int) 30382)
0x57d: Push((int) 30381)
0x57e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57f: Pop(3)
0x580: Return(); Pop(0)

0x581: Push((int) 30382)
0x582: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x584: PushEmpty(string)
0x585: Stack[-1] = "Confusion"
0x586: Call2 0x525

0x587: Pop(1)
0x588: Push((int) 528949)
0x589: @@ SetMessage(Stack[-1])
0x58a: Pop(1)
0x58b: @@ ClearReplies()
0x58c: Pop(0)
0x58d: Push((int) 528950)
0x58e: Push((int) 30384)
0x58f: Push((int) 30383)
0x590: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x591: Pop(3)
0x592: Return(); Pop(0)

0x593: Push((int) 30384)
0x594: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x595: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x596: PushEmpty(string)
0x597: Stack[-1] = "Neutral"
0x598: Call2 0x525

0x599: Pop(1)
0x59a: Push((int) 528951)
0x59b: @@ SetMessage(Stack[-1])
0x59c: Pop(1)
0x59d: @@ ClearReplies()
0x59e: Pop(0)
0x59f: Push((int) 528952)
0x5a0: Push((int) 30391)
0x5a1: Push((int) 30385)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: Push((int) 528954)
0x5a5: Push((int) 30386)
0x5a6: Push((int) 30387)
0x5a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a8: Pop(3)
0x5a9: Return(); Pop(0)

0x5aa: Push((int) 30386)
0x5ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5ad: PushEmpty(string)
0x5ae: Stack[-1] = "Surprise"
0x5af: Call2 0x525

0x5b0: Pop(1)
0x5b1: Push((int) 528953)
0x5b2: @@ SetMessage(Stack[-1])
0x5b3: Pop(1)
0x5b4: @@ ClearReplies()
0x5b5: Pop(0)
0x5b6: Push((int) 528955)
0x5b7: Push((int) 30389)
0x5b8: Push((int) 30388)
0x5b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ba: Pop(3)
0x5bb: Push((int) 528957)
0x5bc: Push((int) 30389)
0x5bd: Push((int) 30390)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Return(); Pop(0)

0x5c1: Push((int) 30389)
0x5c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5c4: PushEmpty(string)
0x5c5: Stack[-1] = "Surprise"
0x5c6: Call2 0x525

0x5c7: Pop(1)
0x5c8: Push((int) 528956)
0x5c9: @@ SetMessage(Stack[-1])
0x5ca: Pop(1)
0x5cb: @@ ClearReplies()
0x5cc: Pop(0)
0x5cd: Push((int) 528960)
0x5ce: Push((int) 30379)
0x5cf: Push((int) 30394)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: Return(); Pop(0)

0x5d3: Push((int) 30391)
0x5d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5d6: PushEmpty(string)
0x5d7: Stack[-1] = "Neutral"
0x5d8: Call2 0x525

0x5d9: Pop(1)
0x5da: Push((int) 528958)
0x5db: @@ SetMessage(Stack[-1])
0x5dc: Pop(1)
0x5dd: @@ ClearReplies()
0x5de: Pop(0)
0x5df: Push((int) 528959)
0x5e0: Push((int) 30379)
0x5e1: Push((int) 30392)
0x5e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e3: Pop(3)
0x5e4: Return(); Pop(0)

0x5e5: Push((int) 30379)
0x5e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5e8: PushEmpty(string)
0x5e9: Stack[-1] = "Neutral"
0x5ea: Call2 0x525

0x5eb: Pop(1)
0x5ec: Push((int) 528946)
0x5ed: @@ SetMessage(Stack[-1])
0x5ee: Pop(1)
0x5ef: @@ ClearReplies()
0x5f0: Pop(0)
0x5f1: Push((int) 528947)
0x5f2: Push((int) -1)
0x5f3: Push((int) 30380)
0x5f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f5: Pop(3)
0x5f6: Return(); Pop(0)

0x5f7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5f8: PushEmpty(bool)
0x5f9: Call2 0xa13

0x5fa: Pop(0)
0x5fb: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fc: @ lshStopAnimation()
0x5fd: Pop(0)
0x5fe: GOTO 0x601

0x5ff: @ StopAnimation()
0x600: Pop(0)
0x601: Return(); Pop(0)

0x602: GOTO 0x53c

0x603: Return(); Pop(0)

0x604: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x605: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x606: PushEmpty(bool, object, float)
0x607: Stack[-2] = Stack[-12]
0x608: Stack[-1] = (float) 70.0
0x609: Call2 0x86e

0x60a: Pop(2)
0x60b: Pop(1); Push((bool) Stack[-1] == 0)
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-10] = (int) -2
0x60e: Return(); Pop(8)

0x60f: @ CreateDialog(Stack[-4])
0x610: Pop(0)
0x611: PushEmpty(int)
0x612: Call2 0xa0d

0x613: Pop(0)
0x614: @@ SetNPCName(Stack[-1])
0x615: Pop(1)
0x616: PushEmpty(int)
0x617: Call2 0xa0b

0x618: Pop(0)
0x619: @@ SetNPCDescription(Stack[-1])
0x61a: Pop(1)
0x61b: PushEmpty(string)
0x61c: Call2 0xa0f

0x61d: Pop(0)
0x61e: @@ SetPhoto(Stack[-1])
0x61f: Pop(1)
0x620: PushEmpty(string)
0x621: Call2 0xa11

0x622: Pop(0)
0x623: @@ SetPhoto2(Stack[-1])
0x624: Pop(1)
0x625: PushEmpty(int)
0x626: Call2 0xac4

0x627: Pop(0)
0x628: @@ SetPlayerName(Stack[-1])
0x629: Pop(1)
0x62a: Stack[-2] = (int) -1
0x62b: @ IsOverrideActive(Stack[-3])
0x62c: Pop(0)
0x62d: Push(Stack[-3])
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-10] = (int) -2
0x630: Return(); Pop(8)

0x631: @ DoDialog(Stack[-4])
0x632: Pop(0)
0x633: PushEmpty(bool, object)
0x634: PushEmpty(object)
0x635: Call2 0x984

0x636: Stack[-2] = Stack[-1]
0x637: Pop(1)
0x638: Call2 0x8c5

0x639: Pop(2)
0x63a: PushEmpty(object, object)
0x63b: Stack[-2] = Stack[-11]
0x63c: Stack[-1] = Stack[-6]
0x63d: Push(-2, 4); TaskCall(10)
0x63e: Call2 0x655

0x63f: Pop(-2, 4); TaskReturn
0x640: Pop(2)
0x641: @@ IsDialogEnd(Stack[-1])
0x642: Pop(0)
0x643: Pop(0); Push((bool) Stack[-1] == 0)
0x644: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x645: @ sync()
0x646: Pop(0)
0x647: @@ IsDialogEnd(Stack[-1])
0x648: Pop(0)
0x649: GOTO 0x643

0x64a: PushEmpty(object)
0x64b: Stack[-1] = Stack[-10]
0x64c: Call2 0x8b3

0x64d: Pop(1)
0x64e: @ StopDialog(Stack[-4])
0x64f: Pop(0)
0x650: @@ GetReturnValue(Stack[-2])
0x651: Pop(0)
0x652: Stack[-10] = Stack[-2]
0x653: Return(); Pop(8)

0x654: Stack[-4] = 0
0x655: PushEmpty()
0x656: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x657: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x658: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x659: Push((int) 1)
0x65a: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x65b: PushEmpty(string)
0x65c: Stack[-1] = "Neutral"
0x65d: Call2 0x694

0x65e: Pop(1)
0x65f: Push((int) 535231)
0x660: @@ SetMessage(Stack[-1])
0x661: Pop(1)
0x662: @@ ClearReplies()
0x663: Pop(0)
0x664: Push((int) 535232)
0x665: Push((int) 36953)
0x666: Push((int) 36907)
0x667: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(3)
0x669: Push((int) 535233)
0x66a: Push((int) -1)
0x66b: Push((int) 36908)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: Push((int) 535280)
0x66f: Push((int) -1)
0x670: Push((int) 36956)
0x671: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x672: Pop(3)
0x673: GOTO 0x676

0x674: Return(); Pop(0)

0x675: GOTO 0x659

0x676: PushEmpty(bool)
0x677: Call2 0xa13

0x678: Pop(0)
0x679: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x67a: @ lshWaitForAnimEnd()
0x67b: Pop(0)
0x67c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x67d: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67e: GOTO 0x684

0x67f: PushEmpty(string)
0x680: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x681: Call2 0x94f

0x682: Pop(1)
0x683: GOTO 0x67a

0x684: GOTO 0x693

0x685: Push("all")
0x686: Push("idle")
0x687: @ PlayAnimation(Stack[-2], Stack[-1])
0x688: Pop(2)
0x689: @ WaitForAnimEnd()
0x68a: Pop(0)
0x68b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x68c: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68d: GOTO 0x693

0x68e: Push("all")
0x68f: Push("idle")
0x690: @ PlayAnimation(Stack[-2], Stack[-1])
0x691: Pop(2)
0x692: GOTO 0x689

0x693: Return(); Pop(0)

0x694: PushEmpty()
0x695: PushEmpty(bool)
0x696: Call2 0xa13

0x697: Pop(0)
0x698: Pop(1); Push((bool) Stack[-1] == 0)
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Return(); Pop(0)

0x69b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x69c: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69d: Return(); Pop(0)

0x69e: PushEmpty(string, bool)
0x69f: Stack[-2] = Stack[-3]
0x6a0: Push("")
0x6a1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a3: Stack[-1] = (bool) 0
0x6a4: GOTO 0x6a6

0x6a5: Stack[-1] = (bool) 1
0x6a6: Call2 0x95f

0x6a7: Pop(2)
0x6a8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: Push((int) 1)
0x6ac: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6ad: PushEmpty()
0x6ae: Call2 0x97d

0x6af: Pop(0)
0x6b0: Push((int) 36906)
0x6b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6b3: PushEmpty(string)
0x6b4: Stack[-1] = "Neutral"
0x6b5: Call2 0x694

0x6b6: Pop(1)
0x6b7: Push((int) 535231)
0x6b8: @@ SetMessage(Stack[-1])
0x6b9: Pop(1)
0x6ba: @@ ClearReplies()
0x6bb: Pop(0)
0x6bc: Push((int) 535232)
0x6bd: Push((int) 36953)
0x6be: Push((int) 36907)
0x6bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c0: Pop(3)
0x6c1: Push((int) 535233)
0x6c2: Push((int) -1)
0x6c3: Push((int) 36908)
0x6c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c5: Pop(3)
0x6c6: Push((int) 535280)
0x6c7: Push((int) -1)
0x6c8: Push((int) 36956)
0x6c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(3)
0x6cb: Return(); Pop(0)

0x6cc: Push((int) 36953)
0x6cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6cf: PushEmpty(string)
0x6d0: Stack[-1] = "Neutral"
0x6d1: Call2 0x694

0x6d2: Pop(1)
0x6d3: Push((int) 535277)
0x6d4: @@ SetMessage(Stack[-1])
0x6d5: Pop(1)
0x6d6: @@ ClearReplies()
0x6d7: Pop(0)
0x6d8: Push((int) 535278)
0x6d9: Push((int) 36957)
0x6da: Push((int) 36954)
0x6db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: Push((int) 535279)
0x6de: Push((int) 36957)
0x6df: Push((int) 36955)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: Return(); Pop(0)

0x6e3: Push((int) 36957)
0x6e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6e6: PushEmpty(string)
0x6e7: Stack[-1] = "Neutral"
0x6e8: Call2 0x694

0x6e9: Pop(1)
0x6ea: Push((int) 535281)
0x6eb: @@ SetMessage(Stack[-1])
0x6ec: Pop(1)
0x6ed: @@ ClearReplies()
0x6ee: Pop(0)
0x6ef: Push((int) 535282)
0x6f0: Push((int) -1)
0x6f1: Push((int) 36958)
0x6f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f3: Pop(3)
0x6f4: Push((int) 535283)
0x6f5: Push((int) -1)
0x6f6: Push((int) 36959)
0x6f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f8: Pop(3)
0x6f9: Return(); Pop(0)

0x6fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6fb: PushEmpty(bool)
0x6fc: Call2 0xa13

0x6fd: Pop(0)
0x6fe: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6ff: @ lshStopAnimation()
0x700: Pop(0)
0x701: GOTO 0x704

0x702: @ StopAnimation()
0x703: Pop(0)
0x704: Return(); Pop(0)

0x705: GOTO 0x6ab

0x706: Return(); Pop(0)

0x707: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x708: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x709: PushEmpty(bool, object, float)
0x70a: Stack[-2] = Stack[-12]
0x70b: Stack[-1] = (float) 70.0
0x70c: Call2 0x86e

0x70d: Pop(2)
0x70e: Pop(1); Push((bool) Stack[-1] == 0)
0x70f: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x710: Stack[-10] = (int) -2
0x711: Return(); Pop(8)

0x712: @ CreateDialog(Stack[-4])
0x713: Pop(0)
0x714: PushEmpty(int)
0x715: Call2 0xa0d

0x716: Pop(0)
0x717: @@ SetNPCName(Stack[-1])
0x718: Pop(1)
0x719: PushEmpty(int)
0x71a: Call2 0xa0b

0x71b: Pop(0)
0x71c: @@ SetNPCDescription(Stack[-1])
0x71d: Pop(1)
0x71e: PushEmpty(string)
0x71f: Call2 0xa0f

0x720: Pop(0)
0x721: @@ SetPhoto(Stack[-1])
0x722: Pop(1)
0x723: PushEmpty(string)
0x724: Call2 0xa11

0x725: Pop(0)
0x726: @@ SetPhoto2(Stack[-1])
0x727: Pop(1)
0x728: PushEmpty(int)
0x729: Call2 0xac4

0x72a: Pop(0)
0x72b: @@ SetPlayerName(Stack[-1])
0x72c: Pop(1)
0x72d: Stack[-2] = (int) -1
0x72e: @ IsOverrideActive(Stack[-3])
0x72f: Pop(0)
0x730: Push(Stack[-3])
0x731: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x732: Stack[-10] = (int) -2
0x733: Return(); Pop(8)

0x734: @ DoDialog(Stack[-4])
0x735: Pop(0)
0x736: PushEmpty(bool, object)
0x737: PushEmpty(object)
0x738: Call2 0x984

0x739: Stack[-2] = Stack[-1]
0x73a: Pop(1)
0x73b: Call2 0x8c5

0x73c: Pop(2)
0x73d: PushEmpty(object, object)
0x73e: Stack[-2] = Stack[-11]
0x73f: Stack[-1] = Stack[-6]
0x740: Push(-2, 4); TaskCall(12)
0x741: Call2 0x758

0x742: Pop(-2, 4); TaskReturn
0x743: Pop(2)
0x744: @@ IsDialogEnd(Stack[-1])
0x745: Pop(0)
0x746: Pop(0); Push((bool) Stack[-1] == 0)
0x747: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x748: @ sync()
0x749: Pop(0)
0x74a: @@ IsDialogEnd(Stack[-1])
0x74b: Pop(0)
0x74c: GOTO 0x746

0x74d: PushEmpty(object)
0x74e: Stack[-1] = Stack[-10]
0x74f: Call2 0x8b3

0x750: Pop(1)
0x751: @ StopDialog(Stack[-4])
0x752: Pop(0)
0x753: @@ GetReturnValue(Stack[-2])
0x754: Pop(0)
0x755: Stack[-10] = Stack[-2]
0x756: Return(); Pop(8)

0x757: Stack[-4] = 0
0x758: PushEmpty()
0x759: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x75a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x75c: Push((int) 1)
0x75d: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x75e: PushEmpty(string)
0x75f: Stack[-1] = "Neutral"
0x760: Call2 0x792

0x761: Pop(1)
0x762: Push((int) 540545)
0x763: @@ SetMessage(Stack[-1])
0x764: Pop(1)
0x765: @@ ClearReplies()
0x766: Pop(0)
0x767: Push((int) 540546)
0x768: Push((int) -1)
0x769: Push((int) 42555)
0x76a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76b: Pop(3)
0x76c: Push((int) 540798)
0x76d: Push((int) -1)
0x76e: Push((int) 42847)
0x76f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x770: Pop(3)
0x771: GOTO 0x774

0x772: Return(); Pop(0)

0x773: GOTO 0x75c

0x774: PushEmpty(bool)
0x775: Call2 0xa13

0x776: Pop(0)
0x777: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x778: @ lshWaitForAnimEnd()
0x779: Pop(0)
0x77a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77b: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77c: GOTO 0x782

0x77d: PushEmpty(string)
0x77e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x77f: Call2 0x94f

0x780: Pop(1)
0x781: GOTO 0x778

0x782: GOTO 0x791

0x783: Push("all")
0x784: Push("idle")
0x785: @ PlayAnimation(Stack[-2], Stack[-1])
0x786: Pop(2)
0x787: @ WaitForAnimEnd()
0x788: Pop(0)
0x789: Push( Stack[3 + Tasks[-1].StackPointer] )
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: GOTO 0x791

0x78c: Push("all")
0x78d: Push("idle")
0x78e: @ PlayAnimation(Stack[-2], Stack[-1])
0x78f: Pop(2)
0x790: GOTO 0x787

0x791: Return(); Pop(0)

0x792: PushEmpty()
0x793: PushEmpty(bool)
0x794: Call2 0xa13

0x795: Pop(0)
0x796: Pop(1); Push((bool) Stack[-1] == 0)
0x797: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x798: Return(); Pop(0)

0x799: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x79a: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79b: Return(); Pop(0)

0x79c: PushEmpty(string, bool)
0x79d: Stack[-2] = Stack[-3]
0x79e: Push("")
0x79f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a1: Stack[-1] = (bool) 0
0x7a2: GOTO 0x7a4

0x7a3: Stack[-1] = (bool) 1
0x7a4: Call2 0x95f

0x7a5: Pop(2)
0x7a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7a7: Return(); Pop(0)

0x7a8: PushEmpty()
0x7a9: Push((int) 1)
0x7aa: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7ab: PushEmpty()
0x7ac: Call2 0x97d

0x7ad: Pop(0)
0x7ae: Push((int) 42554)
0x7af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7b1: PushEmpty(string)
0x7b2: Stack[-1] = "Neutral"
0x7b3: Call2 0x792

0x7b4: Pop(1)
0x7b5: Push((int) 540545)
0x7b6: @@ SetMessage(Stack[-1])
0x7b7: Pop(1)
0x7b8: @@ ClearReplies()
0x7b9: Pop(0)
0x7ba: Push((int) 540546)
0x7bb: Push((int) -1)
0x7bc: Push((int) 42555)
0x7bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: Push((int) 540798)
0x7c0: Push((int) -1)
0x7c1: Push((int) 42847)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Return(); Pop(0)

0x7c5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7c6: PushEmpty(bool)
0x7c7: Call2 0xa13

0x7c8: Pop(0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7ca: @ lshStopAnimation()
0x7cb: Pop(0)
0x7cc: GOTO 0x7cf

0x7cd: @ StopAnimation()
0x7ce: Pop(0)
0x7cf: Return(); Pop(0)

0x7d0: GOTO 0x7a9

0x7d1: Return(); Pop(0)

0x7d2: Push(GlobalVars[1])
0x7d3: Stack[-1] = (bool) 1
0x7d4: GlobalVars[1] = Stack[-1]; Pop(1)
0x7d5: PushEmpty()
0x7d6: Call2 0x7e1

0x7d7: Pop(0)
0x7d8: Return(); Pop(0)

0x7d9: PushEmpty()
0x7da: Push("icot_viktor_NPC_Trigger")
0x7db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7dd: PushEmpty()
0x7de: Call2 0x808

0x7df: Pop(0)
0x7e0: Return(); Pop(0)

0x7e1: @ GetPosition(Stack[-1])
0x7e2: Pop(0)
0x7e3: @ GetDirection(Stack[-2])
0x7e4: Pop(0)
0x7e5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7e6: PushEmpty(bool)
0x7e7: Call2 0x869

0x7e8: Pop(0)
0x7e9: Pop(1); Push((bool) Stack[-1] == 0)
0x7ea: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7eb: PushEmpty()
0x7ec: Push(-0, 0); TaskCall(0)
0x7ed: Call2 0x0

0x7ee: Pop(-0, 0); TaskReturn
0x7ef: Pop(0)
0x7f0: PushEmpty()
0x7f1: Call2 0x7fd

0x7f2: Pop(0)
0x7f3: PushEmpty(string)
0x7f4: Stack[-1] = "Neutral"
0x7f5: Call2 0x94f

0x7f6: Pop(1)
0x7f7: @ lshWaitForAnimEnd()
0x7f8: Pop(0)
0x7f9: GOTO 0x7f3

0x7fa: @ Hold()
0x7fb: Pop(0)
0x7fc: Return(); Pop(0)

0x7fd: @ SetPosition(Stack[-1])
0x7fe: Pop(0)
0x7ff: @ SetDirection(Stack[-2])
0x800: Pop(0)
0x801: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x802: Push("all")
0x803: Push("stand")
0x804: Push((int) 0)
0x805: @ LockAnimation(Stack[-3], Stack[-2], Stack[-1])
0x806: Pop(3)
0x807: Return(); Pop(0)

0x808: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x809: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x80a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x80b: Push("all")
0x80c: Push("stand")
0x80d: @ PlayAnimation(Stack[-2], Stack[-1])
0x80e: Pop(2)
0x80f: @ WaitForAnimEnd()
0x810: Pop(0)
0x811: Return(); Pop(0)

0x812: PushEmpty()
0x813: Push(-0, 0); TaskCall(0)
0x814: Call2 0x0

0x815: Pop(-0, 0); TaskReturn
0x816: Pop(0)
0x817: PushEmpty()
0x818: Call2 0x7fd

0x819: Pop(0)
0x81a: Return(); Pop(0)

0x81b: PushEmpty(bool, bool)
0x81c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x81d: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x81e: @ IsOverrideActive(Stack[-1])
0x81f: Pop(0)
0x820: Pop(0); Push((bool) Stack[-1] == 0)
0x821: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x822: EventDisable(0)
0x823: PushEmpty(bool, object)
0x824: Stack[-1] = Stack[-5]
0x825: Call2 0x860

0x826: Pop(2)
0x827: EventEnable(0)
0x828: PushEmpty(object)
0x829: Stack[-1] = Stack[-4]
0x82a: Call2 0xad5

0x82b: Pop(1)
0x82c: Return(); Pop(2)

0x82d: PushEmpty(bool, bool)
0x82e: Push("HasProperty")
0x82f: Push((int) 2)
0x830: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x831: Pop(1); Push((bool) Stack[-1] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x833: Stack[-5] = (bool) 0
0x834: Return(); Pop(2)

0x835: @@ HasProperty(Stack[-3], Stack[-1])
0x836: Pop(0)
0x837: Stack[-5] = Stack[-1]
0x838: Return(); Pop(2)

0x839: PushEmpty(float, float)
0x83a: PushEmpty(bool, object, string)
0x83b: Stack[-2] = Stack[-10]
0x83c: Stack[-1] = Stack[-9]
0x83d: Call2 0x82d

0x83e: Pop(2)
0x83f: Pop(1); Push((bool) Stack[-1] == 0)
0x840: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x841: Stack[-8] = (bool) 0
0x842: Return(); Pop(2)

0x843: @@ GetProperty(Stack[-6], Stack[-1])
0x844: Pop(0)
0x845: PushEmpty(float, float, float, float)
0x846: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x847: Stack[-2] = Stack[-8]
0x848: Stack[-1] = Stack[-7]
0x849: Call2 0x994

0x84a: Pop(3)
0x84b: @@ SetProperty(Stack[-7], Stack[-1])
0x84c: Pop(1)
0x84d: Stack[-8] = (bool) 1
0x84e: Return(); Pop(2)

0x84f: PushEmpty(int, int)
0x850: @@ GetProperty(Stack[-4], Stack[-1])
0x851: Pop(0)
0x852: Pop(0); Push(Stack[-1] + Stack[-3]);
0x853: @@ SetProperty(Stack[-5], Stack[-1])
0x854: Pop(1)
0x855: Return(); Pop(2)

0x856: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x857: @ GetPosition(Stack[-3])
0x858: Pop(0)
0x859: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x85a: Push(CvectorIndex(Stack[-2], 0))
0x85b: Push(CvectorIndex(Stack[-3], 2))
0x85c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x85d: Pop(2)
0x85e: Stack[-8] = Stack[-1]
0x85f: Return(); Pop(6)

0x860: PushEmpty(cvector, cvector)
0x861: @@ GetPosition(Stack[-1])
0x862: Pop(0)
0x863: PushEmpty(bool, cvector)
0x864: Stack[-1] = Stack[-3]
0x865: Call2 0x856

0x866: Stack[-6] = Stack[-2]
0x867: Pop(2)
0x868: Return(); Pop(2)

0x869: PushEmpty(bool, bool)
0x86a: @ IsLoaded(Stack[-1])
0x86b: Pop(0)
0x86c: Stack[-3] = Stack[-1]
0x86d: Return(); Pop(2)

0x86e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x86f: @@ GetPosition(Stack[-8])
0x870: Pop(0)
0x871: @@ GetEyesHeight(Stack[-9])
0x872: Pop(0)
0x873: Push(CvectorIndex(Stack[-8], 1))
0x874: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x875: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x876: @ GetPosition(Stack[-7])
0x877: Pop(0)
0x878: @ GetEyesHeight(Stack[-9])
0x879: Pop(0)
0x87a: Push(CvectorIndex(Stack[-7], 1))
0x87b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x87c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x87d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x87e: Push(CvectorIndex(Stack[-6], 1))
0x87f: Stack[-1] = (int) 0
0x880: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x881: Pop(0); Push(Stack[-6] | Stack[-6]);
0x882: Pop(1); Push(Sqrt(Stack[-1]))
0x883: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x884: Stack[-5] = -Stack[-6]; Pop(0);
0x885: Pop(0); Push(Stack[-6] * Stack[-19]);
0x886: PushEmpty(cvector, cvector)
0x887: Push(CVector(0.0, 1.0, 0.0))
0x888: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x889: Call2 0x98a

0x88a: Pop(1)
0x88b: Push((int) 25)
0x88c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x88d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x88e: Push(CVector(0.0, 10.0, 0.0))
0x88f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x890: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x891: @ IsOverrideActive(Stack[-2])
0x892: Pop(0)
0x893: Push(Stack[-2])
0x894: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x895: Stack[-21] = (bool) 0
0x896: Return(); Pop(18)

0x897: @ StopWorld()
0x898: Pop(0)
0x899: Push((bool) 1)
0x89a: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x89b: Pop(1)
0x89c: Push(CvectorIndex(Stack[-4], 0))
0x89d: Push(CvectorIndex(Stack[-5], 2))
0x89e: @ Rotate(Stack[-2], Stack[-1])
0x89f: Pop(2)
0x8a0: PushEmpty(bool)
0x8a1: Call2 0xa13

0x8a2: Pop(0)
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x8a4: GOTO 0x8ad

0x8a5: Push("head")
0x8a6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8a7: Pop(1)
0x8a8: Push(Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8aa: Push("head")
0x8ab: @ LookAsyncCamera(Stack[-1])
0x8ac: Pop(1)
0x8ad: @ CameraWaitForPlayFinish()
0x8ae: Pop(0)
0x8af: @ ResumeWorld()
0x8b0: Pop(0)
0x8b1: Stack[-21] = (bool) 1
0x8b2: Return(); Pop(18)

0x8b3: PushEmpty(bool, bool)
0x8b4: Push((bool) 1)
0x8b5: @ CameraSwitchToNormal(Stack[-1])
0x8b6: Pop(1)
0x8b7: PushEmpty(bool)
0x8b8: Call2 0xa13

0x8b9: Pop(0)
0x8ba: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8bb: GOTO 0x8c4

0x8bc: Push("head")
0x8bd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8be: Pop(1)
0x8bf: Push(Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c1: Push("head")
0x8c2: @ UnlookAsync(Stack[-1])
0x8c3: Pop(1)
0x8c4: Return(); Pop(2)

0x8c5: PushEmpty(int, int, int, int)
0x8c6: Push("voice_common")
0x8c7: @ GetVariable(Stack[-1], Stack[-3])
0x8c8: Pop(1)
0x8c9: Push(Stack[-2])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8cb: PushEmpty(bool, object)
0x8cc: Stack[-1] = Stack[-7]
0x8cd: Call2 0x8ff

0x8ce: Pop(1)
0x8cf: Pop(1); Push((bool) Stack[-1] == 0)
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d1: PushEmpty(bool, object)
0x8d2: Stack[-1] = Stack[-7]
0x8d3: Call2 0x924

0x8d4: Pop(1)
0x8d5: Pop(1); Push((bool) Stack[-1] == 0)
0x8d6: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d7: Stack[-6] = (bool) 0
0x8d8: Return(); Pop(4)

0x8d9: Push((int) 2)
0x8da: @ irand(Stack[-2], Stack[-1])
0x8db: Pop(1)
0x8dc: Push(Stack[-1])
0x8dd: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8de: Push("voice_common")
0x8df: Push((int) 1)
0x8e0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x8e1: Push((int) 3)
0x8e2: Pop(2); Push(Stack[-2] % Stack[-1]);
0x8e3: @ SetVariable(Stack[-2], Stack[-1])
0x8e4: Pop(2)
0x8e5: GOTO 0x8ea

0x8e6: Push("voice_common")
0x8e7: Push((int) 0)
0x8e8: @ SetVariable(Stack[-2], Stack[-1])
0x8e9: Pop(2)
0x8ea: GOTO 0x8fd

0x8eb: PushEmpty(bool, object)
0x8ec: Stack[-1] = Stack[-7]
0x8ed: Call2 0x924

0x8ee: Pop(1)
0x8ef: Pop(1); Push((bool) Stack[-1] == 0)
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f1: PushEmpty(bool, object)
0x8f2: Stack[-1] = Stack[-7]
0x8f3: Call2 0x8ff

0x8f4: Pop(1)
0x8f5: Pop(1); Push((bool) Stack[-1] == 0)
0x8f6: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f7: Stack[-6] = (bool) 0
0x8f8: Return(); Pop(4)

0x8f9: Push("voice_common")
0x8fa: Push((int) 1)
0x8fb: @ SetVariable(Stack[-2], Stack[-1])
0x8fc: Pop(2)
0x8fd: Stack[-6] = (bool) 1
0x8fe: Return(); Pop(4)

0x8ff: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x900: Stack[-5] = "c"
0x901: Stack[-4] = (int) 0
0x902: Push((int) 1)
0x903: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x904: Push((int) 1)
0x905: Pop(1); Push(Stack[-5] + Stack[-1]);
0x906: Pop(1); Push(Stack[-6] + Stack[-1]);
0x907: @@ HasProperty(Stack[-1], Stack[-4])
0x908: Pop(1)
0x909: Pop(0); Push((bool) Stack[-3] == 0)
0x90a: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x90b: GOTO 0x90f

0x90c: Push((int) 1)
0x90d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x90e: GOTO 0x902

0x90f: Pop(0); Push((bool) Stack[-4] == 0)
0x910: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x911: Stack[-12] = (bool) 0
0x912: Return(); Pop(10)

0x913: Stack[-2] = (int) 0
0x914: Push((int) 1)
0x915: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x917: @ irand(Stack[-2], Stack[-4])
0x918: Pop(0)
0x919: Push((int) 1)
0x91a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x91b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x91c: @@ GetProperty(Stack[-1], Stack[-2])
0x91d: Pop(1)
0x91e: PushEmpty(bool, string)
0x91f: Stack[-1] = Stack[-3]
0x920: Call2 0x96e

0x921: Stack[-14] = Stack[-2]
0x922: Pop(2)
0x923: Return(); Pop(10)

0x924: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x925: Push("d")
0x926: PushEmpty(int)
0x927: Call2 0x9fc

0x928: Pop(0)
0x929: Pop(2); Push(Stack[-2] + Stack[-1]);
0x92a: Push("m")
0x92b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x92c: Stack[-4] = (int) 0
0x92d: Push((int) 1)
0x92e: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x92f: Push((int) 1)
0x930: Pop(1); Push(Stack[-5] + Stack[-1]);
0x931: Pop(1); Push(Stack[-6] + Stack[-1]);
0x932: @@ HasProperty(Stack[-1], Stack[-4])
0x933: Pop(1)
0x934: Pop(0); Push((bool) Stack[-3] == 0)
0x935: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x936: GOTO 0x93a

0x937: Push((int) 1)
0x938: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x939: GOTO 0x92d

0x93a: Pop(0); Push((bool) Stack[-4] == 0)
0x93b: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x93c: Stack[-12] = (bool) 0
0x93d: Return(); Pop(10)

0x93e: Stack[-2] = (int) 0
0x93f: Push((int) 1)
0x940: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x941: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x942: @ irand(Stack[-2], Stack[-4])
0x943: Pop(0)
0x944: Push((int) 1)
0x945: Pop(1); Push(Stack[-3] + Stack[-1]);
0x946: Pop(1); Push(Stack[-6] + Stack[-1]);
0x947: @@ GetProperty(Stack[-1], Stack[-2])
0x948: Pop(1)
0x949: PushEmpty(bool, string)
0x94a: Stack[-1] = Stack[-3]
0x94b: Call2 0x96e

0x94c: Stack[-14] = Stack[-2]
0x94d: Pop(2)
0x94e: Return(); Pop(10)

0x94f: PushEmpty(bool, float, float, bool, float, float)
0x950: @ lshHasAnimation(Stack[-3], Stack[-7])
0x951: Pop(0)
0x952: Push(Stack[-3])
0x953: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x954: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x955: Pop(0)
0x956: Push((bool) 0)
0x957: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x958: Pop(1)
0x959: GOTO 0x95e

0x95a: Push("Can't find lsh animation : ")
0x95b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x95c: @ Trace(Stack[-1])
0x95d: Pop(1)
0x95e: Return(); Pop(6)

0x95f: PushEmpty(bool, float, float, bool, float, float)
0x960: @ lshHasAnimation(Stack[-3], Stack[-8])
0x961: Pop(0)
0x962: Push(Stack[-3])
0x963: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x964: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x965: Pop(0)
0x966: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x967: Pop(0)
0x968: GOTO 0x96d

0x969: Push("Can't find lsh animation : ")
0x96a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x96b: @ Trace(Stack[-1])
0x96c: Pop(1)
0x96d: Return(); Pop(6)

0x96e: PushEmpty(bool, bool)
0x96f: PushEmpty(bool)
0x970: Call2 0xa13

0x971: Pop(0)
0x972: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x973: @ lshHasSpeech(Stack[-1], Stack[-3])
0x974: Pop(0)
0x975: Push(Stack[-1])
0x976: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x977: @ lshPlaySpeech(Stack[-3])
0x978: Pop(0)
0x979: Stack[-4] = (bool) 1
0x97a: Return(); Pop(2)

0x97b: Stack[-4] = (bool) 0
0x97c: Return(); Pop(2)

0x97d: PushEmpty(bool)
0x97e: Call2 0xa13

0x97f: Pop(0)
0x980: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x981: @ lshStopSpeech()
0x982: Pop(0)
0x983: Return(); Pop(0)

0x984: PushEmpty(object, object)
0x985: @ self(Stack[-1])
0x986: Pop(0)
0x987: Stack[-3] = Stack[-1]
0x988: Return(); Pop(2)

0x989: Stack[-1] = 0
0x98a: PushEmpty(float, float)
0x98b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x98c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x98d: Push((float)0.0)
0x98e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x98f: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x990: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x991: Return(); Pop(2)

0x992: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x993: Return(); Pop(2)

0x994: PushEmpty()
0x995: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x996: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x997: Stack[-4] = Stack[-2]
0x998: Return(); Pop(0)

0x999: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x99a: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x99b: Stack[-4] = Stack[-1]
0x99c: Return(); Pop(0)

0x99d: Stack[-4] = Stack[-3]
0x99e: Return(); Pop(0)

0x99f: PushEmpty(int, int)
0x9a0: @ GetVariable(Stack[-3], Stack[-1])
0x9a1: Pop(0)
0x9a2: Stack[-4] = Stack[-1]
0x9a3: Return(); Pop(2)

0x9a4: PushEmpty(object, object)
0x9a5: @ CreateIntVector(Stack[-1])
0x9a6: Pop(0)
0x9a7: @@ add(Stack[-4])
0x9a8: Pop(0)
0x9a9: @@ add(Stack[-3])
0x9aa: Pop(0)
0x9ab: Push((int) 3)
0x9ac: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x9ad: Pop(1)
0x9ae: Return(); Pop(2)

0x9af: Stack[-1] = 0
0x9b0: PushEmpty(int, int)
0x9b1: PushEmpty(object, string, int)
0x9b2: Stack[-3] = Stack[-7]
0x9b3: Stack[-2] = "money"
0x9b4: Stack[-1] = Stack[-6]
0x9b5: Call2 0x84f

0x9b6: Pop(3)
0x9b7: Push((int) 0)
0x9b8: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x9b9: IF (Stack[-1] == 0) GOTO 0x9c2; Pop(1)

0x9ba: Push("Money")
0x9bb: @ GetInvItemByName(Stack[-2], Stack[-1])
0x9bc: Pop(1)
0x9bd: PushEmpty(int, int)
0x9be: Stack[-2] = Stack[-3]
0x9bf: Stack[-1] = Stack[-5]
0x9c0: Call2 0x9a4

0x9c1: Pop(2)
0x9c2: Return(); Pop(2)

0x9c3: PushEmpty()
0x9c4: Pop(0); Push((bool) Stack[-2] == 0)
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c6: Stack[-3] = (bool) 0
0x9c7: Return(); Pop(0)

0x9c8: Push((int) 0)
0x9c9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9cb: Push((int) 8)
0x9cc: @ SendWorldWndMessage(Stack[-1])
0x9cd: Pop(1)
0x9ce: GOTO 0x9d8

0x9cf: Push((int) 0)
0x9d0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9d2: Push((int) 9)
0x9d3: @ SendWorldWndMessage(Stack[-1])
0x9d4: Pop(1)
0x9d5: GOTO 0x9d8

0x9d6: Stack[-3] = (bool) 0
0x9d7: Return(); Pop(0)

0x9d8: PushEmpty(float)
0x9d9: Stack[-1] = Stack[-2]
0x9da: Call2 0x9e6

0x9db: Pop(1)
0x9dc: PushEmpty(bool, object, string, float, float, float)
0x9dd: Stack[-5] = Stack[-8]
0x9de: Stack[-4] = "reputation"
0x9df: Stack[-3] = Stack[-7]
0x9e0: Stack[-2] = (int) 0
0x9e1: Stack[-1] = (int) 1
0x9e2: Call2 0x839

0x9e3: Pop(6)
0x9e4: Stack[-3] = (bool) 1
0x9e5: Return(); Pop(0)

0x9e6: PushEmpty(object, object)
0x9e7: @ CreateFloatVector(Stack[-1])
0x9e8: Pop(0)
0x9e9: @@ add(Stack[-3])
0x9ea: Pop(0)
0x9eb: Push((int) 16)
0x9ec: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x9ed: Pop(1)
0x9ee: Return(); Pop(2)

0x9ef: Stack[-1] = 0
0x9f0: PushEmpty(object, object)
0x9f1: @ FindActor(Stack[-1], Stack[-4])
0x9f2: Pop(0)
0x9f3: Pop(0); Push((bool) Stack[-1] == 0)
0x9f4: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f5: Stack[-5] = (bool) 0
0x9f6: Return(); Pop(2)

0x9f7: @ Trigger(Stack[-1], Stack[-3])
0x9f8: Pop(0)
0x9f9: Stack[-5] = (bool) 1
0x9fa: Return(); Pop(2)

0x9fb: Stack[-1] = 0
0x9fc: PushEmpty(float, float)
0x9fd: @ GetGameTime(Stack[-1])
0x9fe: Pop(0)
0x9ff: Push((int) 1)
0xa00: PushEmpty(int)
0xa01: Push((int) 24)
0xa02: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa03: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa04: Return(); Pop(2)

0xa05: PushEmpty()
0xa06: PushEmpty(int)
0xa07: Call2 0x9fc

0xa08: Pop(0)
0xa09: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa0a: Return(); Pop(0)

0xa0b: Stack[-1] = (int) 515554
0xa0c: Return(); Pop(0)

0xa0d: Stack[-1] = (int) 502879
0xa0e: Return(); Pop(0)

0xa0f: Stack[-1] = "ui/NPC_Viktor.png"
0xa10: Return(); Pop(0)

0xa11: Stack[-1] = "ui/NPC_Viktor_b.png"
0xa12: Return(); Pop(0)

0xa13: Stack[-1] = (bool) 1
0xa14: Return(); Pop(0)

0xa15: PushEmpty()
0xa16: PushEmpty(bool, object, float)
0xa17: Stack[-2] = Stack[-5]
0xa18: Stack[-1] = (float) 0.05
0xa19: Call2 0x9c3

0xa1a: Pop(3)
0xa1b: Return(); Pop(0)

0xa1c: PushEmpty()
0xa1d: Push("ook3Viktor1")
0xa1e: Push((int) 1)
0xa1f: @ SetVariable(Stack[-2], Stack[-1])
0xa20: Pop(2)
0xa21: Return(); Pop(0)

0xa22: PushEmpty()
0xa23: Push("money2000 is given")
0xa24: @ Trace(Stack[-1])
0xa25: Pop(1)
0xa26: PushEmpty(object, int)
0xa27: Stack[-2] = Stack[-4]
0xa28: Stack[-1] = (int) 2000
0xa29: Call2 0x9b0

0xa2a: Pop(2)
0xa2b: Return(); Pop(0)

0xa2c: PushEmpty()
0xa2d: Push("ook10Viktor1")
0xa2e: Push((int) 1)
0xa2f: @ SetVariable(Stack[-2], Stack[-1])
0xa30: Pop(2)
0xa31: Return(); Pop(0)

0xa32: PushEmpty()
0xa33: Push("k9q01")
0xa34: Push((int) 5)
0xa35: @ SetVariable(Stack[-2], Stack[-1])
0xa36: Pop(2)
0xa37: PushEmpty()
0xa38: Call2 0xa8e

0xa39: Pop(0)
0xa3a: PushEmpty(bool, string, string)
0xa3b: Stack[-2] = "quest_k9_01"
0xa3c: Stack[-1] = "init_mnogogrannik"
0xa3d: Call2 0x9f0

0xa3e: Pop(3)
0xa3f: Return(); Pop(0)

0xa40: PushEmpty()
0xa41: Push("playsound")
0xa42: Push("givemoney")
0xa43: @ TriggerWorld(Stack[-2], Stack[-1])
0xa44: Pop(2)
0xa45: Return(); Pop(0)

0xa46: PushEmpty()
0xa47: PushEmpty(int, string)
0xa48: Stack[-1] = "k3q03"
0xa49: Call2 0x99f

0xa4a: Pop(1)
0xa4b: Push((int) 1000)
0xa4c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa4d: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa4e: Stack[-2] = (bool) 1
0xa4f: Return(); Pop(0)

0xa50: Stack[-2] = (bool) 0
0xa51: Return(); Pop(0)

0xa52: PushEmpty()
0xa53: PushEmpty(int, string)
0xa54: Stack[-1] = "ook3Viktor1"
0xa55: Call2 0x99f

0xa56: Pop(1)
0xa57: Push((int) 0)
0xa58: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa59: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa5a: Stack[-2] = (bool) 1
0xa5b: Return(); Pop(0)

0xa5c: Stack[-2] = (bool) 0
0xa5d: Return(); Pop(0)

0xa5e: PushEmpty()
0xa5f: PushEmpty(int, string)
0xa60: Stack[-1] = "k10q01"
0xa61: Call2 0x99f

0xa62: Pop(1)
0xa63: Push((int) 1)
0xa64: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa65: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa66: Stack[-2] = (bool) 1
0xa67: Return(); Pop(0)

0xa68: Stack[-2] = (bool) 0
0xa69: Return(); Pop(0)

0xa6a: PushEmpty()
0xa6b: PushEmpty(int, string)
0xa6c: Stack[-1] = "ook10Viktor1"
0xa6d: Call2 0x99f

0xa6e: Pop(1)
0xa6f: Push((int) 0)
0xa70: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa71: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa72: Stack[-2] = (bool) 1
0xa73: Return(); Pop(0)

0xa74: Stack[-2] = (bool) 0
0xa75: Return(); Pop(0)

0xa76: PushEmpty()
0xa77: PushEmpty(int, string)
0xa78: Stack[-1] = "k10q01"
0xa79: Call2 0x99f

0xa7a: Pop(1)
0xa7b: Push((int) 2)
0xa7c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa7d: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa7e: Stack[-2] = (bool) 1
0xa7f: Return(); Pop(0)

0xa80: Stack[-2] = (bool) 0
0xa81: Return(); Pop(0)

0xa82: PushEmpty()
0xa83: PushEmpty(int, string)
0xa84: Stack[-1] = "k9q01"
0xa85: Call2 0x99f

0xa86: Pop(1)
0xa87: Push((int) 4)
0xa88: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa89: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa8a: Stack[-2] = (bool) 1
0xa8b: Return(); Pop(0)

0xa8c: Stack[-2] = (bool) 0
0xa8d: Return(); Pop(0)

0xa8e: PushEmpty(object, object)
0xa8f: Push((int) 522)
0xa90: Push((int) 1)
0xa91: Push((int) 529814)
0xa92: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa93: Pop(3)
0xa94: PushEmpty(bool, object, int)
0xa95: Stack[-2] = Stack[-4]
0xa96: Stack[-1] = (int) 517
0xa97: Call2 0xaa8

0xa98: Pop(3)
0xa99: Return(); Pop(2)

0xa9a: Stack[-1] = 0
0xa9b: PushEmpty(object, object)
0xa9c: @ GetDiaryRoot(Stack[-1])
0xa9d: Pop(0)
0xa9e: Pop(0); Push((bool) Stack[-1] == 0)
0xa9f: IF (Stack[-1] == 0) GOTO 0xaa5; Pop(1)

0xaa0: Push("Can't retrieve diary root")
0xaa1: @ Trace(Stack[-1])
0xaa2: Pop(1)
0xaa3: Stack[-3] = (bool) 0
0xaa4: Return(); Pop(2)

0xaa5: Stack[-3] = Stack[-1]
0xaa6: Return(); Pop(2)

0xaa7: Stack[-1] = 0
0xaa8: PushEmpty(object, object, int, object, object, int)
0xaa9: PushEmpty(object)
0xaaa: Call2 0xa9b

0xaab: Stack[-4] = Stack[-1]
0xaac: Pop(1)
0xaad: @@ Find(Stack[-7], Stack[-2])
0xaae: Pop(0)
0xaaf: Pop(0); Push((bool) Stack[-2] == 0)
0xab0: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab1: Push("Can't find diary parent with id: ")
0xab2: Pop(1); Push(Stack[-1] + Stack[-8]);
0xab3: @ Trace(Stack[-1])
0xab4: Pop(1)
0xab5: Stack[-9] = (bool) 0
0xab6: Return(); Pop(6)

0xab7: @@ AddChild(Stack[-8])
0xab8: Pop(0)
0xab9: Push((int) 7)
0xaba: @ SendWorldWndMessage(Stack[-1])
0xabb: Pop(1)
0xabc: @@ GetCategory(Stack[-1])
0xabd: Pop(0)
0xabe: @ SetDiarySection(Stack[-1])
0xabf: Pop(0)
0xac0: Stack[-9] = (bool) 0
0xac1: Return(); Pop(6)

0xac2: Stack[-2] = 0
0xac3: Stack[-3] = 0
0xac4: PushEmpty(int, int)
0xac5: Push("branch")
0xac6: @ GetVariable(Stack[-1], Stack[-2])
0xac7: Pop(1)
0xac8: Push((int) 0)
0xac9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaca: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0xacb: Stack[-3] = (int) 1
0xacc: Return(); Pop(2)

0xacd: GOTO 0xad3

0xace: Push((int) 1)
0xacf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xad1: Stack[-3] = (int) 2
0xad2: Return(); Pop(2)

0xad3: Stack[-3] = (int) 3
0xad4: Return(); Pop(2)

0xad5: PushEmpty()
0xad6: Push(GlobalVars[1])
0xad7: Pop(1); Push((bool) Stack[-1] == 0)
0xad8: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xad9: PushEmpty(int, object)
0xada: Stack[-1] = Stack[-3]
0xadb: Push(-2, 1); TaskCall(3)
0xadc: Call2 0x1ce

0xadd: Pop(-2, 1); TaskReturn
0xade: Pop(2)
0xadf: Push(GlobalVars[1])
0xae0: Stack[-1] = (bool) 1
0xae1: GlobalVars[1] = Stack[-1]; Pop(1)
0xae2: PushEmpty(bool, int)
0xae3: Stack[-1] = (int) 3
0xae4: Call2 0xa05

0xae5: Pop(1)
0xae6: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xae7: PushEmpty(int, object)
0xae8: Stack[-1] = Stack[-3]
0xae9: Push(-2, 1); TaskCall(1)
0xaea: Call2 0xd

0xaeb: Pop(-2, 1); TaskReturn
0xaec: Pop(2)
0xaed: Return(); Pop(0)

0xaee: PushEmpty(bool, int)
0xaef: Stack[-1] = (int) 9
0xaf0: Call2 0xa05

0xaf1: Pop(1)
0xaf2: IF (Stack[-1] == 0) GOTO 0xafa; Pop(1)

0xaf3: PushEmpty(int, object)
0xaf4: Stack[-1] = Stack[-3]
0xaf5: Push(-2, 1); TaskCall(7)
0xaf6: Call2 0x490

0xaf7: Pop(-2, 1); TaskReturn
0xaf8: Pop(2)
0xaf9: Return(); Pop(0)

0xafa: PushEmpty(bool, int)
0xafb: Stack[-1] = (int) 10
0xafc: Call2 0xa05

0xafd: Pop(1)
0xafe: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xaff: PushEmpty(int, object)
0xb00: Stack[-1] = Stack[-3]
0xb01: Push(-2, 1); TaskCall(5)
0xb02: Call2 0x2f5

0xb03: Pop(-2, 1); TaskReturn
0xb04: Pop(2)
0xb05: Return(); Pop(0)

0xb06: PushEmpty(bool, int)
0xb07: Stack[-1] = (int) 12
0xb08: Call2 0xa05

0xb09: Pop(1)
0xb0a: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xb0b: PushEmpty(int, object)
0xb0c: Stack[-1] = Stack[-3]
0xb0d: Push(-2, 1); TaskCall(9)
0xb0e: Call2 0x604

0xb0f: Pop(-2, 1); TaskReturn
0xb10: Pop(2)
0xb11: Return(); Pop(0)

0xb12: PushEmpty(int, object)
0xb13: Stack[-1] = Stack[-3]
0xb14: Push(-2, 1); TaskCall(11)
0xb15: Call2 0x707

0xb16: Pop(-2, 1); TaskReturn
0xb17: Pop(2)
0xb18: Return(); Pop(0)

