GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	d7q01
	mreport is given
	d7q01_mreport
	ood7MBirdmask1
	quest_d7_01
	sobor_teleport
	GetItemCount
	bird_mask
	bird_balahon
	GetItem
	IsItemSelected
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	player
	Adding diary entry
	ui/NPC_Black.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x288
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xce Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x28c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x294

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x3e2

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x3e4

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x3c1

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x2cc

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x35b

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0xbe

0x4d: Pop(1)
0x4e: Push((int) 13212)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 13213)
0x54: Push((int) 14437)
0x55: Push((int) 14436)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0xa0

0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call 0x345

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call 0x351

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x67: PushEmpty(string)
0x68: Stack[-1] = "Neutral"
0x69: Call 0xbe

0x6a: Pop(1)
0x6b: Push((int) 13216)
0x6c: @@ SetMessage(Stack[-1])
0x6d: Pop(1)
0x6e: @@ ClearReplies()
0x6f: Pop(0)
0x70: Push((int) 13217)
0x71: Push((int) 14441)
0x72: Push((int) 14440)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: Push((int) 13220)
0x76: Push((int) 14444)
0x77: Push((int) 14443)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: Push((int) 13224)
0x7b: Push((int) 14441)
0x7c: Push((int) 14447)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: GOTO 0xa0

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call 0x345

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x85: PushEmpty(string)
0x86: Stack[-1] = "Neutral"
0x87: Call 0xbe

0x88: Pop(1)
0x89: Push((int) 13231)
0x8a: @@ SetMessage(Stack[-1])
0x8b: Pop(1)
0x8c: @@ ClearReplies()
0x8d: Pop(0)
0x8e: Push((int) 13232)
0x8f: Push((int) 14456)
0x90: Push((int) 14455)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: Push((int) 13248)
0x94: Push((int) 16562)
0x95: Push((int) 14473)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: Push((int) 13249)
0x99: Push((int) -1)
0x9a: Push((int) 14475)
0x9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c: Pop(3)
0x9d: GOTO 0xa0

0x9e: Return(); Pop(0)

0x9f: GOTO 0x43

0xa0: PushEmpty(bool)
0xa1: Call 0x3e6

0xa2: Pop(0)
0xa3: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa4: @ lshWaitForAnimEnd()
0xa5: Pop(0)
0xa6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: GOTO 0xae

0xa9: PushEmpty(string)
0xaa: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xab: Call 0x2d0

0xac: Pop(1)
0xad: GOTO 0xa4

0xae: GOTO 0xbd

0xaf: Push("all")
0xb0: Push("idle")
0xb1: @ PlayAnimation(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: @ WaitForAnimEnd()
0xb4: Pop(0)
0xb5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: GOTO 0xbd

0xb8: Push("all")
0xb9: Push("idle")
0xba: @ PlayAnimation(Stack[-2], Stack[-1])
0xbb: Pop(2)
0xbc: GOTO 0xb3

0xbd: Return(); Pop(0)

0xbe: PushEmpty()
0xbf: PushEmpty(bool)
0xc0: Call 0x3e6

0xc1: Pop(0)
0xc2: Pop(1); Push((bool) Stack[-1] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Return(); Pop(0)

0xc5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc6: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc7: Return(); Pop(0)

0xc8: PushEmpty(string)
0xc9: Stack[-1] = Stack[-2]
0xca: Call 0x2d0

0xcb: Pop(1)
0xcc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: Push((int) 1)
0xd0: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0xd1: PushEmpty()
0xd2: Call 0x2e2

0xd3: Pop(0)
0xd4: Push((int) 14438)
0xd5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call 0x338

0xdb: Pop(2)
0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call 0x32d

0xe0: Pop(2)
0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call 0x31e

0xe5: Pop(2)
0xe6: Push((int) 14485)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call 0x324

0xed: Pop(2)
0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call 0x33e

0xf2: Pop(2)
0xf3: Push((int) 14446)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call 0x324

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call 0x33e

0xff: Pop(2)
0x100: Push((int) 16565)
0x101: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call 0x324

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call 0x33e

0x10c: Pop(2)
0x10d: Push((int) 16566)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call 0x324

0x114: Pop(2)
0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call 0x33e

0x119: Pop(2)
0x11a: Push((int) 14435)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x11d: PushEmpty(bool, object)
0x11e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Call 0x35b

0x120: Pop(1)
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call 0xbe

0x125: Pop(1)
0x126: Push((int) 13212)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 13213)
0x12c: Push((int) 14437)
0x12d: Push((int) 14436)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: PushEmpty(bool)
0x132: Stack[-1] = (bool) 0
0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call 0x345

0x136: Pop(1)
0x137: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x138: PushEmpty(bool, object)
0x139: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Call 0x351

0x13b: Pop(1)
0x13c: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13d: Stack[-1] = (bool) 1
0x13e: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call 0xbe

0x142: Pop(1)
0x143: Push((int) 13216)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 13217)
0x149: Push((int) 14441)
0x14a: Push((int) 14440)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 13220)
0x14e: Push((int) 14444)
0x14f: Push((int) 14443)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 13224)
0x153: Push((int) 14441)
0x154: Push((int) 14447)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Call 0x345

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call 0xbe

