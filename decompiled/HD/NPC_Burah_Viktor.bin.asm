GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	Anger
	Confusion
	Fear
	Surprise
	icot_viktor_NPC_Trigger
	stand
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	ui/NPC_Viktor.png
	ui/NPC_Viktor_b.png
	b7q01
	b7q01DankoGotoSobor
	pt_map_aglaja
	AddMark
	quest_b7_01
	place_aglaja
	oob6Viktor1
	b6q03ViktorGotoMaria
	pt_map_maria
	cot_maria@door1
	b6ViktorVisit
	playsound
	mapmark
	b6q03NinaTalk
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
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
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x64f
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1bb Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x395 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x527 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x625 Vars = (int, int)
	GTASK_11 Vars = (bool, cvector, cvector) Params = 0
		EVENT_26 Op = 0x656 Vars = (string)
		EVENT_6 Op = 0x68f Vars = ()
		EVENT_0 Op = 0x698 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x6bd

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
0x12: Call2 0x6c2

0x13: Pop(2)
0x14: Pop(1); Push((bool) Stack[-1] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x16: Stack[-10] = (int) -2
0x17: Return(); Pop(8)

0x18: @ CreateDialog(Stack[-4])
0x19: Pop(0)
0x1a: PushEmpty(int)
0x1b: Call2 0x820

0x1c: Pop(0)
0x1d: @@ SetNPCName(Stack[-1])
0x1e: Pop(1)
0x1f: PushEmpty(int)
0x20: Call2 0x81e

0x21: Pop(0)
0x22: @@ SetNPCDescription(Stack[-1])
0x23: Pop(1)
0x24: PushEmpty(string)
0x25: Call2 0x822

0x26: Pop(0)
0x27: @@ SetPhoto(Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(string)
0x2a: Call2 0x824

0x2b: Pop(0)
0x2c: @@ SetPhoto2(Stack[-1])
0x2d: Pop(1)
0x2e: PushEmpty(int)
0x2f: Call2 0x8d8

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
0x3e: Call2 0x7d8

0x3f: Stack[-2] = Stack[-1]
0x40: Pop(1)
0x41: Call2 0x719

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
0x55: Call2 0x707

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
0x68: Push((int) 518051)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 518052)
0x6e: Push((int) 29827)
0x6f: Push((int) 19185)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 528440)
0x73: Push((int) -1)
0x74: Push((int) 29826)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0x826

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x7a3

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
0x9a: Call2 0x826

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
0xaa: Call2 0x7b3

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x7d1

0xb3: Pop(0)
0xb4: Push((int) 19184)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral"
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 518051)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: Push((int) 518052)
0xc1: Push((int) 29827)
0xc2: Push((int) 19185)
0xc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4: Pop(3)
0xc5: Push((int) 528440)
0xc6: Push((int) -1)
0xc7: Push((int) 29826)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 29827)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 528441)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 528442)
0xd8: Push((int) 29830)
0xd9: Push((int) 29828)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 528443)
0xdd: Push((int) -1)
0xde: Push((int) 29829)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 29830)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x98

0xe8: Pop(1)
0xe9: Push((int) 528444)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 528445)
0xef: Push((int) -1)
0xf0: Push((int) 29831)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 528446)
0xf4: Push((int) -1)
0xf5: Push((int) 29832)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfa: PushEmpty(bool)
0xfb: Call2 0x826

0xfc: Pop(0)
0xfd: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfe: @ lshStopAnimation()
0xff: Pop(0)
0x100: GOTO 0x103

0x101: @ StopAnimation()
0x102: Pop(0)
0x103: Return(); Pop(0)

0x104: GOTO 0xaf

0x105: Return(); Pop(0)

0x106: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x107: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x108: PushEmpty(bool, object, float)
0x109: Stack[-2] = Stack[-12]
0x10a: Stack[-1] = (float) 70.0
0x10b: Call2 0x6c2

0x10c: Pop(2)
0x10d: Pop(1); Push((bool) Stack[-1] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10f: Stack[-10] = (int) -2
0x110: Return(); Pop(8)

0x111: @ CreateDialog(Stack[-4])
0x112: Pop(0)
0x113: PushEmpty(int)
0x114: Call2 0x820

0x115: Pop(0)
0x116: @@ SetNPCName(Stack[-1])
0x117: Pop(1)
0x118: PushEmpty(int)
0x119: Call2 0x81e

0x11a: Pop(0)
0x11b: @@ SetNPCDescription(Stack[-1])
0x11c: Pop(1)
0x11d: PushEmpty(string)
0x11e: Call2 0x822

0x11f: Pop(0)
0x120: @@ SetPhoto(Stack[-1])
0x121: Pop(1)
0x122: PushEmpty(string)
0x123: Call2 0x824

0x124: Pop(0)
0x125: @@ SetPhoto2(Stack[-1])
0x126: Pop(1)
0x127: PushEmpty(int)
0x128: Call2 0x8d8

0x129: Pop(0)
0x12a: @@ SetPlayerName(Stack[-1])
0x12b: Pop(1)
0x12c: Stack[-2] = (int) -1
0x12d: @ IsOverrideActive(Stack[-3])
0x12e: Pop(0)
0x12f: Push(Stack[-3])
0x130: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x131: Stack[-10] = (int) -2
0x132: Return(); Pop(8)

0x133: @ DoDialog(Stack[-4])
0x134: Pop(0)
0x135: PushEmpty(bool, object)
0x136: PushEmpty(object)
0x137: Call2 0x7d8

0x138: Stack[-2] = Stack[-1]
0x139: Pop(1)
0x13a: Call2 0x719

0x13b: Pop(2)
0x13c: PushEmpty(object, object)
0x13d: Stack[-2] = Stack[-11]
0x13e: Stack[-1] = Stack[-6]
0x13f: Push(-2, 4); TaskCall(4)
0x140: Call2 0x157

0x141: Pop(-2, 4); TaskReturn
0x142: Pop(2)
0x143: @@ IsDialogEnd(Stack[-1])
0x144: Pop(0)
0x145: Pop(0); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: @ sync()
0x148: Pop(0)
0x149: @@ IsDialogEnd(Stack[-1])
0x14a: Pop(0)
0x14b: GOTO 0x145

0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-10]
0x14e: Call2 0x707

0x14f: Pop(1)
0x150: @ StopDialog(Stack[-4])
0x151: Pop(0)
0x152: @@ GetReturnValue(Stack[-2])
0x153: Pop(0)
0x154: Stack[-10] = Stack[-2]
0x155: Return(); Pop(8)

0x156: Stack[-4] = 0
0x157: PushEmpty()
0x158: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x159: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x15a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x15b: Push((int) 1)
0x15c: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x15d: PushEmpty(bool, object)
0x15e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Call2 0x885

0x160: Pop(1)
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Anger"
0x164: Call2 0x1a5

0x165: Pop(1)
0x166: Push((int) 521037)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 528490)
0x16c: Push((int) 29880)
0x16d: Push((int) 29879)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 528510)
0x171: Push((int) 29882)
0x172: Push((int) 29899)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: GOTO 0x187

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral"
0x178: Call2 0x1a5

0x179: Pop(1)
0x17a: Push((int) 521039)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 521040)
0x180: Push((int) -1)
0x181: Push((int) 22236)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: GOTO 0x187

0x185: Return(); Pop(0)

0x186: GOTO 0x15b

0x187: PushEmpty(bool)
0x188: Call2 0x826

0x189: Pop(0)
0x18a: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18b: @ lshWaitForAnimEnd()
0x18c: Pop(0)
0x18d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: GOTO 0x195

0x190: PushEmpty(string)
0x191: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x192: Call2 0x7a3

0x193: Pop(1)
0x194: GOTO 0x18b

0x195: GOTO 0x1a4

0x196: Push("all")
0x197: Push("idle")
0x198: @ PlayAnimation(Stack[-2], Stack[-1])
0x199: Pop(2)
0x19a: @ WaitForAnimEnd()
0x19b: Pop(0)
0x19c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: GOTO 0x1a4

0x19f: Push("all")
0x1a0: Push("idle")
0x1a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: GOTO 0x19a

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: PushEmpty(bool)
0x1a7: Call2 0x826

