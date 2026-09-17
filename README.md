# HuuHungSAMP

**Native iOS SA-MP client target: GTA San Andreas iOS 2.2.21 / ARM64.**

The project uses Alyn v17.1 as the functional/UI reference and BN_JK as the 2.2.21 reverse-engineering reference. Branding is `HuuHungSAMP`.

### Components
- Native C++ core
- RakNet source baseline
- SA-MP packet/RPC primitives
- player/vehicle/object pools
- iOSGameAdapter
- BN_JK 2.2.21 image-address table
- Swift UIKit launcher
- unsigned ARM64 GitHub Actions build

The GTA SA payload is intentionally not stored in GitHub. The final runtime hook bodies must be validated against the exact 2.2.21 binary on-device; addresses in BN_JK are image addresses and are ASLR-adjusted by the adapter.