0x160: Pop(1)
0x161: Push((int) 13231)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 13232)
0x167: Push((int) 14456)
0x168: Push((int) 14455)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 13248)
0x16c: Push((int) 16562)
0x16d: Push((int) 14473)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 13249)
0x171: Push((int) -1)
0x172: Push((int) 14475)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 14456)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral"
0x17b: Call 0xbe

0x17c: Pop(1)
0x17d: Push((int) 13233)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 13234)
0x183: Push((int) 14458)
0x184: Push((int) 14457)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 13240)
0x188: Push((int) 14469)
0x189: Push((int) 14463)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 13244)
0x18d: Push((int) 14464)
0x18e: Push((int) 14468)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 14464)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call 0xbe

0x198: Pop(1)
0x199: Push((int) 13241)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 13242)
0x19f: Push((int) -1)
0x1a0: Push((int) 14465)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 13243)
0x1a4: Push((int) 16562)
0x1a5: Push((int) 14466)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 14469)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call 0xbe

0x1af: Pop(1)
0x1b0: Push((int) 13245)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 13246)
0x1b6: Push((int) -1)
0x1b7: Push((int) 14470)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Push((int) 13247)
0x1bb: Push((int) 16562)
0x1bc: Push((int) 14471)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 14458)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral"
0x1c5: Call 0xbe

0x1c6: Pop(1)
0x1c7: Push((int) 13235)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 13236)
0x1cd: Push((int) 16562)
0x1ce: Push((int) 14459)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Push((int) 13239)
0x1d2: Push((int) -1)
0x1d3: Push((int) 14462)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 16562)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral"
0x1dc: Call 0xbe

0x1dd: Pop(1)
0x1de: Push((int) 15419)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 15420)
0x1e4: Push((int) -1)
0x1e5: Push((int) 16565)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 15421)
0x1e9: Push((int) -1)
0x1ea: Push((int) 16566)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 14444)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral"
0x1f3: Call 0xbe

0x1f4: Pop(1)
0x1f5: Push((int) 13221)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 13222)
0x1fb: Push((int) -1)
0x1fc: Push((int) 14445)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 13223)
0x200: Push((int) -1)
0x201: Push((int) 14446)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 14441)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral"
0x20a: Call 0xbe

0x20b: Pop(1)
0x20c: Push((int) 13218)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 13219)
0x212: Push((int) -1)
0x213: Push((int) 14442)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 13259)
0x217: Push((int) -1)
0x218: Push((int) 14485)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: Push((int) 14437)
0x21d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x21f: PushEmpty(string)
0x220: Stack[-1] = "Neutral"
0x221: Call 0xbe