0x1a8: Pop(0)
0x1a9: Pop(1); Push((bool) Stack[-1] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: Return(); Pop(0)

0x1ac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Return(); Pop(0)

0x1af: PushEmpty(string, bool)
0x1b0: Stack[-2] = Stack[-3]
0x1b1: Push("")
0x1b2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b4: Stack[-1] = (bool) 0
0x1b5: GOTO 0x1b7

0x1b6: Stack[-1] = (bool) 1
0x1b7: Call2 0x7b3

0x1b8: Pop(2)
0x1b9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty()
0x1bc: Push((int) 1)
0x1bd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x1be: PushEmpty()
0x1bf: Call2 0x7d1

0x1c0: Pop(0)
0x1c1: Push((int) 22234)
0x1c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c4: PushEmpty(object, object)
0x1c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c7: Call2 0x828

0x1c8: Pop(2)
0x1c9: Push((int) 22233)
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1cc: PushEmpty(bool, object)
0x1cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Call2 0x885

0x1cf: Pop(1)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Anger"
0x1d3: Call2 0x1a5

0x1d4: Pop(1)
0x1d5: Push((int) 521037)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: Push((int) 528490)
0x1db: Push((int) 29880)
0x1dc: Push((int) 29879)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Push((int) 528510)
0x1e0: Push((int) 29882)
0x1e1: Push((int) 29899)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral"
0x1e7: Call2 0x1a5

0x1e8: Pop(1)
0x1e9: Push((int) 521039)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 521040)
0x1ef: Push((int) -1)
0x1f0: Push((int) 22236)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 29880)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Anger"
0x1f9: Call2 0x1a5

0x1fa: Pop(1)
0x1fb: Push((int) 528491)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 528492)
0x201: Push((int) 29882)
0x202: Push((int) 29881)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 29882)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Confusion"
0x20b: Call2 0x1a5

0x20c: Pop(1)
0x20d: Push((int) 528493)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 528494)
0x213: Push((int) 29884)
0x214: Push((int) 29883)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Push((int) 528511)
0x218: Push((int) 29902)
0x219: Push((int) 29901)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 29902)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Fear"
0x222: Call2 0x1a5

0x223: Pop(1)
0x224: Push((int) 528512)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 528513)
0x22a: Push((int) 29904)
0x22b: Push((int) 29903)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Push((int) 29904)
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Fear"
0x234: Call2 0x1a5

0x235: Pop(1)
0x236: Push((int) 528514)
0x237: @@ SetMessage(Stack[-1])
0x238: Pop(1)
0x239: @@ ClearReplies()
0x23a: Pop(0)
0x23b: Push((int) 528515)
0x23c: Push((int) 29886)
0x23d: Push((int) 29905)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Return(); Pop(0)

0x241: Push((int) 29884)
0x242: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x244: PushEmpty(string)
0x245: Stack[-1] = "Confusion"
0x246: Call2 0x1a5

0x247: Pop(1)
0x248: Push((int) 528495)
0x249: @@ SetMessage(Stack[-1])
0x24a: Pop(1)
0x24b: @@ ClearReplies()
0x24c: Pop(0)
0x24d: Push((int) 528496)
0x24e: Push((int) 29886)
0x24f: Push((int) 29885)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: Return(); Pop(0)

0x253: Push((int) 29886)
0x254: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x256: PushEmpty(string)
0x257: Stack[-1] = "Fear"
0x258: Call2 0x1a5

0x259: Pop(1)
0x25a: Push((int) 528497)
0x25b: @@ SetMessage(Stack[-1])
0x25c: Pop(1)
0x25d: @@ ClearReplies()
0x25e: Pop(0)
0x25f: Push((int) 528498)
0x260: Push((int) 29888)
0x261: Push((int) 29887)
0x262: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x263: Pop(3)
0x264: Return(); Pop(0)

0x265: Push((int) 29888)
0x266: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x268: PushEmpty(string)
0x269: Stack[-1] = "Fear"
0x26a: Call2 0x1a5

0x26b: Pop(1)
0x26c: Push((int) 528499)
0x26d: @@ SetMessage(Stack[-1])
0x26e: Pop(1)
0x26f: @@ ClearReplies()
0x270: Pop(0)
0x271: Push((int) 528500)
0x272: Push((int) 29890)
0x273: Push((int) 29889)
0x274: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(3)
0x276: Return(); Pop(0)

0x277: Push((int) 29890)
0x278: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x27a: PushEmpty(string)
0x27b: Stack[-1] = "Neutral"
0x27c: Call2 0x1a5

0x27d: Pop(1)
0x27e: Push((int) 528501)
0x27f: @@ SetMessage(Stack[-1])
0x280: Pop(1)
0x281: @@ ClearReplies()
0x282: Pop(0)
0x283: Push((int) 528504)
0x284: Push((int) 29894)
0x285: Push((int) 29893)
0x286: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x287: Pop(3)
0x288: Push((int) 528517)
0x289: Push((int) 29896)
0x28a: Push((int) 29908)
0x28b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(3)
0x28d: Return(); Pop(0)

0x28e: Push((int) 29894)
0x28f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x291: PushEmpty(string)
0x292: Stack[-1] = "Neutral"
0x293: Call2 0x1a5

0x294: Pop(1)
0x295: Push((int) 528505)
0x296: @@ SetMessage(Stack[-1])
0x297: Pop(1)
0x298: @@ ClearReplies()
0x299: Pop(0)
0x29a: Push((int) 528506)
0x29b: Push((int) 29896)
0x29c: Push((int) 29895)
0x29d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(3)
0x29f: Return(); Pop(0)

0x2a0: Push((int) 29896)
0x2a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Surprise"
0x2a5: Call2 0x1a5

0x2a6: Pop(1)
0x2a7: Push((int) 528507)
0x2a8: @@ SetMessage(Stack[-1])
0x2a9: Pop(1)
0x2aa: @@ ClearReplies()
0x2ab: Pop(0)
0x2ac: Push((int) 528508)
0x2ad: Push((int) 29898)
0x2ae: Push((int) 29897)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 29898)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Surprise"
0x2b7: Call2 0x1a5

0x2b8: Pop(1)
0x2b9: Push((int) 528509)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 521038)
0x2bf: Push((int) -1)
0x2c0: Push((int) 22234)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c5: PushEmpty(bool)
0x2c6: Call2 0x826

0x2c7: Pop(0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c9: @ lshStopAnimation()
0x2ca: Pop(0)
0x2cb: GOTO 0x2ce

0x2cc: @ StopAnimation()
0x2cd: Pop(0)
0x2ce: Return(); Pop(0)

0x2cf: GOTO 0x1bc

0x2d0: Return(); Pop(0)

0x2d1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2d2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2d3: PushEmpty(bool, object, float)
0x2d4: Stack[-2] = Stack[-12]
0x2d5: Stack[-1] = (float) 70.0
0x2d6: Call2 0x6c2

0x2d7: Pop(2)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-10] = (int) -2
0x2db: Return(); Pop(8)

0x2dc: @ CreateDialog(Stack[-4])
0x2dd: Pop(0)
0x2de: PushEmpty(int)
0x2df: Call2 0x820

0x2e0: Pop(0)
0x2e1: @@ SetNPCName(Stack[-1])
0x2e2: Pop(1)
0x2e3: PushEmpty(int)
0x2e4: Call2 0x81e

0x2e5: Pop(0)
0x2e6: @@ SetNPCDescription(Stack[-1])
0x2e7: Pop(1)
0x2e8: PushEmpty(string)
0x2e9: Call2 0x822

0x2ea: Pop(0)
0x2eb: @@ SetPhoto(Stack[-1])
0x2ec: Pop(1)
0x2ed: PushEmpty(string)
0x2ee: Call2 0x824

0x2ef: Pop(0)
0x2f0: @@ SetPhoto2(Stack[-1])
0x2f1: Pop(1)
0x2f2: PushEmpty(int)
0x2f3: Call2 0x8d8

0x2f4: Pop(0)
0x2f5: @@ SetPlayerName(Stack[-1])
0x2f6: Pop(1)
0x2f7: Stack[-2] = (int) -1
0x2f8: @ IsOverrideActive(Stack[-3])
0x2f9: Pop(0)
0x2fa: Push(Stack[-3])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: Stack[-10] = (int) -2
0x2fd: Return(); Pop(8)

0x2fe: @ DoDialog(Stack[-4])
0x2ff: Pop(0)
0x300: PushEmpty(bool, object)
0x301: PushEmpty(object)
0x302: Call2 0x7d8

0x303: Stack[-2] = Stack[-1]
0x304: Pop(1)
0x305: Call2 0x719

0x306: Pop(2)
0x307: PushEmpty(object, object)
0x308: Stack[-2] = Stack[-11]
0x309: Stack[-1] = Stack[-6]
0x30a: Push(-2, 4); TaskCall(6)
0x30b: Call2 0x322

0x30c: Pop(-2, 4); TaskReturn
0x30d: Pop(2)
0x30e: @@ IsDialogEnd(Stack[-1])
0x30f: Pop(0)
0x310: Pop(0); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x312: @ sync()
0x313: Pop(0)
0x314: @@ IsDialogEnd(Stack[-1])
0x315: Pop(0)
0x316: GOTO 0x310

0x317: PushEmpty(object)
0x318: Stack[-1] = Stack[-10]
0x319: Call2 0x707

0x31a: Pop(1)
0x31b: @ StopDialog(Stack[-4])
0x31c: Pop(0)
0x31d: @@ GetReturnValue(Stack[-2])
0x31e: Pop(0)
0x31f: Stack[-10] = Stack[-2]
0x320: Return(); Pop(8)

