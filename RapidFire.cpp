rapid fire (FireUwU)
uintptr_t CurrentWeapon = vmread<uintptr_t>(settings::LocalPawn + 0x868); // FortPawn::CurrentWeapon 0x868
Writee<float>(CurrentWeapon + 0x64, 90); // Actor::CustomTimeDilation 0x64
big players (FireUwU)

uintptr_t mesh = vmread<uintptr_t>(entity.Actor + 0x310);
float BigPlayersScale = 50.f;20