0x222: Pop(1)
0x223: Push((int) 13214)
0x224: @@ SetMessage(Stack[-1])
0x225: Pop(1)
0x226: @@ ClearReplies()
0x227: Pop(0)
0x228: Push((int) 13250)
0x229: Push((int) 14478)
0x22a: Push((int) 14476)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Push((int) 13251)
0x22e: Push((int) 14482)
0x22f: Push((int) 14477)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Return(); Pop(0)

0x233: Push((int) 14482)
0x234: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral"
0x238: Call 0xbe

0x239: Pop(1)
0x23a: Push((int) 13256)
0x23b: @@ SetMessage(Stack[-1])
0x23c: Pop(1)
0x23d: @@ ClearReplies()
0x23e: Pop(0)
0x23f: Push((int) 13257)
0x240: Push((int) 14484)
0x241: Push((int) 14483)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Return(); Pop(0)

0x245: Push((int) 14484)
0x246: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x248: PushEmpty(string)
0x249: Stack[-1] = "Neutral"
0x24a: Call 0xbe

0x24b: Pop(1)
0x24c: Push((int) 13258)
0x24d: @@ SetMessage(Stack[-1])
0x24e: Pop(1)
0x24f: @@ ClearReplies()
0x250: Pop(0)
0x251: Push((int) 13215)
0x252: Push((int) -1)
0x253: Push((int) 14438)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Return(); Pop(0)

0x257: Push((int) 14478)
0x258: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Neutral"
0x25c: Call 0xbe

0x25d: Pop(1)
0x25e: Push((int) 13252)
0x25f: @@ SetMessage(Stack[-1])
0x260: Pop(1)
0x261: @@ ClearReplies()
0x262: Pop(0)
0x263: Push((int) 13253)
0x264: Push((int) 14480)
0x265: Push((int) 14479)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: Return(); Pop(0)

0x269: Push((int) 14480)
0x26a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x26c: PushEmpty(string)
0x26d: Stack[-1] = "Neutral"
0x26e: Call 0xbe

0x26f: Pop(1)
0x270: Push((int) 13254)
0x271: @@ SetMessage(Stack[-1])
0x272: Pop(1)
0x273: @@ ClearReplies()
0x274: Pop(0)
0x275: Push((int) 13255)
0x276: Push((int) -1)
0x277: Push((int) 14481)
0x278: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x279: Pop(3)
0x27a: Return(); Pop(0)

0x27b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x27c: PushEmpty(bool)
0x27d: Call 0x3e6

0x27e: Pop(0)
0x27f: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x280: @ lshStopAnimation()
0x281: Pop(0)
0x282: GOTO 0x285

0x283: @ StopAnimation()
0x284: Pop(0)
0x285: Return(); Pop(0)

0x286: GOTO 0xcf

0x287: Return(); Pop(0)

0x288: @ Hold()
0x289: Pop(0)
0x28a: GOTO 0x288

0x28b: Return(); Pop(0)

0x28c: PushEmpty()
0x28d: PushEmpty(int, object)
0x28e: Stack[-1] = Stack[-3]
0x28f: Push(-2, 1); TaskCall(0)
0x290: Call 0x0

0x291: Pop(-2, 1); TaskReturn
0x292: Pop(2)
0x293: Return(); Pop(0)