0x321: Stack[-4] = 0
0x322: PushEmpty()
0x323: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x324: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x325: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x326: Push((int) 1)
0x327: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x328: PushEmpty(bool)
0x329: Stack[-1] = (bool) 0
0x32a: PushEmpty(bool, object)
0x32b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32c: Call2 0x86d

0x32d: Pop(1)
0x32e: Pop(1); Push((bool) Stack[-1] == 0)
0x32f: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x330: PushEmpty(bool, object)
0x331: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x332: Call2 0x879

0x333: Pop(1)
0x334: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x335: Stack[-1] = (bool) 1
0x336: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x337: PushEmpty(object, object)
0x338: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x339: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Call2 0x844

0x33b: Pop(2)
0x33c: PushEmpty(object, object)
0x33d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33f: Call2 0x861

0x340: Pop(2)
0x341: PushEmpty(string)
0x342: Stack[-1] = "Neutral"
0x343: Call2 0x37f

0x344: Pop(1)
0x345: Push((int) 521320)
0x346: @@ SetMessage(Stack[-1])
0x347: Pop(1)
0x348: @@ ClearReplies()
0x349: Pop(0)
0x34a: Push((int) 528448)
0x34b: Push((int) 29835)
0x34c: Push((int) 29834)
0x34d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34e: Pop(3)
0x34f: GOTO 0x361

0x350: PushEmpty(string)
0x351: Stack[-1] = "Neutral"
0x352: Call2 0x37f

0x353: Pop(1)
0x354: Push((int) 521323)
0x355: @@ SetMessage(Stack[-1])
0x356: Pop(1)
0x357: @@ ClearReplies()
0x358: Pop(0)
0x359: Push((int) 521324)
0x35a: Push((int) -1)
0x35b: Push((int) 22518)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: GOTO 0x361

0x35f: Return(); Pop(0)

0x360: GOTO 0x326

0x361: PushEmpty(bool)
0x362: Call2 0x826

0x363: Pop(0)
0x364: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x365: @ lshWaitForAnimEnd()
0x366: Pop(0)
0x367: Push( Stack[3 + Tasks[-1].StackPointer] )
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: GOTO 0x36f

0x36a: PushEmpty(string)
0x36b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x36c: Call2 0x7a3

0x36d: Pop(1)
0x36e: GOTO 0x365

0x36f: GOTO 0x37e

0x370: Push("all")
0x371: Push("idle")
0x372: @ PlayAnimation(Stack[-2], Stack[-1])
0x373: Pop(2)
0x374: @ WaitForAnimEnd()
0x375: Pop(0)
0x376: Push( Stack[3 + Tasks[-1].StackPointer] )
0x377: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x378: GOTO 0x37e

0x379: Push("all")
0x37a: Push("idle")
0x37b: @ PlayAnimation(Stack[-2], Stack[-1])
0x37c: Pop(2)
0x37d: GOTO 0x374

0x37e: Return(); Pop(0)

0x37f: PushEmpty()
0x380: PushEmpty(bool)
0x381: Call2 0x826

0x382: Pop(0)
0x383: Pop(1); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: Return(); Pop(0)

0x386: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Return(); Pop(0)

0x389: PushEmpty(string, bool)
0x38a: Stack[-2] = Stack[-3]
0x38b: Push("")
0x38c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-1] = (bool) 0
0x38f: GOTO 0x391

0x390: Stack[-1] = (bool) 1
0x391: Call2 0x7b3

0x392: Pop(2)
0x393: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x394: Return(); Pop(0)

0x395: PushEmpty()
0x396: Push((int) 1)
0x397: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x398: PushEmpty()
0x399: Call2 0x7d1

0x39a: Pop(0)
0x39b: Push((int) 22516)
0x39c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x39e: PushEmpty(object, object)
0x39f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a1: Call2 0x84a

0x3a2: Pop(2)
0x3a3: PushEmpty(object, object)
0x3a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a6: Call2 0x867

0x3a7: Pop(2)
0x3a8: PushEmpty(object, object)
0x3a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ab: Call2 0x85a

0x3ac: Pop(2)
0x3ad: Push((int) 29846)
0x3ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b0: PushEmpty(object, object)
0x3b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b3: Call2 0x84a

0x3b4: Pop(2)
0x3b5: PushEmpty(object, object)
0x3b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b8: Call2 0x867

0x3b9: Pop(2)
0x3ba: PushEmpty(object, object)
0x3bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bd: Call2 0x85a

0x3be: Pop(2)
0x3bf: Push((int) 22515)
0x3c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3c2: PushEmpty(object, object)
0x3c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c5: Call2 0x84a

0x3c6: Pop(2)
0x3c7: PushEmpty(object, object)
0x3c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ca: Call2 0x867

0x3cb: Pop(2)
0x3cc: PushEmpty(object, object)
0x3cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3cf: Call2 0x85a

0x3d0: Pop(2)
0x3d1: Push((int) 22514)
0x3d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x3d4: PushEmpty(bool)
0x3d5: Stack[-1] = (bool) 0
0x3d6: PushEmpty(bool, object)
0x3d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d8: Call2 0x86d

