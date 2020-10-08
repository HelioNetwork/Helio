Helio Coin
=============

Setup
---------------------
[Helio Coin](http://helio.org/wallet) is the original Helio_Coin client and it builds the backbone of the network. However, it downloads and stores the entire history of Helio_Coin transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Helio Coin on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/helio-qt` (GUI) or
- `bin/heliod` (headless)

### Windows

Unpack the files into a directory, and then run helio-qt.exe.

### macOS

Drag Helio_Coin-Qt to your applications folder, and then run Helio_Coin-Qt.

### Need Help?

* See the documentation at the [Helio_Coin Wiki](https://github.com/Helio_Coin-Project/Helio_Coin/wiki)
for help and more information.
* Ask for help on [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or on the [Helio_Coin Forum](http://forum.helio.org/).
* Join our Discord server [Discord Server](https://discord.helio.org)

Building
---------------------
The following are developer notes on how to build Helio Coin on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Helio_Coin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://www.fuzzbawls.pw/helio/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or the [Helio_Coin](http://forum.helio.org/) forum.
* Join the [Helio_Coin Discord](https://discord.helio.org).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