0x294: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x295: @@ GetPosition(Stack[-7])
0x296: Pop(0)
0x297: @@ GetEyesHeight(Stack[-8])
0x298: Pop(0)
0x299: Push(CvectorIndex(Stack[-7], 1))
0x29a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x29b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x29c: @ GetPosition(Stack[-6])
0x29d: Pop(0)
0x29e: @ GetEyesHeight(Stack[-8])
0x29f: Pop(0)
0x2a0: Push(CvectorIndex(Stack[-6], 1))
0x2a1: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x2a2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2a3: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x2a4: Push(CvectorIndex(Stack[-5], 1))
0x2a5: Stack[-1] = (int) 0
0x2a6: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x2a7: Pop(0); Push(Stack[-5] | Stack[-5]);
0x2a8: Pop(1); Push(Sqrt(Stack[-1]))
0x2a9: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x2aa: Stack[-4] = -Stack[-5]; Pop(0);
0x2ab: Push((int) 70)
0x2ac: Pop(1); Push(Stack[-6] * Stack[-1]);
0x2ad: PushEmpty(cvector, cvector)
0x2ae: Push(CVector(0.0, 1.0, 0.0))
0x2af: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x2b0: Call 0x2e9

0x2b1: Pop(1)
0x2b2: Push((int) 25)
0x2b3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b5: Push(CVector(0.0, 10.0, 0.0))
0x2b6: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x2b7: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x2b8: @ IsOverrideActive(Stack[-1])
0x2b9: Pop(0)
0x2ba: Push(Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: Stack[-18] = (bool) 0
0x2bd: Return(); Pop(16)

0x2be: @ StopWorld()
0x2bf: Pop(0)
0x2c0: @ CameraTransit(Stack[-2], Stack[-4])
0x2c1: Pop(0)
0x2c2: Push(CvectorIndex(Stack[-3], 0))
0x2c3: Push(CvectorIndex(Stack[-4], 2))
0x2c4: @ Rotate(Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: @ CameraWaitForPlayFinish()
0x2c7: Pop(0)
0x2c8: @ ResumeWorld()
0x2c9: Pop(0)
0x2ca: Stack[-18] = (bool) 1
0x2cb: Return(); Pop(16)

0x2cc: PushEmpty()
0x2cd: @ CameraSwitchToNormal()
0x2ce: Pop(0)
0x2cf: Return(); Pop(0)

0x2d0: PushEmpty(float, float, float, float)
0x2d1: Push("playing ")
0x2d2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2d3: @ Trace(Stack[-1])
0x2d4: Pop(1)
0x2d5: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2d6: Pop(0)
0x2d7: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x2d8: Pop(0)
0x2d9: Push("start: ")
0x2da: Pop(1); Push(Stack[-1] + Stack[-3]);
0x2db: @ Trace(Stack[-1])
0x2dc: Pop(1)
0x2dd: Push("end: ")
0x2de: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2df: @ Trace(Stack[-1])
0x2e0: Pop(1)
0x2e1: Return(); Pop(4)

0x2e2: PushEmpty(bool)
0x2e3: Call 0x3e6

0x2e4: Pop(0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: @ lshStopSpeech()
0x2e7: Pop(0)
0x2e8: Return(); Pop(0)

0x2e9: PushEmpty(float, float)
0x2ea: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2eb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ec: Push((float)0.0)
0x2ed: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2f0: Return(); Pop(2)

0x2f1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2f2: Return(); Pop(2)

0x2f3: PushEmpty(int, int)
0x2f4: @ GetVariable(Stack[-3], Stack[-1])
0x2f5: Pop(0)
0x2f6: Stack[-4] = Stack[-1]
0x2f7: Return(); Pop(2)

0x2f8: PushEmpty(int, int, bool, int, int, bool)
0x2f9: @@ GetItemID(Stack[-3])
0x2fa: Pop(0)
0x2fb: Push("Category")
0x2fc: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x2fd: Pop(1)
0x2fe: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x2ff: Pop(0)
0x300: Pop(0); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: @@ DropItems(Stack[-8], Stack[-7])
0x303: Pop(0)
0x304: Return(); Pop(6)

0x305: PushEmpty(object, object)
0x306: @ CreateInvItem(Stack[-1])
0x307: Pop(0)
0x308: @@ SetItemName(Stack[-4])
0x309: Pop(0)
0x30a: PushEmpty(object, object, int)
0x30b: Stack[-3] = Stack[-8]
0x30c: Stack[-2] = Stack[-4]
0x30d: Stack[-1] = Stack[-6]
0x30e: Call 0x2f8

0x30f: Pop(3)
0x310: Return(); Pop(2)

0x311: Stack[-1] = 0
0x312: PushEmpty(object, object)
0x313: @ FindActor(Stack[-1], Stack[-4])
0x314: Pop(0)
0x315: Pop(0); Push((bool) Stack[-1] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: Stack[-5] = (bool) 0
0x318: Return(); Pop(2)

0x319: @ Trigger(Stack[-1], Stack[-3])
0x31a: Pop(0)
0x31b: Stack[-5] = (bool) 1
0x31c: Return(); Pop(2)

0x31d: Stack[-1] = 0
0x31e: PushEmpty()
0x31f: Push("playsound")
0x320: Push("giveitem")
0x321: @ TriggerWorld(Stack[-2], Stack[-1])
0x322: Pop(2)
0x323: Return(); Pop(0)

0x324: PushEmpty()
0x325: Push("d7q01")
0x326: Push((int) 3)
0x327: @ SetVariable(Stack[-2], Stack[-1])
0x328: Pop(2)
0x329: PushEmpty()
0x32a: Call 0x3d2

0x32b: Pop(0)
0x32c: Return(); Pop(0)

0x32d: PushEmpty()
0x32e: Push("mreport is given")
0x32f: @ Trace(Stack[-1])
0x330: Pop(1)
0x331: PushEmpty(object, string, int)
0x332: Stack[-3] = Stack[-5]
0x333: Stack[-2] = "d7q01_mreport"
0x334: Stack[-1] = (int) 1
0x335: Call 0x305

0x336: Pop(3)
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: Push("ood7MBirdmask1")
0x33a: Push((int) 1)
0x33b: @ SetVariable(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: Return(); Pop(0)

0x33e: PushEmpty()
0x33f: PushEmpty(bool, string, string)
0x340: Stack[-2] = "quest_d7_01"
0x341: Stack[-1] = "sobor_teleport"
0x342: Call 0x312

0x343: Pop(3)
0x344: Return(); Pop(0)

0x345: PushEmpty()
0x346: PushEmpty(int, string)
0x347: Stack[-1] = "d7q01"
0x348: Call 0x2f3

0x349: Pop(1)
0x34a: Push((int) 2)
0x34b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-2] = (bool) 1
0x34e: Return(); Pop(0)

0x34f: Stack[-2] = (bool) 0
0x350: Return(); Pop(0)

0x351: PushEmpty()
0x352: PushEmpty(bool, object)
0x353: Stack[-1] = Stack[-3]
0x354: Call 0x367

0x355: Pop(1)
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-2] = (bool) 1
0x358: Return(); Pop(0)

0x359: Stack[-2] = (bool) 0
0x35a: Return(); Pop(0)

0x35b: PushEmpty()
0x35c: PushEmpty(int, string)
0x35d: Stack[-1] = "ood7MBirdmask1"
0x35e: Call 0x2f3

0x35f: Pop(1)
0x360: Push((int) 0)
0x361: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-2] = (bool) 1
0x364: Return(); Pop(0)

0x365: Stack[-2] = (bool) 0
0x366: Return(); Pop(0)

0x367: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x368: Push((int) 1)
0x369: @@ GetItemCount(Stack[-11], Stack[-1])
0x36a: Pop(1)
0x36b: Push("bird_mask")
0x36c: @ GetInvItemByName(Stack[-10], Stack[-1])
0x36d: Pop(1)
0x36e: Push("bird_balahon")
0x36f: @ GetInvItemByName(Stack[-9], Stack[-1])
0x370: Pop(1)
0x371: Stack[-7] = (bool) 0
0x372: Stack[-6] = (bool) 0
0x373: Stack[-5] = (int) 0
0x374: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x375: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x376: Push((int) 1)
0x377: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x378: Pop(1)
0x379: @@ GetItemID(Stack[-3])
0x37a: Pop(0)
0x37b: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x37c: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37d: Push((int) 1)
0x37e: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0x37f: Pop(1)
0x380: Push(Stack[-2])
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: Stack[-7] = (bool) 1
0x383: GOTO 0x38c

0x384: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x385: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x386: Push((int) 1)
0x387: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0x388: Pop(1)
0x389: Push(Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Stack[-6] = (bool) 1
0x38c: Stack[-4] = 0
0x38d: Push((int) 1)
0x38e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x38f: GOTO 0x374

0x390: Stack[-22] = (bool) 0
0x391: Push(Stack[-7])
0x392: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x393: Push(Stack[-6])
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: Stack[-22] = (bool) 1
0x396: Return(); Pop(20)

0x397: PushEmpty(object, object)
0x398: @ GetDiaryRoot(Stack[-1])
0x399: Pop(0)
0x39a: Pop(0); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: Push("Can't retrieve diary root")
0x39d: @ Trace(Stack[-1])
0x39e: Pop(1)
0x39f: Stack[-3] = (bool) 0
0x3a0: Return(); Pop(2)

0x3a1: Stack[-3] = Stack[-1]
0x3a2: Return(); Pop(2)

0x3a3: Stack[-1] = 0
0x3a4: PushEmpty(object, object, int, object, object, int)
0x3a5: PushEmpty(object)
0x3a6: Call 0x397

0x3a7: Stack[-4] = Stack[-1]
0x3a8: Pop(1)
0x3a9: @@ Find(Stack[-7], Stack[-2])
0x3aa: Pop(0)
0x3ab: Pop(0); Push((bool) Stack[-2] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ad: Push("Can't find diary parent with id: ")
0x3ae: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3af: @ Trace(Stack[-1])
0x3b0: Pop(1)
0x3b1: Stack[-9] = (bool) 0
0x3b2: Return(); Pop(6)

0x3b3: @@ AddChild(Stack[-8])
0x3b4: Pop(0)
0x3b5: Push("player_diary")
0x3b6: Push((int) 1)
0x3b7: @ SetVariable(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @@ GetCategory(Stack[-1])
0x3ba: Pop(0)
0x3bb: @ SetDiarySection(Stack[-1])
0x3bc: Pop(0)
0x3bd: Stack[-9] = (bool) 0
0x3be: Return(); Pop(6)

0x3bf: Stack[-2] = 0
0x3c0: Stack[-3] = 0
0x3c1: PushEmpty(int, int)
0x3c2: Push("player")
0x3c3: @ GetVariable(Stack[-1], Stack[-2])
0x3c4: Pop(1)
0x3c5: Push((int) 0)
0x3c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c8: Stack[-3] = (int) 200001
0x3c9: Return(); Pop(2)

0x3ca: GOTO 0x3d0

0x3cb: Push((int) 1)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ce: Stack[-3] = (int) 200002
0x3cf: Return(); Pop(2)

0x3d0: Stack[-3] = (int) 200003
0x3d1: Return(); Pop(2)

0x3d2: PushEmpty(object, object)
0x3d3: Push("Adding diary entry")
0x3d4: @ Trace(Stack[-1])
0x3d5: Pop(1)
0x3d6: Push((int) 169)
0x3d7: Push((int) 1)
0x3d8: Push((int) 15418)
0x3d9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3da: Pop(3)
0x3db: PushEmpty(bool, object, int)
0x3dc: Stack[-2] = Stack[-4]
0x3dd: Stack[-1] = (int) 165
0x3de: Call 0x3a4

0x3df: Pop(3)
0x3e0: Return(); Pop(2)

0x3e1: Stack[-1] = 0
0x3e2: Stack[-1] = (int) 4029
0x3e3: Return(); Pop(0)

0x3e4: Stack[-1] = "ui/NPC_Black.png"
0x3e5: Return(); Pop(0)

0x3e6: Stack[-1] = (bool) 0
0x3e7: Return(); Pop(0)