0x3d9: Pop(1)
0x3da: Pop(1); Push((bool) Stack[-1] == 0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3dc: PushEmpty(bool, object)
0x3dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3de: Call2 0x879

0x3df: Pop(1)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e1: Stack[-1] = (bool) 1
0x3e2: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3e3: PushEmpty(object, object)
0x3e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e6: Call2 0x844

0x3e7: Pop(2)
0x3e8: PushEmpty(object, object)
0x3e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3eb: Call2 0x861

0x3ec: Pop(2)
0x3ed: PushEmpty(string)
0x3ee: Stack[-1] = "Neutral"
0x3ef: Call2 0x37f

0x3f0: Pop(1)
0x3f1: Push((int) 521320)
0x3f2: @@ SetMessage(Stack[-1])
0x3f3: Pop(1)
0x3f4: @@ ClearReplies()
0x3f5: Pop(0)
0x3f6: Push((int) 528448)
0x3f7: Push((int) 29835)
0x3f8: Push((int) 29834)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty(string)
0x3fd: Stack[-1] = "Neutral"
0x3fe: Call2 0x37f

0x3ff: Pop(1)
0x400: Push((int) 521323)
0x401: @@ SetMessage(Stack[-1])
0x402: Pop(1)
0x403: @@ ClearReplies()
0x404: Pop(0)
0x405: Push((int) 521324)
0x406: Push((int) -1)
0x407: Push((int) 22518)
0x408: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x409: Pop(3)
0x40a: Return(); Pop(0)

0x40b: Push((int) 29835)
0x40c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x40e: PushEmpty(string)
0x40f: Stack[-1] = "Neutral"
0x410: Call2 0x37f

0x411: Pop(1)
0x412: Push((int) 528449)
0x413: @@ SetMessage(Stack[-1])
0x414: Pop(1)
0x415: @@ ClearReplies()
0x416: Pop(0)
0x417: Push((int) 528450)
0x418: Push((int) 29837)
0x419: Push((int) 29836)
0x41a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41b: Pop(3)
0x41c: Return(); Pop(0)

0x41d: Push((int) 29837)
0x41e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x420: PushEmpty(string)
0x421: Stack[-1] = "Neutral"
0x422: Call2 0x37f

0x423: Pop(1)
0x424: Push((int) 528451)
0x425: @@ SetMessage(Stack[-1])
0x426: Pop(1)
0x427: @@ ClearReplies()
0x428: Pop(0)
0x429: Push((int) 528452)
0x42a: Push((int) 29840)
0x42b: Push((int) 29838)
0x42c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(3)
0x42e: Push((int) 528453)
0x42f: Push((int) 29840)
0x430: Push((int) 29839)
0x431: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x432: Pop(3)
0x433: Return(); Pop(0)

0x434: Push((int) 29840)
0x435: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x437: PushEmpty(string)
0x438: Stack[-1] = "Neutral"
0x439: Call2 0x37f

0x43a: Pop(1)
0x43b: Push((int) 528454)
0x43c: @@ SetMessage(Stack[-1])
0x43d: Pop(1)
0x43e: @@ ClearReplies()
0x43f: Pop(0)
0x440: Push((int) 528455)
0x441: Push((int) 29842)
0x442: Push((int) 29841)
0x443: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x444: Pop(3)
0x445: Push((int) 521321)
0x446: Push((int) -1)
0x447: Push((int) 22515)
0x448: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x449: Pop(3)
0x44a: Return(); Pop(0)

0x44b: Push((int) 29842)
0x44c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x44e: PushEmpty(string)
0x44f: Stack[-1] = "Neutral"
0x450: Call2 0x37f

0x451: Pop(1)
0x452: Push((int) 528456)
0x453: @@ SetMessage(Stack[-1])
0x454: Pop(1)
0x455: @@ ClearReplies()
0x456: Pop(0)
0x457: Push((int) 528457)
0x458: Push((int) 29845)
0x459: Push((int) 29844)
0x45a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45b: Pop(3)
0x45c: Return(); Pop(0)

0x45d: Push((int) 29845)
0x45e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x460: PushEmpty(string)
0x461: Stack[-1] = "Neutral"
0x462: Call2 0x37f

0x463: Pop(1)
0x464: Push((int) 528458)
0x465: @@ SetMessage(Stack[-1])
0x466: Pop(1)
0x467: @@ ClearReplies()
0x468: Pop(0)
0x469: Push((int) 521322)
0x46a: Push((int) -1)
0x46b: Push((int) 22516)
0x46c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46d: Pop(3)
0x46e: Push((int) 528459)
0x46f: Push((int) -1)
0x470: Push((int) 29846)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Return(); Pop(0)

0x474: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x475: PushEmpty(bool)
0x476: Call2 0x826

0x477: Pop(0)
0x478: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x479: @ lshStopAnimation()
0x47a: Pop(0)
0x47b: GOTO 0x47e

0x47c: @ StopAnimation()
0x47d: Pop(0)
0x47e: Return(); Pop(0)

0x47f: GOTO 0x396

0x480: Return(); Pop(0)

0x481: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x482: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x483: PushEmpty(bool, object, float)
0x484: Stack[-2] = Stack[-12]
0x485: Stack[-1] = (float) 70.0
0x486: Call2 0x6c2

0x487: Pop(2)
0x488: Pop(1); Push((bool) Stack[-1] == 0)
0x489: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48a: Stack[-10] = (int) -2
0x48b: Return(); Pop(8)

0x48c: @ CreateDialog(Stack[-4])
0x48d: Pop(0)
0x48e: PushEmpty(int)
0x48f: Call2 0x820

0x490: Pop(0)
0x491: @@ SetNPCName(Stack[-1])
0x492: Pop(1)
0x493: PushEmpty(int)
0x494: Call2 0x81e

0x495: Pop(0)
0x496: @@ SetNPCDescription(Stack[-1])
0x497: Pop(1)
0x498: PushEmpty(string)
0x499: Call2 0x822

0x49a: Pop(0)
0x49b: @@ SetPhoto(Stack[-1])
0x49c: Pop(1)
0x49d: PushEmpty(string)
0x49e: Call2 0x824

0x49f: Pop(0)
0x4a0: @@ SetPhoto2(Stack[-1])
0x4a1: Pop(1)
0x4a2: PushEmpty(int)
0x4a3: Call2 0x8d8

0x4a4: Pop(0)
0x4a5: @@ SetPlayerName(Stack[-1])
0x4a6: Pop(1)
0x4a7: Stack[-2] = (int) -1
0x4a8: @ IsOverrideActive(Stack[-3])
0x4a9: Pop(0)
0x4aa: Push(Stack[-3])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ac: Stack[-10] = (int) -2
0x4ad: Return(); Pop(8)

0x4ae: @ DoDialog(Stack[-4])
0x4af: Pop(0)
0x4b0: PushEmpty(bool, object)
0x4b1: PushEmpty(object)
0x4b2: Call2 0x7d8

0x4b3: Stack[-2] = Stack[-1]
0x4b4: Pop(1)
0x4b5: Call2 0x719

0x4b6: Pop(2)
0x4b7: PushEmpty(object, object)
0x4b8: Stack[-2] = Stack[-11]
0x4b9: Stack[-1] = Stack[-6]
0x4ba: Push(-2, 4); TaskCall(8)
0x4bb: Call2 0x4d2

0x4bc: Pop(-2, 4); TaskReturn
0x4bd: Pop(2)
0x4be: @@ IsDialogEnd(Stack[-1])
0x4bf: Pop(0)
0x4c0: Pop(0); Push((bool) Stack[-1] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c2: @ sync()
0x4c3: Pop(0)
0x4c4: @@ IsDialogEnd(Stack[-1])
0x4c5: Pop(0)
0x4c6: GOTO 0x4c0

0x4c7: PushEmpty(object)
0x4c8: Stack[-1] = Stack[-10]
0x4c9: Call2 0x707

0x4ca: Pop(1)
0x4cb: @ StopDialog(Stack[-4])
0x4cc: Pop(0)
0x4cd: @@ GetReturnValue(Stack[-2])
0x4ce: Pop(0)
0x4cf: Stack[-10] = Stack[-2]
0x4d0: Return(); Pop(8)

0x4d1: Stack[-4] = 0
0x4d2: PushEmpty()
0x4d3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4d4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4d6: Push((int) 1)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4d8: PushEmpty(string)
0x4d9: Stack[-1] = "Neutral"
0x4da: Call2 0x511

0x4db: Pop(1)
0x4dc: Push((int) 535231)
0x4dd: @@ SetMessage(Stack[-1])
0x4de: Pop(1)
0x4df: @@ ClearReplies()
0x4e0: Pop(0)
0x4e1: Push((int) 535232)
0x4e2: Push((int) 36953)
0x4e3: Push((int) 36907)
0x4e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e5: Pop(3)
0x4e6: Push((int) 535233)
0x4e7: Push((int) -1)
0x4e8: Push((int) 36908)
0x4e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ea: Pop(3)
0x4eb: Push((int) 535280)
0x4ec: Push((int) -1)
0x4ed: Push((int) 36956)
0x4ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: GOTO 0x4f3

0x4f1: Return(); Pop(0)

0x4f2: GOTO 0x4d6

0x4f3: PushEmpty(bool)
0x4f4: Call2 0x826

0x4f5: Pop(0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4f7: @ lshWaitForAnimEnd()
0x4f8: Pop(0)
0x4f9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: GOTO 0x501

0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4fe: Call2 0x7a3

0x4ff: Pop(1)
0x500: GOTO 0x4f7

0x501: GOTO 0x510

0x502: Push("all")
0x503: Push("idle")
0x504: @ PlayAnimation(Stack[-2], Stack[-1])
0x505: Pop(2)
0x506: @ WaitForAnimEnd()
0x507: Pop(0)
0x508: Push( Stack[3 + Tasks[-1].StackPointer] )
0x509: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x50a: GOTO 0x510

0x50b: Push("all")
0x50c: Push("idle")
0x50d: @ PlayAnimation(Stack[-2], Stack[-1])
0x50e: Pop(2)
0x50f: GOTO 0x506

0x510: Return(); Pop(0)

0x511: PushEmpty()
0x512: PushEmpty(bool)
0x513: Call2 0x826

0x514: Pop(0)
0x515: Pop(1); Push((bool) Stack[-1] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: Return(); Pop(0)

0x518: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: Return(); Pop(0)

0x51b: PushEmpty(string, bool)
0x51c: Stack[-2] = Stack[-3]
0x51d: Push("")
0x51e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-1] = (bool) 0
0x521: GOTO 0x523

0x522: Stack[-1] = (bool) 1
0x523: Call2 0x7b3

0x524: Pop(2)
0x525: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x526: Return(); Pop(0)

0x527: PushEmpty()
0x528: Push((int) 1)
0x529: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x52a: PushEmpty()
0x52b: Call2 0x7d1

0x52c: Pop(0)
0x52d: Push((int) 36906)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x530: PushEmpty(string)
0x531: Stack[-1] = "Neutral"
0x532: Call2 0x511

0x533: Pop(1)
0x534: Push((int) 535231)
0x535: @@ SetMessage(Stack[-1])
0x536: Pop(1)
0x537: @@ ClearReplies()
0x538: Pop(0)
0x539: Push((int) 535232)
0x53a: Push((int) 36953)
0x53b: Push((int) 36907)
0x53c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53d: Pop(3)
0x53e: Push((int) 535233)
0x53f: Push((int) -1)
0x540: Push((int) 36908)
0x541: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x542: Pop(3)
0x543: Push((int) 535280)
0x544: Push((int) -1)
0x545: Push((int) 36956)
0x546: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x547: Pop(3)
0x548: Return(); Pop(0)

0x549: Push((int) 36953)
0x54a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x54c: PushEmpty(string)
0x54d: Stack[-1] = "Neutral"
0x54e: Call2 0x511

0x54f: Pop(1)
0x550: Push((int) 535277)
0x551: @@ SetMessage(Stack[-1])
0x552: Pop(1)
0x553: @@ ClearReplies()
0x554: Pop(0)
0x555: Push((int) 535278)
0x556: Push((int) 36957)
0x557: Push((int) 36954)
0x558: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x559: Pop(3)
0x55a: Push((int) 535279)
0x55b: Push((int) 36957)
0x55c: Push((int) 36955)
0x55d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55e: Pop(3)
0x55f: Return(); Pop(0)

0x560: Push((int) 36957)
0x561: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x563: PushEmpty(string)
0x564: Stack[-1] = "Neutral"
0x565: Call2 0x511

0x566: Pop(1)
0x567: Push((int) 535281)
0x568: @@ SetMessage(Stack[-1])
0x569: Pop(1)
0x56a: @@ ClearReplies()
0x56b: Pop(0)
0x56c: Push((int) 535282)
0x56d: Push((int) -1)
0x56e: Push((int) 36958)
0x56f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x570: Pop(3)
0x571: Push((int) 535283)
0x572: Push((int) -1)
0x573: Push((int) 36959)
0x574: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x575: Pop(3)
0x576: Return(); Pop(0)

0x577: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x578: PushEmpty(bool)
0x579: Call2 0x826

0x57a: Pop(0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57c: @ lshStopAnimation()
0x57d: Pop(0)
0x57e: GOTO 0x581

0x57f: @ StopAnimation()
0x580: Pop(0)
0x581: Return(); Pop(0)

0x582: GOTO 0x528

0x583: Return(); Pop(0)

0x584: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x585: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x586: PushEmpty(bool, object, float)
0x587: Stack[-2] = Stack[-12]
0x588: Stack[-1] = (float) 70.0
0x589: Call2 0x6c2

0x58a: Pop(2)
0x58b: Pop(1); Push((bool) Stack[-1] == 0)
0x58c: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58d: Stack[-10] = (int) -2
0x58e: Return(); Pop(8)

0x58f: @ CreateDialog(Stack[-4])
0x590: Pop(0)
0x591: PushEmpty(int)
0x592: Call2 0x820

0x593: Pop(0)
0x594: @@ SetNPCName(Stack[-1])
0x595: Pop(1)
0x596: PushEmpty(int)
0x597: Call2 0x81e

0x598: Pop(0)
0x599: @@ SetNPCDescription(Stack[-1])
0x59a: Pop(1)
0x59b: PushEmpty(string)
0x59c: Call2 0x822

0x59d: Pop(0)
0x59e: @@ SetPhoto(Stack[-1])
0x59f: Pop(1)
0x5a0: PushEmpty(string)
0x5a1: Call2 0x824

0x5a2: Pop(0)
0x5a3: @@ SetPhoto2(Stack[-1])
0x5a4: Pop(1)
0x5a5: PushEmpty(int)
0x5a6: Call2 0x8d8

0x5a7: Pop(0)
0x5a8: @@ SetPlayerName(Stack[-1])
0x5a9: Pop(1)
0x5aa: Stack[-2] = (int) -1
0x5ab: @ IsOverrideActive(Stack[-3])
0x5ac: Pop(0)
0x5ad: Push(Stack[-3])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5af: Stack[-10] = (int) -2
0x5b0: Return(); Pop(8)

0x5b1: @ DoDialog(Stack[-4])
0x5b2: Pop(0)
0x5b3: PushEmpty(bool, object)
0x5b4: PushEmpty(object)
0x5b5: Call2 0x7d8

0x5b6: Stack[-2] = Stack[-1]
0x5b7: Pop(1)
0x5b8: Call2 0x719

0x5b9: Pop(2)
0x5ba: PushEmpty(object, object)
0x5bb: Stack[-2] = Stack[-11]
0x5bc: Stack[-1] = Stack[-6]
0x5bd: Push(-2, 4); TaskCall(10)
0x5be: Call2 0x5d5

0x5bf: Pop(-2, 4); TaskReturn
0x5c0: Pop(2)
0x5c1: @@ IsDialogEnd(Stack[-1])
0x5c2: Pop(0)
0x5c3: Pop(0); Push((bool) Stack[-1] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c5: @ sync()
0x5c6: Pop(0)
0x5c7: @@ IsDialogEnd(Stack[-1])
0x5c8: Pop(0)
0x5c9: GOTO 0x5c3

0x5ca: PushEmpty(object)
0x5cb: Stack[-1] = Stack[-10]
0x5cc: Call2 0x707

0x5cd: Pop(1)
0x5ce: @ StopDialog(Stack[-4])
0x5cf: Pop(0)
0x5d0: @@ GetReturnValue(Stack[-2])
0x5d1: Pop(0)
0x5d2: Stack[-10] = Stack[-2]
0x5d3: Return(); Pop(8)

0x5d4: Stack[-4] = 0
0x5d5: PushEmpty()
0x5d6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5d7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5d8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5d9: Push((int) 1)
0x5da: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5db: PushEmpty(string)
0x5dc: Stack[-1] = "Neutral"
0x5dd: Call2 0x60f

0x5de: Pop(1)
0x5df: Push((int) 540554)
0x5e0: @@ SetMessage(Stack[-1])
0x5e1: Pop(1)
0x5e2: @@ ClearReplies()
0x5e3: Pop(0)
0x5e4: Push((int) 540555)
0x5e5: Push((int) -1)
0x5e6: Push((int) 42564)
0x5e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(3)
0x5e9: Push((int) 540794)
0x5ea: Push((int) -1)
0x5eb: Push((int) 42843)
0x5ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ed: Pop(3)
0x5ee: GOTO 0x5f1

0x5ef: Return(); Pop(0)

0x5f0: GOTO 0x5d9

0x5f1: PushEmpty(bool)
0x5f2: Call2 0x826

0x5f3: Pop(0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5f5: @ lshWaitForAnimEnd()
0x5f6: Pop(0)
0x5f7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f9: GOTO 0x5ff

0x5fa: PushEmpty(string)
0x5fb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5fc: Call2 0x7a3

0x5fd: Pop(1)
0x5fe: GOTO 0x5f5

0x5ff: GOTO 0x60e

0x600: Push("all")
0x601: Push("idle")
0x602: @ PlayAnimation(Stack[-2], Stack[-1])
0x603: Pop(2)
0x604: @ WaitForAnimEnd()
0x605: Pop(0)
0x606: Push( Stack[3 + Tasks[-1].StackPointer] )
0x607: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x608: GOTO 0x60e

0x609: Push("all")
0x60a: Push("idle")
0x60b: @ PlayAnimation(Stack[-2], Stack[-1])
0x60c: Pop(2)
0x60d: GOTO 0x604

0x60e: Return(); Pop(0)

0x60f: PushEmpty()
0x610: PushEmpty(bool)
0x611: Call2 0x826

0x612: Pop(0)
0x613: Pop(1); Push((bool) Stack[-1] == 0)
0x614: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x615: Return(); Pop(0)

0x616: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x617: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x618: Return(); Pop(0)

0x619: PushEmpty(string, bool)
0x61a: Stack[-2] = Stack[-3]
0x61b: Push("")
0x61c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61e: Stack[-1] = (bool) 0
0x61f: GOTO 0x621

0x620: Stack[-1] = (bool) 1
0x621: Call2 0x7b3

0x622: Pop(2)
0x623: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x624: Return(); Pop(0)

0x625: PushEmpty()
0x626: Push((int) 1)
0x627: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x628: PushEmpty()
0x629: Call2 0x7d1

0x62a: Pop(0)
0x62b: Push((int) 42563)
0x62c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62d: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x62e: PushEmpty(string)
0x62f: Stack[-1] = "Neutral"
0x630: Call2 0x60f

0x631: Pop(1)
0x632: Push((int) 540554)
0x633: @@ SetMessage(Stack[-1])
0x634: Pop(1)
0x635: @@ ClearReplies()
0x636: Pop(0)
0x637: Push((int) 540555)
0x638: Push((int) -1)
0x639: Push((int) 42564)
0x63a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63b: Pop(3)
0x63c: Push((int) 540794)
0x63d: Push((int) -1)
0x63e: Push((int) 42843)
0x63f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x640: Pop(3)
0x641: Return(); Pop(0)

0x642: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x643: PushEmpty(bool)
0x644: Call2 0x826

0x645: Pop(0)
0x646: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x647: @ lshStopAnimation()
0x648: Pop(0)
0x649: GOTO 0x64c

0x64a: @ StopAnimation()
0x64b: Pop(0)
0x64c: Return(); Pop(0)

0x64d: GOTO 0x626

0x64e: Return(); Pop(0)

0x64f: Push(GlobalVars[1])
0x650: Stack[-1] = (bool) 1
0x651: GlobalVars[1] = Stack[-1]; Pop(1)
0x652: PushEmpty()
0x653: Call2 0x65e

0x654: Pop(0)
0x655: Return(); Pop(0)

0x656: PushEmpty()
0x657: Push("icot_viktor_NPC_Trigger")
0x658: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65a: PushEmpty()
0x65b: Call2 0x685

0x65c: Pop(0)
0x65d: Return(); Pop(0)

0x65e: @ GetPosition(Stack[-1])
0x65f: Pop(0)
0x660: @ GetDirection(Stack[-2])
0x661: Pop(0)
0x662: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x663: PushEmpty(bool)
0x664: Call2 0x6bd

0x665: Pop(0)
0x666: Pop(1); Push((bool) Stack[-1] == 0)
0x667: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x668: PushEmpty()
0x669: Push(-0, 0); TaskCall(0)
0x66a: Call2 0x0

0x66b: Pop(-0, 0); TaskReturn
0x66c: Pop(0)
0x66d: PushEmpty()
0x66e: Call2 0x67a

0x66f: Pop(0)
0x670: PushEmpty(string)
0x671: Stack[-1] = "Neutral"
0x672: Call2 0x7a3

0x673: Pop(1)
0x674: @ lshWaitForAnimEnd()
0x675: Pop(0)
0x676: GOTO 0x670

0x677: @ Hold()
0x678: Pop(0)
0x679: Return(); Pop(0)

0x67a: @ SetPosition(Stack[-1])
0x67b: Pop(0)
0x67c: @ SetDirection(Stack[-2])
0x67d: Pop(0)
0x67e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x67f: Push("all")
0x680: Push("stand")
0x681: Push((int) 0)
0x682: @ LockAnimation(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Return(); Pop(0)

0x685: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x686: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x687: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x688: Push("all")
0x689: Push("stand")
0x68a: @ PlayAnimation(Stack[-2], Stack[-1])
0x68b: Pop(2)
0x68c: @ WaitForAnimEnd()
0x68d: Pop(0)
0x68e: Return(); Pop(0)

0x68f: PushEmpty()
0x690: Push(-0, 0); TaskCall(0)
0x691: Call2 0x0

0x692: Pop(-0, 0); TaskReturn
0x693: Pop(0)
0x694: PushEmpty()
0x695: Call2 0x67a

0x696: Pop(0)
0x697: Return(); Pop(0)

0x698: PushEmpty(bool, bool)
0x699: Push( Stack[0 + Tasks[-1].StackPointer] )
0x69a: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x69b: @ IsOverrideActive(Stack[-1])
0x69c: Pop(0)
0x69d: Pop(0); Push((bool) Stack[-1] == 0)
0x69e: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x69f: EventDisable(0)
0x6a0: PushEmpty(bool, object)
0x6a1: Stack[-1] = Stack[-5]
0x6a2: Call2 0x6b4

0x6a3: Pop(2)
0x6a4: EventEnable(0)
0x6a5: PushEmpty(object)
0x6a6: Stack[-1] = Stack[-4]
0x6a7: Call2 0x8e9

0x6a8: Pop(1)
0x6a9: Return(); Pop(2)

0x6aa: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x6ab: @ GetPosition(Stack[-3])
0x6ac: Pop(0)
0x6ad: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x6ae: Push(CvectorIndex(Stack[-2], 0))
0x6af: Push(CvectorIndex(Stack[-3], 2))
0x6b0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x6b1: Pop(2)
0x6b2: Stack[-8] = Stack[-1]
0x6b3: Return(); Pop(6)

0x6b4: PushEmpty(cvector, cvector)
0x6b5: @@ GetPosition(Stack[-1])
0x6b6: Pop(0)
0x6b7: PushEmpty(bool, cvector)
0x6b8: Stack[-1] = Stack[-3]
0x6b9: Call2 0x6aa

0x6ba: Stack[-6] = Stack[-2]
0x6bb: Pop(2)
0x6bc: Return(); Pop(2)

0x6bd: PushEmpty(bool, bool)
0x6be: @ IsLoaded(Stack[-1])
0x6bf: Pop(0)
0x6c0: Stack[-3] = Stack[-1]
0x6c1: Return(); Pop(2)

0x6c2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6c3: @@ GetPosition(Stack[-8])
0x6c4: Pop(0)
0x6c5: @@ GetEyesHeight(Stack[-9])
0x6c6: Pop(0)
0x6c7: Push(CvectorIndex(Stack[-8], 1))
0x6c8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6c9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6ca: @ GetPosition(Stack[-7])
0x6cb: Pop(0)
0x6cc: @ GetEyesHeight(Stack[-9])
0x6cd: Pop(0)
0x6ce: Push(CvectorIndex(Stack[-7], 1))
0x6cf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6d0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6d1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x6d2: Push(CvectorIndex(Stack[-6], 1))
0x6d3: Stack[-1] = (int) 0
0x6d4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6d5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x6d6: Pop(1); Push(Sqrt(Stack[-1]))
0x6d7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x6d8: Stack[-5] = -Stack[-6]; Pop(0);
0x6d9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x6da: PushEmpty(cvector, cvector)
0x6db: Push(CVector(0.0, 1.0, 0.0))
0x6dc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x6dd: Call2 0x7de

0x6de: Pop(1)
0x6df: Push((int) 25)
0x6e0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e2: Push(CVector(0.0, 10.0, 0.0))
0x6e3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x6e4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x6e5: @ IsOverrideActive(Stack[-2])
0x6e6: Pop(0)
0x6e7: Push(Stack[-2])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e9: Stack[-21] = (bool) 0
0x6ea: Return(); Pop(18)

0x6eb: @ StopWorld()
0x6ec: Pop(0)
0x6ed: Push((bool) 1)
0x6ee: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x6ef: Pop(1)
0x6f0: Push(CvectorIndex(Stack[-4], 0))
0x6f1: Push(CvectorIndex(Stack[-5], 2))
0x6f2: @ Rotate(Stack[-2], Stack[-1])
0x6f3: Pop(2)
0x6f4: PushEmpty(bool)
0x6f5: Call2 0x826

0x6f6: Pop(0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f8: GOTO 0x701

0x6f9: Push("head")
0x6fa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6fb: Pop(1)
0x6fc: Push(Stack[-1])
0x6fd: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6fe: Push("head")
0x6ff: @ LookAsyncCamera(Stack[-1])
0x700: Pop(1)
0x701: @ CameraWaitForPlayFinish()
0x702: Pop(0)
0x703: @ ResumeWorld()
0x704: Pop(0)
0x705: Stack[-21] = (bool) 1
0x706: Return(); Pop(18)

0x707: PushEmpty(bool, bool)
0x708: Push((bool) 1)
0x709: @ CameraSwitchToNormal(Stack[-1])
0x70a: Pop(1)
0x70b: PushEmpty(bool)
0x70c: Call2 0x826

0x70d: Pop(0)
0x70e: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70f: GOTO 0x718

0x710: Push("head")
0x711: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x712: Pop(1)
0x713: Push(Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x715: Push("head")
0x716: @ UnlookAsync(Stack[-1])
0x717: Pop(1)
0x718: Return(); Pop(2)

0x719: PushEmpty(int, int, int, int)
0x71a: Push("voice_common")
0x71b: @ GetVariable(Stack[-1], Stack[-3])
0x71c: Pop(1)
0x71d: Push(Stack[-2])
0x71e: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x71f: PushEmpty(bool, object)
0x720: Stack[-1] = Stack[-7]
0x721: Call2 0x753

0x722: Pop(1)
0x723: Pop(1); Push((bool) Stack[-1] == 0)
0x724: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x725: PushEmpty(bool, object)
0x726: Stack[-1] = Stack[-7]
0x727: Call2 0x778

0x728: Pop(1)
0x729: Pop(1); Push((bool) Stack[-1] == 0)
0x72a: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72b: Stack[-6] = (bool) 0
0x72c: Return(); Pop(4)

0x72d: Push((int) 2)
0x72e: @ irand(Stack[-2], Stack[-1])
0x72f: Pop(1)
0x730: Push(Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x732: Push("voice_common")
0x733: Push((int) 1)
0x734: Pop(1); Push(Stack[-4] + Stack[-1]);
0x735: Push((int) 3)
0x736: Pop(2); Push(Stack[-2] % Stack[-1]);
0x737: @ SetVariable(Stack[-2], Stack[-1])
0x738: Pop(2)
0x739: GOTO 0x73e

0x73a: Push("voice_common")
0x73b: Push((int) 0)
0x73c: @ SetVariable(Stack[-2], Stack[-1])
0x73d: Pop(2)
0x73e: GOTO 0x751

0x73f: PushEmpty(bool, object)
0x740: Stack[-1] = Stack[-7]
0x741: Call2 0x778

0x742: Pop(1)
0x743: Pop(1); Push((bool) Stack[-1] == 0)
0x744: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x745: PushEmpty(bool, object)
0x746: Stack[-1] = Stack[-7]
0x747: Call2 0x753

0x748: Pop(1)
0x749: Pop(1); Push((bool) Stack[-1] == 0)
0x74a: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74b: Stack[-6] = (bool) 0
0x74c: Return(); Pop(4)

0x74d: Push("voice_common")
0x74e: Push((int) 1)
0x74f: @ SetVariable(Stack[-2], Stack[-1])
0x750: Pop(2)
0x751: Stack[-6] = (bool) 1
0x752: Return(); Pop(4)

0x753: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x754: Stack[-5] = "c"
0x755: Stack[-4] = (int) 0
0x756: Push((int) 1)
0x757: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x758: Push((int) 1)
0x759: Pop(1); Push(Stack[-5] + Stack[-1]);
0x75a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x75b: @@ HasProperty(Stack[-1], Stack[-4])
0x75c: Pop(1)
0x75d: Pop(0); Push((bool) Stack[-3] == 0)
0x75e: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x75f: GOTO 0x763

0x760: Push((int) 1)
0x761: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x762: GOTO 0x756

0x763: Pop(0); Push((bool) Stack[-4] == 0)
0x764: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x765: Stack[-12] = (bool) 0
0x766: Return(); Pop(10)

0x767: Stack[-2] = (int) 0
0x768: Push((int) 1)
0x769: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76b: @ irand(Stack[-2], Stack[-4])
0x76c: Pop(0)
0x76d: Push((int) 1)
0x76e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x76f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x770: @@ GetProperty(Stack[-1], Stack[-2])
0x771: Pop(1)
0x772: PushEmpty(bool, string)
0x773: Stack[-1] = Stack[-3]
0x774: Call2 0x7c2

0x775: Stack[-14] = Stack[-2]
0x776: Pop(2)
0x777: Return(); Pop(10)

0x778: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x779: Push("d")
0x77a: PushEmpty(int)
0x77b: Call2 0x80f

0x77c: Pop(0)
0x77d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77e: Push("m")
0x77f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x780: Stack[-4] = (int) 0
0x781: Push((int) 1)
0x782: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x783: Push((int) 1)
0x784: Pop(1); Push(Stack[-5] + Stack[-1]);
0x785: Pop(1); Push(Stack[-6] + Stack[-1]);
0x786: @@ HasProperty(Stack[-1], Stack[-4])
0x787: Pop(1)
0x788: Pop(0); Push((bool) Stack[-3] == 0)
0x789: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x78a: GOTO 0x78e

0x78b: Push((int) 1)
0x78c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x78d: GOTO 0x781

0x78e: Pop(0); Push((bool) Stack[-4] == 0)
0x78f: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x790: Stack[-12] = (bool) 0
0x791: Return(); Pop(10)

0x792: Stack[-2] = (int) 0
0x793: Push((int) 1)
0x794: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x796: @ irand(Stack[-2], Stack[-4])
0x797: Pop(0)
0x798: Push((int) 1)
0x799: Pop(1); Push(Stack[-3] + Stack[-1]);
0x79a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x79b: @@ GetProperty(Stack[-1], Stack[-2])
0x79c: Pop(1)
0x79d: PushEmpty(bool, string)
0x79e: Stack[-1] = Stack[-3]
0x79f: Call2 0x7c2

0x7a0: Stack[-14] = Stack[-2]
0x7a1: Pop(2)
0x7a2: Return(); Pop(10)

0x7a3: PushEmpty(bool, float, float, bool, float, float)
0x7a4: @ lshHasAnimation(Stack[-3], Stack[-7])
0x7a5: Pop(0)
0x7a6: Push(Stack[-3])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a8: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x7a9: Pop(0)
0x7aa: Push((bool) 0)
0x7ab: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7ac: Pop(1)
0x7ad: GOTO 0x7b2

0x7ae: Push("Can't find lsh animation : ")
0x7af: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7b0: @ Trace(Stack[-1])
0x7b1: Pop(1)
0x7b2: Return(); Pop(6)

0x7b3: PushEmpty(bool, float, float, bool, float, float)
0x7b4: @ lshHasAnimation(Stack[-3], Stack[-8])
0x7b5: Pop(0)
0x7b6: Push(Stack[-3])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b8: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x7b9: Pop(0)
0x7ba: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x7bb: Pop(0)
0x7bc: GOTO 0x7c1

0x7bd: Push("Can't find lsh animation : ")
0x7be: Pop(1); Push(Stack[-1] + Stack[-9]);
0x7bf: @ Trace(Stack[-1])
0x7c0: Pop(1)
0x7c1: Return(); Pop(6)

0x7c2: PushEmpty(bool, bool)
0x7c3: PushEmpty(bool)
0x7c4: Call2 0x826

0x7c5: Pop(0)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7c7: @ lshHasSpeech(Stack[-1], Stack[-3])
0x7c8: Pop(0)
0x7c9: Push(Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cb: @ lshPlaySpeech(Stack[-3])
0x7cc: Pop(0)
0x7cd: Stack[-4] = (bool) 1
0x7ce: Return(); Pop(2)

0x7cf: Stack[-4] = (bool) 0
0x7d0: Return(); Pop(2)

0x7d1: PushEmpty(bool)
0x7d2: Call2 0x826

0x7d3: Pop(0)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d5: @ lshStopSpeech()
0x7d6: Pop(0)
0x7d7: Return(); Pop(0)

0x7d8: PushEmpty(object, object)
0x7d9: @ self(Stack[-1])
0x7da: Pop(0)
0x7db: Stack[-3] = Stack[-1]
0x7dc: Return(); Pop(2)

0x7dd: Stack[-1] = 0
0x7de: PushEmpty(float, float)
0x7df: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7e0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7e1: Push((float)0.0)
0x7e2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7e5: Return(); Pop(2)

0x7e6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7e7: Return(); Pop(2)

0x7e8: PushEmpty(int, int)
0x7e9: @ GetVariable(Stack[-3], Stack[-1])
0x7ea: Pop(0)
0x7eb: Stack[-4] = Stack[-1]
0x7ec: Return(); Pop(2)

0x7ed: PushEmpty(object, object)
0x7ee: @ FindActor(Stack[-1], Stack[-4])
0x7ef: Pop(0)
0x7f0: Pop(0); Push((bool) Stack[-1] == 0)
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f2: Push("Door ")
0x7f3: Pop(1); Push(Stack[-1] + Stack[-5]);
0x7f4: Push(" not found")
0x7f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7f6: @ Trace(Stack[-1])
0x7f7: Pop(1)
0x7f8: GOTO 0x7fc

0x7f9: Push("locked")
0x7fa: @@ SetProperty(Stack[-1], Stack[-4])
0x7fb: Pop(1)
0x7fc: Return(); Pop(2)

0x7fd: Stack[-1] = 0
0x7fe: PushEmpty(object, object)
0x7ff: @ FindActor(Stack[-1], Stack[-4])
0x800: Pop(0)
0x801: Pop(0); Push((bool) Stack[-1] == 0)
0x802: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x803: Stack[-5] = (bool) 0
0x804: Return(); Pop(2)

0x805: @ Trigger(Stack[-1], Stack[-3])
0x806: Pop(0)
0x807: Stack[-5] = (bool) 1
0x808: Return(); Pop(2)

0x809: Stack[-1] = 0
0x80a: PushEmpty(float, float)
0x80b: @ GetGameTime(Stack[-1])
0x80c: Pop(0)
0x80d: Stack[-3] = Stack[-1]
0x80e: Return(); Pop(2)

0x80f: PushEmpty(float, float)
0x810: @ GetGameTime(Stack[-1])
0x811: Pop(0)
0x812: Push((int) 1)
0x813: PushEmpty(int)
0x814: Push((int) 24)
0x815: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x816: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x817: Return(); Pop(2)

0x818: PushEmpty()
0x819: PushEmpty(int)
0x81a: Call2 0x80f

0x81b: Pop(0)
0x81c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x81d: Return(); Pop(0)

0x81e: Stack[-1] = (int) 515554
0x81f: Return(); Pop(0)

0x820: Stack[-1] = (int) 502879
0x821: Return(); Pop(0)

0x822: Stack[-1] = "ui/NPC_Viktor.png"
0x823: Return(); Pop(0)

0x824: Stack[-1] = "ui/NPC_Viktor_b.png"
0x825: Return(); Pop(0)

0x826: Stack[-1] = (bool) 1
0x827: Return(); Pop(0)

0x828: PushEmpty(object, object)
0x829: Push("b7q01")
0x82a: Push((int) 6)
0x82b: @ SetVariable(Stack[-2], Stack[-1])
0x82c: Pop(2)
0x82d: PushEmpty(object)
0x82e: Call2 0x8c7

0x82f: Stack[-2] = Stack[-1]
0x830: Pop(1)
0x831: Push("b7q01DankoGotoSobor")
0x832: Push("pt_map_aglaja")
0x833: Push((int) 1)
0x834: Push((int) 521021)
0x835: PushEmpty(float)
0x836: Call2 0x80a

0x837: Pop(0)
0x838: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x839: Pop(5)
0x83a: PushEmpty()
0x83b: Call2 0x891

0x83c: Pop(0)
0x83d: PushEmpty(bool, string, string)
0x83e: Stack[-2] = "quest_b7_01"
0x83f: Stack[-1] = "place_aglaja"
0x840: Call2 0x7fe

0x841: Pop(3)
0x842: Return(); Pop(2)

0x843: Stack[-1] = 0
0x844: PushEmpty()
0x845: Push("oob6Viktor1")
0x846: Push((int) 1)
0x847: @ SetVariable(Stack[-2], Stack[-1])
0x848: Pop(2)
0x849: Return(); Pop(0)

0x84a: PushEmpty(object, object)
0x84b: PushEmpty(object)
0x84c: Call2 0x8c7

0x84d: Stack[-2] = Stack[-1]
0x84e: Pop(1)
0x84f: Push("b6q03ViktorGotoMaria")
0x850: Push("pt_map_maria")
0x851: Push((int) 3)
0x852: Push((int) 521341)
0x853: PushEmpty(float)
0x854: Call2 0x80a

0x855: Pop(0)
0x856: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x857: Pop(5)
0x858: Return(); Pop(2)

0x859: Stack[-1] = 0
0x85a: PushEmpty()
0x85b: PushEmpty(string, bool)
0x85c: Stack[-2] = "cot_maria@door1"
0x85d: Stack[-1] = (bool) 0
0x85e: Call2 0x7ed

0x85f: Pop(2)
0x860: Return(); Pop(0)

0x861: PushEmpty()
0x862: Push("b6ViktorVisit")
0x863: Push((int) 1)
0x864: @ SetVariable(Stack[-2], Stack[-1])
0x865: Pop(2)
0x866: Return(); Pop(0)

0x867: PushEmpty()
0x868: Push("playsound")
0x869: Push("mapmark")
0x86a: @ TriggerWorld(Stack[-2], Stack[-1])
0x86b: Pop(2)
0x86c: Return(); Pop(0)

0x86d: PushEmpty()
0x86e: PushEmpty(int, string)
0x86f: Stack[-1] = "b6q03NinaTalk"
0x870: Call2 0x7e8

0x871: Pop(1)
0x872: Push((int) 0)
0x873: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x875: Stack[-2] = (bool) 1
0x876: Return(); Pop(0)

0x877: Stack[-2] = (bool) 0
0x878: Return(); Pop(0)

0x879: PushEmpty()
0x87a: PushEmpty(int, string)
0x87b: Stack[-1] = "oob6Viktor1"
0x87c: Call2 0x7e8

0x87d: Pop(1)
0x87e: Push((int) 0)
0x87f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x880: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x881: Stack[-2] = (bool) 1
0x882: Return(); Pop(0)

0x883: Stack[-2] = (bool) 0
0x884: Return(); Pop(0)

0x885: PushEmpty()
0x886: PushEmpty(int, string)
0x887: Stack[-1] = "b7q01"
0x888: Call2 0x7e8

0x889: Pop(1)
0x88a: Push((int) 5)
0x88b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x88c: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88d: Stack[-2] = (bool) 1
0x88e: Return(); Pop(0)

0x88f: Stack[-2] = (bool) 0
0x890: Return(); Pop(0)

0x891: PushEmpty(object, object)
0x892: Push((int) 262)
0x893: Push((int) 1)
0x894: Push((int) 521035)
0x895: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x896: Pop(3)
0x897: PushEmpty(bool, object, int)
0x898: Stack[-2] = Stack[-4]
0x899: Stack[-1] = (int) 253
0x89a: Call2 0x8ab

0x89b: Pop(3)
0x89c: Return(); Pop(2)

0x89d: Stack[-1] = 0
0x89e: PushEmpty(object, object)
0x89f: @ GetDiaryRoot(Stack[-1])
0x8a0: Pop(0)
0x8a1: Pop(0); Push((bool) Stack[-1] == 0)
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a3: Push("Can't retrieve diary root")
0x8a4: @ Trace(Stack[-1])
0x8a5: Pop(1)
0x8a6: Stack[-3] = (bool) 0
0x8a7: Return(); Pop(2)

0x8a8: Stack[-3] = Stack[-1]
0x8a9: Return(); Pop(2)

0x8aa: Stack[-1] = 0
0x8ab: PushEmpty(object, object, int, object, object, int)
0x8ac: PushEmpty(object)
0x8ad: Call2 0x89e

0x8ae: Stack[-4] = Stack[-1]
0x8af: Pop(1)
0x8b0: @@ Find(Stack[-7], Stack[-2])
0x8b1: Pop(0)
0x8b2: Pop(0); Push((bool) Stack[-2] == 0)
0x8b3: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b4: Push("Can't find diary parent with id: ")
0x8b5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8b6: @ Trace(Stack[-1])
0x8b7: Pop(1)
0x8b8: Stack[-9] = (bool) 0
0x8b9: Return(); Pop(6)

0x8ba: @@ AddChild(Stack[-8])
0x8bb: Pop(0)
0x8bc: Push((int) 7)
0x8bd: @ SendWorldWndMessage(Stack[-1])
0x8be: Pop(1)
0x8bf: @@ GetCategory(Stack[-1])
0x8c0: Pop(0)
0x8c1: @ SetDiarySection(Stack[-1])
0x8c2: Pop(0)
0x8c3: Stack[-9] = (bool) 0
0x8c4: Return(); Pop(6)

0x8c5: Stack[-2] = 0
0x8c6: Stack[-3] = 0
0x8c7: PushEmpty(object, object, object, object)
0x8c8: @ GetMainOutdoorScene(Stack[-2])
0x8c9: Pop(0)
0x8ca: Pop(0); Push((bool) Stack[-2] == 0)
0x8cb: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8cc: Push("Can't find main outdoor scene")
0x8cd: @ Trace(Stack[-1])
0x8ce: Pop(1)
0x8cf: Stack[-1] = 0
0x8d0: Stack[-5] = Stack[-1]
0x8d1: Return(); Pop(4)

0x8d2: @@ GetMap(Stack[-1])
0x8d3: Pop(0)
0x8d4: Stack[-5] = Stack[-1]
0x8d5: Return(); Pop(4)

0x8d6: Stack[-1] = 0
0x8d7: Stack[-2] = 0
0x8d8: PushEmpty(int, int)
0x8d9: Push("branch")
0x8da: @ GetVariable(Stack[-1], Stack[-2])
0x8db: Pop(1)
0x8dc: Push((int) 0)
0x8dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8df: Stack[-3] = (int) 1
0x8e0: Return(); Pop(2)

0x8e1: GOTO 0x8e7

0x8e2: Push((int) 1)
0x8e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e5: Stack[-3] = (int) 2
0x8e6: Return(); Pop(2)

0x8e7: Stack[-3] = (int) 3
0x8e8: Return(); Pop(2)

0x8e9: PushEmpty()
0x8ea: Push(GlobalVars[1])
0x8eb: Pop(1); Push((bool) Stack[-1] == 0)
0x8ec: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8ed: PushEmpty(int, object)
0x8ee: Stack[-1] = Stack[-3]
0x8ef: Push(-2, 1); TaskCall(1)
0x8f0: Call2 0xd

0x8f1: Pop(-2, 1); TaskReturn
0x8f2: Pop(2)
0x8f3: Push(GlobalVars[1])
0x8f4: Stack[-1] = (bool) 1
0x8f5: GlobalVars[1] = Stack[-1]; Pop(1)
0x8f6: PushEmpty(bool, int)
0x8f7: Stack[-1] = (int) 6
0x8f8: Call2 0x818

0x8f9: Pop(1)
0x8fa: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8fb: PushEmpty(int, object)
0x8fc: Stack[-1] = Stack[-3]
0x8fd: Push(-2, 1); TaskCall(5)
0x8fe: Call2 0x2d1

0x8ff: Pop(-2, 1); TaskReturn
0x900: Pop(2)
0x901: Return(); Pop(0)

0x902: PushEmpty(bool, int)
0x903: Stack[-1] = (int) 7
0x904: Call2 0x818

0x905: Pop(1)
0x906: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x907: PushEmpty(int, object)
0x908: Stack[-1] = Stack[-3]
0x909: Push(-2, 1); TaskCall(3)
0x90a: Call2 0x106

0x90b: Pop(-2, 1); TaskReturn
0x90c: Pop(2)
0x90d: Return(); Pop(0)

0x90e: PushEmpty(bool)
0x90f: Stack[-1] = (bool) 0
0x910: PushEmpty(bool, int)
0x911: Stack[-1] = (int) 12
0x912: Call2 0x818

0x913: Pop(1)
0x914: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x915: Push(GlobalVars[2])
0x916: Pop(1); Push((bool) Stack[-1] == 0)
0x917: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x918: Stack[-1] = (bool) 1
0x919: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x91a: PushEmpty(int, object)
0x91b: Stack[-1] = Stack[-3]
0x91c: Push(-2, 1); TaskCall(7)
0x91d: Call2 0x481

0x91e: Pop(-2, 1); TaskReturn
0x91f: Pop(2)
0x920: Push(GlobalVars[2])
0x921: Stack[-1] = (bool) 1
0x922: GlobalVars[2] = Stack[-1]; Pop(1)
0x923: Return(); Pop(0)

0x924: PushEmpty(int, object)
0x925: Stack[-1] = Stack[-3]
0x926: Push(-2, 1); TaskCall(9)
0x927: Call2 0x584

0x928: Pop(-2, 1); TaskReturn
0x929: Pop(2)
0x92a: Return(); Pop(0)

