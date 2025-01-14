## [2.12.4](https://github.com/SteamClientHomebrew/Millennium/compare/v2.12.3...v2.12.4) (2024-10-11)


### Bug Fixes

* Fix issues with the plugin example crashing. ([8624fab](https://github.com/SteamClientHomebrew/Millennium/commit/8624fab5942c684291edc1c0b8a090731dcd91c0))

## [2.12.3](https://github.com/SteamClientHomebrew/Millennium/compare/v2.12.2...v2.12.3) (2024-10-07)


### Bug Fixes

* Actually fix the CI. ([6051ee2](https://github.com/SteamClientHomebrew/Millennium/commit/6051ee2fa4e307633cd143fced91c2507a39bf24))

## [2.12.2](https://github.com/SteamClientHomebrew/Millennium/compare/v2.12.1...v2.12.2) (2024-10-07)


### Bug Fixes

* Fix CI ([966fc22](https://github.com/SteamClientHomebrew/Millennium/commit/966fc22422e1b38c6f09c81984f57b53c8445ba7))
* Fix CI output paths ([9bf0b09](https://github.com/SteamClientHomebrew/Millennium/commit/9bf0b09e3ed3c8b8c160e5f30198f86b66b9e967))
* Platform bug fixes ([2b63f68](https://github.com/SteamClientHomebrew/Millennium/commit/2b63f682c9e5b5d969251a2ed0b39c2d7a1f098c))
* Update installed themes in the dropdown without having to close and open settings ([e7303c1](https://github.com/SteamClientHomebrew/Millennium/commit/e7303c174eb6fb2f0974a6fe3a014ab60c839b08))

## [2.12.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.12.0...v2.12.1) (2024-10-06)


### Bug Fixes

* Fix updater bug. ([acb0437](https://github.com/SteamClientHomebrew/Millennium/commit/acb0437367736cecbd5d65123e08620ed043f24b))

# [2.12.0](https://github.com/shdwmtr/millennium/compare/v2.11.1...v2.12.0) (2024-10-06)


### Bug Fixes

* Check if jq is installed ([#109](https://github.com/shdwmtr/millennium/issues/109)) ([319c814](https://github.com/shdwmtr/millennium/commit/319c81453331370ca63bc3ed8cf8227fef4712d7))
* Fix issues where target port is "taken" when it's actually open and usable. [#122](https://github.com/shdwmtr/millennium/issues/122) ([ffce333](https://github.com/shdwmtr/millennium/commit/ffce333834b8e255c815def3b2d68d5bf4045310))
* Fix updater not restarting steam properly ([2ece336](https://github.com/shdwmtr/millennium/commit/2ece33607904656847ac1594f6e3b8a7094e5a2f))
* Prevent logs files from getting too large ([e2aa7fd](https://github.com/shdwmtr/millennium/commit/e2aa7fd1927e1caf78628e97b25e8b1aa05ff8fc))
* Update theme dialog dropdown content on the fly. ([1944410](https://github.com/shdwmtr/millennium/commit/194441091a7dfa13fd0bd2d6eadbb85a98a55dc6))


### Features

* Add "webkitCSS" && "webkitJS" options ([019565e](https://github.com/shdwmtr/millennium/commit/019565e60f68d51a45a20acf8a67255cd50f8ad2))
* Add auto theme installer ([b732bc9](https://github.com/shdwmtr/millennium/commit/b732bc93684753b1164154a1f4bc2ee605d4357e))
* Add webkit JS option in skin.json ([3d360a4](https://github.com/shdwmtr/millennium/commit/3d360a4d4a98bc366b807fcd46248980a092f21a))

## [2.11.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.11.0...v2.11.1) (2024-09-01)


### Bug Fixes

* Fix skin not applying after BPM exit [#96](https://github.com/SteamClientHomebrew/Millennium/issues/96) ([ba9e001](https://github.com/SteamClientHomebrew/Millennium/commit/ba9e001c92f24e0d5420e41ae696789601b0285f))

# [2.11.0](https://github.com/SteamClientHomebrew/Millennium/compare/v2.10.1...v2.11.0) (2024-08-31)


### Features

* Theme option tabs ([#94](https://github.com/SteamClientHomebrew/Millennium/issues/94)) ([cc6e339](https://github.com/SteamClientHomebrew/Millennium/commit/cc6e339ef454478c9945a8512851ff79a3a12c1b))

## [2.10.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.10.0...v2.10.1) (2024-08-28)


### Bug Fixes

* Fix race condition causing boot loop ([f3c9e88](https://github.com/SteamClientHomebrew/Millennium/commit/f3c9e881eca3642885eb953801dc6dcc4bcd0058))
* Fix Unix start script paths ([f4f2bb7](https://github.com/SteamClientHomebrew/Millennium/commit/f4f2bb7675e5e3a0ead907f69385683624624d63))

# [2.10.0](https://github.com/SteamClientHomebrew/Millennium/compare/v2.9.4...v2.10.0) (2024-08-28)


### Bug Fixes

* Check if a queried plugin is already loaded before starting it ([5fa6d99](https://github.com/SteamClientHomebrew/Millennium/commit/5fa6d998b5938c410689dbeb9bb6461425813c87))
* Decrease release binary size on linux ([dd0600a](https://github.com/SteamClientHomebrew/Millennium/commit/dd0600ac8906d81ffc281566ea4ec839f54a2a64))
* Fix CI ([c952fbf](https://github.com/SteamClientHomebrew/Millennium/commit/c952fbf10f0af532e86430bbc8b37c99fff44aa8))
* Fix CLI paths to use updated refs ([59b91dd](https://github.com/SteamClientHomebrew/Millennium/commit/59b91ddd70e8593f55e3731850ce16d0eb392a48))
* Fix crashes on Steam close ([4d09aa6](https://github.com/SteamClientHomebrew/Millennium/commit/4d09aa688dd31758a222f5a9d44761fcb4086e14))
* Fix edge case SEGV ([b17146d](https://github.com/SteamClientHomebrew/Millennium/commit/b17146d3febe448c577bf19ac9107f931e93144b))
* Fix linux startup issues [#75](https://github.com/SteamClientHomebrew/Millennium/issues/75) ([dad87ba](https://github.com/SteamClientHomebrew/Millennium/commit/dad87ba8ba76f4df4ff033f14f68d2c53651a85f))
* Fix Mac OS support. ([6b9997b](https://github.com/SteamClientHomebrew/Millennium/commit/6b9997be621223c0fb1ce64c4c09aa8fc7d68f93))
* Fix race condition causing Millennium to get stuck on "Notifying frontend of backend load..." ([63973b2](https://github.com/SteamClientHomebrew/Millennium/commit/63973b293cfb22f6f1803cc3e46eee8353f4b5cb))
* Fix startup bugs on Windows [#76](https://github.com/SteamClientHomebrew/Millennium/issues/76) ([b86c537](https://github.com/SteamClientHomebrew/Millennium/commit/b86c537b42ae5e11bf9793b2d7ab696e9fedcd96))
* Fix startup issues on Linux ([9fcf293](https://github.com/SteamClientHomebrew/Millennium/commit/9fcf29307737bee8b1ca9473548b3958756f474d))
* Fix startup issues on windows [#76](https://github.com/SteamClientHomebrew/Millennium/issues/76) ([aa2ade2](https://github.com/SteamClientHomebrew/Millennium/commit/aa2ade25f58da642c68b8305778d8b2619253369))
* Fix threaded race condition ([08ab88d](https://github.com/SteamClientHomebrew/Millennium/commit/08ab88dc37a614c965b1b6f4d83d7953a7c688a6))
* Issues where Steam would show prematurely ([486e892](https://github.com/SteamClientHomebrew/Millennium/commit/486e89232140ebe0512ce921f3a32b324d8f00ea))
* Unix build bug fixes ([0745446](https://github.com/SteamClientHomebrew/Millennium/commit/0745446a6596b0a2435ad76d0e248686eb5dcfd7))


### Features

* Better, easier to view installer for linux ([fd27c80](https://github.com/SteamClientHomebrew/Millennium/commit/fd27c802b49c150cd8ef6f701297041a810faeea))
* Hot reload for plugins ([cdacaba](https://github.com/SteamClientHomebrew/Millennium/commit/cdacaba73197fd8a985ff96aaa19a8b122f5c652))
* Show theme version in "About Theme" [#87](https://github.com/SteamClientHomebrew/Millennium/issues/87) ([f99046e](https://github.com/SteamClientHomebrew/Millennium/commit/f99046e053e6a4503564b74b2e71e93c9185bd0f))
* Stage fully hot reloadable plugins ([79d4a27](https://github.com/SteamClientHomebrew/Millennium/commit/79d4a2744fb89a2b5836f013223fc2c439f82453))


### Performance Improvements

* Improve shutdown speed on Linux ([b0a026f](https://github.com/SteamClientHomebrew/Millennium/commit/b0a026fd388cb8a706a8971312583e80c50ec072))
* Startup performance improvements ([6a138d3](https://github.com/SteamClientHomebrew/Millennium/commit/6a138d39b44e37e16a81c8b8a0be89591885e8aa))

## [2.9.5](https://github.com/SteamClientHomebrew/Millennium/compare/v2.9.4...v2.9.5) (2024-08-09)


### Bug Fixes

* Fix linux startup issues [#75](https://github.com/SteamClientHomebrew/Millennium/issues/75) ([dad87ba](https://github.com/SteamClientHomebrew/Millennium/commit/dad87ba8ba76f4df4ff033f14f68d2c53651a85f))
* Fix startup bugs on Windows [#76](https://github.com/SteamClientHomebrew/Millennium/issues/76) ([b86c537](https://github.com/SteamClientHomebrew/Millennium/commit/b86c537b42ae5e11bf9793b2d7ab696e9fedcd96))

## [2.9.5](https://github.com/SteamClientHomebrew/Millennium/compare/v2.9.4...v2.9.5) (2024-08-09)


### Bug Fixes

* Fix linux startup issues [#75](https://github.com/SteamClientHomebrew/Millennium/issues/75) ([dad87ba](https://github.com/SteamClientHomebrew/Millennium/commit/dad87ba8ba76f4df4ff033f14f68d2c53651a85f))

## [2.9.4](https://github.com/SteamClientHomebrew/Millennium/compare/v2.9.3...v2.9.4) (2024-08-08)


### Bug Fixes

* (Linux) Permission & bug fixes ([56af75f](https://github.com/SteamClientHomebrew/Millennium/commit/56af75f8cee7bfd33d78badadfb3aa63cc5605ea))

## [2.9.3](https://github.com/SteamClientHomebrew/Millennium/compare/v2.9.2...v2.9.3) (2024-08-08)


### Bug Fixes

* Fix config paths on linux ([07576b9](https://github.com/SteamClientHomebrew/Millennium/commit/07576b9ea51af006eecb050039a16ccedbf6240b))

## [2.9.2](https://github.com/SteamClientHomebrew/Millennium/compare/v2.9.1...v2.9.2) (2024-08-08)


### Bug Fixes

* (Linux) Fix python binary paths ([76b40ff](https://github.com/SteamClientHomebrew/Millennium/commit/76b40ffaaec77eccf99ce85a2e30cf9fe05d85b6))

## [2.9.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.9.0...v2.9.1) (2024-08-08)


### Bug Fixes

* Properly ship python libraries ([92ec03c](https://github.com/SteamClientHomebrew/Millennium/commit/92ec03c5843fb65222cf952142fe2890f9ccaa93))

## [2.9.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.9.0...v2.9.1) (2024-08-08)


### Bug Fixes

* Properly ship python libraries ([92ec03c](https://github.com/SteamClientHomebrew/Millennium/commit/92ec03c5843fb65222cf952142fe2890f9ccaa93))

# [2.9.0](https://github.com/SteamClientHomebrew/Millennium/compare/v2.8.0...v2.9.0) (2024-08-08)


### Bug Fixes

* Disable theme updater for compatibility until further notice ([6861a45](https://github.com/SteamClientHomebrew/Millennium/commit/6861a456bf868113af201f817646b075ac1c083b))
* Fix watchdog threading errors ([cd0531b](https://github.com/SteamClientHomebrew/Millennium/commit/cd0531b44826ccb781f9286d4cb6734a5cba7844))
* Properly segment install path and Steam path ([41f8ca8](https://github.com/SteamClientHomebrew/Millennium/commit/41f8ca8e4b96a06a1c7bf0286bd677f492b8d766))
* Remove boxer on unix to prevent unneeded deps ([6b9953a](https://github.com/SteamClientHomebrew/Millennium/commit/6b9953a81e5eac96fb7d0a1cc26c17a2f0b7d488))
* Simpler less verbose logs ([0c3e90a](https://github.com/SteamClientHomebrew/Millennium/commit/0c3e90aeea94061f443cd37be69ff2fd43981900))


### Features

* Fix platform arch for 32 bit LD_PRELOAD-able binary ([515cb9e](https://github.com/SteamClientHomebrew/Millennium/commit/515cb9eb966c9d2adf9e5b3b2f51614b43bacabb))

# [2.8.0](https://github.com/SteamClientHomebrew/Millennium/compare/v2.7.2...v2.8.0) (2024-08-04)


### Bug Fixes

* **CI:** Fix dependency issue on linux ([7e91f54](https://github.com/SteamClientHomebrew/Millennium/commit/7e91f54d19c4b4735e5dd15fdf43ee13013865a5))


### Features

* Add install script for linux ([950ffa8](https://github.com/SteamClientHomebrew/Millennium/commit/950ffa8eccd131d35e101f4e195a1594ecb68d3a))

## [2.7.2](https://github.com/SteamClientHomebrew/Millennium/compare/v2.7.1...v2.7.2) (2024-08-03)


### Bug Fixes

* **CI:** Fix asset processor ([bdedd20](https://github.com/SteamClientHomebrew/Millennium/commit/bdedd20abea101f09afc512c7196466b71974356))
* Fix installer extracting ghost files ([96e238e](https://github.com/SteamClientHomebrew/Millennium/commit/96e238e86d2bc4ba35d550f40a54c8d3322f3c41))
* Properly whitelist the default skin in the CLI ([1d8faef](https://github.com/SteamClientHomebrew/Millennium/commit/1d8faef57bde9ca8b08578e08be0f3685f719c3c))

## [2.7.2](https://github.com/SteamClientHomebrew/Millennium/compare/v2.7.1...v2.7.2) (2024-08-03)


### Bug Fixes

* Fix installer extracting ghost files ([96e238e](https://github.com/SteamClientHomebrew/Millennium/commit/96e238e86d2bc4ba35d550f40a54c8d3322f3c41))
* Properly whitelist the default skin in the CLI ([1d8faef](https://github.com/SteamClientHomebrew/Millennium/commit/1d8faef57bde9ca8b08578e08be0f3685f719c3c))

## [2.7.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.7.0...v2.7.1) (2024-08-03)


### Bug Fixes

* Fix uninstaller core ([cd5c5e3](https://github.com/SteamClientHomebrew/Millennium/commit/cd5c5e3aff4efc95516442b609d3fc4cc99fbf22))
* Only add CLI to PATH if its not already there ([9d794ce](https://github.com/SteamClientHomebrew/Millennium/commit/9d794ce1e0838cbfb67f705b9ae6f302e64bd426))

## [2.7.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.7.0...v2.7.1) (2024-08-03)


### Bug Fixes

* Fix uninstaller core ([cd5c5e3](https://github.com/SteamClientHomebrew/Millennium/commit/cd5c5e3aff4efc95516442b609d3fc4cc99fbf22))
* Only add CLI to PATH if its not already there ([9d794ce](https://github.com/SteamClientHomebrew/Millennium/commit/9d794ce1e0838cbfb67f705b9ae6f302e64bd426))

## [2.7.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.7.0...v2.7.1) (2024-08-03)


### Bug Fixes

* Fix uninstaller core ([cd5c5e3](https://github.com/SteamClientHomebrew/Millennium/commit/cd5c5e3aff4efc95516442b609d3fc4cc99fbf22))
* Only add CLI to PATH if its not already there ([9d794ce](https://github.com/SteamClientHomebrew/Millennium/commit/9d794ce1e0838cbfb67f705b9ae6f302e64bd426))

## [2.7.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.7.0...v2.7.1) (2024-08-03)


### Bug Fixes

* Fix uninstaller core ([cd5c5e3](https://github.com/SteamClientHomebrew/Millennium/commit/cd5c5e3aff4efc95516442b609d3fc4cc99fbf22))
* Only add CLI to PATH if its not already there ([9d794ce](https://github.com/SteamClientHomebrew/Millennium/commit/9d794ce1e0838cbfb67f705b9ae6f302e64bd426))

# [2.7.0](https://github.com/SteamClientHomebrew/Millennium/compare/v2.6.1...v2.7.0) (2024-08-02)


### Features

* Add Millennium CLI to PATH ([05c5fa5](https://github.com/SteamClientHomebrew/Millennium/commit/05c5fa5e9746ade1b8cce9e6cbd15dbbffaceb60))

## [2.6.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.6.0...v2.6.1) (2024-08-02)


### Bug Fixes

* Fix CI asset packer ([47cf6c6](https://github.com/SteamClientHomebrew/Millennium/commit/47cf6c66409ae94b4c00f1a29f4889c564378c71))

# [2.6.0](https://github.com/SteamClientHomebrew/Millennium/compare/v2.5.1...v2.6.0) (2024-08-02)


### Features

* Remove LibGit2 and rely on CI assets ([5db0ebd](https://github.com/SteamClientHomebrew/Millennium/commit/5db0ebd6f571007b0fa3ea66c958a67dd93e64dd))

## [2.5.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.5.0...v2.5.1) (2024-08-02)


### Bug Fixes

* Fix Semantic Release docs ([1f1a36c](https://github.com/SteamClientHomebrew/Millennium/commit/1f1a36ce0ab10d967269055108bcded0f0a9bb7f))
* Install @semantic-release/changelog ([61d6356](https://github.com/SteamClientHomebrew/Millennium/commit/61d6356c29ea9fd279c069b5da86072eb4df1ec1))
* Install @semantic-release/git ([9e483e8](https://github.com/SteamClientHomebrew/Millennium/commit/9e483e8adb4193b6db34cd9b859f46c0bc4b86d4))

# [2.5.0](https://github.com/SteamClientHomebrew/Millennium/compare/v2.4.0...v2.5.0) (2024-08-02)


### Bug Fixes

* Add time to logger module ([80da7fb](https://github.com/SteamClientHomebrew/Millennium/commit/80da7fba4cf03b44bef70994ded5141fce659d9c))
* Fix "object not found" error from package manager. ([bb01e9c](https://github.com/SteamClientHomebrew/Millennium/commit/bb01e9cc201e5af74170033ac935586d0054d9ec))
* Fix plugin shutdowns to an extent ([738919c](https://github.com/SteamClientHomebrew/Millennium/commit/738919c789dab9b99df186febb910311fc264e68))
* Fix SharedJSContext being missed on certain edge cases ([364e1c0](https://github.com/SteamClientHomebrew/Millennium/commit/364e1c087f3e1f17e842c283f1ea2bda349ec6b6))
* Fix SharedJSContext not connecting when debugging Steam. ([1095977](https://github.com/SteamClientHomebrew/Millennium/commit/10959772484d8f255a12337c65fd54ccf75f5123))
* Fix Steam freezing after PC sleep ([8c3dcbd](https://github.com/SteamClientHomebrew/Millennium/commit/8c3dcbd6c7d474a59fc299a975eefccd9f32f53b))
* Revert shallow clone opts until further notice ([63da377](https://github.com/SteamClientHomebrew/Millennium/commit/63da3777ded625f110e3da8e8755c2c37f5eea2f))
* Staging plugin hot reload ([7d1972a](https://github.com/SteamClientHomebrew/Millennium/commit/7d1972ab2ccdce3f348360b64c2af8bfb7b56032))
* Suppress connection errors when steam isn't loaded (Linux) ([34b5e91](https://github.com/SteamClientHomebrew/Millennium/commit/34b5e91d2ffcdeec9d6762759e56602f645e8a7c))
* Use Ninja on unix for faster build ([70d4a5d](https://github.com/SteamClientHomebrew/Millennium/commit/70d4a5df2d787ad1e0e5473781d576e3536d382c))


### Features

* Add "useBackend" capability for plugin ([86c1943](https://github.com/SteamClientHomebrew/Millennium/commit/86c1943a9ba34e306dc6dfac3176a9ea22588690))
* Staging CLI support ([f5cda3d](https://github.com/SteamClientHomebrew/Millennium/commit/f5cda3dde657fb8cc1ebe535ff83d27589cc5b80))
* switch socket pipes to 1 wire ([53e6978](https://github.com/SteamClientHomebrew/Millennium/commit/53e6978abf6789bb4eb5c8a93f353710e5ca4e60))

# [2.4.0](https://github.com/SteamClientHomebrew/Millennium/compare/v2.3.1...v2.4.0) (2024-07-21)


### Bug Fixes

* Fix libcurl & confusing logs ([c997a8c](https://github.com/SteamClientHomebrew/Millennium/commit/c997a8c549ab3f7c8cf9097e5137ee00eb8d664e))
* Linux compatibility fixes. ([dd4c227](https://github.com/SteamClientHomebrew/Millennium/commit/dd4c227cdeee58af7b415307743fffada37511d0))
* Properly log terminal colors in the installer ([892a7c8](https://github.com/SteamClientHomebrew/Millennium/commit/892a7c81c82df827c139352938c3a17f5750ec4e))
* Remove confusing log ([cf19708](https://github.com/SteamClientHomebrew/Millennium/commit/cf197085e648b4244997ab60824c662d71ad9487))
* Remove unused code ([0606641](https://github.com/SteamClientHomebrew/Millennium/commit/0606641248428d6a85dcb20838cf497eff7b9755))


### Features

* Improved Installer ([134cce5](https://github.com/SteamClientHomebrew/Millennium/commit/134cce5fc01cfb86250e8ee5bc22342443dbe6b8))

## [2.3.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.3.0...v2.3.1) (2024-07-18)

### Features

* Update to libgit2@1.8.0 for git_clone_options #64 ([6feced6](https://github.com/SteamClientHomebrew/Millennium/commit/6feced638ce16a4ceccf9cc5ac478355b54ee480))
* Drastically reduce cloned repo size by @AHOHNMYC in https://github.com/SteamClientHomebrew/Millennium/pull/64

### Bug Fixes

* de-increment version ([de72207](https://github.com/SteamClientHomebrew/Millennium/commit/de72207047dd3a02cbdb14ca4a4262aaf2ebe682))
* Revert [#66](https://github.com/SteamClientHomebrew/Millennium/issues/66) ([07bb1d6](https://github.com/SteamClientHomebrew/Millennium/commit/07bb1d6318589aa3882ead1456dccaa0b3c9ca26))
* Fix version number ([0581521](https://github.com/SteamClientHomebrew/Millennium/commit/05815210ffbf5d9f60c9d6108113ecbef3ca715c))
* **installer:** More verbose prompts ([4e9af5b](https://github.com/SteamClientHomebrew/Millennium/commit/4e9af5b5653559404b1726b20fed75bb3bfcac0e))
* revert vcpkg baseline ([a8fe40d](https://github.com/SteamClientHomebrew/Millennium/commit/a8fe40dea4e89c9dbe39a54d6162d18538cc5063))
* **scripts:** Bug fixes for Installers ([51bc183](https://github.com/SteamClientHomebrew/Millennium/commit/51bc183b05b3622750978eb17bd7498f6ad3e553))
* **uninstaller:** Check for corrupt installation ([f65d5eb](https://github.com/SteamClientHomebrew/Millennium/commit/f65d5eb51dfefb7e933f4e9f4c94a62f7c5a029d))

### Reverts

* Revert "Merge pull request [#66](https://github.com/SteamClientHomebrew/Millennium/issues/66) from AHOHNMYC/update_libgit2" ([f4fa174](https://github.com/SteamClientHomebrew/Millennium/commit/f4fa17441c54ad23f7d0c61c112bd401178d3605))

## [2.2.2](https://github.com/SteamClientHomebrew/Millennium/compare/v2.2.1...v2.2.2) (2024-07-16)


### Bug Fixes

* Optimize semantic release ([685cce3](https://github.com/SteamClientHomebrew/Millennium/commit/685cce311de6437e2e9db715172a6a1b892a054a))

## [2.2.1](https://github.com/SteamClientHomebrew/Millennium/compare/v2.2.0...v2.2.1) (2024-07-16)


### Bug Fixes

* Fix semantic release version stubs ([7b436d7](https://github.com/SteamClientHomebrew/Millennium/commit/7b436d783c35c6637bfd045f5989822497867f96))
* use powershell syntax 🤦 ([eb1b75b](https://github.com/SteamClientHomebrew/Millennium/commit/eb1b75b9ac5f9d0009625898ba8b8c6a930ad5c9))
